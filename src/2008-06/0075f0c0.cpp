// roc 2008-06 0075f0c0  unit: CXTPDockingPaneTabbedContainer  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075f0c0
//
// 0075f0c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0075f0c4  56                   push esi
// 0075f0c5  6a01                 push 1
// 0075f0c7  8bf1                 mov esi, ecx
// 0075f0c9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0075f0cd  8b5620               mov edx, dword ptr [esi + 0x20]
// 0075f0d0  50                   push eax
// 0075f0d1  51                   push ecx
// 0075f0d2  52                   push edx
// 0075f0d3  8d8ea8000000         lea ecx, [esi + 0xa8]
// 0075f0d9  e8d2e20100           call 0x77d3b0
// 0075f0de  85c0                 test eax, eax
// 0075f0e0  7562                 jne 0x75f144
// 0075f0e2  8b442410             mov eax, dword ptr [esp + 0x10]
// 0075f0e6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0075f0ea  50                   push eax
// 0075f0eb  51                   push ecx
// 0075f0ec  8bce                 mov ecx, esi
// 0075f0ee  e8bdf7ffff           call 0x75e8b0
// 0075f0f3  85c0                 test eax, eax
// 0075f0f5  754d                 jne 0x75f144
// 0075f0f7  8b542410             mov edx, dword ptr [esp + 0x10]
// 0075f0fb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0075f0ff  52                   push edx
// 0075f100  50                   push eax
// 0075f101  8bce                 mov ecx, esi
// 0075f103  e878f4ffff           call 0x75e580
// 0075f108  83f8fe               cmp eax, -2
// 0075f10b  753b                 jne 0x75f148
// 0075f10d  8b5654               mov edx, dword ptr [esi + 0x54]
// 0075f110  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0075f113  57                   push edi
// 0075f114  8bbea4010000         mov edi, dword ptr [esi + 0x1a4]
// 0075f11a  83c654               add esi, 0x54
// 0075f11d  8bce                 mov ecx, esi
// 0075f11f  ffd0                 call eax
// 0075f121  85c0                 test eax, eax
// 0075f123  740f                 je 0x75f134
// 0075f125  85ff                 test edi, edi
// 0075f127  740b                 je 0x75f134
// 0075f129  8bcf                 mov ecx, edi
// 0075f12b  e8b084faff           call 0x7075e0
// 0075f130  a802                 test al, 2
// 0075f132  750f                 jne 0x75f143
// 0075f134  56                   push esi
// 0075f135  8bce                 mov ecx, esi
// 0075f137  e864e3ffff           call 0x75d4a0
// 0075f13c  8bc8                 mov ecx, eax
// 0075f13e  e83d80f8ff           call 0x6e7180
// 0075f143  5f                   pop edi
// 0075f144  5e                   pop esi
// 0075f145  c20c00               ret 0xc
// 0075f148  85c0                 test eax, eax
// 0075f14a  7cf8                 jl 0x75f144
// 0075f14c  50                   push eax
// 0075f14d  8bce                 mov ecx, esi
// 0075f14f  e83cffffff           call 0x75f090
// 0075f154  85c0                 test eax, eax
// 0075f156  7405                 je 0x75f15d
// 0075f158  83c020               add eax, 0x20
// 0075f15b  eb02                 jmp 0x75f15f
// 0075f15d  33c0                 xor eax, eax
// 0075f15f  50                   push eax
// 0075f160  8d4e54               lea ecx, [esi + 0x54]
// 0075f163  e838e3ffff           call 0x75d4a0
// 0075f168  8bc8                 mov ecx, eax
// 0075f16a  e81180f8ff           call 0x6e7180
// 0075f16f  5e                   pop esi
// 0075f170  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnLButtonDblClk@CXTPDockingPaneTabbedContainer@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
