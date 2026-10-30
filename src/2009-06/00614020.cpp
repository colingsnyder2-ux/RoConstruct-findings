// roc 2009-06 00614020  unit: UString_sink::?$stream_buffer  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00614020
//
// 00614020  6aff                 push -1
// 00614022  68287d8600           push 0x867d28
// 00614027  64a100000000         mov eax, dword ptr fs:[0]
// 0061402d  50                   push eax
// 0061402e  64892500000000       mov dword ptr fs:[0], esp
// 00614035  51                   push ecx
// 00614036  8b442418             mov eax, dword ptr [esp + 0x18]
// 0061403a  56                   push esi
// 0061403b  57                   push edi
// 0061403c  8bf1                 mov esi, ecx
// 0061403e  50                   push eax
// 0061403f  8974240c             mov dword ptr [esp + 0xc], esi
// 00614043  e878f9ffff           call 0x6139c0
// 00614048  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0061404c  6a00                 push 0
// 0061404e  57                   push edi
// 0061404f  8d4c2428             lea ecx, [esp + 0x28]
// 00614053  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0061405b  ff15c4e38900         call dword ptr [0x89e3c4]
// 00614061  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00614065  897e18               mov dword ptr [esi + 0x18], edi
// 00614068  894614               mov dword ptr [esi + 0x14], eax
// 0061406b  c7462400000000       mov dword ptr [esi + 0x24], 0
// 00614072  5f                   pop edi
// 00614073  8bc6                 mov eax, esi
// 00614075  5e                   pop esi
// 00614076  64890d00000000       mov dword ptr fs:[0], ecx
// 0061407d  83c410               add esp, 0x10
// 00614080  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@23@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp