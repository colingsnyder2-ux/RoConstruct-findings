// from server: 100% by atomic.potato
// roc 2011-06 0065bc80  unit: RBX::Stats::Item  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0065bc80
//
// 0065bc80  8b442404             mov eax, dword ptr [esp + 4]
// 0065bc84  d900                 fld dword ptr [eax]
// 0065bc86  83ec08               sub esp, 8
// 0065bc89  dd1424               fst qword ptr [esp]
// 0065bc8c  681023a900           push 0xa92310
// 0065bc91  83ec08               sub esp, 8
// 0065bc94  dd1c24               fstp qword ptr [esp]
// 0065bc97  51                   push ecx
// 0065bc98  e833ffffff           call 0x65bbd0
// 0065bc9d  83c418               add esp, 0x18
// 0065bca0  c20400               ret 4

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
