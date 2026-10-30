// roc 2009-12 00722e40  unit: UString_sink::?$stream_buffer  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00722e40
//
// 00722e40  6aff                 push -1
// 00722e42  6898eb9400           push 0x94eb98
// 00722e47  64a100000000         mov eax, dword ptr fs:[0]
// 00722e4d  50                   push eax
// 00722e4e  64892500000000       mov dword ptr fs:[0], esp
// 00722e55  51                   push ecx
// 00722e56  8b442418             mov eax, dword ptr [esp + 0x18]
// 00722e5a  56                   push esi
// 00722e5b  57                   push edi
// 00722e5c  8bf1                 mov esi, ecx
// 00722e5e  50                   push eax
// 00722e5f  8974240c             mov dword ptr [esp + 0xc], esi
// 00722e63  e8a8f5ffff           call 0x722410
// 00722e68  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00722e6c  6a00                 push 0
// 00722e6e  57                   push edi
// 00722e6f  8d4c2428             lea ecx, [esp + 0x28]
// 00722e73  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00722e7b  ff1504b69800         call dword ptr [0x98b604]
// 00722e81  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00722e85  897e18               mov dword ptr [esi + 0x18], edi
// 00722e88  894614               mov dword ptr [esi + 0x14], eax
// 00722e8b  c7462400000000       mov dword ptr [esi + 0x24], 0
// 00722e92  5f                   pop edi
// 00722e93  8bc6                 mov eax, esi
// 00722e95  5e                   pop esi
// 00722e96  64890d00000000       mov dword ptr fs:[0], ecx
// 00722e9d  83c410               add esp, 0x10
// 00722ea0  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@23@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp