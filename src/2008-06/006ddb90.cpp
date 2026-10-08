// from server: 100% by auto
// roc 2008-06 006ddb90  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ddb90
//
// 006ddb90  c701745d8500         mov dword ptr [ecx], 0x855d74
// 006ddb96  83c118               add ecx, 0x18
// 006ddb99  e962feffff           jmp 0x6dda00
// library xtp-11.2.2/Source\SyntaxEdit\XTPSyntaxEditLineMarksManager.cpp (function ??1XTP_EDIT_LMPARAM@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SyntaxEdit/XTPSyntaxEditLineMarksManager.cpp
