import re

def phones(phone):
   patt = r'^\d{10}$'
   matches = re.match(patt,phone)
   if(matches):
        print("Valid Phone Number")
   else:
        print("Invalid Phone Number")

def emails(email):
    patt= r'^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]{2,}$'
    matches = re.match(patt,email)
    if(matches):
        print("Valid Email")
    else:
        print("Invalid Email")

def ips(ip):
    patt= r'^\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3}$'
    matches = re.match(patt,ip)
    if(matches):
        print("Valid IP")
    else:
        print("Invalid IP")



if __name__=="__main__":
   
    a = int(input("Select the option:\n 1.Email\n 2.Phone Number\n 3.IP Address\n 4.Exit\n"))
    match a:
        case 1: 
            email = input("Enter the email:")
            emails(email)
            
        case 2:
            phone = input("Enter the phone:")
            phones(phone)
        case 3:
            ip = input("Enter the ip:")
            ips(ip)
        case 4:
            exit(0)
        case default:
            print("Invalid Option")
        
    