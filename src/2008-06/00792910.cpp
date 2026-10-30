// from server: 100% by auto
// roc 2008-06 00792910  unit: CXTCaptionButton  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00792910
//
// 00792910  56                   push esi
// 00792911  8bf1                 mov esi, ecx
// 00792913  e850e3f0ff           call 0x6a0c68
// 00792918  8b4620               mov eax, dword ptr [esi + 0x20]
// 0079291b  6a00                 push 0
// 0079291d  6a00                 push 0
// 0079291f  50                   push eax
// 00792920  ff15182e8000         call dword ptr [0x802e18]
// 00792926  5e                   pop esi
// 00792927  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ?OnEnable@CXTPScrollBar@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
