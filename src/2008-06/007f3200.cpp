// roc 2008-06 007f3200  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3200
//
// 007f3200  56                   push esi
// 007f3201  6a05                 push 5
// 007f3203  33c9                 xor ecx, ecx
// 007f3205  51                   push ecx
// 007f3206  b8d05d5600           mov eax, 0x565dd0
// 007f320b  50                   push eax
// 007f320c  33f6                 xor esi, esi
// 007f320e  56                   push esi
// 007f320f  ba20524400           mov edx, 0x445220
// 007f3214  52                   push edx
// 007f3215  68b4e78200           push 0x82e7b4
// 007f321a  68cce88200           push 0x82e8cc
// 007f321f  b96c479700           mov ecx, 0x97476c
// 007f3224  e84726d7ff           call 0x565870
// 007f3229  6830ce7f00           push 0x7fce30
// 007f322e  e87ce5eaff           call 0x6a17af
// 007f3233  83c404               add esp, 4
// 007f3236  5e                   pop esi
// 007f3237  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_errorReporting@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
