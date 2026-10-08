// roc 2008-06 00563330  unit: RBX::ContentProvider  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563330
//
// 00563330  81ec94000000         sub esp, 0x94
// 00563336  6890000000           push 0x90
// 0056333b  8d442408             lea eax, [esp + 8]
// 0056333f  6a00                 push 0
// 00563341  50                   push eax
// 00563342  e8bde31300           call 0x6a1704
// 00563347  83c40c               add esp, 0xc
// 0056334a  8d0c24               lea ecx, [esp]
// 0056334d  51                   push ecx
// 0056334e  c744240494000000     mov dword ptr [esp + 4], 0x94
// 00563356  ff159c218000         call dword ptr [0x80219c]
// 0056335c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00563360  81c494000000         add esp, 0x94
// 00563366  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?osPlatformId@DebugSettings@RBX@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
