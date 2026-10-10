// from server: 4% by colin
struct CXTPImageManagerIcon {
    char pad[0x30];
    int sub_64b2c0(int);
    int set(int);
};

extern "C" {
    void* __stdcall LoadImageA(void*, const char*, unsigned int, int, int, unsigned int);
    void* __cdecl sub_648340(const char*);
    int __cdecl sub_6482a0(const char*);
    void __cdecl sub_6c9e70(void*);
    int __cdecl sub_6ca2e0(void*, const char*);
    int __cdecl sub_73843c(void*);
    void __cdecl sub_41f680(void*);
}

int CXTPImageManagerIcon::set(int value) {
    return value;
}
