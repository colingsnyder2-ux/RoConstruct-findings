// roc 2009-06 00678f60  unit: RBX::P8Lighting::?$GetSetImpl  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00678f60
//
// 00678f60  83ec08               sub esp, 8
// 00678f63  55                   push ebp
// 00678f64  56                   push esi
// 00678f65  8bf1                 mov esi, ecx
// 00678f67  833efe               cmp dword ptr [esi], -2
// 00678f6a  bdffffff7f           mov ebp, 0x7fffffff
// 00678f6f  751a                 jne 0x678f8b
// 00678f71  396e04               cmp dword ptr [esi + 4], ebp
// 00678f74  7515                 jne 0x678f8b
// 00678f76  8b442414             mov eax, dword ptr [esp + 0x14]
// 00678f7a  5e                   pop esi
// 00678f7b  896804               mov dword ptr [eax + 4], ebp
// 00678f7e  c700feffffff         mov dword ptr [eax], 0xfffffffe
// 00678f84  5d                   pop ebp
// 00678f85  83c408               add esp, 8
// 00678f88  c20800               ret 8
// 00678f8b  53                   push ebx
// 00678f8c  57                   push edi
// 00678f8d  8d442410             lea eax, [esp + 0x10]
// 00678f91  33db                 xor ebx, ebx
// 00678f93  50                   push eax
// 00678f94  895c2414             mov dword ptr [esp + 0x14], ebx
// 00678f98  895c2418             mov dword ptr [esp + 0x18], ebx
// 00678f9c  e81ffdffff           call 0x678cc0
// 00678fa1  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00678fa5  83f801               cmp eax, 1
// 00678fa8  7504                 jne 0x678fae
// 00678faa  391f                 cmp dword ptr [edi], ebx
// 00678fac  7f22                 jg 0x678fd0
// 00678fae  8d4c2410             lea ecx, [esp + 0x10]
// 00678fb2  51                   push ecx
// 00678fb3  8bce                 mov ecx, esi
// 00678fb5  895c2414             mov dword ptr [esp + 0x14], ebx
// 00678fb9  895c2418             mov dword ptr [esp + 0x18], ebx
// 00678fbd  e8fefcffff           call 0x678cc0
// 00678fc2  83f8ff               cmp eax, -1
// 00678fc5  0f94c0               sete al
// 00678fc8  3ac3                 cmp al, bl
// 00678fca  741b                 je 0x678fe7
// 00678fcc  391f                 cmp dword ptr [edi], ebx
// 00678fce  7d17                 jge 0x678fe7
// 00678fd0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00678fd4  5f                   pop edi
// 00678fd5  5b                   pop ebx
// 00678fd6  5e                   pop esi
// 00678fd7  896804               mov dword ptr [eax + 4], ebp
// 00678fda  c700ffffffff         mov dword ptr [eax], 0xffffffff
// 00678fe0  5d                   pop ebp
// 00678fe1  83c408               add esp, 8
// 00678fe4  c20800               ret 8
// 00678fe7  8d542410             lea edx, [esp + 0x10]
// 00678feb  52                   push edx
// 00678fec  8bce                 mov ecx, esi
// 00678fee  895c2414             mov dword ptr [esp + 0x14], ebx
// 00678ff2  895c2418             mov dword ptr [esp + 0x18], ebx
// 00678ff6  e8c5fcffff           call 0x678cc0
// 00678ffb  83f801               cmp eax, 1
// 00678ffe  7504                 jne 0x679004
// 00679000  391f                 cmp dword ptr [edi], ebx
// 00679002  7c22                 jl 0x679026
// 00679004  8d442410             lea eax, [esp + 0x10]
// 00679008  50                   push eax
// 00679009  8bce                 mov ecx, esi
// 0067900b  895c2414             mov dword ptr [esp + 0x14], ebx
// 0067900f  895c2418             mov dword ptr [esp + 0x18], ebx
// 00679013  e8a8fcffff           call 0x678cc0
// 00679018  83f8ff               cmp eax, -1
// 0067901b  0f94c0               sete al
// 0067901e  3ac3                 cmp al, bl
// 00679020  741b                 je 0x67903d
// 00679022  391f                 cmp dword ptr [edi], ebx
// 00679024  7e17                 jle 0x67903d
// 00679026  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0067902a  5f                   pop edi
// 0067902b  8918                 mov dword ptr [eax], ebx
// 0067902d  5b                   pop ebx
// 0067902e  5e                   pop esi
// 0067902f  c7400400000080       mov dword ptr [eax + 4], 0x80000000
// 00679036  5d                   pop ebp
// 00679037  83c408               add esp, 8
// 0067903a  c20800               ret 8
// 0067903d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00679041  5f                   pop edi
// 00679042  5b                   pop ebx
// 00679043  5e                   pop esi
// 00679044  896804               mov dword ptr [eax + 4], ebp
// 00679047  c700feffffff         mov dword ptr [eax], 0xfffffffe
// 0067904d  5d                   pop ebp
// 0067904e  83c408               add esp, 8
// 00679051  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?mult_div_specials@?$int_adapter@_J@date_time@boost@@ABE?AV123@ABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
