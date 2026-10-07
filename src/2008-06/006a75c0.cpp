// roc 2008-06 006a75c0  unit: CXTPEdit  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a75c0
//
// 006a75c0  8b442404             mov eax, dword ptr [esp + 4]
// 006a75c4  3d25e10000           cmp eax, 0xe125
// 006a75c9  740e                 je 0x6a75d9
// 006a75cb  3d23e10000           cmp eax, 0xe123
// 006a75d0  7407                 je 0x6a75d9
// 006a75d2  3d22e10000           cmp eax, 0xe122
// 006a75d7  7526                 jne 0x6a75ff
// 006a75d9  837c2408ff           cmp dword ptr [esp + 8], -1
// 006a75de  751f                 jne 0x6a75ff
// 006a75e0  56                   push esi
// 006a75e1  8b742410             mov esi, dword ptr [esp + 0x10]
// 006a75e5  57                   push edi
// 006a75e6  8b3e                 mov edi, dword ptr [esi]
// 006a75e8  50                   push eax
// 006a75e9  e842ffffff           call 0x6a7530
// 006a75ee  50                   push eax
// 006a75ef  8b07                 mov eax, dword ptr [edi]
// 006a75f1  8bce                 mov ecx, esi
// 006a75f3  ffd0                 call eax
// 006a75f5  5f                   pop edi
// 006a75f6  b801000000           mov eax, 1
// 006a75fb  5e                   pop esi
// 006a75fc  c21000               ret 0x10
// 006a75ff  33c0                 xor eax, eax
// 006a7601  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?OnCmdMsg@CXTPEdit@@UAEHIHPAXPAUAFX_CMDHANDLERINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
