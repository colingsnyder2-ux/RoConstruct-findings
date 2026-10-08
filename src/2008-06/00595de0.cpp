// roc 2008-06 00595de0  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00595de0
//
// 00595de0  6aff                 push -1
// 00595de2  68d8dd7c00           push 0x7cddd8
// 00595de7  64a100000000         mov eax, dword ptr fs:[0]
// 00595ded  50                   push eax
// 00595dee  64892500000000       mov dword ptr fs:[0], esp
// 00595df5  83ec08               sub esp, 8
// 00595df8  56                   push esi
// 00595df9  8bf1                 mov esi, ecx
// 00595dfb  57                   push edi
// 00595dfc  8b3e                 mov edi, dword ptr [esi]
// 00595dfe  8bcf                 mov ecx, edi
// 00595e00  897c2408             mov dword ptr [esp + 8], edi
// 00595e04  e8d7eeffff           call 0x594ce0
// 00595e09  c644240c01           mov byte ptr [esp + 0xc], 1
// 00595e0e  8b36                 mov esi, dword ptr [esi]
// 00595e10  8d4e08               lea ecx, [esi + 8]
// 00595e13  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00595e1b  e810bf0500           call 0x5f1d30
// 00595e20  8bcf                 mov ecx, edi
// 00595e22  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00595e2a  e8d1eeffff           call 0x594d00
// 00595e2f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00595e33  5f                   pop edi
// 00595e34  5e                   pop esi
// 00595e35  64890d00000000       mov dword ptr fs:[0], ecx
// 00595e3c  83c414               add esp, 0x14
// 00595e3f  c3                   ret 
// library rbxgs/util\boost.cpp (function ?wake@worker_thread@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
