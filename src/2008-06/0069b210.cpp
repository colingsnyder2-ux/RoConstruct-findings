// roc 2008-06 0069b210  unit: Ogre::InstancedGeometry  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0069b210
//
// 0069b210  51                   push ecx
// 0069b211  8b442408             mov eax, dword ptr [esp + 8]
// 0069b215  53                   push ebx
// 0069b216  55                   push ebp
// 0069b217  56                   push esi
// 0069b218  57                   push edi
// 0069b219  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0069b21d  33db                 xor ebx, ebx
// 0069b21f  83ff20               cmp edi, 0x20
// 0069b222  7c29                 jl 0x69b24d
// 0069b224  8bef                 mov ebp, edi
// 0069b226  c1ed05               shr ebp, 5
// 0069b229  8da42400000000       lea esp, [esp]
// 0069b230  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0069b234  53                   push ebx
// 0069b235  51                   push ecx
// 0069b236  8db080000000         lea esi, [eax + 0x80]
// 0069b23c  56                   push esi
// 0069b23d  50                   push eax
// 0069b23e  e81d52ffff           call 0x690460
// 0069b243  83c410               add esp, 0x10
// 0069b246  83ed01               sub ebp, 1
// 0069b249  8bc6                 mov eax, esi
// 0069b24b  75e3                 jne 0x69b230
// 0069b24d  8b542428             mov edx, dword ptr [esp + 0x28]
// 0069b251  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0069b255  53                   push ebx
// 0069b256  52                   push edx
// 0069b257  51                   push ecx
// 0069b258  50                   push eax
// 0069b259  e80252ffff           call 0x690460
// 0069b25e  be20000000           mov esi, 0x20
// 0069b263  83c410               add esp, 0x10
// 0069b266  3bfe                 cmp edi, esi
// 0069b268  7e6d                 jle 0x69b2d7
// 0069b26a  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0069b26e  8bff                 mov edi, edi
// 0069b270  8b542428             mov edx, dword ptr [esp + 0x28]
// 0069b274  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0069b277  8b08                 mov ecx, dword ptr [eax]
// 0069b279  52                   push edx
// 0069b27a  894804               mov dword ptr [eax + 4], ecx
// 0069b27d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0069b281  57                   push edi
// 0069b282  56                   push esi
// 0069b283  83ec14               sub esp, 0x14
// 0069b286  8bc4                 mov eax, esp
// 0069b288  8918                 mov dword ptr [eax], ebx
// 0069b28a  895804               mov dword ptr [eax + 4], ebx
// 0069b28d  895808               mov dword ptr [eax + 8], ebx
// 0069b290  89580c               mov dword ptr [eax + 0xc], ebx
// 0069b293  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0069b296  895010               mov dword ptr [eax + 0x10], edx
// 0069b299  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0069b29d  89642430             mov dword ptr [esp + 0x30], esp
// 0069b2a1  50                   push eax
// 0069b2a2  51                   push ecx
// 0069b2a3  e8c8ecffff           call 0x699f70
// 0069b2a8  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0069b2ac  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0069b2af  885c2448             mov byte ptr [esp + 0x48], bl
// 0069b2b3  8b542448             mov edx, dword ptr [esp + 0x48]
// 0069b2b7  52                   push edx
// 0069b2b8  8b542444             mov edx, dword ptr [esp + 0x44]
// 0069b2bc  51                   push ecx
// 0069b2bd  8b4804               mov ecx, dword ptr [eax + 4]
// 0069b2c0  57                   push edi
// 0069b2c1  03f6                 add esi, esi
// 0069b2c3  56                   push esi
// 0069b2c4  52                   push edx
// 0069b2c5  8b10                 mov edx, dword ptr [eax]
// 0069b2c7  51                   push ecx
// 0069b2c8  52                   push edx
// 0069b2c9  e8e28effff           call 0x6941b0
// 0069b2ce  03f6                 add esi, esi
// 0069b2d0  83c444               add esp, 0x44
// 0069b2d3  3bf7                 cmp esi, edi
// 0069b2d5  7c99                 jl 0x69b270
// 0069b2d7  5f                   pop edi
// 0069b2d8  5e                   pop esi
// 0069b2d9  5d                   pop ebp
// 0069b2da  5b                   pop ebx
// 0069b2db  59                   pop ecx
// 0069b2dc  c3                   ret 
// library ogre-1.6.4/OgreSceneManager.cpp (function ??$_Buffered_merge_sort@PAPAVLight@Ogre@@HPAV12@UlightsForShadowTextureLess@SceneManager@2@@std@@YAXPAPAVLight@Ogre@@0HAAV?$_Temp_iterator@PAVLight@Ogre@@@0@UlightsForShadowTextureLess@SceneManager@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreSceneManager.cpp
