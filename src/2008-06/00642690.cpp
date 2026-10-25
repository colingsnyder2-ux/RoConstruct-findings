// from server: 100% by king_originala
// roc 2008-06 00642690  unit: RBX::VWidget::?$NonFactoryProduct  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00642690
//
// 00642690  d9ee                 fldz 
// 00642692  83ec08               sub esp, 8
// 00642695  56                   push esi
// 00642696  8bf1                 mov esi, ecx
// 00642698  d85630               fcom dword ptr [esi + 0x30]
// 0064269b  dfe0                 fnstsw ax
// 0064269d  f6c444               test ah, 0x44
// 006426a0  7a2d                 jp 0x6426cf
// 006426a2  d85e34               fcomp dword ptr [esi + 0x34]
// 006426a5  dfe0                 fnstsw ax
// 006426a7  f6c444               test ah, 0x44
// 006426aa  7a25                 jp 0x6426d1
// 006426ac  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006426af  85c9                 test ecx, ecx
// 006426b1  741e                 je 0x6426d1
// 006426b3  8b01                 mov eax, dword ptr [ecx]
// 006426b5  8b4014               mov eax, dword ptr [eax + 0x14]
// 006426b8  8d542404             lea edx, [esp + 4]
// 006426bc  52                   push edx
// 006426bd  ffd0                 call eax
// 006426bf  d9442404             fld dword ptr [esp + 4]
// 006426c3  d95e30               fstp dword ptr [esi + 0x30]
// 006426c6  d9442408             fld dword ptr [esp + 8]
// 006426ca  d95e34               fstp dword ptr [esi + 0x34]
// 006426cd  eb02                 jmp 0x6426d1
// 006426cf  ddd8                 fstp st(0)
// 006426d1  d94630               fld dword ptr [esi + 0x30]
// 006426d4  8b442410             mov eax, dword ptr [esp + 0x10]
// 006426d8  d918                 fstp dword ptr [eax]
// 006426da  d94634               fld dword ptr [esi + 0x34]
// 006426dd  5e                   pop esi
// 006426de  d95804               fstp dword ptr [eax + 4]
// 006426e1  83c408               add esp, 8
// 006426e4  c20400               ret 4

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
