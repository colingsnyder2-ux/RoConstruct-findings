// roc 2011-06 0046f450  unit: CRobloxDoc  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046f450
//
// 0046f450  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046f454  8b01                 mov eax, dword ptr [ecx]
// 0046f456  8b10                 mov edx, dword ptr [eax]
// 0046f458  c744240401000000     mov dword ptr [esp + 4], 1
// 0046f460  ffe2                 jmp edx
// library xtp-15.2.1/Source\SyntaxEdit\XTPSyntaxEditView.cpp (function ?OnUpdateEditSelectAll@CXTPSyntaxEditView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/SyntaxEdit/XTPSyntaxEditView.cpp
