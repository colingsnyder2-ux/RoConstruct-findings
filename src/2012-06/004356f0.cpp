// roc 2012-06 004356f0  unit: CWrapperView  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004356f0
//
// 004356f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004356f4  8b01                 mov eax, dword ptr [ecx]
// 004356f6  8b10                 mov edx, dword ptr [eax]
// 004356f8  c744240401000000     mov dword ptr [esp + 4], 1
// 00435700  ffe2                 jmp edx
// library xtp-15.2.1/Source\SyntaxEdit\XTPSyntaxEditView.cpp (function ?OnUpdateEditSelectAll@CXTPSyntaxEditView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/SyntaxEdit/XTPSyntaxEditView.cpp
