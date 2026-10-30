// roc 2012-06 00b12a70  unit: seg_00b10000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b12a70
//
// 00b12a70  c705c0c3e1009068b600 mov dword ptr [0xe1c3c0], 0xb66890
// 00b12a7a  b9c0c3e100           mov ecx, 0xe1c3c0
// 00b12a7f  ff259c39b200         jmp dword ptr [0xb2399c]
// library xtp-15.2.1-shared-mfc/Source\SyntaxEdit\XTPSyntaxEditLexClass.cpp (function ??__Fs_LVarIniter@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/SyntaxEdit/XTPSyntaxEditLexClass.cpp
