// from server: 100% by auto
// roc 2010-06 00586730  unit: seg_00580000  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00586730
//
// 00586730  56                   push esi
// 00586731  8bf0                 mov esi, eax
// 00586733  8b4638               mov eax, dword ptr [esi + 0x38]
// 00586736  85c0                 test eax, eax
// 00586738  0f868a000000         jbe 0x5867c8
// 0058673e  57                   push edi
// 0058673f  33ff                 xor edi, edi
// 00586741  d1f8                 sar eax, 1
// 00586743  7423                 je 0x586768
// 00586745  47                   inc edi
// 00586746  d1f8                 sar eax, 1
// 00586748  75fb                 jne 0x586745
// 0058674a  83ff0e               cmp edi, 0xe
// 0058674d  7e19                 jle 0x586768
// 0058674f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00586752  8b08                 mov ecx, dword ptr [eax]
// 00586754  c7411428000000       mov dword ptr [ecx + 0x14], 0x28
// 0058675b  8b4620               mov eax, dword ptr [esi + 0x20]
// 0058675e  8b10                 mov edx, dword ptr [eax]
// 00586760  50                   push eax
// 00586761  8b02                 mov eax, dword ptr [edx]
// 00586763  ffd0                 call eax
// 00586765  83c404               add esp, 4
// 00586768  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0058676b  8bc7                 mov eax, edi
// 0058676d  c1e004               shl eax, 4
// 00586770  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00586774  740c                 je 0x586782
// 00586776  8b4c8e5c             mov ecx, dword ptr [esi + ecx*4 + 0x5c]
// 0058677a  ff0481               inc dword ptr [ecx + eax*4]
// 0058677d  8d0481               lea eax, [ecx + eax*4]
// 00586780  eb19                 jmp 0x58679b
// 00586782  8b4c8e4c             mov ecx, dword ptr [esi + ecx*4 + 0x4c]
// 00586786  0fbe940100040000     movsx edx, byte ptr [ecx + eax + 0x400]
// 0058678e  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00586791  52                   push edx
// 00586792  50                   push eax
// 00586793  e828feffff           call 0x5865c0
// 00586798  83c408               add esp, 8
// 0058679b  85ff                 test edi, edi
// 0058679d  740d                 je 0x5867ac
// 0058679f  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 005867a2  57                   push edi
// 005867a3  51                   push ecx
// 005867a4  e817feffff           call 0x5865c0
// 005867a9  83c408               add esp, 8
// 005867ac  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005867af  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005867b2  8bd6                 mov edx, esi
// 005867b4  c7463800000000       mov dword ptr [esi + 0x38], 0
// 005867bb  e840ffffff           call 0x586700
// 005867c0  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 005867c7  5f                   pop edi
// 005867c8  5e                   pop esi
// 005867c9  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_eobrun)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
