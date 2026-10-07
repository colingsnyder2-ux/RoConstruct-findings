// roc 2012-06 0059c3d0  unit: VAuthoringSettings::?$FactoryProduct  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059c3d0
//
// 0059c3d0  83ec10               sub esp, 0x10
// 0059c3d3  56                   push esi
// 0059c3d4  8bf1                 mov esi, ecx
// 0059c3d6  807e0c00             cmp byte ptr [esi + 0xc], 0
// 0059c3da  0f8592000000         jne 0x59c472
// 0059c3e0  8b5604               mov edx, dword ptr [esi + 4]
// 0059c3e3  53                   push ebx
// 0059c3e4  55                   push ebp
// 0059c3e5  57                   push edi
// 0059c3e6  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0059c3ea  85d2                 test edx, edx
// 0059c3ec  7628                 jbe 0x59c416
// 0059c3ee  8d4aff               lea ecx, [edx - 1]
// 0059c3f1  d1e9                 shr ecx, 1
// 0059c3f3  3bca                 cmp ecx, edx
// 0059c3f5  731f                 jae 0x59c416
// 0059c3f7  8b1f                 mov ebx, dword ptr [edi]
// 0059c3f9  8b6f04               mov ebp, dword ptr [edi + 4]
// 0059c3fc  8bc1                 mov eax, ecx
// 0059c3fe  c1e004               shl eax, 4
// 0059c401  0306                 add eax, dword ptr [esi]
// 0059c403  3b6804               cmp ebp, dword ptr [eax + 4]
// 0059c406  7249                 jb 0x59c451
// 0059c408  7704                 ja 0x59c40e
// 0059c40a  3b18                 cmp ebx, dword ptr [eax]
// 0059c40c  7243                 jb 0x59c451
// 0059c40e  41                   inc ecx
// 0059c40f  83c010               add eax, 0x10
// 0059c412  3bca                 cmp ecx, edx
// 0059c414  72ed                 jb 0x59c403
// 0059c416  8b4f04               mov ecx, dword ptr [edi + 4]
// 0059c419  8b07                 mov eax, dword ptr [edi]
// 0059c41b  8b542428             mov edx, dword ptr [esp + 0x28]
// 0059c41f  894c2414             mov dword ptr [esp + 0x14], ecx
// 0059c423  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059c427  89442410             mov dword ptr [esp + 0x10], eax
// 0059c42b  8b02                 mov eax, dword ptr [edx]
// 0059c42d  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0059c431  51                   push ecx
// 0059c432  8944241c             mov dword ptr [esp + 0x1c], eax
// 0059c436  52                   push edx
// 0059c437  8d442418             lea eax, [esp + 0x18]
// 0059c43b  50                   push eax
// 0059c43c  8bce                 mov ecx, esi
// 0059c43e  e83df4ffff           call 0x59b880
// 0059c443  5f                   pop edi
// 0059c444  5d                   pop ebp
// 0059c445  5b                   pop ebx
// 0059c446  c6460c01             mov byte ptr [esi + 0xc], 1
// 0059c44a  5e                   pop esi
// 0059c44b  83c410               add esp, 0x10
// 0059c44e  c21000               ret 0x10
// 0059c451  8b442430             mov eax, dword ptr [esp + 0x30]
// 0059c455  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059c459  8b542428             mov edx, dword ptr [esp + 0x28]
// 0059c45d  50                   push eax
// 0059c45e  51                   push ecx
// 0059c45f  52                   push edx
// 0059c460  57                   push edi
// 0059c461  8bce                 mov ecx, esi
// 0059c463  e888feffff           call 0x59c2f0
// 0059c468  5f                   pop edi
// 0059c469  5d                   pop ebp
// 0059c46a  5b                   pop ebx
// 0059c46b  5e                   pop esi
// 0059c46c  83c410               add esp, 0x10
// 0059c46f  c21000               ret 0x10
// 0059c472  8b442418             mov eax, dword ptr [esp + 0x18]
// 0059c476  8b5004               mov edx, dword ptr [eax + 4]
// 0059c479  8b08                 mov ecx, dword ptr [eax]
// 0059c47b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0059c47f  894c2404             mov dword ptr [esp + 4], ecx
// 0059c483  8b08                 mov ecx, dword ptr [eax]
// 0059c485  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059c489  89542408             mov dword ptr [esp + 8], edx
// 0059c48d  8b542424             mov edx, dword ptr [esp + 0x24]
// 0059c491  52                   push edx
// 0059c492  894c2410             mov dword ptr [esp + 0x10], ecx
// 0059c496  50                   push eax
// 0059c497  8d4c240c             lea ecx, [esp + 0xc]
// 0059c49b  51                   push ecx
// 0059c49c  8bce                 mov ecx, esi
// 0059c49e  e8ddf3ffff           call 0x59b880
// 0059c4a3  5e                   pop esi
// 0059c4a4  83c410               add esp, 0x10
// 0059c4a7  c21000               ret 0x10
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?PushSeries@?$Heap@_KPAUInternalPacket@RakNet@@$0A@@DataStructures@@QAEXAB_KABQAUInternalPacket@RakNet@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
