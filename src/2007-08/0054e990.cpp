// roc 2007-08 0054e990  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054e990
//
// 0054e990  55                   push ebp
// 0054e991  8bec                 mov ebp, esp
// 0054e993  6aff                 push -1
// 0054e995  68e0277500           push 0x7527e0
// 0054e99a  64a100000000         mov eax, dword ptr fs:[0]
// 0054e9a0  50                   push eax
// 0054e9a1  64892500000000       mov dword ptr fs:[0], esp
// 0054e9a8  83ec38               sub esp, 0x38
// 0054e9ab  8b4508               mov eax, dword ptr [ebp + 8]
// 0054e9ae  53                   push ebx
// 0054e9af  56                   push esi
// 0054e9b0  57                   push edi
// 0054e9b1  8965f0               mov dword ptr [ebp - 0x10], esp
// 0054e9b4  6a01                 push 1
// 0054e9b6  33ff                 xor edi, edi
// 0054e9b8  50                   push eax
// 0054e9b9  8bf1                 mov esi, ecx
// 0054e9bb  897dfc               mov dword ptr [ebp - 4], edi
// 0054e9be  e85dfeffff           call 0x54e820
// 0054e9c3  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0054e9c6  897e50               mov dword ptr [esi + 0x50], edi
// 0054e9c9  5f                   pop edi
// 0054e9ca  5e                   pop esi
// 0054e9cb  64890d00000000       mov dword ptr fs:[0], ecx
// 0054e9d2  5b                   pop ebx
// 0054e9d3  8be5                 mov esp, ebp
// 0054e9d5  5d                   pop ebp
// 0054e9d6  c20400               ret 4
// 0054e9d9  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0054e9dc  51                   push ecx
// 0054e9dd  8d4dbc               lea ecx, [ebp - 0x44]
// 0054e9e0  e83bf7ffff           call 0x54e120
// 0054e9e5  6814a48500           push 0x85a414
// 0054e9ea  8d55bc               lea edx, [ebp - 0x44]
// 0054e9ed  52                   push edx
// 0054e9ee  e8ab210e00           call 0x630b9e
// copied from an identical function in another client (function ??$close@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@QAEXAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@12@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp