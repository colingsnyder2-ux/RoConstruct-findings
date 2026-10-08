// roc 2007-03 00562570  unit: seg_00560000  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00562570
//
// 00562570  64a100000000         mov eax, dword ptr fs:[0]
// 00562576  6aff                 push -1
// 00562578  68e8397500           push 0x7539e8
// 0056257d  50                   push eax
// 0056257e  64892500000000       mov dword ptr fs:[0], esp
// 00562585  83ec08               sub esp, 8
// 00562588  56                   push esi
// 00562589  8bf1                 mov esi, ecx
// 0056258b  837e0400             cmp dword ptr [esi + 4], 0
// 0056258f  0f8580000000         jne 0x562615
// 00562595  8b06                 mov eax, dword ptr [esi]
// 00562597  57                   push edi
// 00562598  50                   push eax
// 00562599  e872feffff           call 0x562410
// 0056259e  50                   push eax
// 0056259f  8d4c2410             lea ecx, [esp + 0x10]
// 005625a3  51                   push ecx
// 005625a4  e8f778edff           call 0x439ea0
// 005625a9  83c40c               add esp, 0xc
// 005625ac  8b10                 mov edx, dword ptr [eax]
// 005625ae  83c004               add eax, 4
// 005625b1  50                   push eax
// 005625b2  8d4e08               lea ecx, [esi + 8]
// 005625b5  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005625bd  895604               mov dword ptr [esi + 4], edx
// 005625c0  e8abb9eaff           call 0x40df70
// 005625c5  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005625c9  85ff                 test edi, edi
// 005625cb  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005625d3  742a                 je 0x5625ff
// 005625d5  8d4704               lea eax, [edi + 4]
// 005625d8  83c9ff               or ecx, 0xffffffff
// 005625db  f00fc108             lock xadd dword ptr [eax], ecx
// 005625df  751e                 jne 0x5625ff
// 005625e1  8b17                 mov edx, dword ptr [edi]
// 005625e3  8b4204               mov eax, dword ptr [edx + 4]
// 005625e6  8bcf                 mov ecx, edi
// 005625e8  ffd0                 call eax
// 005625ea  8d4f08               lea ecx, [edi + 8]
// 005625ed  83caff               or edx, 0xffffffff
// 005625f0  f00fc111             lock xadd dword ptr [ecx], edx
// 005625f4  7509                 jne 0x5625ff
// 005625f6  8b07                 mov eax, dword ptr [edi]
// 005625f8  8b5008               mov edx, dword ptr [eax + 8]
// 005625fb  8bcf                 mov ecx, edi
// 005625fd  ffd2                 call edx
// 005625ff  8b4604               mov eax, dword ptr [esi + 4]
// 00562602  5f                   pop edi
// 00562603  5e                   pop esi
// 00562604  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00562608  64890d00000000       mov dword ptr fs:[0], ecx
// 0056260f  83c414               add esp, 0x14
// 00562612  c20400               ret 4
// 00562615  8b4604               mov eax, dword ptr [esi + 4]
// 00562618  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056261c  5e                   pop esi
// 0056261d  64890d00000000       mov dword ptr fs:[0], ecx
// 00562624  83c414               add esp, 0x14
// 00562627  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ?createService@?$ServiceClient@VSelection@RBX@@@RBX@@ABEPAVSelection@2@_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
