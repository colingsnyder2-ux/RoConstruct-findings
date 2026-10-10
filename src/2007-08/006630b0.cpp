// from server: 25% by colin
struct CXTPReportRecordItemVariant {
    char pad[0x7c];
    int field_7c;
    int method_654ba0(int);
    int method_655910(int, int*, int);
    int method_7385ec(int*);
    int method_738436();
    int method_738424();
    int method_006630b0(int*);
};

extern "C" {
    void __stdcall VariantClear(void*);
}

int CXTPReportRecordItemVariant::method_006630b0(int* param) {
    int local_2c;
    int local_24;
    int local_1c;
    int local_18;
    int local_14;
    int local_10;
    int local_c;
    int local_8;
    int local_4;
    int result;
    int* p;

    result = this->method_654ba0(param[3]);
    if (*(int*)(result + 0x24) != 0) {
        this->method_7385ec(&local_2c);
        this->method_738436();
        this->method_655910(3, &local_2c, 1);
        this->method_738424();
        p = &local_2c;
        VariantClear(p);
        return local_24;
    }
    return 0;
}
