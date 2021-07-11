
output: account.cpp account.h admin.cpp admin.h captcha.h certificate.cpp certificate.h date.h dose1.cpp dose1.h dose2.cpp dose2.h loading.h main.cpp record.h reg.cpp reg.h slot.cpp slot.h time.h vaccine.cpp vaccine.h
		g++ -pthread -std=c++11 -o output main.cpp account.cpp dose1.cpp dose2.cpp reg.cpp slot.cpp vaccine.cpp admin.cpp certificate.cpp

clean: 
		rm output
