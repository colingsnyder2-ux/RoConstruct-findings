// from server: 100% by king_originala
// roc 2008-06 005de0f0  unit: RBX::Message  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005de0f0
//
// 005de0f0  83ec08               sub esp, 8
// 005de0f3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005de0f7  d900                 fld dword ptr [eax]
// 005de0f9  51                   push ecx
// 005de0fa  d95c2404             fstp dword ptr [esp + 4]
// 005de0fe  8d4c2404             lea ecx, [esp + 4]
// 005de102  d94004               fld dword ptr [eax + 4]
// 005de105  d95c2408             fstp dword ptr [esp + 8]
// 005de109  d905706e8200         fld dword ptr [0x826e70]
// 005de10f  d91c24               fstp dword ptr [esp]
// 005de112  e869bbf2ff           call 0x509c80
// 005de117  ddd8                 fstp st(0)
// 005de119  d90424               fld dword ptr [esp]
// 005de11c  e8a53c0c00           call 0x6a1dc6
// 005de121  d9ee                 fldz 
// 005de123  d85c2404             fcomp dword ptr [esp + 4]
// 005de127  dfe0                 fnstsw ax
// 005de129  f6c441               test ah, 0x41
// 005de12c  7506                 jne 0x5de134
// 005de12e  d82d44db8300         fsubr dword ptr [0x83db44]
// 005de134  83c408               add esp, 8
// 005de137  c3                   ret 

extern "C" double __cdecl acos(double);
#pragma intrinsic(acos)
#pragma float_control(precise, off)

extern const float tolerance;
extern const float fullTurn;

struct S {
    float x, y;
    float normalize(float tolerance);
};

float __cdecl angle(const S& value)
{
    S v;
    v.x = value.x;
    v.y = value.y;
    v.normalize(tolerance);

    float result = (float)acos(v.x);
    if (v.y < 0.0f)
        result = fullTurn - result;
    return result;
}
