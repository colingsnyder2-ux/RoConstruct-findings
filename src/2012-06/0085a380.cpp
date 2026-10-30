// roc 2012-06 0085a380  unit: UString_sink::?$stream_buffer  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085a380
//
// 0085a380  6aff                 push -1
// 0085a382  6838e1ac00           push 0xace138
// 0085a387  64a100000000         mov eax, dword ptr fs:[0]
// 0085a38d  50                   push eax
// 0085a38e  64892500000000       mov dword ptr fs:[0], esp
// 0085a395  51                   push ecx
// 0085a396  8b442418             mov eax, dword ptr [esp + 0x18]
// 0085a39a  56                   push esi
// 0085a39b  57                   push edi
// 0085a39c  8bf1                 mov esi, ecx
// 0085a39e  50                   push eax
// 0085a39f  8974240c             mov dword ptr [esp + 0xc], esi
// 0085a3a3  e8c8f9ffff           call 0x859d70
// 0085a3a8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0085a3ac  6a00                 push 0
// 0085a3ae  57                   push edi
// 0085a3af  8d4c2428             lea ecx, [esp + 0x28]
// 0085a3b3  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0085a3bb  ff158025b200         call dword ptr [0xb22580]
// 0085a3c1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085a3c5  897e18               mov dword ptr [esi + 0x18], edi
// 0085a3c8  894614               mov dword ptr [esi + 0x14], eax
// 0085a3cb  c7462400000000       mov dword ptr [esi + 0x24], 0
// 0085a3d2  5f                   pop edi
// 0085a3d3  8bc6                 mov eax, esi
// 0085a3d5  5e                   pop esi
// 0085a3d6  64890d00000000       mov dword ptr fs:[0], ecx
// 0085a3dd  83c410               add esp, 0x10
// 0085a3e0  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@23@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp