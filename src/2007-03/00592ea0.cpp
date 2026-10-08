// roc 2007-03 00592ea0  unit: seg_00590000  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00592ea0
//
// 00592ea0  83ec08               sub esp, 8
// 00592ea3  55                   push ebp
// 00592ea4  56                   push esi
// 00592ea5  8bf1                 mov esi, ecx
// 00592ea7  833efe               cmp dword ptr [esi], -2
// 00592eaa  bdffffff7f           mov ebp, 0x7fffffff
// 00592eaf  751a                 jne 0x592ecb
// 00592eb1  396e04               cmp dword ptr [esi + 4], ebp
// 00592eb4  7515                 jne 0x592ecb
// 00592eb6  8b442414             mov eax, dword ptr [esp + 0x14]
// 00592eba  5e                   pop esi
// 00592ebb  896804               mov dword ptr [eax + 4], ebp
// 00592ebe  c700feffffff         mov dword ptr [eax], 0xfffffffe
// 00592ec4  5d                   pop ebp
// 00592ec5  83c408               add esp, 8
// 00592ec8  c20800               ret 8
// 00592ecb  53                   push ebx
// 00592ecc  57                   push edi
// 00592ecd  8d442410             lea eax, [esp + 0x10]
// 00592ed1  33db                 xor ebx, ebx
// 00592ed3  50                   push eax
// 00592ed4  895c2414             mov dword ptr [esp + 0x14], ebx
// 00592ed8  895c2418             mov dword ptr [esp + 0x18], ebx
// 00592edc  e86ff5ffff           call 0x592450
// 00592ee1  83f801               cmp eax, 1
// 00592ee4  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00592ee8  7504                 jne 0x592eee
// 00592eea  391f                 cmp dword ptr [edi], ebx
// 00592eec  7f22                 jg 0x592f10
// 00592eee  8d4c2410             lea ecx, [esp + 0x10]
// 00592ef2  51                   push ecx
// 00592ef3  8bce                 mov ecx, esi
// 00592ef5  895c2414             mov dword ptr [esp + 0x14], ebx
// 00592ef9  895c2418             mov dword ptr [esp + 0x18], ebx
// 00592efd  e84ef5ffff           call 0x592450
// 00592f02  83f8ff               cmp eax, -1
// 00592f05  0f94c0               sete al
// 00592f08  3ac3                 cmp al, bl
// 00592f0a  741b                 je 0x592f27
// 00592f0c  391f                 cmp dword ptr [edi], ebx
// 00592f0e  7d17                 jge 0x592f27
// 00592f10  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00592f14  5f                   pop edi
// 00592f15  5b                   pop ebx
// 00592f16  5e                   pop esi
// 00592f17  896804               mov dword ptr [eax + 4], ebp
// 00592f1a  c700ffffffff         mov dword ptr [eax], 0xffffffff
// 00592f20  5d                   pop ebp
// 00592f21  83c408               add esp, 8
// 00592f24  c20800               ret 8
// 00592f27  8d542410             lea edx, [esp + 0x10]
// 00592f2b  52                   push edx
// 00592f2c  8bce                 mov ecx, esi
// 00592f2e  895c2414             mov dword ptr [esp + 0x14], ebx
// 00592f32  895c2418             mov dword ptr [esp + 0x18], ebx
// 00592f36  e815f5ffff           call 0x592450
// 00592f3b  83f801               cmp eax, 1
// 00592f3e  7504                 jne 0x592f44
// 00592f40  391f                 cmp dword ptr [edi], ebx
// 00592f42  7c22                 jl 0x592f66
// 00592f44  8d442410             lea eax, [esp + 0x10]
// 00592f48  50                   push eax
// 00592f49  8bce                 mov ecx, esi
// 00592f4b  895c2414             mov dword ptr [esp + 0x14], ebx
// 00592f4f  895c2418             mov dword ptr [esp + 0x18], ebx
// 00592f53  e8f8f4ffff           call 0x592450
// 00592f58  83f8ff               cmp eax, -1
// 00592f5b  0f94c0               sete al
// 00592f5e  3ac3                 cmp al, bl
// 00592f60  741b                 je 0x592f7d
// 00592f62  391f                 cmp dword ptr [edi], ebx
// 00592f64  7e17                 jle 0x592f7d
// 00592f66  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00592f6a  5f                   pop edi
// 00592f6b  8918                 mov dword ptr [eax], ebx
// 00592f6d  5b                   pop ebx
// 00592f6e  5e                   pop esi
// 00592f6f  c7400400000080       mov dword ptr [eax + 4], 0x80000000
// 00592f76  5d                   pop ebp
// 00592f77  83c408               add esp, 8
// 00592f7a  c20800               ret 8
// 00592f7d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00592f81  5f                   pop edi
// 00592f82  5b                   pop ebx
// 00592f83  5e                   pop esi
// 00592f84  896804               mov dword ptr [eax + 4], ebp
// 00592f87  c700feffffff         mov dword ptr [eax], 0xfffffffe
// 00592f8d  5d                   pop ebp
// 00592f8e  83c408               add esp, 8
// 00592f91  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?mult_div_specials@?$int_adapter@_J@date_time@boost@@ABE?AV123@ABH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
