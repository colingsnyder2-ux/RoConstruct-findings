// roc 2008-06 005df0a0  unit: RBX::Message  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005df0a0
//
// 005df0a0  56                   push esi
// 005df0a1  8b742408             mov esi, dword ptr [esp + 8]
// 005df0a5  8bce                 mov ecx, esi
// 005df0a7  e83448f3ff           call 0x5138e0
// 005df0ac  84c0                 test al, al
// 005df0ae  750b                 jne 0x5df0bb
// 005df0b0  8bce                 mov ecx, esi
// 005df0b2  e89944f3ff           call 0x513550
// 005df0b7  b001                 mov al, 1
// 005df0b9  5e                   pop esi
// 005df0ba  c3                   ret 
// 005df0bb  32c0                 xor al, al
// 005df0bd  5e                   pop esi
// 005df0be  c3                   ret 
// library rbxgs/util\Math.cpp (function ?orthonormalizeIfNecessary@Math@RBX@@SA_NAAVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
