// from server: 96% by colin




extern "C" void __stdcall sub_5BCEB0(void*);
extern "C" void __stdcall sub_40DB00(void*, const char*);

struct VStockSound {
    char pad[0x168];
    int field_168;
    void sub_5BCEB0();
    void sub_40DB00(const char*);
    void func();
};

void VStockSound::sub_5BCEB0() {
    ::sub_5BCEB0(this);
}

void VStockSound::sub_40DB00(const char* s) {
    ::sub_40DB00(this, s);
}

void VStockSound::func() {
    sub_5BCEB0();
    int v = field_168 + 1;
    int a = 1;
    int* p;
    if (v < 1) {
        p = &a;
    } else {
        p = &v;
    }
    int r = *p;
    field_168 = r;
    sub_40DB00((const char*)0x977010);
}
