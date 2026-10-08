// roc 2007-03 00548770  unit: seg_00540000  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00548770
//
// 00548770  6aff                 push -1
// 00548772  68e82c7500           push 0x752ce8
// 00548777  64a100000000         mov eax, dword ptr fs:[0]
// 0054877d  50                   push eax
// 0054877e  64892500000000       mov dword ptr fs:[0], esp
// 00548785  83ec08               sub esp, 8
// 00548788  56                   push esi
// 00548789  8bf1                 mov esi, ecx
// 0054878b  57                   push edi
// 0054878c  8b3e                 mov edi, dword ptr [esi]
// 0054878e  8bcf                 mov ecx, edi
// 00548790  897c2408             mov dword ptr [esp + 8], edi
// 00548794  e8e7e21d00           call 0x726a80
// 00548799  b101                 mov cl, 1
// 0054879b  884c240c             mov byte ptr [esp + 0xc], cl
// 0054879f  8b06                 mov eax, dword ptr [esi]
// 005487a1  884820               mov byte ptr [eax + 0x20], cl
// 005487a4  8b06                 mov eax, dword ptr [esi]
// 005487a6  8d4808               lea ecx, [eax + 8]
// 005487a9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005487b1  e85aea1d00           call 0x727210
// 005487b6  8bcf                 mov ecx, edi
// 005487b8  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005487c0  e8dbe21d00           call 0x726aa0
// 005487c5  8d4e08               lea ecx, [esi + 8]
// 005487c8  e8a3e41d00           call 0x726c70
// 005487cd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005487d1  5f                   pop edi
// 005487d2  5e                   pop esi
// 005487d3  64890d00000000       mov dword ptr fs:[0], ecx
// 005487da  83c414               add esp, 0x14
// 005487dd  c3                   ret 
// library rbxgs/util\boost.cpp (function ?join@worker_thread@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
