// roc 2011-06 0085a190  unit: CXTPControlWindowList  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085a190
//
// 0085a190  8b442404             mov eax, dword ptr [esp + 4]
// 0085a194  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0085a19b  740f                 je 0x85a1ac
// 0085a19d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085a1a1  c70100000000         mov dword ptr [ecx], 0
// 0085a1a7  33c0                 xor eax, eax
// 0085a1a9  c21000               ret 0x10
// 0085a1ac  b801000000           mov eax, 1
// 0085a1b1  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?IsCustomizeDragOverAvail@CXTPControlCustom@@MAEHPAVCXTPCommandBar@@VCPoint@@AAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
