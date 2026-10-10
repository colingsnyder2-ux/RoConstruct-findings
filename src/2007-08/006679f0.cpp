// from server: 69% by colin
extern "C" {
    void __cdecl _memset(void*, int, unsigned int);
    void __cdecl _memcpy(void*, const void*, unsigned int);
}

struct CRobloxTreeCtrl {
    char pad[0x18];
    int field_18;
    int sub_667770(int, void*);
    int sub_6679F0(int, void*);
};

int CRobloxTreeCtrl::sub_6679F0(int a2, void* a3) {
    char buf[0x3c];
    _memset(buf, 0, 0x3c);
    if (sub_667770(a2, buf) == 0)
        return 0;
    if (buf[0x1c] == 0)
        return 0;
    _memcpy(a3, buf, 0x3c);
    return 1;
}
