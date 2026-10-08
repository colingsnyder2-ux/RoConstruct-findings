// from server: 57% by colin
// roc 2007-08 005f4ff0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f4ff0
//
// 005f4ff0  d9442408             fld dword ptr [esp + 8]
// 005f4ff4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f4ff8  83ec0c               sub esp, 0xc
// 005f4ffb  8bc4                 mov eax, esp
// 005f4ffd  d918                 fstp dword ptr [eax]
// 005f4fff  d9442418             fld dword ptr [esp + 0x18]
// 005f5003  d95804               fstp dword ptr [eax + 4]
// 005f5006  d944241c             fld dword ptr [esp + 0x1c]
// 005f500a  d95808               fstp dword ptr [eax + 8]
// 005f500d  e87ee1ffff           call 0x5f3190
// 005f5012  c3                   ret 

struct S {
    void f(float a, float b, float c);
};

extern "C" void __stdcall helper(float, float, float);

void S::f(float a, float b, float c)
{
    helper(a, b, c);
}
