// roc 2012-06 00a57850  unit: VCEdit::?$CXTMaskEditT  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a57850
//
// 00a57850  56                   push esi
// 00a57851  8bf1                 mov esi, ecx
// 00a57853  8d8e84000000         lea ecx, [esi + 0x84]
// 00a57859  ff15d047b200         call dword ptr [0xb247d0]
// 00a5785f  8d8e80000000         lea ecx, [esi + 0x80]
// 00a57865  ff15d047b200         call dword ptr [0xb247d0]
// 00a5786b  8d4e7c               lea ecx, [esi + 0x7c]
// 00a5786e  ff15d047b200         call dword ptr [0xb247d0]
// 00a57874  8d4e78               lea ecx, [esi + 0x78]
// 00a57877  ff15d047b200         call dword ptr [0xb247d0]
// 00a5787d  8d4e74               lea ecx, [esi + 0x74]
// 00a57880  ff15d047b200         call dword ptr [0xb247d0]
// 00a57886  8d4e70               lea ecx, [esi + 0x70]
// 00a57889  ff15d047b200         call dword ptr [0xb247d0]
// 00a5788f  8bce                 mov ecx, esi
// 00a57891  e81e1d0400           call 0xa995b4
// 00a57896  f644240801           test byte ptr [esp + 8], 1
// 00a5789b  7409                 je 0xa578a6
// 00a5789d  56                   push esi
// 00a5789e  e871a8f2ff           call 0x982114
// 00a578a3  83c404               add esp, 4
// 00a578a6  8bc6                 mov eax, esi
// 00a578a8  5e                   pop esi
// 00a578a9  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\Controls\Edit\XTPEdit.cpp (function ??_G?$CXTPMaskEditT@VCEdit@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Edit/XTPEdit.cpp
