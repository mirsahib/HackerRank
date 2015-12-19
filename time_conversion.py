a=raw_input()
hour = int(a[0:2]) ##converting string hour into int
min_sec = a[3:8] ##slicing input and extracting only min ans sec
am_pm = a[8:10] ##slicing input and extracting only am and pm formate

if am_pm=="PM" and hour!=12:
    hour=str(hour+12)
elif am_pm =="AM" and hour==12:
    hour = "00"
elif am_pm=="AM" and hour!=12:
    hour = "0"+str(hour)
else:
    hour=str(hour)

print hour+":"+min_sec ## everything is output as string

    
