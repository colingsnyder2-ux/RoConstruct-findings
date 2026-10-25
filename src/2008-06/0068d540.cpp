// from server: 100% by king_originala
// roc 2008-06 0068d540  unit: Ogre::VShadowCameraSetup::?$SharedPtr  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068d540
//
// 0068d540  53                   push ebx
// 0068d541  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0068d545  56                   push esi
// 0068d546  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0068d54a  57                   push edi
// 0068d54b  3bf3                 cmp esi, ebx
// 0068d54d  741b                 je 0x68d56a
// 0068d54f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0068d553  57                   push edi
// 0068d554  8bce                 mov ecx, esi
// 0068d556  ff15cc488000         call dword ptr [0x8048cc]
// 0068d55c  84c0                 test al, al
// 0068d55e  7410                 je 0x68d570
// 0068d560  83c618               add esi, 0x18
// 0068d563  83c718               add edi, 0x18
// 0068d566  3bf3                 cmp esi, ebx
// 0068d568  75e9                 jne 0x68d553
// 0068d56a  5f                   pop edi
// 0068d56b  5e                   pop esi
// 0068d56c  b001                 mov al, 1
// 0068d56e  5b                   pop ebx
// 0068d56f  c3                   ret 
// 0068d570  5f                   pop edi
// 0068d571  5e                   pop esi
// 0068d572  32c0                 xor al, al
// 0068d574  5b                   pop ebx
// 0068d575  c3                   ret 

struct LightInfo
{
    unsigned char data[24];
};

typedef bool (__thiscall *CompareLightInfo)(const LightInfo *, const LightInfo &);
extern CompareLightInfo compareLightInfo;

bool __cdecl equalLightInfo(const LightInfo *first, const LightInfo *last,
                           const LightInfo *other)
{
    for (; first != last; ++first, ++other)
    {
        if (!compareLightInfo(first, *other))
            return false;
    }
    return true;
}
