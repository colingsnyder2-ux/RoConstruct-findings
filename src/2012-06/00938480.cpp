// roc 2012-06 00938480  unit: seg_00930000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00938480
//
// 00938480  397e10               cmp dword ptr [esi + 0x10], edi
// 00938483  7509                 jne 0x93848e
// 00938485  89742404             mov dword ptr [esp + 4], esi
// 00938489  e932ffffff           jmp 0x9383c0
// 0093848e  3b4604               cmp eax, dword ptr [esi + 4]
// 00938491  7521                 jne 0x9384b4
// 00938493  57                   push edi
// 00938494  56                   push esi
// 00938495  e876ecffff           call 0x937110
// 0093849a  50                   push eax
// 0093849b  8b4634               mov eax, dword ptr [esi + 0x34]
// 0093849e  682cfbbf00           push 0xbffb2c
// 009384a3  50                   push eax
// 009384a4  e8977cf1ff           call 0x850140
// 009384a9  50                   push eax
// 009384aa  56                   push esi
// 009384ab  e860edffff           call 0x937210
// 009384b0  83c41c               add esp, 0x1c
// 009384b3  c3                   ret 
// 009384b4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009384b8  50                   push eax
// 009384b9  51                   push ecx
// 009384ba  56                   push esi
// 009384bb  e850ecffff           call 0x937110
// 009384c0  83c408               add esp, 8
// 009384c3  50                   push eax
// 009384c4  57                   push edi
// 009384c5  56                   push esi
// 009384c6  e845ecffff           call 0x937110
// 009384cb  8b5634               mov edx, dword ptr [esi + 0x34]
// 009384ce  83c408               add esp, 8
// 009384d1  50                   push eax
// 009384d2  6888fbbf00           push 0xbffb88
// 009384d7  52                   push edx
// 009384d8  e8637cf1ff           call 0x850140
// 009384dd  50                   push eax
// 009384de  56                   push esi
// 009384df  e82cedffff           call 0x937210
// 009384e4  83c41c               add esp, 0x1c
// 009384e7  c3                   ret 
// library lua-5.1.4/lparser.c (function _check_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
