// from server: 100% by colin
// roc 2007-08 005b6f90  unit: RBX::W4SurfaceType::$0A::?$SurfaceGetSet  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b6f90
//
// 005b6f90  8b442404             mov eax, dword ptr [esp + 4]
// 005b6f94  85c0                 test eax, eax
// 005b6f96  56                   push esi
// 005b6f97  8bf1                 mov esi, ecx
// 005b6f99  7414                 je 0x5b6faf
// 005b6f9b  8d48fc               lea ecx, [eax - 4]
// 005b6f9e  e8edc8fbff           call 0x573890
// 005b6fa3  8d4818               lea ecx, [eax + 0x18]
// 005b6fa6  8b4604               mov eax, dword ptr [esi + 4]
// 005b6fa9  ffd0                 call eax
// 005b6fab  5e                   pop esi
// 005b6fac  c20400               ret 4
// 005b6faf  33c9                 xor ecx, ecx
// 005b6fb1  e8dac8fbff           call 0x573890
// 005b6fb6  8d4818               lea ecx, [eax + 0x18]
// 005b6fb9  8b4604               mov eax, dword ptr [esi + 4]
// 005b6fbc  ffd0                 call eax
// 005b6fbe  5e                   pop esi
// 005b6fbf  c20400               ret 4

struct S {
    int field0;
    void (__thiscall *field4)(int);
    void f(int);
};

extern "C" int __fastcall sub_573890(int);

void S::f(int a)
{
    int v;
    if (a != 0) {
        v = sub_573890(a - 4);
    } else {
        v = sub_573890(0);
    }
    field4(v + 0x18);
}
