// roc 2012-06 00a4ace0  unit: CXTPControlWindowList  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4ace0
//
// 00a4ace0  8b442404             mov eax, dword ptr [esp + 4]
// 00a4ace4  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 00a4aceb  740f                 je 0xa4acfc
// 00a4aced  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a4acf1  c70100000000         mov dword ptr [ecx], 0
// 00a4acf7  33c0                 xor eax, eax
// 00a4acf9  c21000               ret 0x10
// 00a4acfc  b801000000           mov eax, 1
// 00a4ad01  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?IsCustomizeDragOverAvail@CXTPControlCustom@@MAEHPAVCXTPCommandBar@@VCPoint@@AAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
