// roc 2008-06 00595a30  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00595a30
//
// 00595a30  6aff                 push -1
// 00595a32  68482f7d00           push 0x7d2f48
// 00595a37  64a100000000         mov eax, dword ptr fs:[0]
// 00595a3d  50                   push eax
// 00595a3e  64892500000000       mov dword ptr fs:[0], esp
// 00595a45  51                   push ecx
// 00595a46  56                   push esi
// 00595a47  8bf1                 mov esi, ecx
// 00595a49  89742404             mov dword ptr [esp + 4], esi
// 00595a4d  e83ef2ffff           call 0x594c90
// 00595a52  8d4e08               lea ecx, [esi + 8]
// 00595a55  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00595a5d  e86ec10500           call 0x5f1bd0
// 00595a62  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00595a66  c6462000             mov byte ptr [esi + 0x20], 0
// 00595a6a  8bc6                 mov eax, esi
// 00595a6c  5e                   pop esi
// 00595a6d  64890d00000000       mov dword ptr fs:[0], ecx
// 00595a74  83c410               add esp, 0x10
// 00595a77  c3                   ret 
// library rbxgs/util\boost.cpp (function ??0data@worker_thread@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
