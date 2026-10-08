// from server: 75% by colin
// roc 2007-08 0049af30  unit: seg_00490000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049af30

extern "C" void* __cdecl sub_486830(void*);

struct T {
    int m(void);
};

extern "C" int __fastcall sub_49aaa0(T*);

struct S {
    char f(void*);
};

char S::f(void* a) {
    T* p = (T*)sub_486830(a);
    int r;
    if (p) {
        r = sub_49aaa0(p);
    } else {
        r = 0;
    }
    return r != 0;
}
