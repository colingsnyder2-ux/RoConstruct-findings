// from server: 100% by auto
// roc 2011-06 0057c9e0  unit: seg_00570000  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057c9e0
//
// 0057c9e0  56                   push esi
// 0057c9e1  8bf0                 mov esi, eax
// 0057c9e3  8b4638               mov eax, dword ptr [esi + 0x38]
// 0057c9e6  85c0                 test eax, eax
// 0057c9e8  0f868a000000         jbe 0x57ca78
// 0057c9ee  57                   push edi
// 0057c9ef  33ff                 xor edi, edi
// 0057c9f1  d1f8                 sar eax, 1
// 0057c9f3  7423                 je 0x57ca18
// 0057c9f5  47                   inc edi
// 0057c9f6  d1f8                 sar eax, 1
// 0057c9f8  75fb                 jne 0x57c9f5
// 0057c9fa  83ff0e               cmp edi, 0xe
// 0057c9fd  7e19                 jle 0x57ca18
// 0057c9ff  8b4620               mov eax, dword ptr [esi + 0x20]
// 0057ca02  8b08                 mov ecx, dword ptr [eax]
// 0057ca04  c7411428000000       mov dword ptr [ecx + 0x14], 0x28
// 0057ca0b  8b4620               mov eax, dword ptr [esi + 0x20]
// 0057ca0e  8b10                 mov edx, dword ptr [eax]
// 0057ca10  50                   push eax
// 0057ca11  8b02                 mov eax, dword ptr [edx]
// 0057ca13  ffd0                 call eax
// 0057ca15  83c404               add esp, 4
// 0057ca18  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0057ca1b  8bc7                 mov eax, edi
// 0057ca1d  c1e004               shl eax, 4
// 0057ca20  807e0c00             cmp byte ptr [esi + 0xc], 0
// 0057ca24  740c                 je 0x57ca32
// 0057ca26  8b4c8e5c             mov ecx, dword ptr [esi + ecx*4 + 0x5c]
// 0057ca2a  ff0481               inc dword ptr [ecx + eax*4]
// 0057ca2d  8d0481               lea eax, [ecx + eax*4]
// 0057ca30  eb19                 jmp 0x57ca4b
// 0057ca32  8b4c8e4c             mov ecx, dword ptr [esi + ecx*4 + 0x4c]
// 0057ca36  0fbe940100040000     movsx edx, byte ptr [ecx + eax + 0x400]
// 0057ca3e  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0057ca41  52                   push edx
// 0057ca42  50                   push eax
// 0057ca43  e828feffff           call 0x57c870
// 0057ca48  83c408               add esp, 8
// 0057ca4b  85ff                 test edi, edi
// 0057ca4d  740d                 je 0x57ca5c
// 0057ca4f  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0057ca52  57                   push edi
// 0057ca53  51                   push ecx
// 0057ca54  e817feffff           call 0x57c870
// 0057ca59  83c408               add esp, 8
// 0057ca5c  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0057ca5f  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0057ca62  8bd6                 mov edx, esi
// 0057ca64  c7463800000000       mov dword ptr [esi + 0x38], 0
// 0057ca6b  e840ffffff           call 0x57c9b0
// 0057ca70  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 0057ca77  5f                   pop edi
// 0057ca78  5e                   pop esi
// 0057ca79  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_eobrun)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
