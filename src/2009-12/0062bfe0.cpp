// roc 2009-12 0062bfe0  unit: seg_00620000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062bfe0
//
// 0062bfe0  81ec94000000         sub esp, 0x94
// 0062bfe6  6890000000           push 0x90
// 0062bfeb  8d442408             lea eax, [esp + 8]
// 0062bfef  6a00                 push 0
// 0062bff1  50                   push eax
// 0062bff2  e8ad8a1c00           call 0x7f4aa4
// 0062bff7  83c40c               add esp, 0xc
// 0062bffa  8d0c24               lea ecx, [esp]
// 0062bffd  51                   push ecx
// 0062bffe  c744240494000000     mov dword ptr [esp + 4], 0x94
// 0062c006  ff15e4b19800         call dword ptr [0x98b1e4]
// 0062c00c  8b442410             mov eax, dword ptr [esp + 0x10]
// 0062c010  81c494000000         add esp, 0x94
// 0062c016  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?osPlatformId@DebugSettings@RBX@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
