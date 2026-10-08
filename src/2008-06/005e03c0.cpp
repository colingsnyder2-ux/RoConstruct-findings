// roc 2008-06 005e03c0  unit: RBX::P8Lighting::?$GetSetImpl  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e03c0
//
// 005e03c0  83ec08               sub esp, 8
// 005e03c3  55                   push ebp
// 005e03c4  56                   push esi
// 005e03c5  8bf1                 mov esi, ecx
// 005e03c7  833efe               cmp dword ptr [esi], -2
// 005e03ca  bdffffff7f           mov ebp, 0x7fffffff
// 005e03cf  751a                 jne 0x5e03eb
// 005e03d1  396e04               cmp dword ptr [esi + 4], ebp
// 005e03d4  7515                 jne 0x5e03eb
// 005e03d6  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e03da  5e                   pop esi
// 005e03db  896804               mov dword ptr [eax + 4], ebp
// 005e03de  c700feffffff         mov dword ptr [eax], 0xfffffffe
// 005e03e4  5d                   pop ebp
// 005e03e5  83c408               add esp, 8
// 005e03e8  c20800               ret 8
// 005e03eb  53                   push ebx
// 005e03ec  57                   push edi
// 005e03ed  8d442410             lea eax, [esp + 0x10]
// 005e03f1  33db                 xor ebx, ebx
// 005e03f3  50                   push eax
// 005e03f4  895c2414             mov dword ptr [esp + 0x14], ebx
// 005e03f8  895c2418             mov dword ptr [esp + 0x18], ebx
// 005e03fc  e8dff4ffff           call 0x5df8e0
// 005e0401  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005e0405  83f801               cmp eax, 1
// 005e0408  7504                 jne 0x5e040e
// 005e040a  391f                 cmp dword ptr [edi], ebx
// 005e040c  7f22                 jg 0x5e0430
// 005e040e  8d4c2410             lea ecx, [esp + 0x10]
// 005e0412  51                   push ecx
// 005e0413  8bce                 mov ecx, esi
// 005e0415  895c2414             mov dword ptr [esp + 0x14], ebx
// 005e0419  895c2418             mov dword ptr [esp + 0x18], ebx
// 005e041d  e8bef4ffff           call 0x5df8e0
// 005e0422  83f8ff               cmp eax, -1
// 005e0425  0f94c0               sete al
// 005e0428  3ac3                 cmp al, bl
// 005e042a  741b                 je 0x5e0447
// 005e042c  391f                 cmp dword ptr [edi], ebx
// 005e042e  7d17                 jge 0x5e0447
// 005e0430  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005e0434  5f                   pop edi
// 005e0435  5b                   pop ebx
// 005e0436  5e                   pop esi
// 005e0437  896804               mov dword ptr [eax + 4], ebp
// 005e043a  c700ffffffff         mov dword ptr [eax], 0xffffffff
// 005e0440  5d                   pop ebp
// 005e0441  83c408               add esp, 8
// 005e0444  c20800               ret 8
// 005e0447  8d542410             lea edx, [esp + 0x10]
// 005e044b  52                   push edx
// 005e044c  8bce                 mov ecx, esi
// 005e044e  895c2414             mov dword ptr [esp + 0x14], ebx
// 005e0452  895c2418             mov dword ptr [esp + 0x18], ebx
// 005e0456  e885f4ffff           call 0x5df8e0
// 005e045b  83f801               cmp eax, 1
// 005e045e  7504                 jne 0x5e0464
// 005e0460  391f                 cmp dword ptr [edi], ebx
// 005e0462  7c22                 jl 0x5e0486
// 005e0464  8d442410             lea eax, [esp + 0x10]
// 005e0468  50                   push eax
// 005e0469  8bce                 mov ecx, esi
// 005e046b  895c2414             mov dword ptr [esp + 0x14], ebx
// 005e046f  895c2418             mov dword ptr [esp + 0x18], ebx
// 005e0473  e868f4ffff           call 0x5df8e0
// 005e0478  83f8ff               cmp eax, -1
// 005e047b  0f94c0               sete al
// 005e047e  3ac3                 cmp al, bl
// 005e0480  741b                 je 0x5e049d
// 005e0482  391f                 cmp dword ptr [edi], ebx
// 005e0484  7e17                 jle 0x5e049d
// 005e0486  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005e048a  5f                   pop edi
// 005e048b  8918                 mov dword ptr [eax], ebx
// 005e048d  5b                   pop ebx
// 005e048e  5e                   pop esi
// 005e048f  c7400400000080       mov dword ptr [eax + 4], 0x80000000
// 005e0496  5d                   pop ebp
// 005e0497  83c408               add esp, 8
// 005e049a  c20800               ret 8
// 005e049d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005e04a1  5f                   pop edi
// 005e04a2  5b                   pop ebx
// 005e04a3  5e                   pop esi
// 005e04a4  896804               mov dword ptr [eax + 4], ebp
// 005e04a7  c700feffffff         mov dword ptr [eax], 0xfffffffe
// 005e04ad  5d                   pop ebp
// 005e04ae  83c408               add esp, 8
// 005e04b1  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?mult_div_specials@?$int_adapter@_J@date_time@boost@@ABE?AV123@ABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
