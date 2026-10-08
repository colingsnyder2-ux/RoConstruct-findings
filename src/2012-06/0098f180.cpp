// from server: 100% by auto
// roc 2012-06 0098f180  unit: CXTPEdit  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098f180
//
// 0098f180  8b442404             mov eax, dword ptr [esp + 4]
// 0098f184  3d25e10000           cmp eax, 0xe125
// 0098f189  740e                 je 0x98f199
// 0098f18b  3d23e10000           cmp eax, 0xe123
// 0098f190  7407                 je 0x98f199
// 0098f192  3d22e10000           cmp eax, 0xe122
// 0098f197  7526                 jne 0x98f1bf
// 0098f199  837c2408ff           cmp dword ptr [esp + 8], -1
// 0098f19e  751f                 jne 0x98f1bf
// 0098f1a0  56                   push esi
// 0098f1a1  8b742410             mov esi, dword ptr [esp + 0x10]
// 0098f1a5  57                   push edi
// 0098f1a6  8b3e                 mov edi, dword ptr [esi]
// 0098f1a8  50                   push eax
// 0098f1a9  e842ffffff           call 0x98f0f0
// 0098f1ae  50                   push eax
// 0098f1af  8b07                 mov eax, dword ptr [edi]
// 0098f1b1  8bce                 mov ecx, esi
// 0098f1b3  ffd0                 call eax
// 0098f1b5  5f                   pop edi
// 0098f1b6  b801000000           mov eax, 1
// 0098f1bb  5e                   pop esi
// 0098f1bc  c21000               ret 0x10
// 0098f1bf  33c0                 xor eax, eax
// 0098f1c1  c21000               ret 0x10
// library xtp-15.2.1/Source\CommandBars\XTPControlEdit.cpp (function ?OnCmdMsg@CXTPCommandBarEditCtrl@@UAEHIHPAXPAUAFX_CMDHANDLERINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlEdit.cpp
