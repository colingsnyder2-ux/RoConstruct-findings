// roc 2009-06 0076d980  unit: CXTPControlWindowList  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076d980
//
// 0076d980  8b442404             mov eax, dword ptr [esp + 4]
// 0076d984  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0076d98b  740f                 je 0x76d99c
// 0076d98d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0076d991  c70100000000         mov dword ptr [ecx], 0
// 0076d997  33c0                 xor eax, eax
// 0076d999  c21000               ret 0x10
// 0076d99c  b801000000           mov eax, 1
// 0076d9a1  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?IsCustomizeDragOverAvail@CXTPControlCustom@@MAEHPAVCXTPCommandBar@@VCPoint@@AAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
