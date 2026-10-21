// from server: 100% by colin
// roc 2008-06 00583520  unit: RBX::ModelInstance  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00583520
//
// 00583520  d905746e8200         fld dword ptr [0x826e74]
// 00583526  83ec1c               sub esp, 0x1c
// 00583529  56                   push esi
// 0058352a  8bf1                 mov esi, ecx
// 0058352c  83bee001000000       cmp dword ptr [esi + 0x1e0], 0
// 00583533  7436                 je 0x58356b
// 00583535  8b8ee0010000         mov ecx, dword ptr [esi + 0x1e0]
// 0058353b  ddd8                 fstp st(0)
// 0058353d  8b01                 mov eax, dword ptr [ecx]
// 0058353f  8b4054               mov eax, dword ptr [eax + 0x54]
// 00583542  8d542408             lea edx, [esp + 8]
// 00583546  52                   push edx
// 00583547  ffd0                 call eax
// 00583549  d94010               fld dword ptr [eax + 0x10]
// 0058354c  8b16                 mov edx, dword ptr [esi]
// 0058354e  d95c2404             fstp dword ptr [esp + 4]
// 00583552  8b5254               mov edx, dword ptr [edx + 0x54]
// 00583555  8d442408             lea eax, [esp + 8]
// 00583559  50                   push eax
// 0058355a  8bce                 mov ecx, esi
// 0058355c  ffd2                 call edx
// 0058355e  d94010               fld dword ptr [eax + 0x10]
// 00583561  d8642404             fsub dword ptr [esp + 4]
// 00583565  d805746e8200         fadd dword ptr [0x826e74]
// 0058356b  5e                   pop esi
// 0058356c  83c41c               add esp, 0x1c
// 0058356f  c3                   ret 

// from server: 75% by king_originala
extern float baseline;

struct Model;

struct Bounds {
    float values[6];
};

struct ModelVTable {
    void* slots[21];
    Bounds* (__thiscall *getBounds)(Model*, Bounds*);
};

struct Model {
    ModelVTable* vtable;
    char padding[0x1DC];
    Model* parent;

    double getOffset();
};

double Model::getOffset()
{
    double result = baseline;
    if (parent != 0) {
        Bounds bounds;
        float parentValue =
            parent->vtable->getBounds(parent, &bounds)->values[4];
        result = vtable->getBounds(this, &bounds)->values[4]
               - parentValue + baseline;
    }
    return result;
}
