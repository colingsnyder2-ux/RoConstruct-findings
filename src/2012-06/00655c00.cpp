// from server: 100% by auto
// roc 2012-06 00655c00  unit: seg_00650000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00655c00
//
// 00655c00  56                   push esi
// 00655c01  8b742408             mov esi, dword ptr [esp + 8]
// 00655c05  57                   push edi
// 00655c06  8bbe4c010000         mov edi, dword ptr [esi + 0x14c]
// 00655c0c  68d8000000           push 0xd8
// 00655c11  e8aaf4ffff           call 0x6550c0
// 00655c16  83c404               add esp, 4
// 00655c19  c7471c00000000       mov dword ptr [edi + 0x1c], 0
// 00655c20  80bec400000000       cmp byte ptr [esi + 0xc4], 0
// 00655c27  7407                 je 0x655c30
// 00655c29  8bc6                 mov eax, esi
// 00655c2b  e8f0fbffff           call 0x655820
// 00655c30  80becc00000000       cmp byte ptr [esi + 0xcc], 0
// 00655c37  5f                   pop edi
// 00655c38  7408                 je 0x655c42
// 00655c3a  8bc6                 mov eax, esi
// 00655c3c  5e                   pop esi
// 00655c3d  e9defdffff           jmp 0x655a20
// 00655c42  5e                   pop esi
// 00655c43  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_file_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
