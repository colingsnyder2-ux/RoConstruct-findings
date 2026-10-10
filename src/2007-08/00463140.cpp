// from server: 97% by colin
struct CSettingsPropGrid {
    void sub_43F7D0(int, void*);
    void sub_463140(int, void*);
};

extern "C" void* __stdcall sub_418690();
extern "C" char __stdcall sub_5707B0(void*);

void CSettingsPropGrid::sub_463140(int a, void* b) {
    void* v = sub_418690();
    void* p = *(void**)((char*)b + 0xc);
    if (sub_5707B0(p)) {
        sub_43F7D0(a, b);
    }
}
