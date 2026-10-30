// roc 2009-12 0086d0b0  unit: CSelectionCaption  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086d0b0
//
// 0086d0b0  83ec20               sub esp, 0x20
// 0086d0b3  56                   push esi
// 0086d0b4  8bf1                 mov esi, ecx
// 0086d0b6  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0086d0bc  50                   push eax
// 0086d0bd  ff1584cc9800         call dword ptr [0x98cc84]
// 0086d0c3  85c0                 test eax, eax
// 0086d0c5  752c                 jne 0x86d0f3
// 0086d0c7  8d4c2414             lea ecx, [esp + 0x14]
// 0086d0cb  e860e1fdff           call 0x84b230
// 0086d0d0  8b10                 mov edx, dword ptr [eax]
// 0086d0d2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0086d0d6  8911                 mov dword ptr [ecx], edx
// 0086d0d8  8b5004               mov edx, dword ptr [eax + 4]
// 0086d0db  895104               mov dword ptr [ecx + 4], edx
// 0086d0de  8b5008               mov edx, dword ptr [eax + 8]
// 0086d0e1  895108               mov dword ptr [ecx + 8], edx
// 0086d0e4  8b400c               mov eax, dword ptr [eax + 0xc]
// 0086d0e7  89410c               mov dword ptr [ecx + 0xc], eax
// 0086d0ea  8bc1                 mov eax, ecx
// 0086d0ec  5e                   pop esi
// 0086d0ed  83c420               add esp, 0x20
// 0086d0f0  c20400               ret 4
// 0086d0f3  f686c800000004       test byte ptr [esi + 0xc8], 4
// 0086d0fa  57                   push edi
// 0086d0fb  751b                 jne 0x86d118
// 0086d0fd  8b16                 mov edx, dword ptr [esi]
// 0086d0ff  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0086d103  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 0086d109  57                   push edi
// 0086d10a  8bce                 mov ecx, esi
// 0086d10c  ffd0                 call eax
// 0086d10e  8bc7                 mov eax, edi
// 0086d110  5f                   pop edi
// 0086d111  5e                   pop esi
// 0086d112  83c420               add esp, 0x20
// 0086d115  c20400               ret 4
// 0086d118  56                   push esi
// 0086d119  8d4c240c             lea ecx, [esp + 0xc]
// 0086d11d  e8aee1fdff           call 0x84b2d0
// 0086d122  8b442414             mov eax, dword ptr [esp + 0x14]
// 0086d126  2b44240c             sub eax, dword ptr [esp + 0xc]
// 0086d12a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086d12e  2b4c2408             sub ecx, dword ptr [esp + 8]
// 0086d132  83e80f               sub eax, 0xf
// 0086d135  99                   cdq 
// 0086d136  2bc2                 sub eax, edx
// 0086d138  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0086d13c  83e912               sub ecx, 0x12
// 0086d13f  d1f8                 sar eax, 1
// 0086d141  890a                 mov dword ptr [edx], ecx
// 0086d143  8d7110               lea esi, [ecx + 0x10]
// 0086d146  8d780f               lea edi, [eax + 0xf]
// 0086d149  894204               mov dword ptr [edx + 4], eax
// 0086d14c  897208               mov dword ptr [edx + 8], esi
// 0086d14f  897a0c               mov dword ptr [edx + 0xc], edi
// 0086d152  5f                   pop edi
// 0086d153  8bc2                 mov eax, edx
// 0086d155  5e                   pop esi
// 0086d156  83c420               add esp, 0x20
// 0086d159  c20400               ret 4
// copied from an identical function in another client (function ?GetButtonRect@CXTCaption@@MBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp