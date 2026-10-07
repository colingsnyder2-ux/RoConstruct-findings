// roc 2009-06 0059df00  unit: seg_00590000  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059df00
//
// 0059df00  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059df04  83e900               sub ecx, 0
// 0059df07  8b442404             mov eax, dword ptr [esp + 4]
// 0059df0b  56                   push esi
// 0059df0c  8bb08c010000         mov esi, dword ptr [eax + 0x18c]
// 0059df12  0f848d000000         je 0x59dfa5
// 0059df18  83e902               sub ecx, 2
// 0059df1b  7458                 je 0x59df75
// 0059df1d  83e901               sub ecx, 1
// 0059df20  7423                 je 0x59df45
// 0059df22  8b08                 mov ecx, dword ptr [eax]
// 0059df24  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 0059df2b  8b10                 mov edx, dword ptr [eax]
// 0059df2d  50                   push eax
// 0059df2e  8b02                 mov eax, dword ptr [edx]
// 0059df30  ffd0                 call eax
// 0059df32  83c404               add esp, 4
// 0059df35  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0059df3c  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0059df43  5e                   pop esi
// 0059df44  c3                   ret 
// 0059df45  837e0800             cmp dword ptr [esi + 8], 0
// 0059df49  7513                 jne 0x59df5e
// 0059df4b  8b08                 mov ecx, dword ptr [eax]
// 0059df4d  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 0059df54  8b10                 mov edx, dword ptr [eax]
// 0059df56  50                   push eax
// 0059df57  8b02                 mov eax, dword ptr [edx]
// 0059df59  ffd0                 call eax
// 0059df5b  83c404               add esp, 4
// 0059df5e  c74604b0dd5900       mov dword ptr [esi + 4], 0x59ddb0
// 0059df65  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0059df6c  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0059df73  5e                   pop esi
// 0059df74  c3                   ret 
// 0059df75  837e0800             cmp dword ptr [esi + 8], 0
// 0059df79  7513                 jne 0x59df8e
// 0059df7b  8b08                 mov ecx, dword ptr [eax]
// 0059df7d  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 0059df84  8b10                 mov edx, dword ptr [eax]
// 0059df86  50                   push eax
// 0059df87  8b02                 mov eax, dword ptr [edx]
// 0059df89  ffd0                 call eax
// 0059df8b  83c404               add esp, 4
// 0059df8e  c7460460de5900       mov dword ptr [esi + 4], 0x59de60
// 0059df95  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0059df9c  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0059dfa3  5e                   pop esi
// 0059dfa4  c3                   ret 
// 0059dfa5  80784a00             cmp byte ptr [eax + 0x4a], 0
// 0059dfa9  7438                 je 0x59dfe3
// 0059dfab  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0059dfaf  c7460430dd5900       mov dword ptr [esi + 4], 0x59dd30
// 0059dfb6  7537                 jne 0x59dfef
// 0059dfb8  8b5610               mov edx, dword ptr [esi + 0x10]
// 0059dfbb  8b4804               mov ecx, dword ptr [eax + 4]
// 0059dfbe  6a01                 push 1
// 0059dfc0  52                   push edx
// 0059dfc1  8b5608               mov edx, dword ptr [esi + 8]
// 0059dfc4  6a00                 push 0
// 0059dfc6  52                   push edx
// 0059dfc7  50                   push eax
// 0059dfc8  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0059dfcb  ffd0                 call eax
// 0059dfcd  83c414               add esp, 0x14
// 0059dfd0  89460c               mov dword ptr [esi + 0xc], eax
// 0059dfd3  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0059dfda  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0059dfe1  5e                   pop esi
// 0059dfe2  c3                   ret 
// 0059dfe3  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 0059dfe9  8b5104               mov edx, dword ptr [ecx + 4]
// 0059dfec  895604               mov dword ptr [esi + 4], edx
// 0059dfef  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0059dff6  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0059dffd  5e                   pop esi
// 0059dffe  c3                   ret 
// library jpeg-6b/jdpostct.c (function _start_pass_dpost)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
