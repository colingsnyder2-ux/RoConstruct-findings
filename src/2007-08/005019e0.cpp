// roc 2007-08 005019e0  unit: G3D::Shader  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005019e0
//
// 005019e0  56                   push esi
// 005019e1  8bf1                 mov esi, ecx
// 005019e3  e898feffff           call 0x501880
// 005019e8  8b442408             mov eax, dword ptr [esp + 8]
// 005019ec  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005019f0  7205                 jb 0x5019f7
// 005019f2  8b4004               mov eax, dword ptr [eax + 4]
// 005019f5  eb03                 jmp 0x5019fa
// 005019f7  83c004               add eax, 4
// 005019fa  50                   push eax
// 005019fb  8b4604               mov eax, dword ptr [esi + 4]
// 005019fe  685ca07800           push 0x78a05c
// 00501a03  50                   push eax
// 00501a04  ff15c4e87700         call dword ptr [0x77e8c4]
// 00501a0a  83c40c               add esp, 0xc
// 00501a0d  5e                   pop esi
// 00501a0e  c20400               ret 4
// library g3d-6.09/G3Dcpp\Log.cpp (function ?print@Log@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Log.cpp
