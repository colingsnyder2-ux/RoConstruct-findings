// roc 2008-06 00801550  unit: seg_00800000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801550
//
// 00801550  c70560db970014df8400 mov dword ptr [0x97db60], 0x84df14
// 0080155a  b960db9700           mov ecx, 0x97db60
// 0080155f  ff2530438000         jmp dword ptr [0x804330]
// library xtp-11.2.2-shared-mfc/Source\SyntaxEdit\XTPSyntaxEditLexClass.cpp (function ??__Fs_LVarIniter@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/SyntaxEdit/XTPSyntaxEditLexClass.cpp
