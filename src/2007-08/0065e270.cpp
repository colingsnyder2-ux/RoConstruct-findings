// from server: 48% by colin
extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(long volatile*);

struct VCXTPReportRow;

struct CXTPInternalCollectionT {
    int unknown0;
    int unknown4;
    int unknown8;
    int unknownC;
};

struct Helper {
    void* vtbl;
    void* ptr;
};

extern "C" void __stdcall sub_6301e4(void*);
extern "C" void __stdcall sub_65b620(void*, int, Helper*);

struct VCXTPReportRow {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int method(int, Helper*);
};

int VCXTPReportRow::method(int arg0, Helper* arg1) {
    Helper local;
    local.vtbl = (void*)0x7c8564;
    local.ptr = (void*)arg0;
    if (arg1 != 0 && arg0 != 0) {
        InterlockedIncrement((long*)(arg0 + 4));
    }
    int saved = this->field8;
    local.ptr = 0;
    sub_65b620(this, saved, &local);
    if (arg0 != 0) {
        sub_6301e4((void*)arg0);
    }
    return saved;
}
