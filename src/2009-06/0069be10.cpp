// roc 2009-06 0069be10  unit: RBX::VFlagStandService::?$FactoryProduct  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0069be10
//
// 0069be10  53                   push ebx
// 0069be11  56                   push esi
// 0069be12  57                   push edi
// 0069be13  8bb9b0000000         mov edi, dword ptr [ecx + 0xb0]
// 0069be19  8db19c000000         lea esi, [ecx + 0x9c]
// 0069be1f  8b4f04               mov ecx, dword ptr [edi + 4]
// 0069be22  8d442410             lea eax, [esp + 0x10]
// 0069be26  50                   push eax
// 0069be27  51                   push ecx
// 0069be28  57                   push edi
// 0069be29  8bce                 mov ecx, esi
// 0069be2b  e8605efdff           call 0x671c90
// 0069be30  6a01                 push 1
// 0069be32  8bce                 mov ecx, esi
// 0069be34  8bd8                 mov ebx, eax
// 0069be36  e8955efdff           call 0x671cd0
// 0069be3b  895f04               mov dword ptr [edi + 4], ebx
// 0069be3e  8b5304               mov edx, dword ptr [ebx + 4]
// 0069be41  5f                   pop edi
// 0069be42  5e                   pop esi
// 0069be43  891a                 mov dword ptr [edx], ebx
// 0069be45  5b                   pop ebx
// 0069be46  c20400               ret 4
// library ogre-1.7.0/OgreResource.cpp (function ?addListener@Resource@Ogre@@UAEXPAVListener@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreResource.cpp
