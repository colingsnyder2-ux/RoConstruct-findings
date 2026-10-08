// roc 2007-03 004765e0  unit: seg_00470000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004765e0
//
// 004765e0  803d28768b0000       cmp byte ptr [0x8b7628], 0
// 004765e7  56                   push esi
// 004765e8  8bf1                 mov esi, ecx
// 004765ea  740d                 je 0x4765f9
// 004765ec  6a00                 push 0
// 004765ee  6892880000           push 0x8892
// 004765f3  ff1588808b00         call dword ptr [0x8b8088]
// 004765f9  ff158cec7700         call dword ptr [0x77ec8c]
// 004765ff  c6861201000000       mov byte ptr [esi + 0x112], 0
// 00476606  8b4638               mov eax, dword ptr [esi + 0x38]
// 00476609  85c0                 test eax, eax
// 0047660b  742c                 je 0x476639
// 0047660d  83c004               add eax, 4
// 00476610  50                   push eax
// 00476611  ff15a8d27700         call dword ptr [0x77d2a8]
// 00476617  85c0                 test eax, eax
// 00476619  7517                 jne 0x476632
// 0047661b  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0047661e  e89dcdfeff           call 0x4633c0
// 00476623  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00476626  85c9                 test ecx, ecx
// 00476628  7408                 je 0x476632
// 0047662a  8b01                 mov eax, dword ptr [ecx]
// 0047662c  8b10                 mov edx, dword ptr [eax]
// 0047662e  6a01                 push 1
// 00476630  ffd2                 call edx
// 00476632  c7463800000000       mov dword ptr [esi + 0x38], 0
// 00476639  5e                   pop esi
// 0047663a  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?endIndexedPrimitives@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
