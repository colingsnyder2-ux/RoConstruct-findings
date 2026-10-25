// from server: 100% by colin
// roc 2008-06 00656bf0  unit: RBX::ArrowPanel  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00656bf0
//
// 00656bf0  56                   push esi
// 00656bf1  8bf1                 mov esi, ecx
// 00656bf3  8b06                 mov eax, dword ptr [esi]
// 00656bf5  8b5054               mov edx, dword ptr [eax + 0x54]
// 00656bf8  ffd2                 call edx
// 00656bfa  84c0                 test al, al
// 00656bfc  7414                 je 0x656c12
// 00656bfe  57                   push edi
// 00656bff  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00656c03  57                   push edi
// 00656c04  8bce                 mov ecx, esi
// 00656c06  e825d2f1ff           call 0x573e30
// 00656c0b  8bc7                 mov eax, edi
// 00656c0d  5f                   pop edi
// 00656c0e  5e                   pop esi
// 00656c0f  c20400               ret 4
// 00656c12  e8892febff           call 0x509ba0
// 00656c17  d900                 fld dword ptr [eax]
// 00656c19  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00656c1d  d919                 fstp dword ptr [ecx]
// 00656c1f  5e                   pop esi
// 00656c20  d94004               fld dword ptr [eax + 4]
// 00656c23  8bc1                 mov eax, ecx
// 00656c25  d95904               fstp dword ptr [ecx + 4]
// 00656c28  c20400               ret 4

struct Vec2 { float x; float y; };

extern "C" Vec2* __cdecl get_zero_vec();

struct ArrowPanel {
    virtual bool can_use();
    virtual bool v04();
    virtual bool v08();
    virtual bool v0c();
    virtual bool v10();
    virtual bool v14();
    virtual bool v18();
    virtual bool v1c();
    virtual bool v20();
    virtual bool v24();
    virtual bool v28();
    virtual bool v2c();
    virtual bool v30();
    virtual bool v34();
    virtual bool v38();
    virtual bool v3c();
    virtual bool v40();
    virtual bool v44();
    virtual bool v48();
    virtual bool v4c();
    virtual bool v50();
    virtual bool can_use2();
    Vec2* set_pos(Vec2* out);
    void helper(Vec2* out);
};

Vec2* ArrowPanel::set_pos(Vec2* out) {
    if (can_use2()) {
        helper(out);
        return out;
    }
    Vec2* z = get_zero_vec();
    out->x = z->x;
    out->y = z->y;
    return out;
}
