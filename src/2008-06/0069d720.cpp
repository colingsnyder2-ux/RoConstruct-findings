// roc 2008-06 0069d720  unit: Ogre::RbxSceneManager  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0069d720
//
// 0069d720  57                   push edi
// 0069d721  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0069d725  83ff20               cmp edi, 0x20
// 0069d728  7f1b                 jg 0x69d745
// 0069d72a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0069d72e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069d732  8b542408             mov edx, dword ptr [esp + 8]
// 0069d736  6a00                 push 0
// 0069d738  50                   push eax
// 0069d739  51                   push ecx
// 0069d73a  52                   push edx
// 0069d73b  e8202dffff           call 0x690460
// 0069d740  83c410               add esp, 0x10
// 0069d743  5f                   pop edi
// 0069d744  c3                   ret 
// 0069d745  53                   push ebx
// 0069d746  8d4701               lea eax, [edi + 1]
// 0069d749  99                   cdq 
// 0069d74a  55                   push ebp
// 0069d74b  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0069d74f  2bc2                 sub eax, edx
// 0069d751  56                   push esi
// 0069d752  8bf0                 mov esi, eax
// 0069d754  8b442414             mov eax, dword ptr [esp + 0x14]
// 0069d758  d1fe                 sar esi, 1
// 0069d75a  8bcd                 mov ecx, ebp
// 0069d75c  8d1cb0               lea ebx, [eax + esi*4]
// 0069d75f  e86c2bffff           call 0x6902d0
// 0069d764  3bf0                 cmp esi, eax
// 0069d766  7f28                 jg 0x69d790
// 0069d768  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0069d76c  8b542414             mov edx, dword ptr [esp + 0x14]
// 0069d770  51                   push ecx
// 0069d771  55                   push ebp
// 0069d772  56                   push esi
// 0069d773  53                   push ebx
// 0069d774  52                   push edx
// 0069d775  e896daffff           call 0x69b210
// 0069d77a  8b442438             mov eax, dword ptr [esp + 0x38]
// 0069d77e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0069d782  50                   push eax
// 0069d783  55                   push ebp
// 0069d784  2bfe                 sub edi, esi
// 0069d786  57                   push edi
// 0069d787  51                   push ecx
// 0069d788  53                   push ebx
// 0069d789  e882daffff           call 0x69b210
// 0069d78e  eb26                 jmp 0x69d7b6
// 0069d790  8b542424             mov edx, dword ptr [esp + 0x24]
// 0069d794  8b442414             mov eax, dword ptr [esp + 0x14]
// 0069d798  52                   push edx
// 0069d799  55                   push ebp
// 0069d79a  56                   push esi
// 0069d79b  53                   push ebx
// 0069d79c  50                   push eax
// 0069d79d  e87effffff           call 0x69d720
// 0069d7a2  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0069d7a6  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0069d7aa  51                   push ecx
// 0069d7ab  55                   push ebp
// 0069d7ac  2bfe                 sub edi, esi
// 0069d7ae  57                   push edi
// 0069d7af  52                   push edx
// 0069d7b0  53                   push ebx
// 0069d7b1  e86affffff           call 0x69d720
// 0069d7b6  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0069d7ba  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0069d7be  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0069d7c2  83c428               add esp, 0x28
// 0069d7c5  50                   push eax
// 0069d7c6  55                   push ebp
// 0069d7c7  57                   push edi
// 0069d7c8  56                   push esi
// 0069d7c9  51                   push ecx
// 0069d7ca  53                   push ebx
// 0069d7cb  52                   push edx
// 0069d7cc  e89fa8ffff           call 0x698070
// 0069d7d1  83c41c               add esp, 0x1c
// 0069d7d4  5e                   pop esi
// 0069d7d5  5d                   pop ebp
// 0069d7d6  5b                   pop ebx
// 0069d7d7  5f                   pop edi
// 0069d7d8  c3                   ret 
// library ogre-1.6.4/OgreSceneManager.cpp (function ??$_Stable_sort@PAPAVLight@Ogre@@HPAV12@UlightLess@SceneManager@2@@std@@YAXPAPAVLight@Ogre@@0HAAV?$_Temp_iterator@PAVLight@Ogre@@@0@UlightLess@SceneManager@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreSceneManager.cpp
