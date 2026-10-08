// roc 2007-03 005cab20  unit: seg_005c0000  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005cab20
//
// 005cab20  64a100000000         mov eax, dword ptr fs:[0]
// 005cab26  6aff                 push -1
// 005cab28  68e8397500           push 0x7539e8
// 005cab2d  50                   push eax
// 005cab2e  64892500000000       mov dword ptr fs:[0], esp
// 005cab35  83ec08               sub esp, 8
// 005cab38  56                   push esi
// 005cab39  8bf1                 mov esi, ecx
// 005cab3b  837e0400             cmp dword ptr [esi + 4], 0
// 005cab3f  0f8580000000         jne 0x5cabc5
// 005cab45  8b06                 mov eax, dword ptr [esi]
// 005cab47  57                   push edi
// 005cab48  50                   push eax
// 005cab49  e882ffffff           call 0x5caad0
// 005cab4e  50                   push eax
// 005cab4f  8d4c2410             lea ecx, [esp + 0x10]
// 005cab53  51                   push ecx
// 005cab54  e85723fcff           call 0x58ceb0
// 005cab59  83c40c               add esp, 0xc
// 005cab5c  8b10                 mov edx, dword ptr [eax]
// 005cab5e  83c004               add eax, 4
// 005cab61  50                   push eax
// 005cab62  8d4e08               lea ecx, [esi + 8]
// 005cab65  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005cab6d  895604               mov dword ptr [esi + 4], edx
// 005cab70  e8fb33e4ff           call 0x40df70
// 005cab75  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005cab79  85ff                 test edi, edi
// 005cab7b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005cab83  742a                 je 0x5cabaf
// 005cab85  8d4704               lea eax, [edi + 4]
// 005cab88  83c9ff               or ecx, 0xffffffff
// 005cab8b  f00fc108             lock xadd dword ptr [eax], ecx
// 005cab8f  751e                 jne 0x5cabaf
// 005cab91  8b17                 mov edx, dword ptr [edi]
// 005cab93  8b4204               mov eax, dword ptr [edx + 4]
// 005cab96  8bcf                 mov ecx, edi
// 005cab98  ffd0                 call eax
// 005cab9a  8d4f08               lea ecx, [edi + 8]
// 005cab9d  83caff               or edx, 0xffffffff
// 005caba0  f00fc111             lock xadd dword ptr [ecx], edx
// 005caba4  7509                 jne 0x5cabaf
// 005caba6  8b07                 mov eax, dword ptr [edi]
// 005caba8  8b5008               mov edx, dword ptr [eax + 8]
// 005cabab  8bcf                 mov ecx, edi
// 005cabad  ffd2                 call edx
// 005cabaf  8b4604               mov eax, dword ptr [esi + 4]
// 005cabb2  5f                   pop edi
// 005cabb3  5e                   pop esi
// 005cabb4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cabb8  64890d00000000       mov dword ptr fs:[0], ecx
// 005cabbf  83c414               add esp, 0x14
// 005cabc2  c20400               ret 4
// 005cabc5  8b4604               mov eax, dword ptr [esi + 4]
// 005cabc8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005cabcc  5e                   pop esi
// 005cabcd  64890d00000000       mov dword ptr fs:[0], ecx
// 005cabd4  83c414               add esp, 0x14
// 005cabd7  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ?createService@?$ServiceClient@VSelection@RBX@@@RBX@@ABEPAVSelection@2@_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
