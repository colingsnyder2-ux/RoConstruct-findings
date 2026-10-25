// from server: 100% by king_originala
// roc 2008-06 004f6e30  unit: RBX::ViewNew::PBBBuilder  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f6e30
//
// 004f6e30  56                   push esi
// 004f6e31  8bf1                 mov esi, ecx
// 004f6e33  c706c8708200         mov dword ptr [esi], 0x8270c8
// 004f6e39  57                   push edi
// 004f6e3a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004f6e3e  d94704               fld dword ptr [edi + 4]
// 004f6e41  8d4e14               lea ecx, [esi + 0x14]
// 004f6e44  d95e04               fstp dword ptr [esi + 4]
// 004f6e47  d94708               fld dword ptr [edi + 8]
// 004f6e4a  d95e08               fstp dword ptr [esi + 8]
// 004f6e4d  d9470c               fld dword ptr [edi + 0xc]
// 004f6e50  d95e0c               fstp dword ptr [esi + 0xc]
// 004f6e53  8b4710               mov eax, dword ptr [edi + 0x10]
// 004f6e56  894610               mov dword ptr [esi + 0x10], eax
// 004f6e59  c70100000000         mov dword ptr [ecx], 0
// 004f6e5f  8b5714               mov edx, dword ptr [edi + 0x14]
// 004f6e62  52                   push edx
// 004f6e63  e838210a00           call 0x598fa0
// 004f6e68  d94718               fld dword ptr [edi + 0x18]
// 004f6e6b  d95e18               fstp dword ptr [esi + 0x18]
// 004f6e6e  8bc6                 mov eax, esi
// 004f6e70  d9471c               fld dword ptr [edi + 0x1c]
// 004f6e73  d95e1c               fstp dword ptr [esi + 0x1c]
// 004f6e76  c70688708200         mov dword ptr [esi], 0x827088
// 004f6e7c  d94720               fld dword ptr [edi + 0x20]
// 004f6e7f  5f                   pop edi
// 004f6e80  d95e20               fstp dword ptr [esi + 0x20]
// 004f6e83  5e                   pop esi
// 004f6e84  c20400               ret 4

extern unsigned char baseTable[];
extern unsigned char derivedTable[];

struct Handle {
    void* value;
    void assign(void* p);
};

struct S {
    unsigned long table;
    float x, y, z;
    unsigned long flags;
    Handle handle;
    float a, b, c;

    S(const S& other);
};

S::S(const S& other)
{
    table = reinterpret_cast<unsigned long>(baseTable);
    x = other.x;
    y = other.y;
    z = other.z;
    flags = other.flags;
    handle.value = 0;
    handle.assign(other.handle.value);
    a = other.a;
    *reinterpret_cast<volatile float*>(&b) = other.b;
    *reinterpret_cast<volatile unsigned long*>(&table) =
        reinterpret_cast<unsigned long>(derivedTable);
    c = other.c;
}
