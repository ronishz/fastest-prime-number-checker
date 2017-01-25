import os
num=input("Enter a number [0,10^37]\n")
a="factor "+str(num)+"| grep "+str(num)+"| cut -d : -f 2 | cut -d ' ' -f 2"
a2=int(os.popen(a).read())
if(a2==num):
	print "Number is prime"
else:
	print "Number is not prime"
