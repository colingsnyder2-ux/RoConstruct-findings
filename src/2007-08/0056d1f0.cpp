// roc 2007-08 0056d1f0  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 338 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056d1f0
//
// 0056d1f0  6aff                 push -1
// 0056d1f2  68d8bc7500           push 0x75bcd8
// 0056d1f7  64a100000000         mov eax, dword ptr fs:[0]
// 0056d1fd  50                   push eax
// 0056d1fe  64892500000000       mov dword ptr fs:[0], esp
// 0056d205  83ec08               sub esp, 8
// 0056d208  53                   push ebx
// 0056d209  56                   push esi
// 0056d20a  8b742424             mov esi, dword ptr [esp + 0x24]
// 0056d20e  57                   push edi
// 0056d20f  6a4e                 push 0x4e
// 0056d211  56                   push esi
// 0056d212  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0056d21a  e8610b0500           call 0x5bdd80
// 0056d21f  6a08                 push 8
// 0056d221  56                   push esi
// 0056d222  e889130500           call 0x5be5b0
// 0056d227  8bf8                 mov edi, eax
// 0056d229  83c410               add esp, 0x10
// 0056d22c  85ff                 test edi, edi
// 0056d22e  740d                 je 0x56d23d
// 0056d230  c70700000000         mov dword ptr [edi], 0
// 0056d236  c7470400000000       mov dword ptr [edi + 4], 0
// 0056d23d  a1d8f78900           mov eax, dword ptr [0x89f7d8]
// 0056d242  50                   push eax
// 0056d243  68f0d8ffff           push 0xffffd8f0
// 0056d248  56                   push esi
// 0056d249  e8b20b0500           call 0x5bde00
// 0056d24e  6afe                 push -2
// 0056d250  56                   push esi
// 0056d251  e80a0f0500           call 0x5be160
// 0056d256  68eed8ffff           push 0xffffd8ee
// 0056d25b  56                   push esi
// 0056d25c  e88f0d0500           call 0x5bdff0
// 0056d261  6a0c                 push 0xc
// 0056d263  e88e2c0c00           call 0x62fef6
// 0056d268  83c420               add esp, 0x20
// 0056d26b  85c0                 test eax, eax
// 0056d26d  742e                 je 0x56d29d
// 0056d26f  c70000000000         mov dword ptr [eax], 0
// 0056d275  8b0df8238c00         mov ecx, dword ptr [0x8c23f8]
// 0056d27b  894804               mov dword ptr [eax + 4], ecx
// 0056d27e  8b15fc238c00         mov edx, dword ptr [0x8c23fc]
// 0056d284  8bca                 mov ecx, edx
// 0056d286  85c9                 test ecx, ecx
// 0056d288  895008               mov dword ptr [eax + 8], edx
// 0056d28b  740c                 je 0x56d299
// 0056d28d  83c104               add ecx, 4
// 0056d290  ba01000000           mov edx, 1
// 0056d295  f00fc111             lock xadd dword ptr [ecx], edx
// 0056d299  8bf0                 mov esi, eax
// 0056d29b  eb02                 jmp 0x56d29f
// 0056d29d  33f6                 xor esi, esi
// 0056d29f  56                   push esi
// 0056d2a0  8d4c2414             lea ecx, [esp + 0x14]
// 0056d2a4  89742410             mov dword ptr [esp + 0x10], esi
// 0056d2a8  e893feffff           call 0x56d140
// 0056d2ad  56                   push esi
// 0056d2ae  8d442414             lea eax, [esp + 0x14]
// 0056d2b2  56                   push esi
// 0056d2b3  50                   push eax
// 0056d2b4  e867f9e9ff           call 0x40cc20
// 0056d2b9  83c40c               add esp, 0xc
// 0056d2bc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056d2c0  8d542410             lea edx, [esp + 0x10]
// 0056d2c4  890f                 mov dword ptr [edi], ecx
// 0056d2c6  8d5f04               lea ebx, [edi + 4]
// 0056d2c9  52                   push edx
// 0056d2ca  8bcb                 mov ecx, ebx
// 0056d2cc  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0056d2d4  e88757e9ff           call 0x402a60
// 0056d2d9  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056d2dd  85f6                 test esi, esi
// 0056d2df  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0056d2e7  742a                 je 0x56d313
// 0056d2e9  8d4604               lea eax, [esi + 4]
// 0056d2ec  83c9ff               or ecx, 0xffffffff
// 0056d2ef  f00fc108             lock xadd dword ptr [eax], ecx
// 0056d2f3  751e                 jne 0x56d313
// 0056d2f5  8b16                 mov edx, dword ptr [esi]
// 0056d2f7  8b4204               mov eax, dword ptr [edx + 4]
// 0056d2fa  8bce                 mov ecx, esi
// 0056d2fc  ffd0                 call eax
// 0056d2fe  8d4e08               lea ecx, [esi + 8]
// 0056d301  83caff               or edx, 0xffffffff
// 0056d304  f00fc111             lock xadd dword ptr [ecx], edx
// 0056d308  7509                 jne 0x56d313
// 0056d30a  8b06                 mov eax, dword ptr [esi]
// 0056d30c  8b5008               mov edx, dword ptr [eax + 8]
// 0056d30f  8bce                 mov ecx, esi
// 0056d311  ffd2                 call edx
// 0056d313  8b0f                 mov ecx, dword ptr [edi]
// 0056d315  8b442424             mov eax, dword ptr [esp + 0x24]
// 0056d319  8908                 mov dword ptr [eax], ecx
// 0056d31b  8b0b                 mov ecx, dword ptr [ebx]
// 0056d31d  85c9                 test ecx, ecx
// 0056d31f  5f                   pop edi
// 0056d320  5e                   pop esi
// 0056d321  894804               mov dword ptr [eax + 4], ecx
// 0056d324  5b                   pop ebx
// 0056d325  740c                 je 0x56d333
// 0056d327  83c104               add ecx, 4
// 0056d32a  ba01000000           mov edx, 1
// 0056d32f  f00fc111             lock xadd dword ptr [ecx], edx
// 0056d333  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056d337  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d33e  83c414               add esp, 0x14
// 0056d341  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ?create@Node@ThreadRef@Lua@RBX@@SA?AV?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
