// roc 2008-06 0071da10  unit: CXTPMouseManager  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071da10
//
// 0071da10  8b442404             mov eax, dword ptr [esp + 4]
// 0071da14  56                   push esi
// 0071da15  50                   push eax
// 0071da16  8bf1                 mov esi, ecx
// 0071da18  e8a3ffffff           call 0x71d9c0
// 0071da1d  83f8ff               cmp eax, -1
// 0071da20  7414                 je 0x71da36
// 0071da22  8b16                 mov edx, dword ptr [esi]
// 0071da24  6a00                 push 0
// 0071da26  50                   push eax
// 0071da27  8b8220010000         mov eax, dword ptr [edx + 0x120]
// 0071da2d  6802040000           push 0x402
// 0071da32  8bce                 mov ecx, esi
// 0071da34  ffd0                 call eax
// 0071da36  5e                   pop esi
// 0071da37  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPReBar.cpp (function ?DeleteToolBar@CXTPReBar@@QAEXPAVCXTPToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPReBar.cpp
