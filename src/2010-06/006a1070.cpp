// roc 2010-06 006a1070  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a1070
//
// 006a1070  6aff                 push -1
// 006a1072  6838279a00           push 0x9a2738
// 006a1077  64a100000000         mov eax, dword ptr fs:[0]
// 006a107d  50                   push eax
// 006a107e  64892500000000       mov dword ptr fs:[0], esp
// 006a1085  51                   push ecx
// 006a1086  8b442418             mov eax, dword ptr [esp + 0x18]
// 006a108a  56                   push esi
// 006a108b  57                   push edi
// 006a108c  8bf1                 mov esi, ecx
// 006a108e  50                   push eax
// 006a108f  8974240c             mov dword ptr [esp + 0xc], esi
// 006a1093  e848f6ffff           call 0x6a06e0
// 006a1098  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006a109c  6a00                 push 0
// 006a109e  57                   push edi
// 006a109f  8d4c2428             lea ecx, [esp + 0x28]
// 006a10a3  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 006a10ab  ff1504a59e00         call dword ptr [0x9ea504]
// 006a10b1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a10b5  897e18               mov dword ptr [esi + 0x18], edi
// 006a10b8  894614               mov dword ptr [esi + 0x14], eax
// 006a10bb  c7462400000000       mov dword ptr [esi + 0x24], 0
// 006a10c2  5f                   pop edi
// 006a10c3  8bc6                 mov eax, esi
// 006a10c5  5e                   pop esi
// 006a10c6  64890d00000000       mov dword ptr fs:[0], ecx
// 006a10cd  83c410               add esp, 0x10
// 006a10d0  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@23@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp