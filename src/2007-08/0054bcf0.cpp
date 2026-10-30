// roc 2007-08 0054bcf0  unit: UString_sink::?$stream_buffer  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054bcf0
//
// 0054bcf0  6aff                 push -1
// 0054bcf2  6858247500           push 0x752458
// 0054bcf7  64a100000000         mov eax, dword ptr fs:[0]
// 0054bcfd  50                   push eax
// 0054bcfe  64892500000000       mov dword ptr fs:[0], esp
// 0054bd05  51                   push ecx
// 0054bd06  8b442418             mov eax, dword ptr [esp + 0x18]
// 0054bd0a  56                   push esi
// 0054bd0b  57                   push edi
// 0054bd0c  8bf1                 mov esi, ecx
// 0054bd0e  50                   push eax
// 0054bd0f  8974240c             mov dword ptr [esp + 0xc], esi
// 0054bd13  e898f4ffff           call 0x54b1b0
// 0054bd18  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0054bd1c  6a00                 push 0
// 0054bd1e  57                   push edi
// 0054bd1f  8d4c2428             lea ecx, [esp + 0x28]
// 0054bd23  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0054bd2b  ff1518e67700         call dword ptr [0x77e618]
// 0054bd31  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054bd35  897e18               mov dword ptr [esi + 0x18], edi
// 0054bd38  894614               mov dword ptr [esi + 0x14], eax
// 0054bd3b  c7462400000000       mov dword ptr [esi + 0x24], 0
// 0054bd42  5f                   pop edi
// 0054bd43  8bc6                 mov eax, esi
// 0054bd45  5e                   pop esi
// 0054bd46  64890d00000000       mov dword ptr fs:[0], ecx
// 0054bd4d  83c410               add esp, 0x10
// 0054bd50  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@23@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp