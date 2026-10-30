// from server: 100% by auto
// roc 2011-06 00848cf0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00848cf0
//
// 00848cf0  c701dc64ac00         mov dword ptr [ecx], 0xac64dc
// 00848cf6  83c118               add ecx, 0x18
// 00848cf9  e962feffff           jmp 0x848b60
// library xtp-15.2.1/Source\SyntaxEdit\XTPSyntaxEditLineMarksManager.cpp (function ??1XTP_EDIT_LMPARAM@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/SyntaxEdit/XTPSyntaxEditLineMarksManager.cpp
