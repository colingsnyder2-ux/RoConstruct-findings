// from server: 81% by colin
// roc 2007-08 004d8080  unit: RBX::View::Texture  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d8080
//
// 004d8080  8b01                 mov eax, dword ptr [ecx]
// 004d8082  56                   push esi
// 004d8083  8b742408             mov esi, dword ptr [esp + 8]
// 004d8087  8b16                 mov edx, dword ptr [esi]
// 004d8089  3bc2                 cmp eax, edx
// 004d808b  7d06                 jge 0x4d8093
// 004d808d  b001                 mov al, 1
// 004d808f  5e                   pop esi
// 004d8090  c20400               ret 4
// 004d8093  7e06                 jle 0x4d809b
// 004d8095  32c0                 xor al, al
// 004d8097  5e                   pop esi
// 004d8098  c20400               ret 4
// 004d809b  d94104               fld dword ptr [ecx + 4]
// 004d809e  d94604               fld dword ptr [esi + 4]
// 004d80a1  ded9                 fcompp 
// 004d80a3  dfe0                 fnstsw ax
// 004d80a5  f6c441               test ah, 0x41
// 004d80a8  74e3                 je 0x4d808d
// 004d80aa  d94104               fld dword ptr [ecx + 4]
// 004d80ad  d94604               fld dword ptr [esi + 4]
// 004d80b0  ded9                 fcompp 
// 004d80b2  dfe0                 fnstsw ax
// 004d80b4  f6c405               test ah, 5
// 004d80b7  7bdc                 jnp 0x4d8095
// 004d80b9  d94108               fld dword ptr [ecx + 8]
// 004d80bc  d94608               fld dword ptr [esi + 8]
// 004d80bf  ded9                 fcompp 
// 004d80c1  dfe0                 fnstsw ax
// 004d80c3  f6c441               test ah, 0x41
// 004d80c6  7509                 jne 0x4d80d1
// 004d80c8  b801000000           mov eax, 1
// 004d80cd  5e                   pop esi
// 004d80ce  c20400               ret 4
// 004d80d1  33c0                 xor eax, eax
// 004d80d3  5e                   pop esi
// 004d80d4  c20400               ret 4

struct Texture {
    int x;
    float y;
    float z;
    bool lessThan(const Texture& other) const;
};

bool Texture::lessThan(const Texture& other) const
{
    if (x < other.x)
        return true;
    if (x > other.x)
        return false;
    if (y < other.y)
        return true;
    if (y > other.y)
        return false;
    if (z < other.z)
        return true;
    return false;
}
