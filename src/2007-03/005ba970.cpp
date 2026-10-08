// roc 2007-03 005ba970  unit: seg_005b0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ba970
//
// 005ba970  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ba974  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ba978  8b542404             mov edx, dword ptr [esp + 4]
// 005ba97c  6a00                 push 0
// 005ba97e  50                   push eax
// 005ba97f  51                   push ecx
// 005ba980  52                   push edx
// 005ba981  e81afeffff           call 0x5ba7a0
// 005ba986  83c410               add esp, 0x10
// 005ba989  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Insertion_sort@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
