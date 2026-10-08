// from server: 100% by auto
// roc 2011-06 0056a4f0  unit: seg_00560000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0056a4f0
//
// 0056a4f0  56                   push esi
// 0056a4f1  8b742408             mov esi, dword ptr [esp + 8]
// 0056a4f5  57                   push edi
// 0056a4f6  8bbe4c010000         mov edi, dword ptr [esi + 0x14c]
// 0056a4fc  68d8000000           push 0xd8
// 0056a501  e8aaf4ffff           call 0x5699b0
// 0056a506  83c404               add esp, 4
// 0056a509  c7471c00000000       mov dword ptr [edi + 0x1c], 0
// 0056a510  80bec400000000       cmp byte ptr [esi + 0xc4], 0
// 0056a517  7407                 je 0x56a520
// 0056a519  8bc6                 mov eax, esi
// 0056a51b  e8f0fbffff           call 0x56a110
// 0056a520  80becc00000000       cmp byte ptr [esi + 0xcc], 0
// 0056a527  5f                   pop edi
// 0056a528  7408                 je 0x56a532
// 0056a52a  8bc6                 mov eax, esi
// 0056a52c  5e                   pop esi
// 0056a52d  e9defdffff           jmp 0x56a310
// 0056a532  5e                   pop esi
// 0056a533  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_file_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
