// from server: 87% by colin
struct CXTPRibbonBar {
    int field0;
    int field4;
    char pad[0x260 - 8];
    int field260;
    void method_6aacb0(int a, int b, int c);
};

extern "C" int __stdcall InterlockedIncrement(int*);
extern "C" int __fastcall sub_643ea0(void*, int);
extern "C" int __fastcall sub_66b190(void*, int, int, int);

void CXTPRibbonBar::method_6aacb0(int a, int b, int c) {
    int* p = (int*)a;
    int r = sub_643ea0(p, (int)this);
    if (r == 0) {
        int* vt = *(int**)p;
        int (__thiscall *fn)(void*, int) = (int (__thiscall *)(void*, int))vt[0x58/4];
        fn(p, (int)this);
        InterlockedIncrement((int*)((char*)this + 4));
        sub_66b190((void*)field260, b, (int)p, c);
    }
}
