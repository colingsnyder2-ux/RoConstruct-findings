// roc 2009-06 006b5160  unit: RBX::BlockBlockContact  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b5160
//
// 006b5160  d9ee                 fldz 
// 006b5162  83ec08               sub esp, 8
// 006b5165  56                   push esi
// 006b5166  8bf1                 mov esi, ecx
// 006b5168  d85630               fcom dword ptr [esi + 0x30]
// 006b516b  dfe0                 fnstsw ax
// 006b516d  f6c444               test ah, 0x44
// 006b5170  7a2d                 jp 0x6b519f
// 006b5172  d85e34               fcomp dword ptr [esi + 0x34]
// 006b5175  dfe0                 fnstsw ax
// 006b5177  f6c444               test ah, 0x44
// 006b517a  7a25                 jp 0x6b51a1
// 006b517c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006b517f  85c9                 test ecx, ecx
// 006b5181  741e                 je 0x6b51a1
// 006b5183  8b01                 mov eax, dword ptr [ecx]
// 006b5185  8b4014               mov eax, dword ptr [eax + 0x14]
// 006b5188  8d542404             lea edx, [esp + 4]
// 006b518c  52                   push edx
// 006b518d  ffd0                 call eax
// 006b518f  d9442404             fld dword ptr [esp + 4]
// 006b5193  d95e30               fstp dword ptr [esi + 0x30]
// 006b5196  d9442408             fld dword ptr [esp + 8]
// 006b519a  d95e34               fstp dword ptr [esi + 0x34]
// 006b519d  eb02                 jmp 0x6b51a1
// 006b519f  ddd8                 fstp st(0)
// 006b51a1  d94630               fld dword ptr [esi + 0x30]
// 006b51a4  8b442410             mov eax, dword ptr [esp + 0x10]
// 006b51a8  d918                 fstp dword ptr [eax]
// 006b51aa  d94634               fld dword ptr [esi + 0x34]
// 006b51ad  5e                   pop esi
// 006b51ae  d95804               fstp dword ptr [eax + 4]
// 006b51b1  83c408               add esp, 8
// 006b51b4  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QAE?AUVec2@@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Vec2 {
    float x;
    float y;
};

struct Source {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual Vec2 get();
};

struct S {
    char padding0[0x20];
    Source* source;
    char padding1[0x0C];
    float x;
    float y;

    Vec2 f();
};

Vec2 S::f()
{
    if (x == 0.0f && y == 0.0f && source) {
        Vec2 value = source->get();
        x = value.x;
        y = value.y;
    }

    Vec2 result;
    result.x = x;
    result.y = y;
    return result;
}