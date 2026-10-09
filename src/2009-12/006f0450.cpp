// roc 2009-12 006f0450  unit: RBX::Primitive  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f0450
//
// 006f0450  56                   push esi
// 006f0451  8b742408             mov esi, dword ptr [esp + 8]
// 006f0455  8bce                 mov ecx, esi
// 006f0457  e8043ff0ff           call 0x5f4360
// 006f045c  84c0                 test al, al
// 006f045e  750b                 jne 0x6f046b
// 006f0460  8bce                 mov ecx, esi
// 006f0462  e88939f0ff           call 0x5f3df0
// 006f0467  b001                 mov al, 1
// 006f0469  5e                   pop esi
// 006f046a  c3                   ret 
// 006f046b  32c0                 xor al, al
// 006f046d  5e                   pop esi
// 006f046e  c3                   ret 
// library rbxgs/util\Math.cpp (function ?orthonormalizeIfNecessary@Math@RBX@@SA_NAAVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
