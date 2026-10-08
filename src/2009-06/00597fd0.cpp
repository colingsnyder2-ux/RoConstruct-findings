// from server: 100% by auto
// roc 2009-06 00597fd0  unit: seg_00590000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00597fd0
//
// 00597fd0  56                   push esi
// 00597fd1  8b742408             mov esi, dword ptr [esp + 8]
// 00597fd5  57                   push edi
// 00597fd6  8bbe4c010000         mov edi, dword ptr [esi + 0x14c]
// 00597fdc  68d8000000           push 0xd8
// 00597fe1  e8aaf4ffff           call 0x597490
// 00597fe6  83c404               add esp, 4
// 00597fe9  c7471c00000000       mov dword ptr [edi + 0x1c], 0
// 00597ff0  80bec400000000       cmp byte ptr [esi + 0xc4], 0
// 00597ff7  7407                 je 0x598000
// 00597ff9  8bc6                 mov eax, esi
// 00597ffb  e8f0fbffff           call 0x597bf0
// 00598000  80becc00000000       cmp byte ptr [esi + 0xcc], 0
// 00598007  5f                   pop edi
// 00598008  7408                 je 0x598012
// 0059800a  8bc6                 mov eax, esi
// 0059800c  5e                   pop esi
// 0059800d  e9defdffff           jmp 0x597df0
// 00598012  5e                   pop esi
// 00598013  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_file_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
