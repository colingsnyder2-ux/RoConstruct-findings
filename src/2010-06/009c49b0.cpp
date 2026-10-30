// roc 2010-06 009c49b0  unit: seg_009c0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c49b0
//
// 009c49b0  b9f04eb800           mov ecx, 0xb84ef0
// 009c49b5  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 009c49bb  b9f44eb800           mov ecx, 0xb84ef4
// 009c49c0  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 009c49c6  33c0                 xor eax, eax
// 009c49c8  6860bf9d00           push 0x9dbf60
// 009c49cd  a3f84eb800           mov dword ptr [0xb84ef8], eax
// 009c49d2  c705fc4eb80001000000 mov dword ptr [0xb84efc], 1
// 009c49dc  a3004fb800           mov dword ptr [0xb84f00], eax
// 009c49e1  a3044fb800           mov dword ptr [0xb84f04], eax
// 009c49e6  e87840deff           call 0x7a8a63
// 009c49eb  59                   pop ecx
// 009c49ec  c3                   ret 
// copied from an identical function in another client (function ??__E_scintillaEditState@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp