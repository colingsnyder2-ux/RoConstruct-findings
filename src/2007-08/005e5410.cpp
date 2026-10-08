// roc 2007-08 005e5410  unit: RBX::VInstance::?$FilteredSelection  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e5410
//
// 005e5410  64a100000000         mov eax, dword ptr fs:[0]
// 005e5416  6aff                 push -1
// 005e5418  68d8bc7500           push 0x75bcd8
// 005e541d  50                   push eax
// 005e541e  64892500000000       mov dword ptr fs:[0], esp
// 005e5425  83ec08               sub esp, 8
// 005e5428  56                   push esi
// 005e5429  8bf1                 mov esi, ecx
// 005e542b  837e0400             cmp dword ptr [esi + 4], 0
// 005e542f  0f8580000000         jne 0x5e54b5
// 005e5435  8b06                 mov eax, dword ptr [esi]
// 005e5437  57                   push edi
// 005e5438  50                   push eax
// 005e5439  e882ffffff           call 0x5e53c0
// 005e543e  50                   push eax
// 005e543f  8d4c2410             lea ecx, [esp + 0x10]
// 005e5443  51                   push ecx
// 005e5444  e897f5ffff           call 0x5e49e0
// 005e5449  83c40c               add esp, 0xc
// 005e544c  8b10                 mov edx, dword ptr [eax]
// 005e544e  83c004               add eax, 4
// 005e5451  50                   push eax
// 005e5452  8d4e08               lea ecx, [esi + 8]
// 005e5455  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005e545d  895604               mov dword ptr [esi + 4], edx
// 005e5460  e8fbd5e1ff           call 0x402a60
// 005e5465  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005e5469  85ff                 test edi, edi
// 005e546b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005e5473  742a                 je 0x5e549f
// 005e5475  8d4704               lea eax, [edi + 4]
// 005e5478  83c9ff               or ecx, 0xffffffff
// 005e547b  f00fc108             lock xadd dword ptr [eax], ecx
// 005e547f  751e                 jne 0x5e549f
// 005e5481  8b17                 mov edx, dword ptr [edi]
// 005e5483  8b4204               mov eax, dword ptr [edx + 4]
// 005e5486  8bcf                 mov ecx, edi
// 005e5488  ffd0                 call eax
// 005e548a  8d4f08               lea ecx, [edi + 8]
// 005e548d  83caff               or edx, 0xffffffff
// 005e5490  f00fc111             lock xadd dword ptr [ecx], edx
// 005e5494  7509                 jne 0x5e549f
// 005e5496  8b07                 mov eax, dword ptr [edi]
// 005e5498  8b5008               mov edx, dword ptr [eax + 8]
// 005e549b  8bcf                 mov ecx, edi
// 005e549d  ffd2                 call edx
// 005e549f  8b4604               mov eax, dword ptr [esi + 4]
// 005e54a2  5f                   pop edi
// 005e54a3  5e                   pop esi
// 005e54a4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e54a8  64890d00000000       mov dword ptr fs:[0], ecx
// 005e54af  83c414               add esp, 0x14
// 005e54b2  c20400               ret 4
// 005e54b5  8b4604               mov eax, dword ptr [esi + 4]
// 005e54b8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e54bc  5e                   pop esi
// 005e54bd  64890d00000000       mov dword ptr fs:[0], ecx
// 005e54c4  83c414               add esp, 0x14
// 005e54c7  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ?createService@?$ServiceClient@VSelection@RBX@@@RBX@@ABEPAVSelection@2@_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
