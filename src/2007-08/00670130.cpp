// roc 2007-08 00670130  unit: CXTPDockingPaneManager  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00670130
//
// 00670130  8b442408             mov eax, dword ptr [esp + 8]
// 00670134  56                   push esi
// 00670135  8bf1                 mov esi, ecx
// 00670137  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0067013b  50                   push eax
// 0067013c  51                   push ecx
// 0067013d  8bce                 mov ecx, esi
// 0067013f  e88cf1ffff           call 0x66f2d0
// 00670144  8bce                 mov ecx, esi
// 00670146  e8e5e2ffff           call 0x66e430
// 0067014b  5e                   pop esi
// 0067014c  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTPTaskDialogClient.cpp (function ?OnSettingChange@CXTPTaskDialogClient@@IAEXIPBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTPTaskDialogClient.cpp
