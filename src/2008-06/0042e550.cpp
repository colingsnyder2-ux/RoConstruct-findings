// roc 2008-06 0042e550  unit: CMainFrame  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042e550
//
// 0042e550  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0042e554  8b01                 mov eax, dword ptr [ecx]
// 0042e556  8b10                 mov edx, dword ptr [eax]
// 0042e558  c744240401000000     mov dword ptr [esp + 4], 1
// 0042e560  ffe2                 jmp edx
// library xtp-11.2.2/Source\SyntaxEdit\XTPSyntaxEditView.cpp (function ?OnUpdateEditSelectAll@CXTPSyntaxEditView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SyntaxEdit/XTPSyntaxEditView.cpp
