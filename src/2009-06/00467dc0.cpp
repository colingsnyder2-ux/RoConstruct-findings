// from server: 97% by why2
struct CSettingsPropGrid {
    void sub_43B480(int, void*);
    void* sub_40A4F0();

    void sub_467DC0(int a, void* b);
};

extern "C" bool __stdcall sub_5F8980(void*);

void CSettingsPropGrid::sub_467DC0(int a, void* b) {
    void* v = sub_40A4F0();
    void* p = *(void**)((char*)b + 0xc);
    if (sub_5F8980(p)) {
        sub_43B480(a, b);
    }
}
