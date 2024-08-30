package cafetuto;


import java.sql.DriverManager;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.Statement;
import java.sql.ResultSet;
import java.sql.SQLException;
import javax.swing.JOptionPane;
import javax.swing.table.DefaultTableModel;
import net.proteanit.sql.DbUtils;

        
public class Transaction extends javax.swing.JFrame {
 
    private int BNum;
    private DefaultTableModel billTableModel;   
    
    public Transaction(DefaultTableModel billTableModel, int BNum) throws SQLException {
        initComponents();
        this.BNum = BNum;
         this.billTableModel = billTableModel;
         try {
            Con = DriverManager.getConnection("jdbc:mysql://localhost:3306/cafedb", "root", "");
            St = Con.createStatement();
            ShowBills();
        } catch (SQLException e) {
            JOptionPane.showMessageDialog(this, e.getMessage());
        };
    }

   Connection Con = null;
   Statement St = null;
   ResultSet Rs = null;

    
      private void ShowBills() {
         //  = null;
        try {
        //PreparedStatement itemPst = Con.prepareStatement("insert into transactiondetails (BNum, PNum, PName, Price, Quantity, TotalPrice) values (?, ?, ?, ?, ?, ?)");

        PreparedStatement itemPst = Con.prepareStatement("insert into transactiondetails (BNum, PNum, PName, Quantity, Price, TotalPrice) values (?, ?, ?, ?, ?, ?)");

          //  itemPst = Con.prepareStatement(insertQuery);
            
        for (int i = 0; i < billTableModel.getRowCount(); i++) {
            itemPst.setInt(1, BNum); 
            itemPst.executeUpdate();
            
            
            
        }
        
        // itemPst.executeBatch(); // Execute batch insert
       
         
         
         
         try (ResultSet resultSet = St.executeQuery("Select * from transactiondetails")) {
                BillTable.setModel(DbUtils.resultSetToTableModel(resultSet));
            }
        } catch (SQLException e) {
            JOptionPane.showMessageDialog(this, e.getMessage());
        }

}
    
      
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel3 = new javax.swing.JPanel();
        jPanel1 = new javax.swing.JPanel();
        jLabel4 = new javax.swing.JLabel();
        jScrollPane2 = new javax.swing.JScrollPane();
        BillTable = new javax.swing.JTable();
        SellingTab = new javax.swing.JLabel();
        ItemTab = new javax.swing.JLabel();
        ViewBillTab = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jPanel3.setBackground(new java.awt.Color(255, 255, 255));

        jPanel1.setBackground(new java.awt.Color(0, 51, 204));

        jLabel4.setFont(new java.awt.Font("Tahoma", 1, 18)); // NOI18N
        jLabel4.setForeground(new java.awt.Color(255, 255, 255));
        jLabel4.setText("Transaction Details");

        BillTable.setFont(new java.awt.Font("Yu Gothic UI", 1, 14)); // NOI18N
        BillTable.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {
                "B_ID", "P_ID", "Name", "Price", "Quantity", "Total"
            }
        ));
        BillTable.setRowHeight(29);
        BillTable.setRowMargin(1);
        jScrollPane2.setViewportView(BillTable);

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGap(522, 522, 522)
                .addComponent(jLabel4, javax.swing.GroupLayout.PREFERRED_SIZE, 187, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(537, Short.MAX_VALUE))
            .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                .addGroup(jPanel1Layout.createSequentialGroup()
                    .addGap(34, 34, 34)
                    .addComponent(jScrollPane2, javax.swing.GroupLayout.PREFERRED_SIZE, 1194, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addContainerGap(18, Short.MAX_VALUE)))
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jLabel4)
                .addContainerGap(698, Short.MAX_VALUE))
            .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup()
                    .addContainerGap(60, Short.MAX_VALUE)
                    .addComponent(jScrollPane2, javax.swing.GroupLayout.PREFERRED_SIZE, 586, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addGap(80, 80, 80)))
        );

        SellingTab.setFont(new java.awt.Font("Tahoma", 1, 18)); // NOI18N
        SellingTab.setForeground(new java.awt.Color(0, 51, 204));
        SellingTab.setText("Selling");
        SellingTab.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                SellingTabMouseClicked(evt);
            }
        });

        ItemTab.setFont(new java.awt.Font("Tahoma", 1, 18)); // NOI18N
        ItemTab.setForeground(new java.awt.Color(0, 51, 204));
        ItemTab.setText("Items");
        ItemTab.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                ItemTabMouseClicked(evt);
            }
        });

        ViewBillTab.setFont(new java.awt.Font("Tahoma", 1, 18)); // NOI18N
        ViewBillTab.setForeground(new java.awt.Color(0, 51, 153));
        ViewBillTab.setText("View Bills");
        ViewBillTab.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                ViewBillTabMouseClicked(evt);
            }
        });

        javax.swing.GroupLayout jPanel3Layout = new javax.swing.GroupLayout(jPanel3);
        jPanel3.setLayout(jPanel3Layout);
        jPanel3Layout.setHorizontalGroup(
            jPanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel3Layout.createSequentialGroup()
                .addGap(18, 18, 18)
                .addGroup(jPanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(ViewBillTab, javax.swing.GroupLayout.PREFERRED_SIZE, 90, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(SellingTab)
                    .addComponent(ItemTab, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addContainerGap())
        );
        jPanel3Layout.setVerticalGroup(
            jPanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel3Layout.createSequentialGroup()
                .addGroup(jPanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel3Layout.createSequentialGroup()
                        .addGap(25, 25, 25)
                        .addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(jPanel3Layout.createSequentialGroup()
                        .addGap(245, 245, 245)
                        .addComponent(ItemTab)
                        .addGap(38, 38, 38)
                        .addComponent(SellingTab)
                        .addGap(39, 39, 39)
                        .addComponent(ViewBillTab)))
                .addContainerGap(17, Short.MAX_VALUE))
        );

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel3, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel3, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );

        pack();
        setLocationRelativeTo(null);
    }// </editor-fold>//GEN-END:initComponents

    private void ViewBillTabMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ViewBillTabMouseClicked

        ViewSells viewsellsFrame = new ViewSells();
        viewsellsFrame.setVisible(true);
    }//GEN-LAST:event_ViewBillTabMouseClicked

    private void ItemTabMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ItemTabMouseClicked

        Items itemFrame = new Items();
        itemFrame.setVisible(true);
    }//GEN-LAST:event_ItemTabMouseClicked

    private void SellingTabMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_SellingTabMouseClicked

        Selling sellingFrame = new Selling();
        sellingFrame.setVisible(true);
    }//GEN-LAST:event_SellingTabMouseClicked

    
    
   
    public static void main(String args[]) {
   
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
            DefaultTableModel model = new DefaultTableModel();
            int BNum = 0; 

            try {
                new Transaction(model, BNum).setVisible(true);
            } catch (SQLException e) {
                e.printStackTrace(); // Handle SQL exception appropriately
            }
            }
        });

    }
     

   
    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JTable BillTable;
    private javax.swing.JLabel ItemTab;
    private javax.swing.JLabel SellingTab;
    private javax.swing.JLabel ViewBillTab;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JPanel jPanel3;
    private javax.swing.JScrollPane jScrollPane2;
    // End of variables declaration//GEN-END:variables
}
