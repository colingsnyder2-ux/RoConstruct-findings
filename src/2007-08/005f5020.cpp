// from server: 40% by colin
// roc 2007-08 005f5020  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f5020
//
// 005f5020  51                   push ecx
// 005f5021  56                   push esi
// 005f5022  83ec30               sub esp, 0x30
// 005f5025  8bf4                 mov esi, esp
// 005f5027  8d442440             lea eax, [esp + 0x40]
// 005f502b  89642434             mov dword ptr [esp + 0x34], esp
// 005f502f  50                   push eax
// 005f5030  8bce                 mov ecx, esi
// 005f5032  e89945f1ff           call 0x5095d0
// 005f5037  d9442464             fld dword ptr [esp + 0x64]
// 005f503b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005f503f  d95e24               fstp dword ptr [esi + 0x24]
// 005f5042  d9442468             fld dword ptr [esp + 0x68]
// 005f5046  d95e28               fstp dword ptr [esi + 0x28]
// 005f5049  d944246c             fld dword ptr [esp + 0x6c]
// 005f504d  d95e2c               fstp dword ptr [esi + 0x2c]
// 005f5050  e83be2ffff           call 0x5f3290
// 005f5055  5e                   pop esi
// 005f5056  59                   pop ecx
// 005f5057  c3                   ret 

struct S {
    void f(float a, float b, float c, int d, int e, int f2);
};

extern "C" void __stdcall sub_5095d0(void*, void*);
extern "C" void __stdcall sub_5f3290(void*);

void S::f(float a, float b, float c, int d, int e, int f2)
{
    char buf[0x30];
    sub_5095d0(buf, &d);
    *(float*)(buf + 0x24) = a;
    *(float*)(buf + 0x28) = b;
    *(float*)(buf + 0x2c) = c;
    sub_5f3290(buf);
}
