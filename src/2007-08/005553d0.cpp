// from server: 39% by colin
// roc 2007-08 005553d0  unit: RBX::VServiceProvider::?$BoundFuncDesc  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005553d0
//
// 005553d0  51                   push ecx
// 005553d1  8b442408             mov eax, dword ptr [esp + 8]
// 005553d5  8bd0                 mov edx, eax
// 005553d7  0fbfc0               movsx eax, ax
// 005553da  89442408             mov dword ptr [esp + 8], eax
// 005553de  c1ea10               shr edx, 0x10
// 005553e1  0fbfd2               movsx edx, dx
// 005553e4  db442408             fild dword ptr [esp + 8]
// 005553e8  891424               mov dword ptr [esp], edx
// 005553eb  d811                 fcom dword ptr [ecx]
// 005553ed  dfe0                 fnstsw ax
// 005553ef  f6c401               test ah, 1
// 005553f2  752a                 jne 0x55541e
// 005553f4  d85908               fcomp dword ptr [ecx + 8]
// 005553f7  dfe0                 fnstsw ax
// 005553f9  f6c441               test ah, 0x41
// 005553fc  7a22                 jp 0x555420
// 005553fe  db0424               fild dword ptr [esp]
// 00555401  d85104               fcom dword ptr [ecx + 4]
// 00555404  dfe0                 fnstsw ax
// 00555406  f6c401               test ah, 1
// 00555409  7513                 jne 0x55541e
// 0055540b  d8590c               fcomp dword ptr [ecx + 0xc]
// 0055540e  dfe0                 fnstsw ax
// 00555410  f6c441               test ah, 0x41
// 00555413  7a0b                 jp 0x555420
// 00555415  b801000000           mov eax, 1
// 0055541a  59                   pop ecx
// 0055541b  c20400               ret 4
// 0055541e  ddd8                 fstp st(0)
// 00555420  33c0                 xor eax, eax
// 00555422  59                   pop ecx
// 00555423  c20400               ret 4

struct BoundFuncDesc {
    float minX;
    float minY;
    float maxX;
    float maxY;
    bool contains(int packed);
};

bool BoundFuncDesc::contains(int packed) {
    short x = (short)(packed & 0xffff);
    short y = (short)((packed >> 16) & 0xffff);
    float fx = (float)x;
    float fy = (float)y;
    if (fx >= minX) return false;
    if (fx > maxX) return false;
    if (fy < minY) return false;
    if (fy > maxY) return false;
    return true;
}
