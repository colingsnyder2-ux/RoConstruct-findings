// roc 2007-03 004731d0  unit: seg_00470000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004731d0
//
// 004731d0  8b542404             mov edx, dword ptr [esp + 4]
// 004731d4  d94124               fld dword ptr [ecx + 0x24]
// 004731d7  d94224               fld dword ptr [edx + 0x24]
// 004731da  dae9                 fucompp 
// 004731dc  dfe0                 fnstsw ax
// 004731de  f6c444               test ah, 0x44
// 004731e1  7a39                 jp 0x47321c
// 004731e3  d94128               fld dword ptr [ecx + 0x28]
// 004731e6  d94228               fld dword ptr [edx + 0x28]
// 004731e9  dae9                 fucompp 
// 004731eb  dfe0                 fnstsw ax
// 004731ed  f6c444               test ah, 0x44
// 004731f0  7a2a                 jp 0x47321c
// 004731f2  d9412c               fld dword ptr [ecx + 0x2c]
// 004731f5  d9422c               fld dword ptr [edx + 0x2c]
// 004731f8  dae9                 fucompp 
// 004731fa  dfe0                 fnstsw ax
// 004731fc  f6c444               test ah, 0x44
// 004731ff  7a1b                 jp 0x47321c
// 00473201  52                   push edx
// 00473202  e829b80800           call 0x4fea30
// 00473207  84c0                 test al, al
// 00473209  7411                 je 0x47321c
// 0047320b  b801000000           mov eax, 1
// 00473210  33c9                 xor ecx, ecx
// 00473212  84c0                 test al, al
// 00473214  0f94c1               sete cl
// 00473217  8ac1                 mov al, cl
// 00473219  c20400               ret 4
// 0047321c  33c0                 xor eax, eax
// 0047321e  33c9                 xor ecx, ecx
// 00473220  84c0                 test al, al
// 00473222  0f94c1               sete cl
// 00473225  8ac1                 mov al, cl
// 00473227  c20400               ret 4
// library rbxgs/v8world\Joint.cpp (function ??9CoordinateFrame@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Joint.cpp
