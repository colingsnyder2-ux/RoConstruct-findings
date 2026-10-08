// roc 2009-12 00624bd0  unit: seg_00620000  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00624bd0
//
// 00624bd0  56                   push esi
// 00624bd1  8bf0                 mov esi, eax
// 00624bd3  8b4638               mov eax, dword ptr [esi + 0x38]
// 00624bd6  85c0                 test eax, eax
// 00624bd8  0f868a000000         jbe 0x624c68
// 00624bde  57                   push edi
// 00624bdf  33ff                 xor edi, edi
// 00624be1  d1f8                 sar eax, 1
// 00624be3  7423                 je 0x624c08
// 00624be5  47                   inc edi
// 00624be6  d1f8                 sar eax, 1
// 00624be8  75fb                 jne 0x624be5
// 00624bea  83ff0e               cmp edi, 0xe
// 00624bed  7e19                 jle 0x624c08
// 00624bef  8b4620               mov eax, dword ptr [esi + 0x20]
// 00624bf2  8b08                 mov ecx, dword ptr [eax]
// 00624bf4  c7411428000000       mov dword ptr [ecx + 0x14], 0x28
// 00624bfb  8b4620               mov eax, dword ptr [esi + 0x20]
// 00624bfe  8b10                 mov edx, dword ptr [eax]
// 00624c00  50                   push eax
// 00624c01  8b02                 mov eax, dword ptr [edx]
// 00624c03  ffd0                 call eax
// 00624c05  83c404               add esp, 4
// 00624c08  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00624c0b  8bc7                 mov eax, edi
// 00624c0d  c1e004               shl eax, 4
// 00624c10  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00624c14  740c                 je 0x624c22
// 00624c16  8b4c8e5c             mov ecx, dword ptr [esi + ecx*4 + 0x5c]
// 00624c1a  ff0481               inc dword ptr [ecx + eax*4]
// 00624c1d  8d0481               lea eax, [ecx + eax*4]
// 00624c20  eb19                 jmp 0x624c3b
// 00624c22  8b4c8e4c             mov ecx, dword ptr [esi + ecx*4 + 0x4c]
// 00624c26  0fbe940100040000     movsx edx, byte ptr [ecx + eax + 0x400]
// 00624c2e  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00624c31  52                   push edx
// 00624c32  50                   push eax
// 00624c33  e828feffff           call 0x624a60
// 00624c38  83c408               add esp, 8
// 00624c3b  85ff                 test edi, edi
// 00624c3d  740d                 je 0x624c4c
// 00624c3f  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00624c42  57                   push edi
// 00624c43  51                   push ecx
// 00624c44  e817feffff           call 0x624a60
// 00624c49  83c408               add esp, 8
// 00624c4c  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00624c4f  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00624c52  8bd6                 mov edx, esi
// 00624c54  c7463800000000       mov dword ptr [esi + 0x38], 0
// 00624c5b  e840ffffff           call 0x624ba0
// 00624c60  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 00624c67  5f                   pop edi
// 00624c68  5e                   pop esi
// 00624c69  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_eobrun)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
