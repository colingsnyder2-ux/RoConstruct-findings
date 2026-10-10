// from server: 77% by tester
// roc 2007-08 0076f8a0  unit: seg_00760000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f8a0

extern "C" int __cdecl func_725520(int, int);
extern "C" int __cdecl func_4a5770();
extern "C" int __cdecl func_407410(int*);
extern "C" int __cdecl func_630d23(int);

struct T {
    int g();
};

extern "C" int __cdecl func_4339d0(T*);

struct S {
    int f();
};

int S::f() {
    func_725520(0x4a7140, 0x8be95c);
    int v = func_4a5770();
    int* p = &v;
    int r = func_407410(p);
    T* q = (T*)r;
    func_4339d0(q);
    *(int*)r = 0x892a9c;
    func_630d23(0x778b60);
    return r;
}
