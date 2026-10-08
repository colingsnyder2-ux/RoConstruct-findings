// roc 2008-06 00595d70  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00595d70
//
// 00595d70  6aff                 push -1
// 00595d72  68d8dd7c00           push 0x7cddd8
// 00595d77  64a100000000         mov eax, dword ptr fs:[0]
// 00595d7d  50                   push eax
// 00595d7e  64892500000000       mov dword ptr fs:[0], esp
// 00595d85  83ec08               sub esp, 8
// 00595d88  56                   push esi
// 00595d89  8bf1                 mov esi, ecx
// 00595d8b  57                   push edi
// 00595d8c  8b3e                 mov edi, dword ptr [esi]
// 00595d8e  8bcf                 mov ecx, edi
// 00595d90  897c2408             mov dword ptr [esp + 8], edi
// 00595d94  e847efffff           call 0x594ce0
// 00595d99  b101                 mov cl, 1
// 00595d9b  884c240c             mov byte ptr [esp + 0xc], cl
// 00595d9f  8b06                 mov eax, dword ptr [esi]
// 00595da1  884820               mov byte ptr [eax + 0x20], cl
// 00595da4  8b06                 mov eax, dword ptr [esi]
// 00595da6  8d4808               lea ecx, [eax + 8]
// 00595da9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00595db1  e87abf0500           call 0x5f1d30
// 00595db6  8bcf                 mov ecx, edi
// 00595db8  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00595dc0  e83befffff           call 0x594d00
// 00595dc5  8d4e08               lea ecx, [esi + 8]
// 00595dc8  e8830a0100           call 0x5a6850
// 00595dcd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00595dd1  5f                   pop edi
// 00595dd2  5e                   pop esi
// 00595dd3  64890d00000000       mov dword ptr fs:[0], ecx
// 00595dda  83c414               add esp, 0x14
// 00595ddd  c3                   ret 
// library rbxgs/util\boost.cpp (function ?join@worker_thread@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
