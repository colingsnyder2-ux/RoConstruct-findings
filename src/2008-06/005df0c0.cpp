// from server: 58% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// from server: 57% by colin
// roc 2008-06 005df0c0  unit: RBX::Message  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005df0c0
//
// 005df0c0  83ec10               sub esp, 0x10
// 005df0c3  d905608b8200         fld dword ptr [0x828b60]
// 005df0c9  56                   push esi
// 005df0ca  8b742418             mov esi, dword ptr [esp + 0x18]
// 005df0ce  d95c2404             fstp dword ptr [esp + 4]
// 005df0d2  6a02                 push 2
// 005df0d4  8d44240c             lea eax, [esp + 0xc]
// 005df0d8  50                   push eax
// 005df0d9  8bce                 mov ecx, esi
// 005df0db  e86041f3ff           call 0x513240
// 005df0e0  d9442404             fld dword ptr [esp + 4]
// 005df0e4  d9c0                 fld st(0)
// 005df0e6  8d4c2408             lea ecx, [esp + 8]
// 005df0ea  d808                 fmul dword ptr [eax]
// 005df0ec  51                   push ecx
// 005df0ed  d94004               fld dword ptr [eax + 4]
// 005df0f0  8bce                 mov ecx, esi
// 005df0f2  d8ca                 fmul st(2)
// 005df0f4  d94008               fld dword ptr [eax + 8]
// 005df0f7  decb                 fmulp st(3)
// 005df0f9  d9c1                 fld st(1)
// 005df0fb  d9e0                 fchs 
// 005df0fd  d9c3                 fld st(3)
// 005df0ff  d9442420             fld dword ptr [esp + 0x20]
// 005df103  dcc9                 fmul st(1), st(0)
// 005df105  d9c3                 fld st(3)
// 005df107  d8c9                 fmul st(1)
// 005df109  d9cb                 fxch st(3)
// 005df10b  dec9                 fmulp st(1)
// 005df10d  d9c9                 fxch st(1)
// 005df10f  dec4                 faddp st(4)
// 005df111  d9c9                 fxch st(1)
// 005df113  dec2                 faddp st(2)
// 005df115  dec3                 faddp st(3)
// 005df117  d9c9                 fxch st(1)
// 005df119  d84624               fadd dword ptr [esi + 0x24]
// 005df11c  d95c240c             fstp dword ptr [esp + 0xc]
// 005df120  d84628               fadd dword ptr [esi + 0x28]
// 005df123  d95c2410             fstp dword ptr [esp + 0x10]
// 005df127  d8462c               fadd dword ptr [esi + 0x2c]
// 005df12a  d95c2414             fstp dword ptr [esp + 0x14]
// 005df12e  e8ed9cf3ff           call 0x518e20
// 005df133  5e                   pop esi
// 005df134  83c410               add esp, 0x10
// 005df137  c3                   ret 



struct GCamera {
    float m[3][4];
    void getVector(int index, float* out);
};

struct Message {
    char pad[0x24];
    float x;
    float y;
    float z;
    void __cdecl render2d(void* adorn);
};

extern float g_scale;

extern "C" void __stdcall appendSphere(float* v);

void Message::render2d(void* adorn)
{
    float v[3];
    float s = g_scale;
    ((GCamera*)this)->getVector(2, v);
    float out[3];
    out[0] = v[0] * s + x;
    out[1] = v[1] * s + y;
    out[2] = v[2] * s + z;
    appendSphere(out);
}
