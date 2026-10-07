// roc 2009-06 006ee170  unit: seg_006e0000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ee170
//
// 006ee170  56                   push esi
// 006ee171  e86a450000           call 0x6f26e0
// 006ee176  6a00                 push 0
// 006ee178  57                   push edi
// 006ee179  56                   push esi
// 006ee17a  e8e10e0000           call 0x6ef060
// 006ee17f  8b4630               mov eax, dword ptr [esi + 0x30]
// 006ee182  57                   push edi
// 006ee183  50                   push eax
// 006ee184  e827c70000           call 0x6fa8b0
// 006ee189  83c418               add esp, 0x18
// 006ee18c  837e105d             cmp dword ptr [esi + 0x10], 0x5d
// 006ee190  7421                 je 0x6ee1b3
// 006ee192  6a5d                 push 0x5d
// 006ee194  56                   push esi
// 006ee195  e856300000           call 0x6f11f0
// 006ee19a  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006ee19d  50                   push eax
// 006ee19e  68b8dd8e00           push 0x8eddb8
// 006ee1a3  51                   push ecx
// 006ee1a4  e8f7aefdff           call 0x6c90a0
// 006ee1a9  50                   push eax
// 006ee1aa  56                   push esi
// 006ee1ab  e840310000           call 0x6f12f0
// 006ee1b0  83c41c               add esp, 0x1c
// 006ee1b3  56                   push esi
// 006ee1b4  e827450000           call 0x6f26e0
// 006ee1b9  59                   pop ecx
// 006ee1ba  c3                   ret 
// library lua-5.1.4/lparser.c (function _yindex)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
