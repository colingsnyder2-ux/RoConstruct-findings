// roc 2009-06 006856a0  unit: UString_sink::?$stream_buffer  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006856a0
//
// 006856a0  6aff                 push -1
// 006856a2  6808df8600           push 0x86df08
// 006856a7  64a100000000         mov eax, dword ptr fs:[0]
// 006856ad  50                   push eax
// 006856ae  64892500000000       mov dword ptr fs:[0], esp
// 006856b5  51                   push ecx
// 006856b6  8b442418             mov eax, dword ptr [esp + 0x18]
// 006856ba  56                   push esi
// 006856bb  57                   push edi
// 006856bc  8bf1                 mov esi, ecx
// 006856be  50                   push eax
// 006856bf  8974240c             mov dword ptr [esp + 0xc], esi
// 006856c3  e8a8fcffff           call 0x685370
// 006856c8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006856cc  6a00                 push 0
// 006856ce  57                   push edi
// 006856cf  8d4c2428             lea ecx, [esp + 0x28]
// 006856d3  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 006856db  ff15c4e38900         call dword ptr [0x89e3c4]
// 006856e1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006856e5  897e18               mov dword ptr [esi + 0x18], edi
// 006856e8  894614               mov dword ptr [esi + 0x14], eax
// 006856eb  c7462400000000       mov dword ptr [esi + 0x24], 0
// 006856f2  5f                   pop edi
// 006856f3  8bc6                 mov eax, esi
// 006856f5  5e                   pop esi
// 006856f6  64890d00000000       mov dword ptr fs:[0], ecx
// 006856fd  83c410               add esp, 0x10
// 00685700  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@23@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp