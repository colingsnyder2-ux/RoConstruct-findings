// from server: 59% by colin
// roc 2007-08 0062dbd0  unit: RBX::AdornG3D  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062dbd0
//
// 0062dbd0  56                   push esi
// 0062dbd1  8bf1                 mov esi, ecx
// 0062dbd3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062dbd7  8b06                 mov eax, dword ptr [esi]
// 0062dbd9  8b5038               mov edx, dword ptr [eax + 0x38]
// 0062dbdc  51                   push ecx
// 0062dbdd  8bce                 mov ecx, esi
// 0062dbdf  ffd2                 call edx
// 0062dbe1  8b4604               mov eax, dword ptr [esi + 4]
// 0062dbe4  50                   push eax
// 0062dbe5  51                   push ecx
// 0062dbe6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0062dbea  d94110               fld dword ptr [ecx + 0x10]
// 0062dbed  d91c24               fstp dword ptr [esp]
// 0062dbf0  e85b190000           call 0x62f550
// 0062dbf5  83c408               add esp, 8
// 0062dbf8  5e                   pop esi
// 0062dbf9  c20c00               ret 0xc

struct AdornG3D {
    void renderAdorn(int, int, int);
    void drawAdorn(int, int, int);
};

void AdornG3D::renderAdorn(int a, int b, int c) {
    struct VTable {
        char pad[0x38];
        void (__thiscall *fn)(AdornG3D *, int);
    };
    VTable *vt = *(VTable **)this;
    vt->fn(this, c);
    int v = *(int *)((char *)this + 4);
    float f = *(float *)((char *)&a + 0x10);
    drawAdorn(v, *(int *)&f, 0);
}
