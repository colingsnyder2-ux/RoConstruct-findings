// roc 2008-06 005388c0  unit: seg_00530000  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005388c0
//
// 005388c0  56                   push esi
// 005388c1  8bf0                 mov esi, eax
// 005388c3  8b4638               mov eax, dword ptr [esi + 0x38]
// 005388c6  85c0                 test eax, eax
// 005388c8  0f868a000000         jbe 0x538958
// 005388ce  57                   push edi
// 005388cf  33ff                 xor edi, edi
// 005388d1  d1f8                 sar eax, 1
// 005388d3  7423                 je 0x5388f8
// 005388d5  47                   inc edi
// 005388d6  d1f8                 sar eax, 1
// 005388d8  75fb                 jne 0x5388d5
// 005388da  83ff0e               cmp edi, 0xe
// 005388dd  7e19                 jle 0x5388f8
// 005388df  8b4620               mov eax, dword ptr [esi + 0x20]
// 005388e2  8b08                 mov ecx, dword ptr [eax]
// 005388e4  c7411428000000       mov dword ptr [ecx + 0x14], 0x28
// 005388eb  8b4620               mov eax, dword ptr [esi + 0x20]
// 005388ee  8b10                 mov edx, dword ptr [eax]
// 005388f0  50                   push eax
// 005388f1  8b02                 mov eax, dword ptr [edx]
// 005388f3  ffd0                 call eax
// 005388f5  83c404               add esp, 4
// 005388f8  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005388fb  8bc7                 mov eax, edi
// 005388fd  c1e004               shl eax, 4
// 00538900  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00538904  740c                 je 0x538912
// 00538906  8b4c8e5c             mov ecx, dword ptr [esi + ecx*4 + 0x5c]
// 0053890a  ff0481               inc dword ptr [ecx + eax*4]
// 0053890d  8d0481               lea eax, [ecx + eax*4]
// 00538910  eb19                 jmp 0x53892b
// 00538912  8b4c8e4c             mov ecx, dword ptr [esi + ecx*4 + 0x4c]
// 00538916  0fbe940100040000     movsx edx, byte ptr [ecx + eax + 0x400]
// 0053891e  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00538921  52                   push edx
// 00538922  50                   push eax
// 00538923  e828feffff           call 0x538750
// 00538928  83c408               add esp, 8
// 0053892b  85ff                 test edi, edi
// 0053892d  740d                 je 0x53893c
// 0053892f  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00538932  57                   push edi
// 00538933  51                   push ecx
// 00538934  e817feffff           call 0x538750
// 00538939  83c408               add esp, 8
// 0053893c  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0053893f  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00538942  8bd6                 mov edx, esi
// 00538944  c7463800000000       mov dword ptr [esi + 0x38], 0
// 0053894b  e840ffffff           call 0x538890
// 00538950  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 00538957  5f                   pop edi
// 00538958  5e                   pop esi
// 00538959  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_eobrun)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
