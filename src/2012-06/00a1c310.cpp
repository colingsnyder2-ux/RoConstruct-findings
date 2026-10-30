// roc 2012-06 00a1c310  unit: CXTPDockBar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1c310
//
// 00a1c310  8b442404             mov eax, dword ptr [esp + 4]
// 00a1c314  56                   push esi
// 00a1c315  50                   push eax
// 00a1c316  8bf1                 mov esi, ecx
// 00a1c318  e8a3ffffff           call 0xa1c2c0
// 00a1c31d  83f8ff               cmp eax, -1
// 00a1c320  7414                 je 0xa1c336
// 00a1c322  8b16                 mov edx, dword ptr [esi]
// 00a1c324  6a00                 push 0
// 00a1c326  50                   push eax
// 00a1c327  8b8220010000         mov eax, dword ptr [edx + 0x120]
// 00a1c32d  6802040000           push 0x402
// 00a1c332  8bce                 mov ecx, esi
// 00a1c334  ffd0                 call eax
// 00a1c336  5e                   pop esi
// 00a1c337  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPReBar.cpp (function ?DeleteToolBar@CXTPReBar@@QAEXPAVCXTPToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPReBar.cpp
