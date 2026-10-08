// roc 2007-03 0076fd00  unit: seg_00760000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076fd00
//
// 0076fd00  33c9                 xor ecx, ecx
// 0076fd02  51                   push ecx
// 0076fd03  683ca77900           push 0x79a73c
// 0076fd08  6850a77900           push 0x79a750
// 0076fd0d  51                   push ecx
// 0076fd0e  b8d0624800           mov eax, 0x4862d0
// 0076fd13  50                   push eax
// 0076fd14  b968838b00           mov ecx, 0x8b8368
// 0076fd19  e8a2a0d1ff           call 0x489dc0
// 0076fd1e  68d0817700           push 0x7781d0
// 0076fd23  e88bf4eaff           call 0x61f1b3
// 0076fd28  59                   pop ecx
// 0076fd29  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__Efunc_SetSuperSafeChat@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
