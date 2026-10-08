// from server: 100% by auto
// roc 2007-08 00470320  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00470320
//
// 00470320  68010c0000           push 0xc01
// 00470325  e866010100           call 0x480490
// 0047032a  83c404               add esp, 4
// 0047032d  807c240400           cmp byte ptr [esp + 4], 0
// 00470332  8d8800fcffff         lea ecx, [eax - 0x400]
// 00470338  7418                 je 0x470352
// 0047033a  83f903               cmp ecx, 3
// 0047033d  772a                 ja 0x470369
// 0047033f  ff248d6c034700       jmp dword ptr [ecx*4 + 0x47036c]
// 00470346  b802040000           mov eax, 0x402
// 0047034b  c3                   ret 
// 0047034c  b803040000           mov eax, 0x403
// 00470351  c3                   ret 
// 00470352  83f903               cmp ecx, 3
// 00470355  7712                 ja 0x470369
// 00470357  ff248d7c034700       jmp dword ptr [ecx*4 + 0x47037c]
// 0047035e  b800040000           mov eax, 0x400
// 00470363  c3                   ret 
// 00470364  b801040000           mov eax, 0x401
// 00470369  c3                   ret 
// 0047036a  8bff                 mov edi, edi
// 0047036c  46                   inc esi
// 0047036d  034700               add eax, dword ptr [edi]
// 00470370  4c                   dec esp
// 00470371  034700               add eax, dword ptr [edi]
// 00470374  46                   inc esi
// 00470375  034700               add eax, dword ptr [edi]
// 00470378  4c                   dec esp
// 00470379  034700               add eax, dword ptr [edi]
// 0047037c  5e                   pop esi
// 0047037d  034700               add eax, dword ptr [edi]
// 00470380  64034700             add eax, dword ptr fs:[edi]
// 00470384  5e                   pop esi
// 00470385  034700               add eax, dword ptr [edi]
// 00470388  64034700             add eax, dword ptr fs:[edi]
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?getCurrentBuffer@G3D@@YAI_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
