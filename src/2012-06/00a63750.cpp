// roc 2012-06 00a63750  unit: CXTColorLum  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a63750
//
// 00a63750  56                   push esi
// 00a63751  8bf1                 mov esi, ecx
// 00a63753  e886eff1ff           call 0x9826de
// 00a63758  6a00                 push 0
// 00a6375a  c705aca3e50000000000 mov dword ptr [0xe5a3ac], 0
// 00a63764  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a63767  6a00                 push 0
// 00a63769  50                   push eax
// 00a6376a  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a63770  5e                   pop esi
// 00a63771  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?OnKillFocus@CXTPColorWnd@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
