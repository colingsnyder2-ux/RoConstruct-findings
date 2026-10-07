// roc 2012-06 00a63720  unit: CXTColorLum  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a63720
//
// 00a63720  8b442404             mov eax, dword ptr [esp + 4]
// 00a63724  56                   push esi
// 00a63725  50                   push eax
// 00a63726  8bf1                 mov esi, ecx
// 00a63728  e803f8f1ff           call 0x982f30
// 00a6372d  6a00                 push 0
// 00a6372f  c705aca3e50002000000 mov dword ptr [0xe5a3ac], 2
// 00a63739  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a6373c  6a00                 push 0
// 00a6373e  51                   push ecx
// 00a6373f  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a63745  5e                   pop esi
// 00a63746  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?OnSetFocus@CXTPColorLum@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
