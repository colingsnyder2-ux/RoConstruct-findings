// roc 2007-03 005627b0  unit: seg_00560000  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005627b0
//
// 005627b0  64a100000000         mov eax, dword ptr fs:[0]
// 005627b6  6aff                 push -1
// 005627b8  68e8397500           push 0x7539e8
// 005627bd  50                   push eax
// 005627be  64892500000000       mov dword ptr fs:[0], esp
// 005627c5  83ec08               sub esp, 8
// 005627c8  56                   push esi
// 005627c9  8bf1                 mov esi, ecx
// 005627cb  837e0400             cmp dword ptr [esi + 4], 0
// 005627cf  0f8580000000         jne 0x562855
// 005627d5  8b06                 mov eax, dword ptr [esi]
// 005627d7  57                   push edi
// 005627d8  50                   push eax
// 005627d9  e892fbffff           call 0x562370
// 005627de  50                   push eax
// 005627df  8d4c2410             lea ecx, [esp + 0x10]
// 005627e3  51                   push ecx
// 005627e4  e8c7a60200           call 0x58ceb0
// 005627e9  83c40c               add esp, 0xc
// 005627ec  8b10                 mov edx, dword ptr [eax]
// 005627ee  83c004               add eax, 4
// 005627f1  50                   push eax
// 005627f2  8d4e08               lea ecx, [esi + 8]
// 005627f5  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005627fd  895604               mov dword ptr [esi + 4], edx
// 00562800  e86bb7eaff           call 0x40df70
// 00562805  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00562809  85ff                 test edi, edi
// 0056280b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00562813  742a                 je 0x56283f
// 00562815  8d4704               lea eax, [edi + 4]
// 00562818  83c9ff               or ecx, 0xffffffff
// 0056281b  f00fc108             lock xadd dword ptr [eax], ecx
// 0056281f  751e                 jne 0x56283f
// 00562821  8b17                 mov edx, dword ptr [edi]
// 00562823  8b4204               mov eax, dword ptr [edx + 4]
// 00562826  8bcf                 mov ecx, edi
// 00562828  ffd0                 call eax
// 0056282a  8d4f08               lea ecx, [edi + 8]
// 0056282d  83caff               or edx, 0xffffffff
// 00562830  f00fc111             lock xadd dword ptr [ecx], edx
// 00562834  7509                 jne 0x56283f
// 00562836  8b07                 mov eax, dword ptr [edi]
// 00562838  8b5008               mov edx, dword ptr [eax + 8]
// 0056283b  8bcf                 mov ecx, edi
// 0056283d  ffd2                 call edx
// 0056283f  8b4604               mov eax, dword ptr [esi + 4]
// 00562842  5f                   pop edi
// 00562843  5e                   pop esi
// 00562844  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00562848  64890d00000000       mov dword ptr fs:[0], ecx
// 0056284f  83c414               add esp, 0x14
// 00562852  c20400               ret 4
// 00562855  8b4604               mov eax, dword ptr [esi + 4]
// 00562858  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056285c  5e                   pop esi
// 0056285d  64890d00000000       mov dword ptr fs:[0], ecx
// 00562864  83c414               add esp, 0x14
// 00562867  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ?createService@?$ServiceClient@VSelection@RBX@@@RBX@@ABEPAVSelection@2@_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
