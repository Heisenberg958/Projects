import sys
#import dbquery as dq

c=sys.stdout.shell


def login():
    c.write("Please Enter Operator ID: ","STRING")
    ID=input()
    c.write("Please Enter Password: ","STRING")
    pwd=input()
    if ID=="1111" and pwd=="ABCD":
        menu()
    else:
        return

def menu():
    c.write("\n"+"="*80,"STRING")
    c.write("\n 1.Maintain Items","COMMENT")
    c.write("\n 2.List Of Customers","COMMENT")
    c.write("\n 3.List Of Orders","COMMENT")
    c.write("\n 4.List Of Items","COMMENT")
    c.write("\n 5.Update Order Statuses","COMMENT")
    c.write("\n 6.Reports","COMMENT")
    c.write("\n 7.Exit","COMMENT")
    c.write("\n"+"="*80,"STRING")
    c.write("\n Select Any Option: ","COMMENT")
    option=int(input())
    if option==1:maintain_items()
    elif option==2:list_customer()
    elif option==3:list_orders()
    elif option==4:list_items()
    elif option==5:update_orders()
    elif option==6:reports()
    elif option==7:return
    menu()


def maintain_items():
    c.write("\n"+"="*80,"STRING")
    c.write("\n 1.Add Item","COMMENT")
    c.write("\n 2.Delete Item","COMMENT")
    c.write("\n 3.Edit Item","COMMENT")
    c.write("\n 4.Exit","COMMENT")
    c.write("\n"+"="*80,"STRING")
    c.write("\n Select Any Option: ","COMMENT")
    option=int(input())
    if option==1:add_item()
    elif option==2:delete_item()
    elif option==3:edit_item()
    elif option==4:return
    maintain_items()

def add_item():
    c.write("\n"+"="*80,"STRING")
    c.write("\n Item Title ","COMMENT")
    title=input()
    c.write("\n Item Type","COMMENT")
    itype=input()
    c.write("\n Item Price","COMMENT")
    price=int(input())
    dq.add_item((title,typ,itype,price))
    c.write("\n Item Saved Successfully","STRING")

def delete_item():
    c.write("\n"+"="*80,"STRING")
    c.write("\n Item Number ","COMMENT")
    no=input()
    if dq.delete_item(no):
        c.write("\n Item Deleted Sucessfully","KEYWORD")
    else:
        c.write("\n Item Not Available","KEYWORD")

def edit_item():
    
    c.write("\n"+"="*80,"STRING")
    c.write("\n Item Number ","COMMENT")
    no=input()
    if dq.get_item(no)==None:
        c.write("Item not Available","KEYWORD")
        return
    else:
        c.write("\n WHICH FIELD YOU WANT TO UPDATE: title \n type \n mrp\n","KEYWORD")
        field=input()
        c.write("\n Enter New Value: ","STRING")
        value=input()
        dq.edit_item(field,value,no)
        c.write("\n Item Updated Successfully","STRING")
        
        
    
    



