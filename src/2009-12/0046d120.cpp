// roc 2009-12 0046d120  unit: Scintilla::CScintillaView  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046d120
//
// 0046d120  8d81bc000000         lea eax, [ecx + 0xbc]
// 0046d126  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\ctlprop.cpp (function ?InternalGetFont@COleControl@@QAEAAVCFontHolder@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctlprop.cpp
