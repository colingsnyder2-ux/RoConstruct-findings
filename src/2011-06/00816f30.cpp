// roc 2011-06 00816f30  unit: CXTPEdit  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00816f30
//
// 00816f30  8b442404             mov eax, dword ptr [esp + 4]
// 00816f34  3d25e10000           cmp eax, 0xe125
// 00816f39  740e                 je 0x816f49
// 00816f3b  3d23e10000           cmp eax, 0xe123
// 00816f40  7407                 je 0x816f49
// 00816f42  3d22e10000           cmp eax, 0xe122
// 00816f47  7526                 jne 0x816f6f
// 00816f49  837c2408ff           cmp dword ptr [esp + 8], -1
// 00816f4e  751f                 jne 0x816f6f
// 00816f50  56                   push esi
// 00816f51  8b742410             mov esi, dword ptr [esp + 0x10]
// 00816f55  57                   push edi
// 00816f56  8b3e                 mov edi, dword ptr [esi]
// 00816f58  50                   push eax
// 00816f59  e842ffffff           call 0x816ea0
// 00816f5e  50                   push eax
// 00816f5f  8b07                 mov eax, dword ptr [edi]
// 00816f61  8bce                 mov ecx, esi
// 00816f63  ffd0                 call eax
// 00816f65  5f                   pop edi
// 00816f66  b801000000           mov eax, 1
// 00816f6b  5e                   pop esi
// 00816f6c  c21000               ret 0x10
// 00816f6f  33c0                 xor eax, eax
// 00816f71  c21000               ret 0x10
// library xtp-15.2.1/Source\CommandBars\XTPControlEdit.cpp (function ?OnCmdMsg@CXTPCommandBarEditCtrl@@UAEHIHPAXPAUAFX_CMDHANDLERINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlEdit.cpp
