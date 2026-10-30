// from server: 100% by auto
// roc 2012-06 00415a60  unit: CDeclarationView  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00415a60
//
// 00415a60  e80dcc5600           call 0x982672
// 00415a65  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00415a69  8901                 mov dword ptr [ecx], eax
// 00415a6b  33c0                 xor eax, eax
// 00415a6d  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Deprecated\XTHtmlView.cpp (function ?get_accChildCount@CFormView@@UAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTHtmlView.cpp
