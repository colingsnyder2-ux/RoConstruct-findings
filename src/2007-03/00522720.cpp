// roc 2007-03 00522720  unit: seg_00520000  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00522720
//
// 00522720  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00522724  83e900               sub ecx, 0
// 00522727  8b442404             mov eax, dword ptr [esp + 4]
// 0052272b  56                   push esi
// 0052272c  8bb08c010000         mov esi, dword ptr [eax + 0x18c]
// 00522732  0f848d000000         je 0x5227c5
// 00522738  83e902               sub ecx, 2
// 0052273b  7458                 je 0x522795
// 0052273d  83e901               sub ecx, 1
// 00522740  7423                 je 0x522765
// 00522742  8b08                 mov ecx, dword ptr [eax]
// 00522744  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 0052274b  8b10                 mov edx, dword ptr [eax]
// 0052274d  50                   push eax
// 0052274e  8b02                 mov eax, dword ptr [edx]
// 00522750  ffd0                 call eax
// 00522752  83c404               add esp, 4
// 00522755  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0052275c  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00522763  5e                   pop esi
// 00522764  c3                   ret 
// 00522765  837e0800             cmp dword ptr [esi + 8], 0
// 00522769  7513                 jne 0x52277e
// 0052276b  8b08                 mov ecx, dword ptr [eax]
// 0052276d  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00522774  8b10                 mov edx, dword ptr [eax]
// 00522776  50                   push eax
// 00522777  8b02                 mov eax, dword ptr [edx]
// 00522779  ffd0                 call eax
// 0052277b  83c404               add esp, 4
// 0052277e  c74604d0255200       mov dword ptr [esi + 4], 0x5225d0
// 00522785  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0052278c  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00522793  5e                   pop esi
// 00522794  c3                   ret 
// 00522795  837e0800             cmp dword ptr [esi + 8], 0
// 00522799  7513                 jne 0x5227ae
// 0052279b  8b08                 mov ecx, dword ptr [eax]
// 0052279d  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 005227a4  8b10                 mov edx, dword ptr [eax]
// 005227a6  50                   push eax
// 005227a7  8b02                 mov eax, dword ptr [edx]
// 005227a9  ffd0                 call eax
// 005227ab  83c404               add esp, 4
// 005227ae  c7460480265200       mov dword ptr [esi + 4], 0x522680
// 005227b5  c7461800000000       mov dword ptr [esi + 0x18], 0
// 005227bc  c7461400000000       mov dword ptr [esi + 0x14], 0
// 005227c3  5e                   pop esi
// 005227c4  c3                   ret 
// 005227c5  80784a00             cmp byte ptr [eax + 0x4a], 0
// 005227c9  7438                 je 0x522803
// 005227cb  837e0c00             cmp dword ptr [esi + 0xc], 0
// 005227cf  c7460450255200       mov dword ptr [esi + 4], 0x522550
// 005227d6  7537                 jne 0x52280f
// 005227d8  8b5610               mov edx, dword ptr [esi + 0x10]
// 005227db  8b4804               mov ecx, dword ptr [eax + 4]
// 005227de  6a01                 push 1
// 005227e0  52                   push edx
// 005227e1  8b5608               mov edx, dword ptr [esi + 8]
// 005227e4  6a00                 push 0
// 005227e6  52                   push edx
// 005227e7  50                   push eax
// 005227e8  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 005227eb  ffd0                 call eax
// 005227ed  83c414               add esp, 0x14
// 005227f0  89460c               mov dword ptr [esi + 0xc], eax
// 005227f3  c7461800000000       mov dword ptr [esi + 0x18], 0
// 005227fa  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00522801  5e                   pop esi
// 00522802  c3                   ret 
// 00522803  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 00522809  8b5104               mov edx, dword ptr [ecx + 4]
// 0052280c  895604               mov dword ptr [esi + 4], edx
// 0052280f  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00522816  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0052281d  5e                   pop esi
// 0052281e  c3                   ret 
// library jpeg-6b/jdpostct.c (function _start_pass_dpost)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
