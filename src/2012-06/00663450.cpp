// from server: 100% by auto
// roc 2012-06 00663450  unit: seg_00660000  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00663450
//
// 00663450  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00663454  83e900               sub ecx, 0
// 00663457  8b442404             mov eax, dword ptr [esp + 4]
// 0066345b  56                   push esi
// 0066345c  8bb08c010000         mov esi, dword ptr [eax + 0x18c]
// 00663462  0f848d000000         je 0x6634f5
// 00663468  83e902               sub ecx, 2
// 0066346b  7458                 je 0x6634c5
// 0066346d  83e901               sub ecx, 1
// 00663470  7423                 je 0x663495
// 00663472  8b08                 mov ecx, dword ptr [eax]
// 00663474  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 0066347b  8b10                 mov edx, dword ptr [eax]
// 0066347d  50                   push eax
// 0066347e  8b02                 mov eax, dword ptr [edx]
// 00663480  ffd0                 call eax
// 00663482  83c404               add esp, 4
// 00663485  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0066348c  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00663493  5e                   pop esi
// 00663494  c3                   ret 
// 00663495  837e0800             cmp dword ptr [esi + 8], 0
// 00663499  7513                 jne 0x6634ae
// 0066349b  8b08                 mov ecx, dword ptr [eax]
// 0066349d  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 006634a4  8b10                 mov edx, dword ptr [eax]
// 006634a6  50                   push eax
// 006634a7  8b02                 mov eax, dword ptr [edx]
// 006634a9  ffd0                 call eax
// 006634ab  83c404               add esp, 4
// 006634ae  c7460400336600       mov dword ptr [esi + 4], 0x663300
// 006634b5  c7461800000000       mov dword ptr [esi + 0x18], 0
// 006634bc  c7461400000000       mov dword ptr [esi + 0x14], 0
// 006634c3  5e                   pop esi
// 006634c4  c3                   ret 
// 006634c5  837e0800             cmp dword ptr [esi + 8], 0
// 006634c9  7513                 jne 0x6634de
// 006634cb  8b08                 mov ecx, dword ptr [eax]
// 006634cd  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 006634d4  8b10                 mov edx, dword ptr [eax]
// 006634d6  50                   push eax
// 006634d7  8b02                 mov eax, dword ptr [edx]
// 006634d9  ffd0                 call eax
// 006634db  83c404               add esp, 4
// 006634de  c74604b0336600       mov dword ptr [esi + 4], 0x6633b0
// 006634e5  c7461800000000       mov dword ptr [esi + 0x18], 0
// 006634ec  c7461400000000       mov dword ptr [esi + 0x14], 0
// 006634f3  5e                   pop esi
// 006634f4  c3                   ret 
// 006634f5  80784a00             cmp byte ptr [eax + 0x4a], 0
// 006634f9  7438                 je 0x663533
// 006634fb  837e0c00             cmp dword ptr [esi + 0xc], 0
// 006634ff  c7460480326600       mov dword ptr [esi + 4], 0x663280
// 00663506  7537                 jne 0x66353f
// 00663508  8b5610               mov edx, dword ptr [esi + 0x10]
// 0066350b  8b4804               mov ecx, dword ptr [eax + 4]
// 0066350e  6a01                 push 1
// 00663510  52                   push edx
// 00663511  8b5608               mov edx, dword ptr [esi + 8]
// 00663514  6a00                 push 0
// 00663516  52                   push edx
// 00663517  50                   push eax
// 00663518  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0066351b  ffd0                 call eax
// 0066351d  83c414               add esp, 0x14
// 00663520  89460c               mov dword ptr [esi + 0xc], eax
// 00663523  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0066352a  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00663531  5e                   pop esi
// 00663532  c3                   ret 
// 00663533  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 00663539  8b5104               mov edx, dword ptr [ecx + 4]
// 0066353c  895604               mov dword ptr [esi + 4], edx
// 0066353f  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00663546  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0066354d  5e                   pop esi
// 0066354e  c3                   ret 
// library jpeg-6b/jdpostct.c (function _start_pass_dpost)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
