// roc 2009-12 0097ed10  unit: seg_00970000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097ed10
//
// 0097ed10  b9ecb5b000           mov ecx, 0xb0b5ec
// 0097ed15  ff15c0de9800         call dword ptr [0x98dec0]
// 0097ed1b  b9e8b5b000           mov ecx, 0xb0b5e8
// 0097ed20  ff25c0de9800         jmp dword ptr [0x98dec0]
// copied from an identical function in another client (function ??__F_scintillaEditState@@YAXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp