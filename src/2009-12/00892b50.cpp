// roc 2009-12 00892b50  unit: CXTPDockBar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00892b50
//
// 00892b50  8b442404             mov eax, dword ptr [esp + 4]
// 00892b54  56                   push esi
// 00892b55  50                   push eax
// 00892b56  8bf1                 mov esi, ecx
// 00892b58  e8a3ffffff           call 0x892b00
// 00892b5d  83f8ff               cmp eax, -1
// 00892b60  7414                 je 0x892b76
// 00892b62  8b16                 mov edx, dword ptr [esi]
// 00892b64  6a00                 push 0
// 00892b66  50                   push eax
// 00892b67  8b8220010000         mov eax, dword ptr [edx + 0x120]
// 00892b6d  6802040000           push 0x402
// 00892b72  8bce                 mov ecx, esi
// 00892b74  ffd0                 call eax
// 00892b76  5e                   pop esi
// 00892b77  c20400               ret 4
// copied from an identical function in another client (function ?DeleteToolBar@CXTPReBar@@QAEXPAVCXTPToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPReBar.cpp