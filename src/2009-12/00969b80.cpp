// roc 2009-12 00969b80  unit: seg_00960000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00969b80
//
// 00969b80  b9e8b5b000           mov ecx, 0xb0b5e8
// 00969b85  ff1574de9800         call dword ptr [0x98de74]
// 00969b8b  b9ecb5b000           mov ecx, 0xb0b5ec
// 00969b90  ff1574de9800         call dword ptr [0x98de74]
// 00969b96  33c0                 xor eax, eax
// 00969b98  6810ed9700           push 0x97ed10
// 00969b9d  a3f0b5b000           mov dword ptr [0xb0b5f0], eax
// 00969ba2  c705f4b5b00001000000 mov dword ptr [0xb0b5f4], 1
// 00969bac  a3f8b5b000           mov dword ptr [0xb0b5f8], eax
// 00969bb1  a3fcb5b000           mov dword ptr [0xb0b5fc], eax
// 00969bb6  e86eade8ff           call 0x7f4929
// 00969bbb  59                   pop ecx
// 00969bbc  c3                   ret 
// copied from an identical function in another client (function ??__E_scintillaEditState@@YAXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp