// from server: 100% by atomic.potato
// roc 2011-06 004f9d10  unit: RBX::Network::Replicator::ChangePropertyItem  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f9d10
//
// 004f9d10  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f9d14  e887f2ffff           call 0x4f8fa0
// 004f9d19  8b442408             mov eax, dword ptr [esp + 8]
// 004f9d1d  83ec08               sub esp, 8
// 004f9d20  dd1c24               fstp qword ptr [esp]
// 004f9d23  50                   push eax
// 004f9d24  e8b778ffff           call 0x4f15e0
// 004f9d29  83c40c               add esp, 0xc
// 004f9d2c  c3                   ret 

struct S
{
    double method();
};

extern "C" void __cdecl sub_4f15e0(int n, double d);

void f(S *s, int n)
{
    double v = s->method();
    sub_4f15e0(n, v);
}
