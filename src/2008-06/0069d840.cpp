// roc 2008-06 0069d840  unit: Ogre::RbxSceneManager  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0069d840
//
// 0069d840  6aff                 push -1
// 0069d842  6898ea7d00           push 0x7dea98
// 0069d847  64a100000000         mov eax, dword ptr fs:[0]
// 0069d84d  50                   push eax
// 0069d84e  64892500000000       mov dword ptr fs:[0], esp
// 0069d855  83ec14               sub esp, 0x14
// 0069d858  53                   push ebx
// 0069d859  56                   push esi
// 0069d85a  8b742430             mov esi, dword ptr [esp + 0x30]
// 0069d85e  57                   push edi
// 0069d85f  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0069d863  8bce                 mov ecx, esi
// 0069d865  2bcf                 sub ecx, edi
// 0069d867  c1f902               sar ecx, 2
// 0069d86a  8d4101               lea eax, [ecx + 1]
// 0069d86d  99                   cdq 
// 0069d86e  2bc2                 sub eax, edx
// 0069d870  d1f8                 sar eax, 1
// 0069d872  33db                 xor ebx, ebx
// 0069d874  89442418             mov dword ptr [esp + 0x18], eax
// 0069d878  8d44240c             lea eax, [esp + 0xc]
// 0069d87c  895c240c             mov dword ptr [esp + 0xc], ebx
// 0069d880  895c2410             mov dword ptr [esp + 0x10], ebx
// 0069d884  895c2414             mov dword ptr [esp + 0x14], ebx
// 0069d888  8944241c             mov dword ptr [esp + 0x1c], eax
// 0069d88c  8b542440             mov edx, dword ptr [esp + 0x40]
// 0069d890  52                   push edx
// 0069d891  50                   push eax
// 0069d892  51                   push ecx
// 0069d893  56                   push esi
// 0069d894  57                   push edi
// 0069d895  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0069d899  e8c2fdffff           call 0x69d660
// 0069d89e  8b442420             mov eax, dword ptr [esp + 0x20]
// 0069d8a2  83c414               add esp, 0x14
// 0069d8a5  5f                   pop edi
// 0069d8a6  5e                   pop esi
// 0069d8a7  3bc3                 cmp eax, ebx
// 0069d8a9  5b                   pop ebx
// 0069d8aa  7409                 je 0x69d8b5
// 0069d8ac  50                   push eax
// 0069d8ad  e8c82d0000           call 0x6a067a
// 0069d8b2  83c404               add esp, 4
// 0069d8b5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069d8b9  64890d00000000       mov dword ptr fs:[0], ecx
// 0069d8c0  83c420               add esp, 0x20
// 0069d8c3  c3                   ret 
// library ogre-1.6.4/OgreSceneManager.cpp (function ??$_Stable_sort@PAPAVLight@Ogre@@HPAV12@UlightLess@SceneManager@2@@std@@YAXPAPAVLight@Ogre@@0PAH0UlightLess@SceneManager@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreSceneManager.cpp
