// from server: 57% by colin
// roc 2007-08 005f5060  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f5060
//
// 005f5060  d9442408             fld dword ptr [esp + 8]
// 005f5064  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f5068  83ec0c               sub esp, 0xc
// 005f506b  8bc4                 mov eax, esp
// 005f506d  d918                 fstp dword ptr [eax]
// 005f506f  d9442418             fld dword ptr [esp + 0x18]
// 005f5073  d95804               fstp dword ptr [eax + 4]
// 005f5076  d944241c             fld dword ptr [esp + 0x1c]
// 005f507a  d95808               fstp dword ptr [eax + 8]
// 005f507d  e8fee2ffff           call 0x5f3380
// 005f5082  c3                   ret 

struct S {
    void f(float a, float b, float c);
};

extern "C" void __stdcall helper(float, float, float);

void S::f(float a, float b, float c)
{
    helper(a, b, c);
}
