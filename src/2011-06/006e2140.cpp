// roc 2011-06 006e2140  unit: UString_sink::?$stream_buffer  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e2140
//
// 006e2140  6aff                 push -1
// 006e2142  68d83d9f00           push 0x9f3dd8
// 006e2147  64a100000000         mov eax, dword ptr fs:[0]
// 006e214d  50                   push eax
// 006e214e  64892500000000       mov dword ptr fs:[0], esp
// 006e2155  51                   push ecx
// 006e2156  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e215a  56                   push esi
// 006e215b  57                   push edi
// 006e215c  8bf1                 mov esi, ecx
// 006e215e  50                   push eax
// 006e215f  8974240c             mov dword ptr [esp + 0xc], esi
// 006e2163  e898f6ffff           call 0x6e1800
// 006e2168  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006e216c  6a00                 push 0
// 006e216e  57                   push edi
// 006e216f  8d4c2428             lea ecx, [esp + 0x28]
// 006e2173  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 006e217b  ff152005a400         call dword ptr [0xa40520]
// 006e2181  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e2185  897e18               mov dword ptr [esi + 0x18], edi
// 006e2188  894614               mov dword ptr [esi + 0x14], eax
// 006e218b  c7462400000000       mov dword ptr [esi + 0x24], 0
// 006e2192  5f                   pop edi
// 006e2193  8bc6                 mov eax, esi
// 006e2195  5e                   pop esi
// 006e2196  64890d00000000       mov dword ptr fs:[0], ecx
// 006e219d  83c410               add esp, 0x10
// 006e21a0  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@23@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp