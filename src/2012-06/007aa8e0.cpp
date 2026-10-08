// roc 2012-06 007aa8e0  unit: RBX::VLighting::?$FactoryProduct  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007aa8e0
//
// 007aa8e0  83ec08               sub esp, 8
// 007aa8e3  55                   push ebp
// 007aa8e4  56                   push esi
// 007aa8e5  8bf1                 mov esi, ecx
// 007aa8e7  833efe               cmp dword ptr [esi], -2
// 007aa8ea  bdffffff7f           mov ebp, 0x7fffffff
// 007aa8ef  751a                 jne 0x7aa90b
// 007aa8f1  396e04               cmp dword ptr [esi + 4], ebp
// 007aa8f4  7515                 jne 0x7aa90b
// 007aa8f6  8b442414             mov eax, dword ptr [esp + 0x14]
// 007aa8fa  5e                   pop esi
// 007aa8fb  896804               mov dword ptr [eax + 4], ebp
// 007aa8fe  c700feffffff         mov dword ptr [eax], 0xfffffffe
// 007aa904  5d                   pop ebp
// 007aa905  83c408               add esp, 8
// 007aa908  c20800               ret 8
// 007aa90b  53                   push ebx
// 007aa90c  57                   push edi
// 007aa90d  8d442410             lea eax, [esp + 0x10]
// 007aa911  33db                 xor ebx, ebx
// 007aa913  50                   push eax
// 007aa914  895c2414             mov dword ptr [esp + 0x14], ebx
// 007aa918  895c2418             mov dword ptr [esp + 0x18], ebx
// 007aa91c  e85ffdffff           call 0x7aa680
// 007aa921  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007aa925  83f801               cmp eax, 1
// 007aa928  7504                 jne 0x7aa92e
// 007aa92a  391f                 cmp dword ptr [edi], ebx
// 007aa92c  7f22                 jg 0x7aa950
// 007aa92e  8d4c2410             lea ecx, [esp + 0x10]
// 007aa932  51                   push ecx
// 007aa933  8bce                 mov ecx, esi
// 007aa935  895c2414             mov dword ptr [esp + 0x14], ebx
// 007aa939  895c2418             mov dword ptr [esp + 0x18], ebx
// 007aa93d  e83efdffff           call 0x7aa680
// 007aa942  83f8ff               cmp eax, -1
// 007aa945  0f94c0               sete al
// 007aa948  3ac3                 cmp al, bl
// 007aa94a  741b                 je 0x7aa967
// 007aa94c  391f                 cmp dword ptr [edi], ebx
// 007aa94e  7d17                 jge 0x7aa967
// 007aa950  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007aa954  5f                   pop edi
// 007aa955  5b                   pop ebx
// 007aa956  5e                   pop esi
// 007aa957  896804               mov dword ptr [eax + 4], ebp
// 007aa95a  c700ffffffff         mov dword ptr [eax], 0xffffffff
// 007aa960  5d                   pop ebp
// 007aa961  83c408               add esp, 8
// 007aa964  c20800               ret 8
// 007aa967  8d542410             lea edx, [esp + 0x10]
// 007aa96b  52                   push edx
// 007aa96c  8bce                 mov ecx, esi
// 007aa96e  895c2414             mov dword ptr [esp + 0x14], ebx
// 007aa972  895c2418             mov dword ptr [esp + 0x18], ebx
// 007aa976  e805fdffff           call 0x7aa680
// 007aa97b  83f801               cmp eax, 1
// 007aa97e  7504                 jne 0x7aa984
// 007aa980  391f                 cmp dword ptr [edi], ebx
// 007aa982  7c22                 jl 0x7aa9a6
// 007aa984  8d442410             lea eax, [esp + 0x10]
// 007aa988  50                   push eax
// 007aa989  8bce                 mov ecx, esi
// 007aa98b  895c2414             mov dword ptr [esp + 0x14], ebx
// 007aa98f  895c2418             mov dword ptr [esp + 0x18], ebx
// 007aa993  e8e8fcffff           call 0x7aa680
// 007aa998  83f8ff               cmp eax, -1
// 007aa99b  0f94c0               sete al
// 007aa99e  3ac3                 cmp al, bl
// 007aa9a0  741b                 je 0x7aa9bd
// 007aa9a2  391f                 cmp dword ptr [edi], ebx
// 007aa9a4  7e17                 jle 0x7aa9bd
// 007aa9a6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007aa9aa  5f                   pop edi
// 007aa9ab  8918                 mov dword ptr [eax], ebx
// 007aa9ad  5b                   pop ebx
// 007aa9ae  5e                   pop esi
// 007aa9af  c7400400000080       mov dword ptr [eax + 4], 0x80000000
// 007aa9b6  5d                   pop ebp
// 007aa9b7  83c408               add esp, 8
// 007aa9ba  c20800               ret 8
// 007aa9bd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007aa9c1  5f                   pop edi
// 007aa9c2  5b                   pop ebx
// 007aa9c3  5e                   pop esi
// 007aa9c4  896804               mov dword ptr [eax + 4], ebp
// 007aa9c7  c700feffffff         mov dword ptr [eax], 0xfffffffe
// 007aa9cd  5d                   pop ebp
// 007aa9ce  83c408               add esp, 8
// 007aa9d1  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?mult_div_specials@?$int_adapter@_J@date_time@boost@@ABE?AV123@ABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
