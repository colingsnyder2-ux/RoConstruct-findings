// from server: 78% by colin
extern "C" void __cdecl func_00725520(int, int);
extern "C" int __cdecl func_00486c70();
extern "C" void __cdecl func_00407410(int*);
extern "C" void __cdecl func_004339d0();
extern "C" void __cdecl func_00630d23(int);

struct S {
    void f();
};

void S::f()
{
    func_00725520(0x8bdc90, 0x487900);
    int v = func_00486c70();
    func_00407410(&v);
    func_004339d0();
    *(int*)0x88e2f4 = 0x88e2f4;
    func_00630d23(0x778440);
}
