// roc 2007-08 005ad720  unit: P8CRenderSettings::?$GetSetImpl  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ad720
//
// 005ad720  83ec08               sub esp, 8
// 005ad723  55                   push ebp
// 005ad724  56                   push esi
// 005ad725  8bf1                 mov esi, ecx
// 005ad727  833efe               cmp dword ptr [esi], -2
// 005ad72a  bdffffff7f           mov ebp, 0x7fffffff
// 005ad72f  751a                 jne 0x5ad74b
// 005ad731  396e04               cmp dword ptr [esi + 4], ebp
// 005ad734  7515                 jne 0x5ad74b
// 005ad736  8b442414             mov eax, dword ptr [esp + 0x14]
// 005ad73a  5e                   pop esi
// 005ad73b  896804               mov dword ptr [eax + 4], ebp
// 005ad73e  c700feffffff         mov dword ptr [eax], 0xfffffffe
// 005ad744  5d                   pop ebp
// 005ad745  83c408               add esp, 8
// 005ad748  c20800               ret 8
// 005ad74b  53                   push ebx
// 005ad74c  57                   push edi
// 005ad74d  8d442410             lea eax, [esp + 0x10]
// 005ad751  33db                 xor ebx, ebx
// 005ad753  50                   push eax
// 005ad754  895c2414             mov dword ptr [esp + 0x14], ebx
// 005ad758  895c2418             mov dword ptr [esp + 0x18], ebx
// 005ad75c  e83ff7ffff           call 0x5acea0
// 005ad761  83f801               cmp eax, 1
// 005ad764  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005ad768  7504                 jne 0x5ad76e
// 005ad76a  391f                 cmp dword ptr [edi], ebx
// 005ad76c  7f22                 jg 0x5ad790
// 005ad76e  8d4c2410             lea ecx, [esp + 0x10]
// 005ad772  51                   push ecx
// 005ad773  8bce                 mov ecx, esi
// 005ad775  895c2414             mov dword ptr [esp + 0x14], ebx
// 005ad779  895c2418             mov dword ptr [esp + 0x18], ebx
// 005ad77d  e81ef7ffff           call 0x5acea0
// 005ad782  83f8ff               cmp eax, -1
// 005ad785  0f94c0               sete al
// 005ad788  3ac3                 cmp al, bl
// 005ad78a  741b                 je 0x5ad7a7
// 005ad78c  391f                 cmp dword ptr [edi], ebx
// 005ad78e  7d17                 jge 0x5ad7a7
// 005ad790  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005ad794  5f                   pop edi
// 005ad795  5b                   pop ebx
// 005ad796  5e                   pop esi
// 005ad797  896804               mov dword ptr [eax + 4], ebp
// 005ad79a  c700ffffffff         mov dword ptr [eax], 0xffffffff
// 005ad7a0  5d                   pop ebp
// 005ad7a1  83c408               add esp, 8
// 005ad7a4  c20800               ret 8
// 005ad7a7  8d542410             lea edx, [esp + 0x10]
// 005ad7ab  52                   push edx
// 005ad7ac  8bce                 mov ecx, esi
// 005ad7ae  895c2414             mov dword ptr [esp + 0x14], ebx
// 005ad7b2  895c2418             mov dword ptr [esp + 0x18], ebx
// 005ad7b6  e8e5f6ffff           call 0x5acea0
// 005ad7bb  83f801               cmp eax, 1
// 005ad7be  7504                 jne 0x5ad7c4
// 005ad7c0  391f                 cmp dword ptr [edi], ebx
// 005ad7c2  7c22                 jl 0x5ad7e6
// 005ad7c4  8d442410             lea eax, [esp + 0x10]
// 005ad7c8  50                   push eax
// 005ad7c9  8bce                 mov ecx, esi
// 005ad7cb  895c2414             mov dword ptr [esp + 0x14], ebx
// 005ad7cf  895c2418             mov dword ptr [esp + 0x18], ebx
// 005ad7d3  e8c8f6ffff           call 0x5acea0
// 005ad7d8  83f8ff               cmp eax, -1
// 005ad7db  0f94c0               sete al
// 005ad7de  3ac3                 cmp al, bl
// 005ad7e0  741b                 je 0x5ad7fd
// 005ad7e2  391f                 cmp dword ptr [edi], ebx
// 005ad7e4  7e17                 jle 0x5ad7fd
// 005ad7e6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005ad7ea  5f                   pop edi
// 005ad7eb  8918                 mov dword ptr [eax], ebx
// 005ad7ed  5b                   pop ebx
// 005ad7ee  5e                   pop esi
// 005ad7ef  c7400400000080       mov dword ptr [eax + 4], 0x80000000
// 005ad7f6  5d                   pop ebp
// 005ad7f7  83c408               add esp, 8
// 005ad7fa  c20800               ret 8
// 005ad7fd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005ad801  5f                   pop edi
// 005ad802  5b                   pop ebx
// 005ad803  5e                   pop esi
// 005ad804  896804               mov dword ptr [eax + 4], ebp
// 005ad807  c700feffffff         mov dword ptr [eax], 0xfffffffe
// 005ad80d  5d                   pop ebp
// 005ad80e  83c408               add esp, 8
// 005ad811  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?mult_div_specials@?$int_adapter@_J@date_time@boost@@ABE?AV123@ABH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
