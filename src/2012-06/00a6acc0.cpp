// roc 2012-06 00a6acc0  unit: CXTColorSelectorCtrl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6acc0
//
// 00a6acc0  8b442404             mov eax, dword ptr [esp + 4]
// 00a6acc4  56                   push esi
// 00a6acc5  50                   push eax
// 00a6acc6  8bf1                 mov esi, ecx
// 00a6acc8  e86382f1ff           call 0x982f30
// 00a6accd  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a6acd0  6a00                 push 0
// 00a6acd2  6a00                 push 0
// 00a6acd4  51                   push ecx
// 00a6acd5  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a6acdb  5e                   pop esi
// 00a6acdc  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Deprecated\XTButton.cpp (function ?OnSetFocus@CXTButton@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButton.cpp
