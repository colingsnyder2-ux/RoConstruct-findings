// from server: 100% by auto
// roc 2009-06 005a2ba0  unit: seg_005a0000  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a2ba0
//
// 005a2ba0  56                   push esi
// 005a2ba1  8bf0                 mov esi, eax
// 005a2ba3  8b4638               mov eax, dword ptr [esi + 0x38]
// 005a2ba6  85c0                 test eax, eax
// 005a2ba8  0f868a000000         jbe 0x5a2c38
// 005a2bae  57                   push edi
// 005a2baf  33ff                 xor edi, edi
// 005a2bb1  d1f8                 sar eax, 1
// 005a2bb3  7423                 je 0x5a2bd8
// 005a2bb5  47                   inc edi
// 005a2bb6  d1f8                 sar eax, 1
// 005a2bb8  75fb                 jne 0x5a2bb5
// 005a2bba  83ff0e               cmp edi, 0xe
// 005a2bbd  7e19                 jle 0x5a2bd8
// 005a2bbf  8b4620               mov eax, dword ptr [esi + 0x20]
// 005a2bc2  8b08                 mov ecx, dword ptr [eax]
// 005a2bc4  c7411428000000       mov dword ptr [ecx + 0x14], 0x28
// 005a2bcb  8b4620               mov eax, dword ptr [esi + 0x20]
// 005a2bce  8b10                 mov edx, dword ptr [eax]
// 005a2bd0  50                   push eax
// 005a2bd1  8b02                 mov eax, dword ptr [edx]
// 005a2bd3  ffd0                 call eax
// 005a2bd5  83c404               add esp, 4
// 005a2bd8  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005a2bdb  8bc7                 mov eax, edi
// 005a2bdd  c1e004               shl eax, 4
// 005a2be0  807e0c00             cmp byte ptr [esi + 0xc], 0
// 005a2be4  740c                 je 0x5a2bf2
// 005a2be6  8b4c8e5c             mov ecx, dword ptr [esi + ecx*4 + 0x5c]
// 005a2bea  ff0481               inc dword ptr [ecx + eax*4]
// 005a2bed  8d0481               lea eax, [ecx + eax*4]
// 005a2bf0  eb19                 jmp 0x5a2c0b
// 005a2bf2  8b4c8e4c             mov ecx, dword ptr [esi + ecx*4 + 0x4c]
// 005a2bf6  0fbe940100040000     movsx edx, byte ptr [ecx + eax + 0x400]
// 005a2bfe  8b0481               mov eax, dword ptr [ecx + eax*4]
// 005a2c01  52                   push edx
// 005a2c02  50                   push eax
// 005a2c03  e828feffff           call 0x5a2a30
// 005a2c08  83c408               add esp, 8
// 005a2c0b  85ff                 test edi, edi
// 005a2c0d  740d                 je 0x5a2c1c
// 005a2c0f  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 005a2c12  57                   push edi
// 005a2c13  51                   push ecx
// 005a2c14  e817feffff           call 0x5a2a30
// 005a2c19  83c408               add esp, 8
// 005a2c1c  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005a2c1f  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005a2c22  8bd6                 mov edx, esi
// 005a2c24  c7463800000000       mov dword ptr [esi + 0x38], 0
// 005a2c2b  e840ffffff           call 0x5a2b70
// 005a2c30  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 005a2c37  5f                   pop edi
// 005a2c38  5e                   pop esi
// 005a2c39  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_eobrun)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
