// from server: 59% by colin
struct CXTPControlTabWorkspace {
    int f(int, int, int);
};

extern "C" int __stdcall sub_6CA5F0(int, int, int);
extern "C" int __stdcall sub_6FF7C0(int, int, int, int);

int CXTPControlTabWorkspace::f(int a1, int a2, int a3) {
    if (*(int*)((char*)this + 0x1f4) == 0) {
        return sub_6CA5F0(a1, a2, a3);
    }
    if (a1 == 0) {
        int p = *(int*)((char*)this + 0x1f4);
        *(int*)(p + 0x5c) = 1;
        p = *(int*)((char*)this + 0x1f4);
        *(int*)(p + 0x58) = 1;
        int q = *(int*)((char*)this + 0xfc);
        return sub_6FF7C0(*(int*)(q + 0x20), a2, a3, 0);
    }
    return 0;
}
