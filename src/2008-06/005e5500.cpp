// from server: 100% by colin
// roc 2008-06 005e5500  unit: RBX::JointsService  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e5500
//
// 005e5500  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e5504  e8175b0e00           call 0x6cb020
// 005e5509  85c0                 test eax, eax
// 005e550b  740d                 je 0x5e551a
// 005e550d  8d88c0feffff         lea ecx, [eax - 0x140]
// 005e5513  6a00                 push 0
// 005e5515  e8d653f7ff           call 0x55a8f0
// 005e551a  c20800               ret 8

struct A { char pad[0x140]; };
struct B { int x; };
struct Joint : A, B {
    void f(bool);
};

struct S_func_006cb020 {
    char pad0[32];
    int m_x;
    B* f();
};

void __stdcall func(void*, S_func_006cb020* p)
{
    B* b = p->f();
    if (b)
        static_cast<Joint*>(b)->f(false);
}
