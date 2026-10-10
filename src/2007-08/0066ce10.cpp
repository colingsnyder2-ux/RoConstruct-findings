// from server: 80% by colin
// roc 2007-08 0066ce10  unit: CXTPCommandBar  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066ce10

extern "C" long __stdcall InterlockedIncrement(long volatile*);

struct CXTPCommandBar {
    int f(int, int, int);
};

struct CObject {
    virtual int vf0();
    virtual int vf1();
    virtual int vf2();
    virtual int vf3();
    virtual int vf4();
    virtual int vf5();
    virtual int vf6();
    virtual int vf7();
    virtual int vf8();
    virtual int vf9();
    virtual int vf10();
    virtual int vf11();
    virtual int vf12();
    virtual int vf13();
    virtual int vf14();
    virtual int vf15();
    virtual int vf16();
    virtual int vf17();
    virtual int vf18();
    virtual int vf19();
    virtual int vf20();
    virtual int vf21();
    virtual int vf22();
};

extern "C" int __stdcall sub_643EA0(CObject*, CXTPCommandBar*);
extern "C" int __stdcall sub_64EA60();
extern "C" int __stdcall sub_6301F0(CXTPCommandBar*, int);
extern "C" int __stdcall sub_66B190(int, CObject*, int, int);

int CXTPCommandBar::f(int a2, int a3, int a4)
{
    CObject* pObj = (CObject*)a2;
    if (sub_643EA0(pObj, this) == 0) {
        int (__stdcall *pfn)(CObject*, CXTPCommandBar*) = *(int (__stdcall **)(CObject*, CXTPCommandBar*))((char*)*(void**)pObj + 0x58);
        pfn(pObj, this);
        InterlockedIncrement((long volatile*)((char*)this + 4));
        int v = sub_64EA60();
        int r = sub_6301F0(this, v);
        int* p = (int*)a3;
        if (r == 0) {
            unsigned int cur = *(unsigned int*)((char*)this + 0xd4);
            if (cur == 0 || cur >= 0x1000000) {
                *(unsigned int*)((char*)this + 0xd4) = *(unsigned int*)p;
                (*(unsigned int*)p)++;
            }
        }
        sub_66B190(*(int*)((char*)this + 0xf8), pObj, a3, a4);
    }
    return 0;
}
