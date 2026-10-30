// roc 2009-12 00870240  unit: CXTPNewToolbarDlg  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00870240
//
// 00870240  56                   push esi
// 00870241  8bf1                 mov esi, ecx
// 00870243  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00870246  85c9                 test ecx, ecx
// 00870248  7506                 jne 0x870250
// 0087024a  33c0                 xor eax, eax
// 0087024c  5e                   pop esi
// 0087024d  c20800               ret 8
// 00870250  8b4614               mov eax, dword ptr [esi + 0x14]
// 00870253  85c0                 test eax, eax
// 00870255  750a                 jne 0x870261
// 00870257  8b81a0000000         mov eax, dword ptr [ecx + 0xa0]
// 0087025d  85c0                 test eax, eax
// 0087025f  74e9                 je 0x87024a
// 00870261  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00870265  894e04               mov dword ptr [esi + 4], ecx
// 00870268  8b4020               mov eax, dword ptr [eax + 0x20]
// 0087026b  57                   push edi
// 0087026c  50                   push eax
// 0087026d  8906                 mov dword ptr [esi], eax
// 0087026f  ff152ccc9800         call dword ptr [0x98cc2c]
// 00870275  8b542410             mov edx, dword ptr [esp + 0x10]
// 00870279  8d4618               lea eax, [esi + 0x18]
// 0087027c  50                   push eax
// 0087027d  c7460800000000       mov dword ptr [esi + 8], 0
// 00870284  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0087028b  89560c               mov dword ptr [esi + 0xc], edx
// 0087028e  ff1538cc9800         call dword ptr [0x98cc38]
// 00870294  8bce                 mov ecx, esi
// 00870296  e875fcffff           call 0x86ff10
// 0087029b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0087029e  8bf8                 mov edi, eax
// 008702a0  85c9                 test ecx, ecx
// 008702a2  740a                 je 0x8702ae
// 008702a4  8b11                 mov edx, dword ptr [ecx]
// 008702a6  8b8274010000         mov eax, dword ptr [edx + 0x174]
// 008702ac  ffd0                 call eax
// 008702ae  ff1520cc9800         call dword ptr [0x98cc20]
// 008702b4  e86538f8ff           call 0x7f3b1e
// 008702b9  68007f0000           push 0x7f00
// 008702be  6a00                 push 0
// 008702c0  ff1548ca9800         call dword ptr [0x98ca48]
// 008702c6  50                   push eax
// 008702c7  ff1520ca9800         call dword ptr [0x98ca20]
// 008702cd  8bc7                 mov eax, edi
// 008702cf  5f                   pop edi
// 008702d0  5e                   pop esi
// 008702d1  c20800               ret 8
// copied from an identical function in another client (function ?DoDragDrop@CXTPCustomizeDropSource@@QAEKPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCustomizeTools.cpp