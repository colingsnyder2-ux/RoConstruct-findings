// roc 2010-06 006a10e0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a10e0
//
// 006a10e0  6aff                 push -1
// 006a10e2  68e8269a00           push 0x9a26e8
// 006a10e7  64a100000000         mov eax, dword ptr fs:[0]
// 006a10ed  50                   push eax
// 006a10ee  64892500000000       mov dword ptr fs:[0], esp
// 006a10f5  51                   push ecx
// 006a10f6  8b442418             mov eax, dword ptr [esp + 0x18]
// 006a10fa  56                   push esi
// 006a10fb  57                   push edi
// 006a10fc  8bf1                 mov esi, ecx
// 006a10fe  50                   push eax
// 006a10ff  8974240c             mov dword ptr [esp + 0xc], esi
// 006a1103  e888f9ffff           call 0x6a0a90
// 006a1108  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006a110c  6a00                 push 0
// 006a110e  57                   push edi
// 006a110f  8d4c2428             lea ecx, [esp + 0x28]
// 006a1113  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 006a111b  ff1504a59e00         call dword ptr [0x9ea504]
// 006a1121  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a1125  897e18               mov dword ptr [esi + 0x18], edi
// 006a1128  894614               mov dword ptr [esi + 0x14], eax
// 006a112b  c7462400000000       mov dword ptr [esi + 0x24], 0
// 006a1132  5f                   pop edi
// 006a1133  8bc6                 mov eax, esi
// 006a1135  5e                   pop esi
// 006a1136  64890d00000000       mov dword ptr fs:[0], ecx
// 006a113d  83c410               add esp, 0x10
// 006a1140  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@23@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp