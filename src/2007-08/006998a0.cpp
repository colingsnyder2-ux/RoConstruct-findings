// from server: 50% by colin
struct CXTPPropertyGridItemConstraint {
    void *vtable;
    char pad[0x1c];
    int field20;
    int field24;
    int field28;
    int field2c;
    int field30;
};

struct CXTPPropertyGridItemConstraints {
    char pad[0x20];
    int field20;
    char pad2[0x14];
    int field38;

    CXTPPropertyGridItemConstraint *Add(int a, int b, int c);
};

extern "C" void *__cdecl operator_new(unsigned int);
extern "C" void *__stdcall sub_6981b0(void *);
extern "C" void __stdcall sub_77dd6c(int, int);
extern "C" void __stdcall sub_6d2910(int, int, int);

CXTPPropertyGridItemConstraint *CXTPPropertyGridItemConstraints::Add(int a, int b, int c)
{
    CXTPPropertyGridItemConstraint *item =
        (CXTPPropertyGridItemConstraint *)operator_new(0x34);
    if (item != 0)
        item = (CXTPPropertyGridItemConstraint *)sub_6981b0(item);
    else
        item = 0;

    sub_77dd6c((int)&item->field20, a);
    item->field24 = b;

    int old = *(int *)((char *)this + 0x28);
    sub_6d2910((int)this + 0x20, old, (int)item);
    item->field2c = old;
    item->field30 = *(int *)((char *)this + 0x38);
    item->field28 = c;

    if (*(int *)((char *)this + 0x38) != 0) {
        int *p = *(int **)((char *)this + 0x38);
        void (__stdcall *fn)(int) = *(void (__stdcall **)(int))(*p + 0xe0);
        fn((int)p);
    }

    return item;
}
