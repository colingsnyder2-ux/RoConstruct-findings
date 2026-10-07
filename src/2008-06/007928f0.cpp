// roc 2008-06 007928f0  unit: CXTCaptionButton  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007928f0
//
// 007928f0  8b442404             mov eax, dword ptr [esp + 4]
// 007928f4  56                   push esi
// 007928f5  50                   push eax
// 007928f6  8bf1                 mov esi, ecx
// 007928f8  e8cdeaf0ff           call 0x6a13ca
// 007928fd  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00792900  6a00                 push 0
// 00792902  6a00                 push 0
// 00792904  51                   push ecx
// 00792905  ff15182e8000         call dword ptr [0x802e18]
// 0079290b  5e                   pop esi
// 0079290c  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?OnSetFocus@CXTButton@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp
