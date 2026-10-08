// roc 2011-06 006d0cc0  unit: G3D::VColor3::V?$Value::?$BoundPropGetSet  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d0cc0
//
// 006d0cc0  83ec08               sub esp, 8
// 006d0cc3  55                   push ebp
// 006d0cc4  56                   push esi
// 006d0cc5  8bf1                 mov esi, ecx
// 006d0cc7  833efe               cmp dword ptr [esi], -2
// 006d0cca  bdffffff7f           mov ebp, 0x7fffffff
// 006d0ccf  751a                 jne 0x6d0ceb
// 006d0cd1  396e04               cmp dword ptr [esi + 4], ebp
// 006d0cd4  7515                 jne 0x6d0ceb
// 006d0cd6  8b442414             mov eax, dword ptr [esp + 0x14]
// 006d0cda  5e                   pop esi
// 006d0cdb  896804               mov dword ptr [eax + 4], ebp
// 006d0cde  c700feffffff         mov dword ptr [eax], 0xfffffffe
// 006d0ce4  5d                   pop ebp
// 006d0ce5  83c408               add esp, 8
// 006d0ce8  c20800               ret 8
// 006d0ceb  53                   push ebx
// 006d0cec  57                   push edi
// 006d0ced  8d442410             lea eax, [esp + 0x10]
// 006d0cf1  33db                 xor ebx, ebx
// 006d0cf3  50                   push eax
// 006d0cf4  895c2414             mov dword ptr [esp + 0x14], ebx
// 006d0cf8  895c2418             mov dword ptr [esp + 0x18], ebx
// 006d0cfc  e88ffdffff           call 0x6d0a90
// 006d0d01  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006d0d05  83f801               cmp eax, 1
// 006d0d08  7504                 jne 0x6d0d0e
// 006d0d0a  391f                 cmp dword ptr [edi], ebx
// 006d0d0c  7f22                 jg 0x6d0d30
// 006d0d0e  8d4c2410             lea ecx, [esp + 0x10]
// 006d0d12  51                   push ecx
// 006d0d13  8bce                 mov ecx, esi
// 006d0d15  895c2414             mov dword ptr [esp + 0x14], ebx
// 006d0d19  895c2418             mov dword ptr [esp + 0x18], ebx
// 006d0d1d  e86efdffff           call 0x6d0a90
// 006d0d22  83f8ff               cmp eax, -1
// 006d0d25  0f94c0               sete al
// 006d0d28  3ac3                 cmp al, bl
// 006d0d2a  741b                 je 0x6d0d47
// 006d0d2c  391f                 cmp dword ptr [edi], ebx
// 006d0d2e  7d17                 jge 0x6d0d47
// 006d0d30  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006d0d34  5f                   pop edi
// 006d0d35  5b                   pop ebx
// 006d0d36  5e                   pop esi
// 006d0d37  896804               mov dword ptr [eax + 4], ebp
// 006d0d3a  c700ffffffff         mov dword ptr [eax], 0xffffffff
// 006d0d40  5d                   pop ebp
// 006d0d41  83c408               add esp, 8
// 006d0d44  c20800               ret 8
// 006d0d47  8d542410             lea edx, [esp + 0x10]
// 006d0d4b  52                   push edx
// 006d0d4c  8bce                 mov ecx, esi
// 006d0d4e  895c2414             mov dword ptr [esp + 0x14], ebx
// 006d0d52  895c2418             mov dword ptr [esp + 0x18], ebx
// 006d0d56  e835fdffff           call 0x6d0a90
// 006d0d5b  83f801               cmp eax, 1
// 006d0d5e  7504                 jne 0x6d0d64
// 006d0d60  391f                 cmp dword ptr [edi], ebx
// 006d0d62  7c22                 jl 0x6d0d86
// 006d0d64  8d442410             lea eax, [esp + 0x10]
// 006d0d68  50                   push eax
// 006d0d69  8bce                 mov ecx, esi
// 006d0d6b  895c2414             mov dword ptr [esp + 0x14], ebx
// 006d0d6f  895c2418             mov dword ptr [esp + 0x18], ebx
// 006d0d73  e818fdffff           call 0x6d0a90
// 006d0d78  83f8ff               cmp eax, -1
// 006d0d7b  0f94c0               sete al
// 006d0d7e  3ac3                 cmp al, bl
// 006d0d80  741b                 je 0x6d0d9d
// 006d0d82  391f                 cmp dword ptr [edi], ebx
// 006d0d84  7e17                 jle 0x6d0d9d
// 006d0d86  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006d0d8a  5f                   pop edi
// 006d0d8b  8918                 mov dword ptr [eax], ebx
// 006d0d8d  5b                   pop ebx
// 006d0d8e  5e                   pop esi
// 006d0d8f  c7400400000080       mov dword ptr [eax + 4], 0x80000000
// 006d0d96  5d                   pop ebp
// 006d0d97  83c408               add esp, 8
// 006d0d9a  c20800               ret 8
// 006d0d9d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006d0da1  5f                   pop edi
// 006d0da2  5b                   pop ebx
// 006d0da3  5e                   pop esi
// 006d0da4  896804               mov dword ptr [eax + 4], ebp
// 006d0da7  c700feffffff         mov dword ptr [eax], 0xfffffffe
// 006d0dad  5d                   pop ebp
// 006d0dae  83c408               add esp, 8
// 006d0db1  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?mult_div_specials@?$int_adapter@_J@date_time@boost@@ABE?AV123@ABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
