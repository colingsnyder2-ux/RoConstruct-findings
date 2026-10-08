// roc 2007-03 005a7d20  unit: seg_005a0000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a7d20
//
// 005a7d20  56                   push esi
// 005a7d21  8b742408             mov esi, dword ptr [esp + 8]
// 005a7d25  8bce                 mov ecx, esi
// 005a7d27  e86476f5ff           call 0x4ff390
// 005a7d2c  84c0                 test al, al
// 005a7d2e  750b                 jne 0x5a7d3b
// 005a7d30  8bce                 mov ecx, esi
// 005a7d32  e86971f5ff           call 0x4feea0
// 005a7d37  b001                 mov al, 1
// 005a7d39  5e                   pop esi
// 005a7d3a  c3                   ret 
// 005a7d3b  32c0                 xor al, al
// 005a7d3d  5e                   pop esi
// 005a7d3e  c3                   ret 
// library rbxgs/util\Math.cpp (function ?orthonormalizeIfNecessary@Math@RBX@@SA_NAAVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
