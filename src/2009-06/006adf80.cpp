// from server: 92% by atomic.potato
extern "C" void __stdcall _invalid_parameter_noinfo();

struct S {
    unsigned int field0;
    unsigned int field4;
    unsigned int field8;
    unsigned int fieldC;
    unsigned int field10;
    unsigned int field14;
    unsigned int field18;
    void method(double value, int flag, int unused);
};

void S::method(double value, int flag, int unused) {
    unsigned int size = (field18 - field14) >> 3;
    unsigned int index = field4;
    if (index >= size) {
        _invalid_parameter_noinfo();
    }
    double* data = (double*)field14;
    data[index] = value;
    if (flag != 0) {
        unsigned int next = field4 + 1;
        unsigned int rem = next % field0;
        field4 = rem;
    }
}
