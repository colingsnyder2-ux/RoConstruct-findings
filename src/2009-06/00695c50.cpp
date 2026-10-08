// roc 2009-06 00695c50  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 338 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00695c50
//
// 00695c50  6aff                 push -1
// 00695c52  68e8a68600           push 0x86a6e8
// 00695c57  64a100000000         mov eax, dword ptr fs:[0]
// 00695c5d  50                   push eax
// 00695c5e  64892500000000       mov dword ptr fs:[0], esp
// 00695c65  83ec08               sub esp, 8
// 00695c68  53                   push ebx
// 00695c69  56                   push esi
// 00695c6a  8b742424             mov esi, dword ptr [esp + 0x24]
// 00695c6e  57                   push edi
// 00695c6f  6a4e                 push 0x4e
// 00695c71  56                   push esi
// 00695c72  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00695c7a  e8d1380200           call 0x6b9550
// 00695c7f  6a08                 push 8
// 00695c81  56                   push esi
// 00695c82  e849410200           call 0x6b9dd0
// 00695c87  8bf8                 mov edi, eax
// 00695c89  83c410               add esp, 0x10
// 00695c8c  85ff                 test edi, edi
// 00695c8e  740d                 je 0x695c9d
// 00695c90  c70700000000         mov dword ptr [edi], 0
// 00695c96  c7470400000000       mov dword ptr [edi + 4], 0
// 00695c9d  a14ce2a100           mov eax, dword ptr [0xa1e24c]
// 00695ca2  50                   push eax
// 00695ca3  68f0d8ffff           push 0xffffd8f0
// 00695ca8  56                   push esi
// 00695ca9  e822390200           call 0x6b95d0
// 00695cae  6afe                 push -2
// 00695cb0  56                   push esi
// 00695cb1  e8aa3c0200           call 0x6b9960
// 00695cb6  68eed8ffff           push 0xffffd8ee
// 00695cbb  56                   push esi
// 00695cbc  e81f3b0200           call 0x6b97e0
// 00695cc1  6a0c                 push 0xc
// 00695cc3  e8702d0800           call 0x718a38
// 00695cc8  83c420               add esp, 0x20
// 00695ccb  85c0                 test eax, eax
// 00695ccd  742e                 je 0x695cfd
// 00695ccf  c70000000000         mov dword ptr [eax], 0
// 00695cd5  8b0d78f1a400         mov ecx, dword ptr [0xa4f178]
// 00695cdb  894804               mov dword ptr [eax + 4], ecx
// 00695cde  8b157cf1a400         mov edx, dword ptr [0xa4f17c]
// 00695ce4  8bca                 mov ecx, edx
// 00695ce6  895008               mov dword ptr [eax + 8], edx
// 00695ce9  85c9                 test ecx, ecx
// 00695ceb  740c                 je 0x695cf9
// 00695ced  83c104               add ecx, 4
// 00695cf0  ba01000000           mov edx, 1
// 00695cf5  f00fc111             lock xadd dword ptr [ecx], edx
// 00695cf9  8bf0                 mov esi, eax
// 00695cfb  eb02                 jmp 0x695cff
// 00695cfd  33f6                 xor esi, esi
// 00695cff  56                   push esi
// 00695d00  8d4c2414             lea ecx, [esp + 0x14]
// 00695d04  89742410             mov dword ptr [esp + 0x10], esi
// 00695d08  e883feffff           call 0x695b90
// 00695d0d  56                   push esi
// 00695d0e  8d442414             lea eax, [esp + 0x14]
// 00695d12  56                   push esi
// 00695d13  50                   push eax
// 00695d14  e8c7ecfdff           call 0x6749e0
// 00695d19  83c40c               add esp, 0xc
// 00695d1c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00695d20  8d542410             lea edx, [esp + 0x10]
// 00695d24  890f                 mov dword ptr [edi], ecx
// 00695d26  8d5f04               lea ebx, [edi + 4]
// 00695d29  52                   push edx
// 00695d2a  8bcb                 mov ecx, ebx
// 00695d2c  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00695d34  e8c7c7d6ff           call 0x402500
// 00695d39  8b742410             mov esi, dword ptr [esp + 0x10]
// 00695d3d  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00695d45  85f6                 test esi, esi
// 00695d47  742a                 je 0x695d73
// 00695d49  8d4604               lea eax, [esi + 4]
// 00695d4c  83c9ff               or ecx, 0xffffffff
// 00695d4f  f00fc108             lock xadd dword ptr [eax], ecx
// 00695d53  751e                 jne 0x695d73
// 00695d55  8b16                 mov edx, dword ptr [esi]
// 00695d57  8b4204               mov eax, dword ptr [edx + 4]
// 00695d5a  8bce                 mov ecx, esi
// 00695d5c  ffd0                 call eax
// 00695d5e  8d4e08               lea ecx, [esi + 8]
// 00695d61  83caff               or edx, 0xffffffff
// 00695d64  f00fc111             lock xadd dword ptr [ecx], edx
// 00695d68  7509                 jne 0x695d73
// 00695d6a  8b06                 mov eax, dword ptr [esi]
// 00695d6c  8b5008               mov edx, dword ptr [eax + 8]
// 00695d6f  8bce                 mov ecx, esi
// 00695d71  ffd2                 call edx
// 00695d73  8b0f                 mov ecx, dword ptr [edi]
// 00695d75  8b442424             mov eax, dword ptr [esp + 0x24]
// 00695d79  8908                 mov dword ptr [eax], ecx
// 00695d7b  8b0b                 mov ecx, dword ptr [ebx]
// 00695d7d  5f                   pop edi
// 00695d7e  5e                   pop esi
// 00695d7f  894804               mov dword ptr [eax + 4], ecx
// 00695d82  5b                   pop ebx
// 00695d83  85c9                 test ecx, ecx
// 00695d85  740c                 je 0x695d93
// 00695d87  83c104               add ecx, 4
// 00695d8a  ba01000000           mov edx, 1
// 00695d8f  f00fc111             lock xadd dword ptr [ecx], edx
// 00695d93  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00695d97  64890d00000000       mov dword ptr fs:[0], ecx
// 00695d9e  83c414               add esp, 0x14
// 00695da1  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ?create@Node@ThreadRef@Lua@RBX@@SA?AV?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
