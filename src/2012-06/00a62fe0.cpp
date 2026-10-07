// roc 2012-06 00a62fe0  unit: CXTColorWnd  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a62fe0
//
// 00a62fe0  8b442404             mov eax, dword ptr [esp + 4]
// 00a62fe4  56                   push esi
// 00a62fe5  50                   push eax
// 00a62fe6  8bf1                 mov esi, ecx
// 00a62fe8  e843fff1ff           call 0x982f30
// 00a62fed  6a00                 push 0
// 00a62fef  c705aca3e50001000000 mov dword ptr [0xe5a3ac], 1
// 00a62ff9  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a62ffc  6a00                 push 0
// 00a62ffe  51                   push ecx
// 00a62fff  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a63005  5e                   pop esi
// 00a63006  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?OnSetFocus@CXTPColorWnd@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
