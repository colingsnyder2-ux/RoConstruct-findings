// roc 2008-06 00741da0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00741da0
//
// 00741da0  56                   push esi
// 00741da1  8bf1                 mov esi, ecx
// 00741da3  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00741da9  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 00741db0  7514                 jne 0x741dc6
// 00741db2  8b16                 mov edx, dword ptr [esi]
// 00741db4  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 00741dba  6a00                 push 0
// 00741dbc  ffd0                 call eax
// 00741dbe  f7d8                 neg eax
// 00741dc0  1bc0                 sbb eax, eax
// 00741dc2  f7d8                 neg eax
// 00741dc4  5e                   pop esi
// 00741dc5  c3                   ret 
// 00741dc6  e8c591f6ff           call 0x6aaf90
// 00741dcb  83f802               cmp eax, 2
// 00741dce  740c                 je 0x741ddc
// 00741dd0  8bce                 mov ecx, esi
// 00741dd2  e8b991f6ff           call 0x6aaf90
// 00741dd7  83f803               cmp eax, 3
// 00741dda  7519                 jne 0x741df5
// 00741ddc  8b16                 mov edx, dword ptr [esi]
// 00741dde  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 00741de4  6a00                 push 0
// 00741de6  8bce                 mov ecx, esi
// 00741de8  ffd0                 call eax
// 00741dea  85c0                 test eax, eax
// 00741dec  7407                 je 0x741df5
// 00741dee  b801000000           mov eax, 1
// 00741df3  5e                   pop esi
// 00741df4  c3                   ret 
// 00741df5  33c0                 xor eax, eax
// 00741df7  5e                   pop esi
// 00741df8  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?IsImageVisible@CXTPControlComboBox@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp
