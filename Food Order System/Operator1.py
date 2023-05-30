import sys

c=sys.stdout.shell

def login():
    c.write("Please Enter Opearator ID: ","STRING")
    ID=input()
    c.write ("Please Enter Password: ", "STRING")
    pwd=input()
    if ID=="ABCD" and pwd=="1234":
        menu()
    else:
        return

def menu():
    c.write("\n"+"="*80,"STRING")
    c.write("\n 1. Maintain Items","COMMENT")
    c.write("\n 2. List Of Customers","COMMENT")
    c.write("\n 3. List of Orders","COMMENT")
    c.write("\n 4. List Of Items","COMMENT")
    c.write("\n 5. Update Order Statuses","COMMENT")
    c.write("\n 6. Reports","COMMENT")
    c.write("\n 7. Exit","COMMENT")
    c.write("\n"+"="*80,"STRING")
    c.write("\n Select Any Option: ","COMMENT")
    option=int(input())
    if option==1:maintain_items()
    elif option==2:list_customers()
    elif option==3:list_orders()
    elif option==4:list_items()
    elif option==5:update_order()
    elif option==6:reports()
    elif option==7:return()
    menu()

def maintain_items():
    c.write("\n"+"="*80,"STRING")
    c.write("\n 1. Add Items","COMMENT")
    c.write("\n 2. Delete Items","COMMENT")
    c.write("\n 3. Edit Items","COMMENT")
    c.write("\n 4. Exit","COMMENT")
    c.write("\n"+"="*80,"STRING")
    c.write("\n Select Any Option: ","COMMENT")
    option=int(input())
    if option==1:add_item()
    elif option==2:delete_item()
    elif option==3:edit_item()
    elif option==4:return
    maintain_items()

def add_items():
    c.write("\n"+"="*80,"STRING")
    c.write("\n Item Title","STRING")
    title=input()
    c.write("\n Item Type","STRING")
    itype=input()
    c.write("\n Item Price","STRING")
    price=input()
    c.write("Item SAved Successfully","STRING)

def delete_item():
    c.write("\n"+"="*80,"STRING")
    c.write("\n Item Number","STRING")
    
    
    
    
    
