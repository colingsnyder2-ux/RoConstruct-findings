// from server: 100% by colin
// roc 2007-08 004d9510  unit: RBX::View::MegaTextureProxy  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d9510
//
// 004d9510  d902                 fld dword ptr [edx]
// 004d9512  d901                 fld dword ptr [ecx]
// 004d9514  ded9                 fcompp 
// 004d9516  dfe0                 fnstsw ax
// 004d9518  f6c441               test ah, 0x41
// 004d951b  7504                 jne 0x4d9521
// 004d951d  83c8ff               or eax, 0xffffffff
// 004d9520  c3                   ret 
// 004d9521  d902                 fld dword ptr [edx]
// 004d9523  d901                 fld dword ptr [ecx]
// 004d9525  ded9                 fcompp 
// 004d9527  dfe0                 fnstsw ax
// 004d9529  f6c405               test ah, 5
// 004d952c  7a06                 jp 0x4d9534
// 004d952e  b801000000           mov eax, 1
// 004d9533  c3                   ret 
// 004d9534  d94204               fld dword ptr [edx + 4]
// 004d9537  d94104               fld dword ptr [ecx + 4]
// 004d953a  ded9                 fcompp 
// 004d953c  dfe0                 fnstsw ax
// 004d953e  f6c441               test ah, 0x41
// 004d9541  74da                 je 0x4d951d
// 004d9543  d94204               fld dword ptr [edx + 4]
// 004d9546  d94104               fld dword ptr [ecx + 4]
// 004d9549  ded9                 fcompp 
// 004d954b  dfe0                 fnstsw ax
// 004d954d  f6c405               test ah, 5
// 004d9550  7bdc                 jnp 0x4d952e
// 004d9552  d94208               fld dword ptr [edx + 8]
// 004d9555  d94108               fld dword ptr [ecx + 8]
// 004d9558  ded9                 fcompp 
// 004d955a  dfe0                 fnstsw ax
// 004d955c  f6c441               test ah, 0x41
// 004d955f  74bc                 je 0x4d951d
// 004d9561  d94208               fld dword ptr [edx + 8]
// 004d9564  d94108               fld dword ptr [ecx + 8]
// 004d9567  ded9                 fcompp 
// 004d9569  dfe0                 fnstsw ax
// 004d956b  f6c405               test ah, 5
// 004d956e  7bbe                 jnp 0x4d952e
// 004d9570  33c0                 xor eax, eax
// 004d9572  c3                   ret 

struct MegaTextureProxy {
    float x;
    float y;
    float z;
};

int __fastcall compare(const MegaTextureProxy* b, const MegaTextureProxy* a)
{
    if (a->x < b->x)
        return -1;
    if (a->x > b->x)
        return 1;
    if (a->y < b->y)
        return -1;
    if (a->y > b->y)
        return 1;
    if (a->z < b->z)
        return -1;
    if (a->z > b->z)
        return 1;
    return 0;
}
