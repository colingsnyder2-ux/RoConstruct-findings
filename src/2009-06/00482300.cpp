// roc 2009-06 00482300  unit: Ogre::RbxCullableSceneNode  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00482300
//
// 00482300  8b542404             mov edx, dword ptr [esp + 4]
// 00482304  d9420c               fld dword ptr [edx + 0xc]
// 00482307  d819                 fcomp dword ptr [ecx]
// 00482309  dfe0                 fnstsw ax
// 0048230b  f6c405               test ah, 5
// 0048230e  7b45                 jnp 0x482355
// 00482310  d94210               fld dword ptr [edx + 0x10]
// 00482313  d85904               fcomp dword ptr [ecx + 4]
// 00482316  dfe0                 fnstsw ax
// 00482318  f6c405               test ah, 5
// 0048231b  7b38                 jnp 0x482355
// 0048231d  d94214               fld dword ptr [edx + 0x14]
// 00482320  d85908               fcomp dword ptr [ecx + 8]
// 00482323  dfe0                 fnstsw ax
// 00482325  f6c405               test ah, 5
// 00482328  7b2b                 jnp 0x482355
// 0048232a  d94204               fld dword ptr [edx + 4]
// 0048232d  d85910               fcomp dword ptr [ecx + 0x10]
// 00482330  dfe0                 fnstsw ax
// 00482332  f6c441               test ah, 0x41
// 00482335  741e                 je 0x482355
// 00482337  d902                 fld dword ptr [edx]
// 00482339  d8590c               fcomp dword ptr [ecx + 0xc]
// 0048233c  dfe0                 fnstsw ax
// 0048233e  f6c441               test ah, 0x41
// 00482341  7412                 je 0x482355
// 00482343  d94208               fld dword ptr [edx + 8]
// 00482346  d85914               fcomp dword ptr [ecx + 0x14]
// 00482349  dfe0                 fnstsw ax
// 0048234b  f6c441               test ah, 0x41
// 0048234e  7405                 je 0x482355
// 00482350  b001                 mov al, 1
// 00482352  c20400               ret 4
// 00482355  32c0                 xor al, al
// 00482357  c20400               ret 4
// copied from an identical function in another client (function ?overlapsOrTouches@Extents@@QBE_NABU1@@Z)

// from server: 100% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct Extents {
    float lowX;
    float lowY;
    float lowZ;
    float highX;
    float highY;
    float highZ;
    bool overlapsOrTouches(const Extents& other) const;
};

bool Extents::overlapsOrTouches(const Extents& other) const {
    if (!(lowX > other.highX) && !(lowY > other.highY) && !(lowZ > other.highZ) &&
        !(highY < other.lowY) && !(highX < other.lowX) && !(highZ < other.lowZ)) {
        return true;
    }
    return false;
}