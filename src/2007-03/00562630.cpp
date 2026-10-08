// roc 2007-03 00562630  unit: seg_00560000  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00562630
//
// 00562630  64a100000000         mov eax, dword ptr fs:[0]
// 00562636  6aff                 push -1
// 00562638  68e8397500           push 0x7539e8
// 0056263d  50                   push eax
// 0056263e  64892500000000       mov dword ptr fs:[0], esp
// 00562645  83ec08               sub esp, 8
// 00562648  56                   push esi
// 00562649  8bf1                 mov esi, ecx
// 0056264b  837e0400             cmp dword ptr [esi + 4], 0
// 0056264f  0f8580000000         jne 0x5626d5
// 00562655  8b06                 mov eax, dword ptr [esi]
// 00562657  57                   push edi
// 00562658  50                   push eax
// 00562659  e8f2c6efff           call 0x45ed50
// 0056265e  50                   push eax
// 0056265f  8d4c2410             lea ecx, [esp + 0x10]
// 00562663  51                   push ecx
// 00562664  e83778edff           call 0x439ea0
// 00562669  83c40c               add esp, 0xc
// 0056266c  8b10                 mov edx, dword ptr [eax]
// 0056266e  83c004               add eax, 4
// 00562671  50                   push eax
// 00562672  8d4e08               lea ecx, [esi + 8]
// 00562675  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0056267d  895604               mov dword ptr [esi + 4], edx
// 00562680  e8ebb8eaff           call 0x40df70
// 00562685  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00562689  85ff                 test edi, edi
// 0056268b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00562693  742a                 je 0x5626bf
// 00562695  8d4704               lea eax, [edi + 4]
// 00562698  83c9ff               or ecx, 0xffffffff
// 0056269b  f00fc108             lock xadd dword ptr [eax], ecx
// 0056269f  751e                 jne 0x5626bf
// 005626a1  8b17                 mov edx, dword ptr [edi]
// 005626a3  8b4204               mov eax, dword ptr [edx + 4]
// 005626a6  8bcf                 mov ecx, edi
// 005626a8  ffd0                 call eax
// 005626aa  8d4f08               lea ecx, [edi + 8]
// 005626ad  83caff               or edx, 0xffffffff
// 005626b0  f00fc111             lock xadd dword ptr [ecx], edx
// 005626b4  7509                 jne 0x5626bf
// 005626b6  8b07                 mov eax, dword ptr [edi]
// 005626b8  8b5008               mov edx, dword ptr [eax + 8]
// 005626bb  8bcf                 mov ecx, edi
// 005626bd  ffd2                 call edx
// 005626bf  8b4604               mov eax, dword ptr [esi + 4]
// 005626c2  5f                   pop edi
// 005626c3  5e                   pop esi
// 005626c4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005626c8  64890d00000000       mov dword ptr fs:[0], ecx
// 005626cf  83c414               add esp, 0x14
// 005626d2  c20400               ret 4
// 005626d5  8b4604               mov eax, dword ptr [esi + 4]
// 005626d8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005626dc  5e                   pop esi
// 005626dd  64890d00000000       mov dword ptr fs:[0], ecx
// 005626e4  83c414               add esp, 0x14
// 005626e7  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ?createService@?$ServiceClient@VSelection@RBX@@@RBX@@ABEPAVSelection@2@_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
