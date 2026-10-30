// roc 2011-06 006e21b0  unit: UString_sink::?$stream_buffer  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e21b0
//
// 006e21b0  6aff                 push -1
// 006e21b2  68883d9f00           push 0x9f3d88
// 006e21b7  64a100000000         mov eax, dword ptr fs:[0]
// 006e21bd  50                   push eax
// 006e21be  64892500000000       mov dword ptr fs:[0], esp
// 006e21c5  51                   push ecx
// 006e21c6  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e21ca  56                   push esi
// 006e21cb  57                   push edi
// 006e21cc  8bf1                 mov esi, ecx
// 006e21ce  50                   push eax
// 006e21cf  8974240c             mov dword ptr [esp + 0xc], esi
// 006e21d3  e888f9ffff           call 0x6e1b60
// 006e21d8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006e21dc  6a00                 push 0
// 006e21de  57                   push edi
// 006e21df  8d4c2428             lea ecx, [esp + 0x28]
// 006e21e3  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 006e21eb  ff152005a400         call dword ptr [0xa40520]
// 006e21f1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e21f5  897e18               mov dword ptr [esi + 0x18], edi
// 006e21f8  894614               mov dword ptr [esi + 0x14], eax
// 006e21fb  c7462400000000       mov dword ptr [esi + 0x24], 0
// 006e2202  5f                   pop edi
// 006e2203  8bc6                 mov eax, esi
// 006e2205  5e                   pop esi
// 006e2206  64890d00000000       mov dword ptr fs:[0], ecx
// 006e220d  83c410               add esp, 0x10
// 006e2210  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@23@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp