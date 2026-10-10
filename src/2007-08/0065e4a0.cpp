// from server: 93% by colin
struct CXTPReportControl {
    char pad[0x54];
    void* field_54;
    int method_65e4a0(int);
};

extern "C" void* __stdcall sub_6d3460(void*);
extern "C" void* __stdcall sub_65ed00(void*);

int CXTPReportControl::method_65e4a0(int arg) {
    void* p = sub_6d3460(field_54);
    void* q = sub_65ed00(p);
    if (*(int*)((char*)q + 0x214) != 0) {
        if ((arg & 2) != 0) {
            return arg - 2;
        }
        return arg + 2;
    }
    return arg;
}
