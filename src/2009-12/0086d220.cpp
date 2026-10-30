// roc 2009-12 0086d220  unit: CSelectionCaption  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086d220
//
// 0086d220  56                   push esi
// 0086d221  8bf1                 mov esi, ecx
// 0086d223  8b06                 mov eax, dword ptr [esi]
// 0086d225  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 0086d22b  57                   push edi
// 0086d22c  ffd2                 call edx
// 0086d22e  8b8688000000         mov eax, dword ptr [esi + 0x88]
// 0086d234  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0086d237  8dbea8000000         lea edi, [esi + 0xa8]
// 0086d23d  57                   push edi
// 0086d23e  51                   push ecx
// 0086d23f  ff1550cc9800         call dword ptr [0x98cc50]
// 0086d245  8b17                 mov edx, dword ptr [edi]
// 0086d247  8b4704               mov eax, dword ptr [edi + 4]
// 0086d24a  8b4f08               mov ecx, dword ptr [edi + 8]
// 0086d24d  899698000000         mov dword ptr [esi + 0x98], edx
// 0086d253  8b570c               mov edx, dword ptr [edi + 0xc]
// 0086d256  89869c000000         mov dword ptr [esi + 0x9c], eax
// 0086d25c  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0086d25f  898ea0000000         mov dword ptr [esi + 0xa0], ecx
// 0086d265  8996a4000000         mov dword ptr [esi + 0xa4], edx
// 0086d26b  01869c000000         add dword ptr [esi + 0x9c], eax
// 0086d271  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0086d277  8b96a4000000         mov edx, dword ptr [esi + 0xa4]
// 0086d27d  8b8e98000000         mov ecx, dword ptr [esi + 0x98]
// 0086d283  6a01                 push 1
// 0086d285  2bd0                 sub edx, eax
// 0086d287  52                   push edx
// 0086d288  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 0086d28e  2bd1                 sub edx, ecx
// 0086d290  52                   push edx
// 0086d291  50                   push eax
// 0086d292  51                   push ecx
// 0086d293  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 0086d299  e89469f8ff           call 0x7f3c32
// 0086d29e  8b4638               mov eax, dword ptr [esi + 0x38]
// 0086d2a1  85c0                 test eax, eax
// 0086d2a3  750a                 jne 0x86d2af
// 0086d2a5  8b4620               mov eax, dword ptr [esi + 0x20]
// 0086d2a8  50                   push eax
// 0086d2a9  ff15bccb9800         call dword ptr [0x98cbbc]
// 0086d2af  50                   push eax
// 0086d2b0  e87568f8ff           call 0x7f3b2a
// 0086d2b5  8bf8                 mov edi, eax
// 0086d2b7  85ff                 test edi, edi
// 0086d2b9  7403                 je 0x86d2be
// 0086d2bb  8b4720               mov eax, dword ptr [edi + 0x20]
// 0086d2be  50                   push eax
// 0086d2bf  ff1584cc9800         call dword ptr [0x98cc84]
// 0086d2c5  85c0                 test eax, eax
// 0086d2c7  7421                 je 0x86d2ea
// 0086d2c9  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0086d2cc  6a00                 push 0
// 0086d2ce  6a00                 push 0
// 0086d2d0  683e270000           push 0x273e
// 0086d2d5  51                   push ecx
// 0086d2d6  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0086d2dc  8b5620               mov edx, dword ptr [esi + 0x20]
// 0086d2df  6a01                 push 1
// 0086d2e1  6a00                 push 0
// 0086d2e3  52                   push edx
// 0086d2e4  ff15e8cb9800         call dword ptr [0x98cbe8]
// 0086d2ea  5f                   pop edi
// 0086d2eb  5e                   pop esi
// 0086d2ec  c3                   ret 
// copied from an identical function in another client (function ?OnPushPinButton@CXTCaption@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp