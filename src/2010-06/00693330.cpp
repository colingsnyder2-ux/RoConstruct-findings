// roc 2010-06 00693330  unit: RBX::P8Lighting::?$GetSetImpl  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00693330
//
// 00693330  83ec08               sub esp, 8
// 00693333  55                   push ebp
// 00693334  56                   push esi
// 00693335  8bf1                 mov esi, ecx
// 00693337  833efe               cmp dword ptr [esi], -2
// 0069333a  bdffffff7f           mov ebp, 0x7fffffff
// 0069333f  751a                 jne 0x69335b
// 00693341  396e04               cmp dword ptr [esi + 4], ebp
// 00693344  7515                 jne 0x69335b
// 00693346  8b442414             mov eax, dword ptr [esp + 0x14]
// 0069334a  5e                   pop esi
// 0069334b  896804               mov dword ptr [eax + 4], ebp
// 0069334e  c700feffffff         mov dword ptr [eax], 0xfffffffe
// 00693354  5d                   pop ebp
// 00693355  83c408               add esp, 8
// 00693358  c20800               ret 8
// 0069335b  53                   push ebx
// 0069335c  57                   push edi
// 0069335d  8d442410             lea eax, [esp + 0x10]
// 00693361  33db                 xor ebx, ebx
// 00693363  50                   push eax
// 00693364  895c2414             mov dword ptr [esp + 0x14], ebx
// 00693368  895c2418             mov dword ptr [esp + 0x18], ebx
// 0069336c  e81ffdffff           call 0x693090
// 00693371  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00693375  83f801               cmp eax, 1
// 00693378  7504                 jne 0x69337e
// 0069337a  391f                 cmp dword ptr [edi], ebx
// 0069337c  7f22                 jg 0x6933a0
// 0069337e  8d4c2410             lea ecx, [esp + 0x10]
// 00693382  51                   push ecx
// 00693383  8bce                 mov ecx, esi
// 00693385  895c2414             mov dword ptr [esp + 0x14], ebx
// 00693389  895c2418             mov dword ptr [esp + 0x18], ebx
// 0069338d  e8fefcffff           call 0x693090
// 00693392  83f8ff               cmp eax, -1
// 00693395  0f94c0               sete al
// 00693398  3ac3                 cmp al, bl
// 0069339a  741b                 je 0x6933b7
// 0069339c  391f                 cmp dword ptr [edi], ebx
// 0069339e  7d17                 jge 0x6933b7
// 006933a0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006933a4  5f                   pop edi
// 006933a5  5b                   pop ebx
// 006933a6  5e                   pop esi
// 006933a7  896804               mov dword ptr [eax + 4], ebp
// 006933aa  c700ffffffff         mov dword ptr [eax], 0xffffffff
// 006933b0  5d                   pop ebp
// 006933b1  83c408               add esp, 8
// 006933b4  c20800               ret 8
// 006933b7  8d542410             lea edx, [esp + 0x10]
// 006933bb  52                   push edx
// 006933bc  8bce                 mov ecx, esi
// 006933be  895c2414             mov dword ptr [esp + 0x14], ebx
// 006933c2  895c2418             mov dword ptr [esp + 0x18], ebx
// 006933c6  e8c5fcffff           call 0x693090
// 006933cb  83f801               cmp eax, 1
// 006933ce  7504                 jne 0x6933d4
// 006933d0  391f                 cmp dword ptr [edi], ebx
// 006933d2  7c22                 jl 0x6933f6
// 006933d4  8d442410             lea eax, [esp + 0x10]
// 006933d8  50                   push eax
// 006933d9  8bce                 mov ecx, esi
// 006933db  895c2414             mov dword ptr [esp + 0x14], ebx
// 006933df  895c2418             mov dword ptr [esp + 0x18], ebx
// 006933e3  e8a8fcffff           call 0x693090
// 006933e8  83f8ff               cmp eax, -1
// 006933eb  0f94c0               sete al
// 006933ee  3ac3                 cmp al, bl
// 006933f0  741b                 je 0x69340d
// 006933f2  391f                 cmp dword ptr [edi], ebx
// 006933f4  7e17                 jle 0x69340d
// 006933f6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006933fa  5f                   pop edi
// 006933fb  8918                 mov dword ptr [eax], ebx
// 006933fd  5b                   pop ebx
// 006933fe  5e                   pop esi
// 006933ff  c7400400000080       mov dword ptr [eax + 4], 0x80000000
// 00693406  5d                   pop ebp
// 00693407  83c408               add esp, 8
// 0069340a  c20800               ret 8
// 0069340d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00693411  5f                   pop edi
// 00693412  5b                   pop ebx
// 00693413  5e                   pop esi
// 00693414  896804               mov dword ptr [eax + 4], ebp
// 00693417  c700feffffff         mov dword ptr [eax], 0xfffffffe
// 0069341d  5d                   pop ebp
// 0069341e  83c408               add esp, 8
// 00693421  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?mult_div_specials@?$int_adapter@_J@date_time@boost@@ABE?AV123@ABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
