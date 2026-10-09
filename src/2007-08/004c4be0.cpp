// from server: 55% by colin
// roc 2007-08 004c4be0  unit: RakPeer  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c4be0
//
// 004c4be0  53                   push ebx
// 004c4be1  8b99bc000000         mov ebx, dword ptr [ecx + 0xbc]
// 004c4be7  55                   push ebp
// 004c4be8  8ba9b8000000         mov ebp, dword ptr [ecx + 0xb8]
// 004c4bee  56                   push esi
// 004c4bef  8b742414             mov esi, dword ptr [esp + 0x14]
// 004c4bf3  3bf3                 cmp esi, ebx
// 004c4bf5  57                   push edi
// 004c4bf6  7c37                 jl 0x4c4c2f
// 004c4bf8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004c4bfc  7f04                 jg 0x4c4c02
// 004c4bfe  3bfd                 cmp edi, ebp
// 004c4c00  762d                 jbe 0x4c4c2f
// 004c4c02  8bc5                 mov eax, ebp
// 004c4c04  0bc3                 or eax, ebx
// 004c4c06  7427                 je 0x4c4c2f
// 004c4c08  8b81e0030000         mov eax, dword ptr [ecx + 0x3e0]
// 004c4c0e  b9e8030000           mov ecx, 0x3e8
// 004c4c13  f7e1                 mul ecx
// 004c4c15  2bfd                 sub edi, ebp
// 004c4c17  1bf3                 sbb esi, ebx
// 004c4c19  3bf2                 cmp esi, edx
// 004c4c1b  7c12                 jl 0x4c4c2f
// 004c4c1d  7f04                 jg 0x4c4c23
// 004c4c1f  3bf8                 cmp edi, eax
// 004c4c21  760c                 jbe 0x4c4c2f
// 004c4c23  5f                   pop edi
// 004c4c24  5e                   pop esi
// 004c4c25  5d                   pop ebp
// 004c4c26  b801000000           mov eax, 1
// 004c4c2b  5b                   pop ebx
// 004c4c2c  c20800               ret 8
// 004c4c2f  5f                   pop edi
// 004c4c30  5e                   pop esi
// 004c4c31  5d                   pop ebp
// 004c4c32  33c0                 xor eax, eax
// 004c4c34  5b                   pop ebx
// 004c4c35  c20800               ret 8

struct RakPeer {
    char pad0[0xb8];
    unsigned int field_b8;
    unsigned int field_bc;
    char pad1[0x3e0 - 0xbc - 4];
    unsigned int field_3e0;

    bool check(unsigned int a, unsigned int b);
};

bool RakPeer::check(unsigned int a, unsigned int b)
{
    unsigned int lo = field_b8;
    unsigned int hi = field_bc;

    if ((int)b < (int)hi)
        return false;
    if ((int)b == (int)hi && a <= lo)
        return false;

    if ((lo | hi) == 0)
        return false;

    unsigned long long limit = (unsigned long long)field_3e0 * 1000ULL;
    unsigned int dlo = a - lo;
    unsigned int dhi = b - hi;

    if ((int)dhi < (int)(unsigned int)(limit >> 32))
        return false;
    if ((int)dhi == (int)(unsigned int)(limit >> 32) && dlo <= (unsigned int)limit)
        return false;

    return true;
}
