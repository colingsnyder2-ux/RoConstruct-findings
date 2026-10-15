// roc 2008-06 005e2160  unit: RBX::Lighting  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e2160
//
// 005e2160  64a100000000         mov eax, dword ptr fs:[0]
// 005e2166  6aff                 push -1
// 005e2168  6868917d00           push 0x7d9168
// 005e216d  50                   push eax
// 005e216e  64892500000000       mov dword ptr fs:[0], esp
// 005e2175  8b442410             mov eax, dword ptr [esp + 0x10]
// 005e2179  83ec08               sub esp, 8
// 005e217c  56                   push esi
// 005e217d  6a00                 push 0
// 005e217f  68f4969400           push 0x9496f4
// 005e2184  687c909200           push 0x92907c
// 005e2189  6a00                 push 0
// 005e218b  50                   push eax
// 005e218c  8bf1                 mov esi, ecx
// 005e218e  e833f60b00           call 0x6a17c6
// 005e2193  83c414               add esp, 0x14
// 005e2196  85c0                 test eax, eax
// 005e2198  0f84a8000000         je 0x5e2246
// 005e219e  50                   push eax
// 005e219f  8d4c2408             lea ecx, [esp + 8]
// 005e21a3  51                   push ecx
// 005e21a4  e897680300           call 0x618a40
// 005e21a9  83c408               add esp, 8
// 005e21ac  8b10                 mov edx, dword ptr [eax]
// 005e21ae  83c004               add eax, 4
// 005e21b1  50                   push eax
// 005e21b2  8d8ed8020000         lea ecx, [esi + 0x2d8]
// 005e21b8  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005e21c0  8996d4020000         mov dword ptr [esi + 0x2d4], edx
// 005e21c6  e8e503e2ff           call 0x4025b0
// 005e21cb  8b442408             mov eax, dword ptr [esp + 8]
// 005e21cf  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005e21d7  85c0                 test eax, eax
// 005e21d9  742e                 je 0x5e2209
// 005e21db  57                   push edi
// 005e21dc  8bf8                 mov edi, eax
// 005e21de  83c004               add eax, 4
// 005e21e1  83c9ff               or ecx, 0xffffffff
// 005e21e4  f00fc108             lock xadd dword ptr [eax], ecx
// 005e21e8  751e                 jne 0x5e2208
// 005e21ea  8b17                 mov edx, dword ptr [edi]
// 005e21ec  8b4204               mov eax, dword ptr [edx + 4]
// 005e21ef  8bcf                 mov ecx, edi
// 005e21f1  ffd0                 call eax
// 005e21f3  8d4f08               lea ecx, [edi + 8]
// 005e21f6  83caff               or edx, 0xffffffff
// 005e21f9  f00fc111             lock xadd dword ptr [ecx], edx
// 005e21fd  7509                 jne 0x5e2208
// 005e21ff  8b07                 mov eax, dword ptr [edi]
// 005e2201  8b5008               mov edx, dword ptr [eax + 8]
// 005e2204  8bcf                 mov ecx, edi
// 005e2206  ffd2                 call edx
// 005e2208  5f                   pop edi
// 005e2209  85f6                 test esi, esi
// 005e220b  7405                 je 0x5e2212
// 005e220d  8d4614               lea eax, [esi + 0x14]
// 005e2210  eb02                 jmp 0x5e2214
// 005e2212  33c0                 xor eax, eax
// 005e2214  50                   push eax
// 005e2215  b98ca89700           mov ecx, 0x97a88c
// 005e221a  e80194f8ff           call 0x56b620
// 005e221f  85c0                 test eax, eax
// 005e2221  740f                 je 0x5e2232
// 005e2223  6a01                 push 1
// 005e2225  8d4c2420             lea ecx, [esp + 0x20]
// 005e2229  51                   push ecx
// 005e222a  8d4810               lea ecx, [eax + 0x10]
// 005e222d  e8cefcffff           call 0x5e1f00
// 005e2232  56                   push esi
// 005e2233  e8882fe8ff           call 0x4651c0
// 005e2238  83c404               add esp, 4
// 005e223b  85c0                 test eax, eax
// 005e223d  7407                 je 0x5e2246
// 005e223f  8bc8                 mov ecx, eax
// 005e2241  e80a31f7ff           call 0x555350
// 005e2246  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e224a  5e                   pop esi
// 005e224b  64890d00000000       mov dword ptr fs:[0], ecx
// 005e2252  83c414               add esp, 0x14
// 005e2255  c20400               ret 4
// library rbxgs/roc_unit_00fd3441d97d4838.cpp (function ?onChildAdded@Lighting@RBX@@MAEXPAVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_00fd3441d97d4838.cpp
