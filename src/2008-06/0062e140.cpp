// from server: 100% by king_originala
// roc 2008-06 0062e140  unit: RBX::GeometryService  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062e140
//
// 0062e140  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0062e143  56                   push esi
// 0062e144  8b702c               mov esi, dword ptr [eax + 0x2c]
// 0062e147  85f6                 test esi, esi
// 0062e149  743d                 je 0x62e188
// 0062e14b  807e0800             cmp byte ptr [esi + 8], 0
// 0062e14f  7407                 je 0x62e158
// 0062e151  8bce                 mov ecx, esi
// 0062e153  e8c8ab0200           call 0x658d20
// 0062e158  8b442408             mov eax, dword ptr [esp + 8]
// 0062e15c  d98684000000         fld dword ptr [esi + 0x84]
// 0062e162  d800                 fadd dword ptr [eax]
// 0062e164  d99e84000000         fstp dword ptr [esi + 0x84]
// 0062e16a  d94004               fld dword ptr [eax + 4]
// 0062e16d  d88688000000         fadd dword ptr [esi + 0x88]
// 0062e173  d99e88000000         fstp dword ptr [esi + 0x88]
// 0062e179  d94008               fld dword ptr [eax + 8]
// 0062e17c  d8868c000000         fadd dword ptr [esi + 0x8c]
// 0062e182  d99e8c000000         fstp dword ptr [esi + 0x8c]
// 0062e188  5e                   pop esi
// 0062e189  c20400               ret 4

struct Vector {
    float x, y, z;
};

struct Geometry {
    unsigned char pad0[8];
    unsigned char dirty;
    unsigned char pad1[0x7B];
    float x, y, z;

    void update();
};

struct Holder {
    unsigned char pad[0x2C];
    Geometry *geometry;
};

struct S {
    unsigned char pad[0x10];
    Holder *holder;

    void translate(const Vector &offset);
};

void S::translate(const Vector &offset)
{
    Geometry *g = holder->geometry;
    if (g) {
        if (g->dirty)
            g->update();
        g->x = g->x + offset.x;
        g->y = offset.y + g->y;
        g->z = offset.z + g->z;
    }
}
