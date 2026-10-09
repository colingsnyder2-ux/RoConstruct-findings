// roc 2009-12 00713540  unit: RBX::P8Smoke::?$GetSetImpl  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00713540
//
// 00713540  83ec08               sub esp, 8
// 00713543  55                   push ebp
// 00713544  56                   push esi
// 00713545  8bf1                 mov esi, ecx
// 00713547  833efe               cmp dword ptr [esi], -2
// 0071354a  bdffffff7f           mov ebp, 0x7fffffff
// 0071354f  751a                 jne 0x71356b
// 00713551  396e04               cmp dword ptr [esi + 4], ebp
// 00713554  7515                 jne 0x71356b
// 00713556  8b442414             mov eax, dword ptr [esp + 0x14]
// 0071355a  5e                   pop esi
// 0071355b  896804               mov dword ptr [eax + 4], ebp
// 0071355e  c700feffffff         mov dword ptr [eax], 0xfffffffe
// 00713564  5d                   pop ebp
// 00713565  83c408               add esp, 8
// 00713568  c20800               ret 8
// 0071356b  53                   push ebx
// 0071356c  57                   push edi
// 0071356d  8d442410             lea eax, [esp + 0x10]
// 00713571  33db                 xor ebx, ebx
// 00713573  50                   push eax
// 00713574  895c2414             mov dword ptr [esp + 0x14], ebx
// 00713578  895c2418             mov dword ptr [esp + 0x18], ebx
// 0071357c  e8fffcffff           call 0x713280
// 00713581  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00713585  83f801               cmp eax, 1
// 00713588  7504                 jne 0x71358e
// 0071358a  391f                 cmp dword ptr [edi], ebx
// 0071358c  7f22                 jg 0x7135b0
// 0071358e  8d4c2410             lea ecx, [esp + 0x10]
// 00713592  51                   push ecx
// 00713593  8bce                 mov ecx, esi
// 00713595  895c2414             mov dword ptr [esp + 0x14], ebx
// 00713599  895c2418             mov dword ptr [esp + 0x18], ebx
// 0071359d  e8defcffff           call 0x713280
// 007135a2  83f8ff               cmp eax, -1
// 007135a5  0f94c0               sete al
// 007135a8  3ac3                 cmp al, bl
// 007135aa  741b                 je 0x7135c7
// 007135ac  391f                 cmp dword ptr [edi], ebx
// 007135ae  7d17                 jge 0x7135c7
// 007135b0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007135b4  5f                   pop edi
// 007135b5  5b                   pop ebx
// 007135b6  5e                   pop esi
// 007135b7  896804               mov dword ptr [eax + 4], ebp
// 007135ba  c700ffffffff         mov dword ptr [eax], 0xffffffff
// 007135c0  5d                   pop ebp
// 007135c1  83c408               add esp, 8
// 007135c4  c20800               ret 8
// 007135c7  8d542410             lea edx, [esp + 0x10]
// 007135cb  52                   push edx
// 007135cc  8bce                 mov ecx, esi
// 007135ce  895c2414             mov dword ptr [esp + 0x14], ebx
// 007135d2  895c2418             mov dword ptr [esp + 0x18], ebx
// 007135d6  e8a5fcffff           call 0x713280
// 007135db  83f801               cmp eax, 1
// 007135de  7504                 jne 0x7135e4
// 007135e0  391f                 cmp dword ptr [edi], ebx
// 007135e2  7c22                 jl 0x713606
// 007135e4  8d442410             lea eax, [esp + 0x10]
// 007135e8  50                   push eax
// 007135e9  8bce                 mov ecx, esi
// 007135eb  895c2414             mov dword ptr [esp + 0x14], ebx
// 007135ef  895c2418             mov dword ptr [esp + 0x18], ebx
// 007135f3  e888fcffff           call 0x713280
// 007135f8  83f8ff               cmp eax, -1
// 007135fb  0f94c0               sete al
// 007135fe  3ac3                 cmp al, bl
// 00713600  741b                 je 0x71361d
// 00713602  391f                 cmp dword ptr [edi], ebx
// 00713604  7e17                 jle 0x71361d
// 00713606  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0071360a  5f                   pop edi
// 0071360b  8918                 mov dword ptr [eax], ebx
// 0071360d  5b                   pop ebx
// 0071360e  5e                   pop esi
// 0071360f  c7400400000080       mov dword ptr [eax + 4], 0x80000000
// 00713616  5d                   pop ebp
// 00713617  83c408               add esp, 8
// 0071361a  c20800               ret 8
// 0071361d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00713621  5f                   pop edi
// 00713622  5b                   pop ebx
// 00713623  5e                   pop esi
// 00713624  896804               mov dword ptr [eax + 4], ebp
// 00713627  c700feffffff         mov dword ptr [eax], 0xfffffffe
// 0071362d  5d                   pop ebp
// 0071362e  83c408               add esp, 8
// 00713631  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?mult_div_specials@?$int_adapter@_J@date_time@boost@@ABE?AV123@ABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
