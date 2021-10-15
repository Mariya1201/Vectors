#include"Header.h"

//bool is_equal(double x, double y) {
    //return fabs(x - y) < 0.00001;
//}

int autotest1() {
    CVector v1, v2;

    v1.add(1);
    v1.add(2);
   
    v2.add(7);
    v2.add(6);
    
    CVector sum = v1 + v2;

    if (sum[0] == 8 && sum[1] == 8) {
     return 0; 
    }

    return 1;
}

int autotest2() {
    CVector v1, v2;

    v1.add(-6);
    v1.add(3.7);
    v1.add(25.5);

    v2.add(7);
    v2.add(2.6);
    v2.add(0);

    CVector diff = v1 - v2;

    if (diff[0] == -13 && diff[1] == 1.1 && diff[2] == 25.5) {
        return 0;
    }
    return 1;
}

int autotest3() {
    CVector v1, v2;

    v1.add(0);
    v1.add(1);

    v2.add(7);
    v2.add(1);
   
    double multip = v1 * v2;

   if (multip==1) {
      return 0;
   }
    return 1;
}

int autotest() {
    if (autotest1() == 0 && autotest2() == 0 && autotest3() == 0) {
        printf("Autotests passed!\n\n");
        return 0;
    } 
    else {
        printf("Autotests is not passed!\n\n");
        return 1;
    }
}