// roc 2009-12 008690a0  unit: CXTPPropertyGridView  size: 407 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008690a0
//
// 008690a0  56                   push esi
// 008690a1  57                   push edi
// 008690a2  8bf1                 mov esi, ecx
// 008690a4  e897fcffff           call 0x868d40
// 008690a9  8b8e54010000         mov ecx, dword ptr [esi + 0x154]
// 008690af  8bf8                 mov edi, eax
// 008690b1  85c9                 test ecx, ecx
// 008690b3  7416                 je 0x8690cb
// 008690b5  39792c               cmp dword ptr [ecx + 0x2c], edi
// 008690b8  7511                 jne 0x8690cb
// 008690ba  8b01                 mov eax, dword ptr [ecx]
// 008690bc  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008690c0  8b4064               mov eax, dword ptr [eax + 0x64]
// 008690c3  52                   push edx
// 008690c4  ffd0                 call eax
// 008690c6  5f                   pop edi
// 008690c7  5e                   pop esi
// 008690c8  c20c00               ret 0xc
// 008690cb  6a11                 push 0x11
// 008690cd  ff1530cc9800         call dword ptr [0x98cc30]
// 008690d3  6685c0               test ax, ax
// 008690d6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008690da  7d61                 jge 0x86913d
// 008690dc  83f827               cmp eax, 0x27
// 008690df  7405                 je 0x8690e6
// 008690e1  83f825               cmp eax, 0x25
// 008690e4  7557                 jne 0x86913d
// 008690e6  8d4c240c             lea ecx, [esp + 0xc]
// 008690ea  51                   push ecx
// 008690eb  56                   push esi
// 008690ec  e86f30feff           call 0x84c160
// 008690f1  83c408               add esp, 8
// 008690f4  8bce                 mov ecx, esi
// 008690f6  e865f6ffff           call 0x868760
// 008690fb  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008690ff  83ea27               sub edx, 0x27
// 00869102  f7da                 neg edx
// 00869104  1bd2                 sbb edx, edx
// 00869106  83e2fa               and edx, 0xfffffffa
// 00869109  83c203               add edx, 3
// 0086910c  03c2                 add eax, edx
// 0086910e  50                   push eax
// 0086910f  8bce                 mov ecx, esi
// 00869111  e85af5ffff           call 0x868670
// 00869116  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0086911c  85c9                 test ecx, ecx
// 0086911e  740a                 je 0x86912a
// 00869120  8b01                 mov eax, dword ptr [ecx]
// 00869122  8b90ac000000         mov edx, dword ptr [eax + 0xac]
// 00869128  ffd2                 call edx
// 0086912a  8b4620               mov eax, dword ptr [esi + 0x20]
// 0086912d  6a00                 push 0
// 0086912f  6a00                 push 0
// 00869131  50                   push eax
// 00869132  ff15e8cb9800         call dword ptr [0x98cbe8]
// 00869138  5f                   pop edi
// 00869139  5e                   pop esi
// 0086913a  c20c00               ret 0xc
// 0086913d  83f827               cmp eax, 0x27
// 00869140  753e                 jne 0x869180
// 00869142  85ff                 test edi, edi
// 00869144  0f84c8000000         je 0x869212
// 0086914a  8b8fc0000000         mov ecx, dword ptr [edi + 0xc0]
// 00869150  83792800             cmp dword ptr [ecx + 0x28], 0
// 00869154  0f84b8000000         je 0x869212
// 0086915a  83bfa000000000       cmp dword ptr [edi + 0xa0], 0
// 00869161  0f85ab000000         jne 0x869212
// 00869167  83bf9c00000000       cmp dword ptr [edi + 0x9c], 0
// 0086916e  0f849e000000         je 0x869212
// 00869174  8bcf                 mov ecx, edi
// 00869176  e865beffff           call 0x864fe0
// 0086917b  5f                   pop edi
// 0086917c  5e                   pop esi
// 0086917d  c20c00               ret 0xc
// 00869180  83f825               cmp eax, 0x25
// 00869183  7532                 jne 0x8691b7
// 00869185  85ff                 test edi, edi
// 00869187  0f8485000000         je 0x869212
// 0086918d  8b97c0000000         mov edx, dword ptr [edi + 0xc0]
// 00869193  837a2800             cmp dword ptr [edx + 0x28], 0
// 00869197  7479                 je 0x869212
// 00869199  83bfa000000000       cmp dword ptr [edi + 0xa0], 0
// 008691a0  7470                 je 0x869212
// 008691a2  83bf9c00000000       cmp dword ptr [edi + 0x9c], 0
// 008691a9  7467                 je 0x869212
// 008691ab  8bcf                 mov ecx, edi
// 008691ad  e8cebdffff           call 0x864f80
// 008691b2  5f                   pop edi
// 008691b3  5e                   pop esi
// 008691b4  c20c00               ret 0xc
// 008691b7  83f80d               cmp eax, 0xd
// 008691ba  7520                 jne 0x8691dc
// 008691bc  8b4620               mov eax, dword ptr [esi + 0x20]
// 008691bf  6a00                 push 0
// 008691c1  6a00                 push 0
// 008691c3  6888010000           push 0x188
// 008691c8  50                   push eax
// 008691c9  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008691cf  50                   push eax
// 008691d0  8bce                 mov ecx, esi
// 008691d2  e879f8ffff           call 0x868a50
// 008691d7  5f                   pop edi
// 008691d8  5e                   pop esi
// 008691d9  c20c00               ret 0xc
// 008691dc  83f873               cmp eax, 0x73
// 008691df  7531                 jne 0x869212
// 008691e1  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 008691e7  85c9                 test ecx, ecx
// 008691e9  7427                 je 0x869212
// 008691eb  6a65                 push 0x65
// 008691ed  e8ceb6ffff           call 0x8648c0
// 008691f2  8bc8                 mov ecx, eax
// 008691f4  e827d30500           call 0x8c6520
// 008691f9  85c0                 test eax, eax
// 008691fb  7411                 je 0x86920e
// 008691fd  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00869203  8b11                 mov edx, dword ptr [ecx]
// 00869205  50                   push eax
// 00869206  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 0086920c  ffd0                 call eax
// 0086920e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00869212  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00869218  85c9                 test ecx, ecx
// 0086921a  740f                 je 0x86922b
// 0086921c  8b11                 mov edx, dword ptr [ecx]
// 0086921e  50                   push eax
// 0086921f  8b82c8000000         mov eax, dword ptr [edx + 0xc8]
// 00869225  ffd0                 call eax
// 00869227  85c0                 test eax, eax
// 00869229  7507                 jne 0x869232
// 0086922b  8bce                 mov ecx, esi
// 0086922d  e8feabf8ff           call 0x7f3e30
// 00869232  5f                   pop edi
// 00869233  5e                   pop esi
// 00869234  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnKeyDown@CXTPPropertyGridView@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridView.cpp