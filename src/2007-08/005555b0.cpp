// from server: 61% by colin
// roc 2007-08 005555b0  unit: RBX::GuiTarget  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005555b0
//
// 005555b0  83ec10               sub esp, 0x10
// 005555b3  56                   push esi
// 005555b4  8bf1                 mov esi, ecx
// 005555b6  8b06                 mov eax, dword ptr [esi]
// 005555b8  8b504c               mov edx, dword ptr [eax + 0x4c]
// 005555bb  8d4c2404             lea ecx, [esp + 4]
// 005555bf  51                   push ecx
// 005555c0  8bce                 mov ecx, esi
// 005555c2  ffd2                 call edx
// 005555c4  8b06                 mov eax, dword ptr [esi]
// 005555c6  8b5060               mov edx, dword ptr [eax + 0x60]
// 005555c9  8d4c240c             lea ecx, [esp + 0xc]
// 005555cd  51                   push ecx
// 005555ce  8bce                 mov ecx, esi
// 005555d0  ffd2                 call edx
// 005555d2  d900                 fld dword ptr [eax]
// 005555d4  d9442404             fld dword ptr [esp + 4]
// 005555d8  5e                   pop esi
// 005555d9  dcc1                 fadd st(1), st(0)
// 005555db  d94004               fld dword ptr [eax + 4]
// 005555de  8b442414             mov eax, dword ptr [esp + 0x14]
// 005555e2  d9442404             fld dword ptr [esp + 4]
// 005555e6  dcc1                 fadd st(1), st(0)
// 005555e8  d9ca                 fxch st(2)
// 005555ea  d918                 fstp dword ptr [eax]
// 005555ec  d9c9                 fxch st(1)
// 005555ee  d95804               fstp dword ptr [eax + 4]
// 005555f1  d9c9                 fxch st(1)
// 005555f3  d95808               fstp dword ptr [eax + 8]
// 005555f6  d9580c               fstp dword ptr [eax + 0xc]
// 005555f9  83c410               add esp, 0x10
// 005555fc  c20400               ret 4

struct GuiTarget {
    void getPos(float* out);
    void getSize(float* out);
    void getRect(float* out);
};

void GuiTarget::getRect(float* out) {
    float pos[2];
    float size[2];
    getPos(pos);
    getSize(size);
    out[0] = pos[0] + size[0];
    out[1] = pos[1] + size[1];
    out[2] = pos[0];
    out[3] = pos[1];
}
