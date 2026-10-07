// roc 2007-08 00632ae0  unit: CXTPCommandBarKeyboardTip  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00632ae0
//
// 00632ae0  8b442404             mov eax, dword ptr [esp + 4]
// 00632ae4  894154               mov dword ptr [ecx + 0x54], eax
// 00632ae7  e804f7ffff           call 0x6321f0
// 00632aec  8bc8                 mov ecx, eax
// 00632aee  e80d9d0100           call 0x64c800
// 00632af3  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?SetImageManager@CXTPCommandBars@@QAEXPAVCXTPImageManager@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
