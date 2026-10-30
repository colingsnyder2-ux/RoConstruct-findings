// roc 2007-03 0051e700  unit: seg_00510000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051e700
//
// 0051e700  56                   push esi
// 0051e701  8b742408             mov esi, dword ptr [esp + 8]
// 0051e705  57                   push edi
// 0051e706  8bbe4c010000         mov edi, dword ptr [esi + 0x14c]
// 0051e70c  68d8000000           push 0xd8
// 0051e711  8bc6                 mov eax, esi
// 0051e713  e868faffff           call 0x51e180
// 0051e718  83c404               add esp, 4
// 0051e71b  c7471c00000000       mov dword ptr [edi + 0x1c], 0
// 0051e722  80bec400000000       cmp byte ptr [esi + 0xc4], 0
// 0051e729  7407                 je 0x51e732
// 0051e72b  8bc6                 mov eax, esi
// 0051e72d  e83efeffff           call 0x51e570
// 0051e732  80becc00000000       cmp byte ptr [esi + 0xcc], 0
// 0051e739  5f                   pop edi
// 0051e73a  7408                 je 0x51e744
// 0051e73c  8bc6                 mov eax, esi
// 0051e73e  5e                   pop esi
// 0051e73f  e9ccfeffff           jmp 0x51e610
// 0051e744  5e                   pop esi
// 0051e745  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_file_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
