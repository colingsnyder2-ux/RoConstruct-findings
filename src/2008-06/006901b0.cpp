// from server: 100% by king_originala
// roc 2008-06 006901b0  unit: Ogre::RbxSceneManagerFactory  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006901b0
//
// 006901b0  56                   push esi
// 006901b1  8b742408             mov esi, dword ptr [esp + 8]
// 006901b5  57                   push edi
// 006901b6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006901ba  3bf7                 cmp esi, edi
// 006901bc  7416                 je 0x6901d4
// 006901be  53                   push ebx
// 006901bf  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006901c3  53                   push ebx
// 006901c4  8bce                 mov ecx, esi
// 006901c6  ff15c8488000         call dword ptr [0x8048c8]
// 006901cc  83c618               add esi, 0x18
// 006901cf  3bf7                 cmp esi, edi
// 006901d1  75f0                 jne 0x6901c3
// 006901d3  5b                   pop ebx
// 006901d4  5f                   pop edi
// 006901d5  5e                   pop esi
// 006901d6  c3                   ret 

struct LightInfo {
    char data[24];
};

extern LightInfo& (__thiscall *assignLightInfo)(LightInfo*, const LightInfo&);

void __cdecl fillLightInfo(LightInfo* first, LightInfo* last, const LightInfo& value)
{
    for (; first != last; ++first)
        assignLightInfo(first, value);
}
