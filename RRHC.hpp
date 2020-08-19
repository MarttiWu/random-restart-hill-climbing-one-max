//
//  RRHC.hpp
//  search
//
//  Created by WU,MENG-TING on 2020/7/1.
//  Copyright © 2020 WU,MENG-TING. All rights reserved.
//

#ifndef RRHC_hpp
#define RRHC_hpp

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
#define STEP 0
using namespace std;

class RRHC{
public:
    RRHC();
    RRHC(int bits,int iter);
    void run(); //restrict only step left or right
    void restart_1bit();
    void init_point();
    int test_right();
    int test_left();
    void go_right();
    void go_left();
    int FitnessFunction(vector<int> str);
    vector<int> get_record_bitstr(int it){return record_bitstr[it];}
    int get_record_value(int it){return record_value[it];}
private:
    int bits;
    int iter;
    vector<int> bitstr;
    int value;
    vector<int> best_bitstr;
    int best_value;
    vector<vector<int> > record_bitstr;
    vector<int> record_value;
};

#endif /* RRHC_hpp */
