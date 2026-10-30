// roc 2010-06 00649b00  unit: RBX::Stats::Item  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00649b00
//
// 00649b00  8b442404             mov eax, dword ptr [esp + 4]
// 00649b04  d900                 fld dword ptr [eax]
// 00649b06  83ec08               sub esp, 8
// 00649b09  dd1424               fst qword ptr [esp]
// 00649b0c  686c76a000           push 0xa0766c
// 00649b11  83ec08               sub esp, 8
// 00649b14  dd1c24               fstp qword ptr [esp]
// 00649b17  51                   push ecx
// 00649b18  e833ffffff           call 0x649a50
// 00649b1d  83c418               add esp, 0x18
// 00649b20  c20400               ret 4
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