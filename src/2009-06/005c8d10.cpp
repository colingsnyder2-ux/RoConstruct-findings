// roc 2009-06 005c8d10  unit: seg_005c0000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c8d10
//
// 005c8d10  81ec94000000         sub esp, 0x94
// 005c8d16  6890000000           push 0x90
// 005c8d1b  8d442408             lea eax, [esp + 8]
// 005c8d1f  6a00                 push 0
// 005c8d21  50                   push eax
// 005c8d22  e84d0f1500           call 0x719c74
// 005c8d27  83c40c               add esp, 0xc
// 005c8d2a  8d0c24               lea ecx, [esp]
// 005c8d2d  51                   push ecx
// 005c8d2e  c744240494000000     mov dword ptr [esp + 4], 0x94
// 005c8d36  ff15c8e18900         call dword ptr [0x89e1c8]
// 005c8d3c  8b442410             mov eax, dword ptr [esp + 0x10]
// 005c8d40  81c494000000         add esp, 0x94
// 005c8d46  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?osPlatformId@DebugSettings@RBX@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
