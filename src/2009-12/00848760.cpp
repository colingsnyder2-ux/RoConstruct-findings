// roc 2009-12 00848760  unit: CXTPControlWindowList  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00848760
//
// 00848760  8b442404             mov eax, dword ptr [esp + 4]
// 00848764  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0084876b  740f                 je 0x84877c
// 0084876d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00848771  c70100000000         mov dword ptr [ecx], 0
// 00848777  33c0                 xor eax, eax
// 00848779  c21000               ret 0x10
// 0084877c  b801000000           mov eax, 1
// 00848781  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?IsCustomizeDragOverAvail@CXTPControlCustom@@MAEHPAVCXTPCommandBar@@VCPoint@@AAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
