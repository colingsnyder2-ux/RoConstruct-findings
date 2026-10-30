// roc 2007-03 0054af20  unit: seg_00540000  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054af20
//
// 0054af20  6aff                 push -1
// 0054af22  6848317500           push 0x753148
// 0054af27  64a100000000         mov eax, dword ptr fs:[0]
// 0054af2d  50                   push eax
// 0054af2e  64892500000000       mov dword ptr fs:[0], esp
// 0054af35  51                   push ecx
// 0054af36  8b442418             mov eax, dword ptr [esp + 0x18]
// 0054af3a  56                   push esi
// 0054af3b  57                   push edi
// 0054af3c  8bf1                 mov esi, ecx
// 0054af3e  50                   push eax
// 0054af3f  8974240c             mov dword ptr [esp + 0xc], esi
// 0054af43  e888f8ffff           call 0x54a7d0
// 0054af48  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0054af4c  6a00                 push 0
// 0054af4e  57                   push edi
// 0054af4f  8d4c2428             lea ecx, [esp + 0x28]
// 0054af53  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0054af5b  ff1568e77700         call dword ptr [0x77e768]
// 0054af61  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054af65  897e18               mov dword ptr [esi + 0x18], edi
// 0054af68  894614               mov dword ptr [esi + 0x14], eax
// 0054af6b  c7462400000000       mov dword ptr [esi + 0x24], 0
// 0054af72  5f                   pop edi
// 0054af73  8bc6                 mov eax, esi
// 0054af75  5e                   pop esi
// 0054af76  64890d00000000       mov dword ptr fs:[0], ecx
// 0054af7d  83c410               add esp, 0x10
// 0054af80  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@23@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp