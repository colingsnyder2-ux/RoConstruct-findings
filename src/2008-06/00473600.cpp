// roc 2008-06 00473600  unit: G3D::ReferenceCountedObject  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00473600
//
// 00473600  68010c0000           push 0xc01
// 00473605  e8d6010100           call 0x4837e0
// 0047360a  83c404               add esp, 4
// 0047360d  807c240400           cmp byte ptr [esp + 4], 0
// 00473612  8d8800fcffff         lea ecx, [eax - 0x400]
// 00473618  7418                 je 0x473632
// 0047361a  83f903               cmp ecx, 3
// 0047361d  772a                 ja 0x473649
// 0047361f  ff248d4c364700       jmp dword ptr [ecx*4 + 0x47364c]
// 00473626  b802040000           mov eax, 0x402
// 0047362b  c3                   ret 
// 0047362c  b803040000           mov eax, 0x403
// 00473631  c3                   ret 
// 00473632  83f903               cmp ecx, 3
// 00473635  7712                 ja 0x473649
// 00473637  ff248d5c364700       jmp dword ptr [ecx*4 + 0x47365c]
// 0047363e  b800040000           mov eax, 0x400
// 00473643  c3                   ret 
// 00473644  b801040000           mov eax, 0x401
// 00473649  c3                   ret 
// 0047364a  8bff                 mov edi, edi
// 0047364c  263647               inc edi
// 0047364f  002c36               add byte ptr [esi + esi], ch
// 00473652  47                   inc edi
// 00473653  0026                 add byte ptr [esi], ah
// 00473655  3647                 inc edi
// 00473657  002c36               add byte ptr [esi + esi], ch
// 0047365a  47                   inc edi
// 0047365b  003e                 add byte ptr [esi], bh
// 0047365d  3647                 inc edi
// 0047365f  00443647             add byte ptr [esi + esi + 0x47], al
// 00473663  003e                 add byte ptr [esi], bh
// 00473665  3647                 inc edi
// 00473667  00443647             add byte ptr [esi + esi + 0x47], al
// library g3d-6.09-rbx2008/GLG3Dcpp\Texture.cpp (function ?getCurrentBuffer@G3D@@YAI_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 GLG3Dcpp/Texture.cpp
