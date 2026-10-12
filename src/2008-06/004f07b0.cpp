// from server: 83% by king_originala
// roc 2008-06 004f07b0  unit: RBX::ViewNew::Texture  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f07b0
//
// 004f07b0  8b01                 mov eax, dword ptr [ecx]
// 004f07b2  56                   push esi
// 004f07b3  8b742408             mov esi, dword ptr [esp + 8]
// 004f07b7  8b16                 mov edx, dword ptr [esi]
// 004f07b9  3bc2                 cmp eax, edx
// 004f07bb  7d06                 jge 0x4f07c3
// 004f07bd  b001                 mov al, 1
// 004f07bf  5e                   pop esi
// 004f07c0  c20400               ret 4
// 004f07c3  7e06                 jle 0x4f07cb
// 004f07c5  32c0                 xor al, al
// 004f07c7  5e                   pop esi
// 004f07c8  c20400               ret 4
// 004f07cb  d94604               fld dword ptr [esi + 4]
// 004f07ce  d85904               fcomp dword ptr [ecx + 4]
// 004f07d1  dfe0                 fnstsw ax
// 004f07d3  f6c441               test ah, 0x41
// 004f07d6  74e5                 je 0x4f07bd
// 004f07d8  d94604               fld dword ptr [esi + 4]
// 004f07db  d85904               fcomp dword ptr [ecx + 4]
// 004f07de  dfe0                 fnstsw ax
// 004f07e0  f6c405               test ah, 5
// 004f07e3  7be0                 jnp 0x4f07c5
// 004f07e5  d94608               fld dword ptr [esi + 8]
// 004f07e8  d85908               fcomp dword ptr [ecx + 8]
// 004f07eb  dfe0                 fnstsw ax
// 004f07ed  f6c441               test ah, 0x41
// 004f07f0  7509                 jne 0x4f07fb
// 004f07f2  b801000000           mov eax, 1
// 004f07f7  5e                   pop esi
// 004f07f8  c20400               ret 4
// 004f07fb  33c0                 xor eax, eax
// 004f07fd  5e                   pop esi
// 004f07fe  c20400               ret 4

struct Texture {
    int key;
    float x;
    float y;

    bool f(const Texture& other);
};

bool Texture::f(const Texture& other)
{
    if (key < other.key)
        return true;
    if (key > other.key)
        return false;
    if (x < other.x)
        return true;
    if (x > other.x)
        return false;
    return y < other.y;
}
