// roc 2008-06 0069b140  unit: Ogre::InstancedGeometry  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0069b140
//
// 0069b140  51                   push ecx
// 0069b141  8b442408             mov eax, dword ptr [esp + 8]
// 0069b145  53                   push ebx
// 0069b146  55                   push ebp
// 0069b147  56                   push esi
// 0069b148  57                   push edi
// 0069b149  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0069b14d  33db                 xor ebx, ebx
// 0069b14f  83ff20               cmp edi, 0x20
// 0069b152  7c29                 jl 0x69b17d
// 0069b154  8bef                 mov ebp, edi
// 0069b156  c1ed05               shr ebp, 5
// 0069b159  8da42400000000       lea esp, [esp]
// 0069b160  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0069b164  53                   push ebx
// 0069b165  51                   push ecx
// 0069b166  8db080000000         lea esi, [eax + 0x80]
// 0069b16c  56                   push esi
// 0069b16d  50                   push eax
// 0069b16e  e82d52ffff           call 0x6903a0
// 0069b173  83c410               add esp, 0x10
// 0069b176  83ed01               sub ebp, 1
// 0069b179  8bc6                 mov eax, esi
// 0069b17b  75e3                 jne 0x69b160
// 0069b17d  8b542428             mov edx, dword ptr [esp + 0x28]
// 0069b181  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0069b185  53                   push ebx
// 0069b186  52                   push edx
// 0069b187  51                   push ecx
// 0069b188  50                   push eax
// 0069b189  e81252ffff           call 0x6903a0
// 0069b18e  be20000000           mov esi, 0x20
// 0069b193  83c410               add esp, 0x10
// 0069b196  3bfe                 cmp edi, esi
// 0069b198  7e6d                 jle 0x69b207
// 0069b19a  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0069b19e  8bff                 mov edi, edi
// 0069b1a0  8b542428             mov edx, dword ptr [esp + 0x28]
// 0069b1a4  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0069b1a7  8b08                 mov ecx, dword ptr [eax]
// 0069b1a9  52                   push edx
// 0069b1aa  894804               mov dword ptr [eax + 4], ecx
// 0069b1ad  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0069b1b1  57                   push edi
// 0069b1b2  56                   push esi
// 0069b1b3  83ec14               sub esp, 0x14
// 0069b1b6  8bc4                 mov eax, esp
// 0069b1b8  8918                 mov dword ptr [eax], ebx
// 0069b1ba  895804               mov dword ptr [eax + 4], ebx
// 0069b1bd  895808               mov dword ptr [eax + 8], ebx
// 0069b1c0  89580c               mov dword ptr [eax + 0xc], ebx
// 0069b1c3  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0069b1c6  895010               mov dword ptr [eax + 0x10], edx
// 0069b1c9  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0069b1cd  89642430             mov dword ptr [esp + 0x30], esp
// 0069b1d1  50                   push eax
// 0069b1d2  51                   push ecx
// 0069b1d3  e808edffff           call 0x699ee0
// 0069b1d8  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0069b1dc  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0069b1df  885c2448             mov byte ptr [esp + 0x48], bl
// 0069b1e3  8b542448             mov edx, dword ptr [esp + 0x48]
// 0069b1e7  52                   push edx
// 0069b1e8  8b542444             mov edx, dword ptr [esp + 0x44]
// 0069b1ec  51                   push ecx
// 0069b1ed  8b4804               mov ecx, dword ptr [eax + 4]
// 0069b1f0  57                   push edi
// 0069b1f1  03f6                 add esi, esi
// 0069b1f3  56                   push esi
// 0069b1f4  52                   push edx
// 0069b1f5  8b10                 mov edx, dword ptr [eax]
// 0069b1f7  51                   push ecx
// 0069b1f8  52                   push edx
// 0069b1f9  e8e28effff           call 0x6940e0
// 0069b1fe  03f6                 add esi, esi
// 0069b200  83c444               add esp, 0x44
// 0069b203  3bf7                 cmp esi, edi
// 0069b205  7c99                 jl 0x69b1a0
// 0069b207  5f                   pop edi
// 0069b208  5e                   pop esi
// 0069b209  5d                   pop ebp
// 0069b20a  5b                   pop ebx
// 0069b20b  59                   pop ecx
// 0069b20c  c3                   ret 
// library ogre-1.6.4/OgreSceneManager.cpp (function ??$_Buffered_merge_sort@PAPAVLight@Ogre@@HPAV12@UlightsForShadowTextureLess@SceneManager@2@@std@@YAXPAPAVLight@Ogre@@0HAAV?$_Temp_iterator@PAVLight@Ogre@@@0@UlightsForShadowTextureLess@SceneManager@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreSceneManager.cpp
