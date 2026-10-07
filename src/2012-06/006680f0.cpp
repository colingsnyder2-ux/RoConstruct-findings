// roc 2012-06 006680f0  unit: seg_00660000  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006680f0
//
// 006680f0  56                   push esi
// 006680f1  8bf0                 mov esi, eax
// 006680f3  8b4638               mov eax, dword ptr [esi + 0x38]
// 006680f6  85c0                 test eax, eax
// 006680f8  0f868a000000         jbe 0x668188
// 006680fe  57                   push edi
// 006680ff  33ff                 xor edi, edi
// 00668101  d1f8                 sar eax, 1
// 00668103  7423                 je 0x668128
// 00668105  47                   inc edi
// 00668106  d1f8                 sar eax, 1
// 00668108  75fb                 jne 0x668105
// 0066810a  83ff0e               cmp edi, 0xe
// 0066810d  7e19                 jle 0x668128
// 0066810f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00668112  8b08                 mov ecx, dword ptr [eax]
// 00668114  c7411428000000       mov dword ptr [ecx + 0x14], 0x28
// 0066811b  8b4620               mov eax, dword ptr [esi + 0x20]
// 0066811e  8b10                 mov edx, dword ptr [eax]
// 00668120  50                   push eax
// 00668121  8b02                 mov eax, dword ptr [edx]
// 00668123  ffd0                 call eax
// 00668125  83c404               add esp, 4
// 00668128  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0066812b  8bc7                 mov eax, edi
// 0066812d  c1e004               shl eax, 4
// 00668130  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00668134  740c                 je 0x668142
// 00668136  8b4c8e5c             mov ecx, dword ptr [esi + ecx*4 + 0x5c]
// 0066813a  ff0481               inc dword ptr [ecx + eax*4]
// 0066813d  8d0481               lea eax, [ecx + eax*4]
// 00668140  eb19                 jmp 0x66815b
// 00668142  8b4c8e4c             mov ecx, dword ptr [esi + ecx*4 + 0x4c]
// 00668146  0fbe940100040000     movsx edx, byte ptr [ecx + eax + 0x400]
// 0066814e  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00668151  52                   push edx
// 00668152  50                   push eax
// 00668153  e828feffff           call 0x667f80
// 00668158  83c408               add esp, 8
// 0066815b  85ff                 test edi, edi
// 0066815d  740d                 je 0x66816c
// 0066815f  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00668162  57                   push edi
// 00668163  51                   push ecx
// 00668164  e817feffff           call 0x667f80
// 00668169  83c408               add esp, 8
// 0066816c  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0066816f  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00668172  8bd6                 mov edx, esi
// 00668174  c7463800000000       mov dword ptr [esi + 0x38], 0
// 0066817b  e840ffffff           call 0x6680c0
// 00668180  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 00668187  5f                   pop edi
// 00668188  5e                   pop esi
// 00668189  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_eobrun)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
