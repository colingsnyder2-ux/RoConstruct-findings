// roc 2007-03 007755e0  unit: seg_00770000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007755e0
//
// 007755e0  6a01                 push 1
// 007755e2  33c9                 xor ecx, ecx
// 007755e4  68bcda7b00           push 0x7bdabc
// 007755e9  51                   push ecx
// 007755ea  b800ad5d00           mov eax, 0x5dad00
// 007755ef  50                   push eax
// 007755f0  b9e8068c00           mov ecx, 0x8c06e8
// 007755f5  e8d681e6ff           call 0x5dd7d0
// 007755fa  6800b97700           push 0x77b900
// 007755ff  e8af9beaff           call 0x61f1b3
// 00775604  59                   pop ecx
// 00775605  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__Efunc_getLastForceOld@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
