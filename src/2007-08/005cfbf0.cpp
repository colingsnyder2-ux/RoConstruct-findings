// from server: 71% by colin
// roc 2007-08 005cfbf0  unit: RBX::LocalBackpackItem  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cfbf0
//
// 005cfbf0  83ec10               sub esp, 0x10
// 005cfbf3  d90568647900         fld dword ptr [0x796468]
// 005cfbf9  8d0424               lea eax, [esp]
// 005cfbfc  50                   push eax
// 005cfbfd  d9542404             fst dword ptr [esp + 4]
// 005cfc01  8d4c240c             lea ecx, [esp + 0xc]
// 005cfc05  d95c2408             fstp dword ptr [esp + 8]
// 005cfc09  51                   push ecx
// 005cfc0a  e8815df8ff           call 0x555990
// 005cfc0f  d900                 fld dword ptr [eax]
// 005cfc11  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005cfc15  d910                 fst dword ptr [eax]
// 005cfc17  d95804               fstp dword ptr [eax + 4]
// 005cfc1a  83c418               add esp, 0x18
// 005cfc1d  c20400               ret 4
// 005cfc20  c70168a67b00         mov dword ptr [ecx], 0x7ba668
// 005cfc26  c3                   ret 

struct S {
    void f(int);
};

extern float G;

extern "C" void __cdecl sub_555990(float*, float*);

void S::f(int a)
{
    float v = G;
    float out[2];
    sub_555990(out, &v);
    float* p = (float*)a;
    p[0] = out[0];
    p[1] = out[0];
}
