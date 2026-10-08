// roc 2012-06 007be4d0  unit: RBX::Geometry  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007be4d0
//
// 007be4d0  56                   push esi
// 007be4d1  8b742408             mov esi, dword ptr [esp + 8]
// 007be4d5  8bce                 mov ecx, esi
// 007be4d7  e8c4ebe6ff           call 0x62d0a0
// 007be4dc  84c0                 test al, al
// 007be4de  750b                 jne 0x7be4eb
// 007be4e0  8bce                 mov ecx, esi
// 007be4e2  e859e2e6ff           call 0x62c740
// 007be4e7  b001                 mov al, 1
// 007be4e9  5e                   pop esi
// 007be4ea  c3                   ret 
// 007be4eb  32c0                 xor al, al
// 007be4ed  5e                   pop esi
// 007be4ee  c3                   ret 
// library rbxgs/util\Math.cpp (function ?orthonormalizeIfNecessary@Math@RBX@@SA_NAAVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
