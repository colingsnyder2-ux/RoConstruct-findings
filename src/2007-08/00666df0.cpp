// from server: 100% by auto
// roc 2007-08 00666df0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00666df0
//
// 00666df0  c701fca57c00         mov dword ptr [ecx], 0x7ca5fc
// 00666df6  83c118               add ecx, 0x18
// 00666df9  e962feffff           jmp 0x666c60
// library xtp-11.2.2-vc8/Source\SyntaxEdit\XTPSyntaxEditLineMarksManager.cpp (function ??1XTP_EDIT_LMPARAM@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SyntaxEdit/XTPSyntaxEditLineMarksManager.cpp
