// roc 2009-06 0066e190  unit: RBX::VHumanoid::?$EventDesc  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066e190
//
// 0066e190  56                   push esi
// 0066e191  8b742408             mov esi, dword ptr [esp + 8]
// 0066e195  8bce                 mov ecx, esi
// 0066e197  e8b4a0f0ff           call 0x578250
// 0066e19c  84c0                 test al, al
// 0066e19e  750b                 jne 0x66e1ab
// 0066e1a0  8bce                 mov ecx, esi
// 0066e1a2  e8199df0ff           call 0x577ec0
// 0066e1a7  b001                 mov al, 1
// 0066e1a9  5e                   pop esi
// 0066e1aa  c3                   ret 
// 0066e1ab  32c0                 xor al, al
// 0066e1ad  5e                   pop esi
// 0066e1ae  c3                   ret 
// library rbxgs/util\Math.cpp (function ?orthonormalizeIfNecessary@Math@RBX@@SA_NAAVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
