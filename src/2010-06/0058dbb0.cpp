// roc 2010-06 0058dbb0  unit: seg_00580000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058dbb0
//
// 0058dbb0  81ec94000000         sub esp, 0x94
// 0058dbb6  6890000000           push 0x90
// 0058dbbb  8d442408             lea eax, [esp + 8]
// 0058dbbf  6a00                 push 0
// 0058dbc1  50                   push eax
// 0058dbc2  e81db02100           call 0x7a8be4
// 0058dbc7  83c40c               add esp, 0xc
// 0058dbca  8d0c24               lea ecx, [esp]
// 0058dbcd  51                   push ecx
// 0058dbce  c744240494000000     mov dword ptr [esp + 4], 0x94
// 0058dbd6  ff1554a39e00         call dword ptr [0x9ea354]
// 0058dbdc  8b442410             mov eax, dword ptr [esp + 0x10]
// 0058dbe0  81c494000000         add esp, 0x94
// 0058dbe6  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?osPlatformId@DebugSettings@RBX@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
