// roc 2007-08 005ac1f0  unit: RBX::World  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ac1f0
//
// 005ac1f0  56                   push esi
// 005ac1f1  8b742408             mov esi, dword ptr [esp + 8]
// 005ac1f5  8bce                 mov ecx, esi
// 005ac1f7  e814dcf5ff           call 0x509e10
// 005ac1fc  84c0                 test al, al
// 005ac1fe  750b                 jne 0x5ac20b
// 005ac200  8bce                 mov ecx, esi
// 005ac202  e8d9d7f5ff           call 0x5099e0
// 005ac207  b001                 mov al, 1
// 005ac209  5e                   pop esi
// 005ac20a  c3                   ret 
// 005ac20b  32c0                 xor al, al
// 005ac20d  5e                   pop esi
// 005ac20e  c3                   ret 
// library rbxgs/util\Math.cpp (function ?orthonormalizeIfNecessary@Math@RBX@@SA_NAAVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
