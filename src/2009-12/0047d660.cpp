// roc 2009-12 0047d660  unit: RBX::LDraw2Lua::LuaWriter  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047d660
//
// 0047d660  b801000000           mov eax, 1
// 0047d665  840510ccb700         test byte ptr [0xb7cc10], al
// 0047d66b  7513                 jne 0x47d680
// 0047d66d  090510ccb700         or dword ptr [0xb7cc10], eax
// 0047d673  a1b0b59800           mov eax, dword ptr [0x98b5b0]
// 0047d678  dd00                 fld qword ptr [eax]
// 0047d67a  dd1d08ccb700         fstp qword ptr [0xb7cc08]
// 0047d680  b808ccb700           mov eax, 0xb7cc08
// 0047d685  c3                   ret 
// library rbxgs-appdraw/HitTest.cpp (function ?inf@G3D@@YAABNXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw HitTest.cpp
