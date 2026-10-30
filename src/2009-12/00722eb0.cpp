// roc 2009-12 00722eb0  unit: UString_sink::?$stream_buffer  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00722eb0
//
// 00722eb0  6aff                 push -1
// 00722eb2  68b8eb9400           push 0x94ebb8
// 00722eb7  64a100000000         mov eax, dword ptr fs:[0]
// 00722ebd  50                   push eax
// 00722ebe  64892500000000       mov dword ptr fs:[0], esp
// 00722ec5  51                   push ecx
// 00722ec6  8b442418             mov eax, dword ptr [esp + 0x18]
// 00722eca  56                   push esi
// 00722ecb  57                   push edi
// 00722ecc  8bf1                 mov esi, ecx
// 00722ece  50                   push eax
// 00722ecf  8974240c             mov dword ptr [esp + 0xc], esi
// 00722ed3  e8d8f8ffff           call 0x7227b0
// 00722ed8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00722edc  6a00                 push 0
// 00722ede  57                   push edi
// 00722edf  8d4c2428             lea ecx, [esp + 0x28]
// 00722ee3  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00722eeb  ff1504b69800         call dword ptr [0x98b604]
// 00722ef1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00722ef5  897e18               mov dword ptr [esi + 0x18], edi
// 00722ef8  894614               mov dword ptr [esi + 0x14], eax
// 00722efb  c7462400000000       mov dword ptr [esi + 0x24], 0
// 00722f02  5f                   pop edi
// 00722f03  8bc6                 mov eax, esi
// 00722f05  5e                   pop esi
// 00722f06  64890d00000000       mov dword ptr fs:[0], ecx
// 00722f0d  83c410               add esp, 0x10
// 00722f10  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@23@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp