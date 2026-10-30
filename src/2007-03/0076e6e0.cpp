// roc 2007-03 0076e6e0  unit: seg_00760000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076e6e0
//
// 0076e6e0  b964918800           mov ecx, 0x889164
// 0076e6e5  ff1568dd7700         call dword ptr [0x77dd68]
// 0076e6eb  b968918800           mov ecx, 0x889168
// 0076e6f0  ff1568dd7700         call dword ptr [0x77dd68]
// 0076e6f6  33c0                 xor eax, eax
// 0076e6f8  68f07e7700           push 0x777ef0
// 0076e6fd  a36c918800           mov dword ptr [0x88916c], eax
// 0076e702  c7057091880001000000 mov dword ptr [0x889170], 1
// 0076e70c  a374918800           mov dword ptr [0x889174], eax
// 0076e711  a378918800           mov dword ptr [0x889178], eax
// 0076e716  e8980aebff           call 0x61f1b3
// 0076e71b  59                   pop ecx
// 0076e71c  c3                   ret 
// copied from an identical function in another client (function ??__E_scintillaEditState@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp