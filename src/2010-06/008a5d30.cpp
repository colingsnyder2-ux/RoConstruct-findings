// roc 2010-06 008a5d30  unit: CXTPControlWindowList  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a5d30
//
// 008a5d30  8b442404             mov eax, dword ptr [esp + 4]
// 008a5d34  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 008a5d3b  740f                 je 0x8a5d4c
// 008a5d3d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008a5d41  c70100000000         mov dword ptr [ecx], 0
// 008a5d47  33c0                 xor eax, eax
// 008a5d49  c21000               ret 0x10
// 008a5d4c  b801000000           mov eax, 1
// 008a5d51  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?IsCustomizeDragOverAvail@CXTPControlCustom@@MAEHPAVCXTPCommandBar@@VCPoint@@AAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
