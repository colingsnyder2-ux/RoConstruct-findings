// from server: 100% by auto
// roc 2007-08 0044d030  unit: CRobloxDoc  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044d030
//
// 0044d030  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0044d034  8b01                 mov eax, dword ptr [ecx]
// 0044d036  8b10                 mov edx, dword ptr [eax]
// 0044d038  c744240401000000     mov dword ptr [esp + 4], 1
// 0044d040  ffe2                 jmp edx
// library xtp-11.2.2-vc8/Source\SyntaxEdit\XTPSyntaxEditView.cpp (function ?OnUpdateEditSelectAll@CXTPSyntaxEditView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SyntaxEdit/XTPSyntaxEditView.cpp
