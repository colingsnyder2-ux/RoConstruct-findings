// from server: 100% by auto
// roc 2008-06 0079a890  unit: CXTPControlWindowList  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079a890
//
// 0079a890  8b442404             mov eax, dword ptr [esp + 4]
// 0079a894  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0079a89b  740f                 je 0x79a8ac
// 0079a89d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0079a8a1  c70100000000         mov dword ptr [ecx], 0
// 0079a8a7  33c0                 xor eax, eax
// 0079a8a9  c21000               ret 0x10
// 0079a8ac  b801000000           mov eax, 1
// 0079a8b1  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?IsCustomizeDragOverAvail@CXTPControlCustom@@MAEHPAVCXTPCommandBar@@VCPoint@@AAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
