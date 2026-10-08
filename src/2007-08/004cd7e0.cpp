// roc 2007-08 004cd7e0  unit: 0RBX::View  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cd7e0
//
// 004cd7e0  d9442410             fld dword ptr [esp + 0x10]
// 004cd7e4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004cd7e8  51                   push ecx
// 004cd7e9  8b494c               mov ecx, dword ptr [ecx + 0x4c]
// 004cd7ec  d91c24               fstp dword ptr [esp]
// 004cd7ef  d944240c             fld dword ptr [esp + 0xc]
// 004cd7f3  50                   push eax
// 004cd7f4  83ec08               sub esp, 8
// 004cd7f7  d95c2404             fstp dword ptr [esp + 4]
// 004cd7fb  d9442414             fld dword ptr [esp + 0x14]
// 004cd7ff  d91c24               fstp dword ptr [esp]
// 004cd802  e869ab0200           call 0x4f8370
// 004cd807  c21000               ret 0x10
// library rbxgs-view/View.cpp (function ?updateSettings@View@1RBX@@UAEXMM_NM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
