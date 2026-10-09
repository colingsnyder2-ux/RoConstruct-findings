// roc 2008-06 0069d8d0  unit: Ogre::RbxSceneManager  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0069d8d0
//
// 0069d8d0  6aff                 push -1
// 0069d8d2  6898ea7d00           push 0x7dea98
// 0069d8d7  64a100000000         mov eax, dword ptr fs:[0]
// 0069d8dd  50                   push eax
// 0069d8de  64892500000000       mov dword ptr fs:[0], esp
// 0069d8e5  83ec14               sub esp, 0x14
// 0069d8e8  53                   push ebx
// 0069d8e9  56                   push esi
// 0069d8ea  8b742430             mov esi, dword ptr [esp + 0x30]
// 0069d8ee  57                   push edi
// 0069d8ef  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0069d8f3  8bce                 mov ecx, esi
// 0069d8f5  2bcf                 sub ecx, edi
// 0069d8f7  c1f902               sar ecx, 2
// 0069d8fa  8d4101               lea eax, [ecx + 1]
// 0069d8fd  99                   cdq 
// 0069d8fe  2bc2                 sub eax, edx
// 0069d900  d1f8                 sar eax, 1
// 0069d902  33db                 xor ebx, ebx
// 0069d904  89442418             mov dword ptr [esp + 0x18], eax
// 0069d908  8d44240c             lea eax, [esp + 0xc]
// 0069d90c  895c240c             mov dword ptr [esp + 0xc], ebx
// 0069d910  895c2410             mov dword ptr [esp + 0x10], ebx
// 0069d914  895c2414             mov dword ptr [esp + 0x14], ebx
// 0069d918  8944241c             mov dword ptr [esp + 0x1c], eax
// 0069d91c  8b542440             mov edx, dword ptr [esp + 0x40]
// 0069d920  52                   push edx
// 0069d921  50                   push eax
// 0069d922  51                   push ecx
// 0069d923  56                   push esi
// 0069d924  57                   push edi
// 0069d925  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0069d929  e8f2fdffff           call 0x69d720
// 0069d92e  8b442420             mov eax, dword ptr [esp + 0x20]
// 0069d932  83c414               add esp, 0x14
// 0069d935  5f                   pop edi
// 0069d936  5e                   pop esi
// 0069d937  3bc3                 cmp eax, ebx
// 0069d939  5b                   pop ebx
// 0069d93a  7409                 je 0x69d945
// 0069d93c  50                   push eax
// 0069d93d  e8382d0000           call 0x6a067a
// 0069d942  83c404               add esp, 4
// 0069d945  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069d949  64890d00000000       mov dword ptr fs:[0], ecx
// 0069d950  83c420               add esp, 0x20
// 0069d953  c3                   ret 
// library ogre-1.6.4/OgreSceneManager.cpp (function ??$_Stable_sort@PAPAVLight@Ogre@@HPAV12@UlightLess@SceneManager@2@@std@@YAXPAPAVLight@Ogre@@0PAH0UlightLess@SceneManager@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreSceneManager.cpp
