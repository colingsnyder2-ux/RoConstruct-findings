// roc 2009-12 00856570  unit: CXTPTabClientWnd  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00856570
//
// 00856570  56                   push esi
// 00856571  57                   push edi
// 00856572  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00856576  8bf1                 mov esi, ecx
// 00856578  85ff                 test edi, edi
// 0085657a  7507                 jne 0x856583
// 0085657c  5f                   pop edi
// 0085657d  33c0                 xor eax, eax
// 0085657f  5e                   pop esi
// 00856580  c20800               ret 8
// 00856583  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 0085658a  53                   push ebx
// 0085658b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0085658f  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 00856595  7523                 jne 0x8565ba
// 00856597  e856000d00           call 0x9265f2
// 0085659c  50                   push eax
// 0085659d  8bcf                 mov ecx, edi
// 0085659f  e844d8f9ff           call 0x7f3de8
// 008565a4  85c0                 test eax, eax
// 008565a6  7412                 je 0x8565ba
// 008565a8  8b87e8000000         mov eax, dword ptr [edi + 0xe8]
// 008565ae  50                   push eax
// 008565af  8bce                 mov ecx, esi
// 008565b1  e804050d00           call 0x926aba
// 008565b6  85c0                 test eax, eax
// 008565b8  7508                 jne 0x8565c2
// 008565ba  5b                   pop ebx
// 008565bb  5f                   pop edi
// 008565bc  33c0                 xor eax, eax
// 008565be  5e                   pop esi
// 008565bf  c20800               ret 8
// 008565c2  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008565c8  8b5620               mov edx, dword ptr [esi + 0x20]
// 008565cb  6a00                 push 0
// 008565cd  6a00                 push 0
// 008565cf  51                   push ecx
// 008565d0  52                   push edx
// 008565d1  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008565d7  8b06                 mov eax, dword ptr [esi]
// 008565d9  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 008565df  8bce                 mov ecx, esi
// 008565e1  89be84000000         mov dword ptr [esi + 0x84], edi
// 008565e7  ffd2                 call edx
// 008565e9  8bce                 mov ecx, esi
// 008565eb  e8d0ebffff           call 0x8551c0
// 008565f0  8b10                 mov edx, dword ptr [eax]
// 008565f2  8bc8                 mov ecx, eax
// 008565f4  8b426c               mov eax, dword ptr [edx + 0x6c]
// 008565f7  ffd0                 call eax
// 008565f9  6a04                 push 4
// 008565fb  6a00                 push 0
// 008565fd  6a00                 push 0
// 008565ff  6a00                 push 0
// 00856601  6a00                 push 0
// 00856603  6a00                 push 0
// 00856605  8bce                 mov ecx, esi
// 00856607  e820d6f9ff           call 0x7f3c2c
// 0085660c  8b5654               mov edx, dword ptr [esi + 0x54]
// 0085660f  8b4204               mov eax, dword ptr [edx + 4]
// 00856612  8d4e54               lea ecx, [esi + 0x54]
// 00856615  ffd0                 call eax
// 00856617  85db                 test ebx, ebx
// 00856619  741c                 je 0x856637
// 0085661b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0085661e  6ae6                 push -0x1a
// 00856620  51                   push ecx
// 00856621  ff1568cb9800         call dword ptr [0x98cb68]
// 00856627  8b5620               mov edx, dword ptr [esi + 0x20]
// 0085662a  83c808               or eax, 8
// 0085662d  50                   push eax
// 0085662e  6ae6                 push -0x1a
// 00856630  52                   push edx
// 00856631  ff154cca9800         call dword ptr [0x98ca4c]
// 00856637  8b06                 mov eax, dword ptr [esi]
// 00856639  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 0085663f  8bce                 mov ecx, esi
// 00856641  ffd2                 call edx
// 00856643  5b                   pop ebx
// 00856644  5f                   pop edi
// 00856645  b801000000           mov eax, 1
// 0085664a  5e                   pop esi
// 0085664b  c20800               ret 8
// copied from an identical function in another client (function ?Attach@CXTPTabClientWnd@@QAEHPAVCXTPMDIFrameWnd@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp