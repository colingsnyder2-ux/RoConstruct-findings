// from server: 100% by auto
// roc 2007-08 00614430  unit: seg_00610000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00614430
//
// 00614430  56                   push esi
// 00614431  e8ba450000           call 0x6189f0
// 00614436  6a00                 push 0
// 00614438  57                   push edi
// 00614439  56                   push esi
// 0061443a  e8e10e0000           call 0x615320
// 0061443f  8b4630               mov eax, dword ptr [esi + 0x30]
// 00614442  57                   push edi
// 00614443  50                   push eax
// 00614444  e817500100           call 0x629460
// 00614449  83c418               add esp, 0x18
// 0061444c  837e105d             cmp dword ptr [esi + 0x10], 0x5d
// 00614450  7421                 je 0x614473
// 00614452  6a5d                 push 0x5d
// 00614454  56                   push esi
// 00614455  e866300000           call 0x6174c0
// 0061445a  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0061445d  50                   push eax
// 0061445e  6870337c00           push 0x7c3370
// 00614463  51                   push ecx
// 00614464  e827aaffff           call 0x60ee90
// 00614469  50                   push eax
// 0061446a  56                   push esi
// 0061446b  e850310000           call 0x6175c0
// 00614470  83c41c               add esp, 0x1c
// 00614473  56                   push esi
// 00614474  e877450000           call 0x6189f0
// 00614479  59                   pop ecx
// 0061447a  c3                   ret 
// library lua-5.1.4/lparser.c (function _yindex)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
