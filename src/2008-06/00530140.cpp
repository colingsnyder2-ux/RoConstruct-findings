// from server: 100% by auto
// roc 2008-06 00530140  unit: seg_00530000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00530140
//
// 00530140  56                   push esi
// 00530141  8b742408             mov esi, dword ptr [esp + 8]
// 00530145  57                   push edi
// 00530146  8bbe4c010000         mov edi, dword ptr [esi + 0x14c]
// 0053014c  68d8000000           push 0xd8
// 00530151  e8aaf4ffff           call 0x52f600
// 00530156  83c404               add esp, 4
// 00530159  c7471c00000000       mov dword ptr [edi + 0x1c], 0
// 00530160  80bec400000000       cmp byte ptr [esi + 0xc4], 0
// 00530167  7407                 je 0x530170
// 00530169  8bc6                 mov eax, esi
// 0053016b  e8f0fbffff           call 0x52fd60
// 00530170  80becc00000000       cmp byte ptr [esi + 0xcc], 0
// 00530177  5f                   pop edi
// 00530178  7408                 je 0x530182
// 0053017a  8bc6                 mov eax, esi
// 0053017c  5e                   pop esi
// 0053017d  e9defdffff           jmp 0x52ff60
// 00530182  5e                   pop esi
// 00530183  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_file_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
