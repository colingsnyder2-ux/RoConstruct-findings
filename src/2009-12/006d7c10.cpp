// roc 2009-12 006d7c10  unit: RBX::Stats::Item  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d7c10
//
// 006d7c10  8b442404             mov eax, dword ptr [esp + 4]
// 006d7c14  d900                 fld dword ptr [eax]
// 006d7c16  83ec08               sub esp, 8
// 006d7c19  dd1424               fst qword ptr [esp]
// 006d7c1c  68cc689a00           push 0x9a68cc
// 006d7c21  83ec08               sub esp, 8
// 006d7c24  dd1c24               fstp qword ptr [esp]
// 006d7c27  51                   push ecx
// 006d7c28  e833ffffff           call 0x6d7b60
// 006d7c2d  83c418               add esp, 0x18
// 006d7c30  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QAEXPAM@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" void G1_func_0065bbd0(void *, double, const char *, double);

struct S
{
    void f(float *);
};

void S::f(float *p)
{
    double d = *p;
    G1_func_0065bbd0(this, d, "%.3g", d);
}