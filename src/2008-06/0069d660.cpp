// roc 2008-06 0069d660  unit: Ogre::RbxSceneManager  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0069d660
//
// 0069d660  57                   push edi
// 0069d661  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0069d665  83ff20               cmp edi, 0x20
// 0069d668  7f1b                 jg 0x69d685
// 0069d66a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0069d66e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069d672  8b542408             mov edx, dword ptr [esp + 8]
// 0069d676  6a00                 push 0
// 0069d678  50                   push eax
// 0069d679  51                   push ecx
// 0069d67a  52                   push edx
// 0069d67b  e8202dffff           call 0x6903a0
// 0069d680  83c410               add esp, 0x10
// 0069d683  5f                   pop edi
// 0069d684  c3                   ret 
// 0069d685  53                   push ebx
// 0069d686  8d4701               lea eax, [edi + 1]
// 0069d689  99                   cdq 
// 0069d68a  55                   push ebp
// 0069d68b  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0069d68f  2bc2                 sub eax, edx
// 0069d691  56                   push esi
// 0069d692  8bf0                 mov esi, eax
// 0069d694  8b442414             mov eax, dword ptr [esp + 0x14]
// 0069d698  d1fe                 sar esi, 1
// 0069d69a  8bcd                 mov ecx, ebp
// 0069d69c  8d1cb0               lea ebx, [eax + esi*4]
// 0069d69f  e82c2cffff           call 0x6902d0
// 0069d6a4  3bf0                 cmp esi, eax
// 0069d6a6  7f28                 jg 0x69d6d0
// 0069d6a8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0069d6ac  8b542414             mov edx, dword ptr [esp + 0x14]
// 0069d6b0  51                   push ecx
// 0069d6b1  55                   push ebp
// 0069d6b2  56                   push esi
// 0069d6b3  53                   push ebx
// 0069d6b4  52                   push edx
// 0069d6b5  e886daffff           call 0x69b140
// 0069d6ba  8b442438             mov eax, dword ptr [esp + 0x38]
// 0069d6be  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0069d6c2  50                   push eax
// 0069d6c3  55                   push ebp
// 0069d6c4  2bfe                 sub edi, esi
// 0069d6c6  57                   push edi
// 0069d6c7  51                   push ecx
// 0069d6c8  53                   push ebx
// 0069d6c9  e872daffff           call 0x69b140
// 0069d6ce  eb26                 jmp 0x69d6f6
// 0069d6d0  8b542424             mov edx, dword ptr [esp + 0x24]
// 0069d6d4  8b442414             mov eax, dword ptr [esp + 0x14]
// 0069d6d8  52                   push edx
// 0069d6d9  55                   push ebp
// 0069d6da  56                   push esi
// 0069d6db  53                   push ebx
// 0069d6dc  50                   push eax
// 0069d6dd  e87effffff           call 0x69d660
// 0069d6e2  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0069d6e6  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0069d6ea  51                   push ecx
// 0069d6eb  55                   push ebp
// 0069d6ec  2bfe                 sub edi, esi
// 0069d6ee  57                   push edi
// 0069d6ef  52                   push edx
// 0069d6f0  53                   push ebx
// 0069d6f1  e86affffff           call 0x69d660
// 0069d6f6  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0069d6fa  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0069d6fe  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0069d702  83c428               add esp, 0x28
// 0069d705  50                   push eax
// 0069d706  55                   push ebp
// 0069d707  57                   push edi
// 0069d708  56                   push esi
// 0069d709  51                   push ecx
// 0069d70a  53                   push ebx
// 0069d70b  52                   push edx
// 0069d70c  e82fa7ffff           call 0x697e40
// 0069d711  83c41c               add esp, 0x1c
// 0069d714  5e                   pop esi
// 0069d715  5d                   pop ebp
// 0069d716  5b                   pop ebx
// 0069d717  5f                   pop edi
// 0069d718  c3                   ret 
// library ogre-1.6.4/OgreSceneManager.cpp (function ??$_Stable_sort@PAPAVLight@Ogre@@HPAV12@UlightLess@SceneManager@2@@std@@YAXPAPAVLight@Ogre@@0HAAV?$_Temp_iterator@PAVLight@Ogre@@@0@UlightLess@SceneManager@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreSceneManager.cpp
