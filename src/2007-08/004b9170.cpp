// from server: 76% by colin
// roc 2007-08 004b9170  unit: RakPeer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b9170
//
// 004b9170  d9ee                 fldz 
// 004b9172  dc9930070000         fcomp qword ptr [ecx + 0x730]
// 004b9178  dfe0                 fnstsw ax
// 004b917a  f6c405               test ah, 5
// 004b917d  7b17                 jnp 0x4b9196
// 004b917f  6683b93807000000     cmp word ptr [ecx + 0x738], 0
// 004b9187  770d                 ja 0x4b9196
// 004b9189  6683b93a07000000     cmp word ptr [ecx + 0x73a], 0
// 004b9191  7703                 ja 0x4b9196
// 004b9193  33c0                 xor eax, eax
// 004b9195  c3                   ret 
// 004b9196  b801000000           mov eax, 1
// 004b919b  c3                   ret 

struct RakPeer {
    char pad0[0x730];
    double field730;
    unsigned short field738;
    unsigned short field73a;
    bool method();
};

bool RakPeer::method()
{
    if (field730 > 0.0)
        return true;
    if (field738 > 0)
        return true;
    if (field73a > 0)
        return true;
    return false;
}
