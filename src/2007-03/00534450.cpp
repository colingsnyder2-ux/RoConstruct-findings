// roc 2007-03 00534450  unit: seg_00530000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00534450
//
// 00534450  b801000000           mov eax, 1
// 00534455  8405f0b48b00         test byte ptr [0x8bb4f0], al
// 0053445b  7533                 jne 0x534490
// 0053445d  0905f0b48b00         or dword ptr [0x8bb4f0], eax
// 00534463  33c0                 xor eax, eax
// 00534465  c705e4b48b00946d7900 mov dword ptr [0x8bb4e4], 0x796d94
// 0053446f  6820947700           push 0x779420
// 00534474  a3e8b48b00           mov dword ptr [0x8bb4e8], eax
// 00534479  a3ecb48b00           mov dword ptr [0x8bb4ec], eax
// 0053447e  c705e4b48b004c507a00 mov dword ptr [0x8bb4e4], 0x7a504c
// 00534488  e826ad0e00           call 0x61f1b3
// 0053448d  83c404               add esp, 4
// 00534490  b8e4b48b00           mov eax, 0x8bb4e4
// 00534495  c3                   ret 
// library rbxgs/v8datamodel\UserController.cpp (function ?getStaticNullController@NullController@RBX@@SAPAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
