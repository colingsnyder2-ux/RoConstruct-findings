// roc 2007-08 006366e0  unit: CXTPEdit  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006366e0
//
// 006366e0  8b442404             mov eax, dword ptr [esp + 4]
// 006366e4  3d25e10000           cmp eax, 0xe125
// 006366e9  740e                 je 0x6366f9
// 006366eb  3d23e10000           cmp eax, 0xe123
// 006366f0  7407                 je 0x6366f9
// 006366f2  3d22e10000           cmp eax, 0xe122
// 006366f7  7526                 jne 0x63671f
// 006366f9  837c2408ff           cmp dword ptr [esp + 8], -1
// 006366fe  751f                 jne 0x63671f
// 00636700  56                   push esi
// 00636701  8b742410             mov esi, dword ptr [esp + 0x10]
// 00636705  57                   push edi
// 00636706  8b3e                 mov edi, dword ptr [esi]
// 00636708  50                   push eax
// 00636709  e872ffffff           call 0x636680
// 0063670e  50                   push eax
// 0063670f  8b07                 mov eax, dword ptr [edi]
// 00636711  8bce                 mov ecx, esi
// 00636713  ffd0                 call eax
// 00636715  5f                   pop edi
// 00636716  b801000000           mov eax, 1
// 0063671b  5e                   pop esi
// 0063671c  c21000               ret 0x10
// 0063671f  33c0                 xor eax, eax
// 00636721  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBox.cpp (function ?OnCmdMsg@CXTPEdit@@UAEHIHPAXPAUAFX_CMDHANDLERINFO@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBox.cpp
