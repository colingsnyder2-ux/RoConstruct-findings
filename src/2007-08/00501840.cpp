// from server: 100% by auto
// roc 2007-08 00501840  unit: G3D::Shader  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00501840
//
// 00501840  56                   push esi
// 00501841  8bf1                 mov esi, ecx
// 00501843  e838000000           call 0x501880
// 00501848  8b442408             mov eax, dword ptr [esp + 8]
// 0050184c  83781810             cmp dword ptr [eax + 0x18], 0x10
// 00501850  7205                 jb 0x501857
// 00501852  8b4004               mov eax, dword ptr [eax + 4]
// 00501855  eb03                 jmp 0x50185a
// 00501857  83c004               add eax, 4
// 0050185a  50                   push eax
// 0050185b  8b4604               mov eax, dword ptr [esi + 4]
// 0050185e  68b8fe7900           push 0x79feb8
// 00501863  50                   push eax
// 00501864  ff15c4e87700         call dword ptr [0x77e8c4]
// 0050186a  83c40c               add esp, 0xc
// 0050186d  5e                   pop esi
// 0050186e  c20400               ret 4
// library g3d-6.09/G3Dcpp\Log.cpp (function ?println@Log@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Log.cpp
