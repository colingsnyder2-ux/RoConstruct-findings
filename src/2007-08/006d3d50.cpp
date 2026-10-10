// from server: 34% by colin
struct CXTPReportColumnOrder {
    char pad0[0x20];
    void* field20;
    void* field24;
    char pad28[0x14];
    void* field3c;
    int field40;
    CXTPReportColumnOrder(void*);
};

extern "C" void __stdcall sub_73833a();
extern "C" void __stdcall sub_6d36c0();
extern "C" void* __stdcall sub_62fef6(unsigned int);
extern "C" void __stdcall sub_6d3a80(void*);

CXTPReportColumnOrder::CXTPReportColumnOrder(void* arg) {
    sub_73833a();
    *(void**)this = (void*)0x7d8344;
    sub_6d36c0();
    field3c = arg;
    void* p1 = sub_62fef6(0x38);
    if (p1) {
        sub_6d3a80(p1);
    } else {
        p1 = 0;
    }
    field20 = p1;
    void* p2 = sub_62fef6(0x38);
    if (p2) {
        sub_6d3a80(p2);
    } else {
        p2 = 0;
    }
    field24 = p2;
    field40 = 0;
}
