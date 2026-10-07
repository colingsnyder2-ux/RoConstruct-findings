// roc 2007-08 005017f0  unit: G3D::Shader  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005017f0
//
// 005017f0  56                   push esi
// 005017f1  57                   push edi
// 005017f2  8b3dc4e87700         mov edi, dword ptr [0x77e8c4]
// 005017f8  8bf1                 mov esi, ecx
// 005017fa  8b4604               mov eax, dword ptr [esi + 4]
// 005017fd  6880fe7900           push 0x79fe80
// 00501802  50                   push eax
// 00501803  ffd7                 call edi
// 00501805  8b442414             mov eax, dword ptr [esp + 0x14]
// 00501809  83c408               add esp, 8
// 0050180c  83781810             cmp dword ptr [eax + 0x18], 0x10
// 00501810  7217                 jb 0x501829
// 00501812  8b4004               mov eax, dword ptr [eax + 4]
// 00501815  8b4e04               mov ecx, dword ptr [esi + 4]
// 00501818  50                   push eax
// 00501819  6868fe7900           push 0x79fe68
// 0050181e  51                   push ecx
// 0050181f  ffd7                 call edi
// 00501821  83c40c               add esp, 0xc
// 00501824  5f                   pop edi
// 00501825  5e                   pop esi
// 00501826  c20400               ret 4
// 00501829  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050182c  83c004               add eax, 4
// 0050182f  50                   push eax
// 00501830  6868fe7900           push 0x79fe68
// 00501835  51                   push ecx
// 00501836  ffd7                 call edi
// 00501838  83c40c               add esp, 0xc
// 0050183b  5f                   pop edi
// 0050183c  5e                   pop esi
// 0050183d  c20400               ret 4
// library g3d-6.09/G3Dcpp\Log.cpp (function ?section@Log@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Log.cpp
