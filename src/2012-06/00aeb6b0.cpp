// roc 2012-06 00aeb6b0  unit: seg_00ae0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb6b0
//
// 00aeb6b0  b90417d700           mov ecx, 0xd71704
// 00aeb6b5  ff158447b200         call dword ptr [0xb24784]
// 00aeb6bb  b90817d700           mov ecx, 0xd71708
// 00aeb6c0  ff158447b200         call dword ptr [0xb24784]
// 00aeb6c6  33c0                 xor eax, eax
// 00aeb6c8  683028b100           push 0xb12830
// 00aeb6cd  a30c17d700           mov dword ptr [0xd7170c], eax
// 00aeb6d2  c7051017d70001000000 mov dword ptr [0xd71710], 1
// 00aeb6dc  a31417d700           mov dword ptr [0xd71714], eax
// 00aeb6e1  a31817d700           mov dword ptr [0xd71718], eax
// 00aeb6e6  e80a7be9ff           call 0x9831f5
// 00aeb6eb  59                   pop ecx
// 00aeb6ec  c3                   ret 
// copied from an identical function in another client (function ??__E_scintillaEditState@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp