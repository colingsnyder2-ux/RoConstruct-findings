// roc 2011-06 006ceb70  unit: RBX::Mechanism  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006ceb70
//
// 006ceb70  56                   push esi
// 006ceb71  8b742408             mov esi, dword ptr [esp + 8]
// 006ceb75  8bce                 mov ecx, esi
// 006ceb77  e88422e7ff           call 0x540e00
// 006ceb7c  84c0                 test al, al
// 006ceb7e  750b                 jne 0x6ceb8b
// 006ceb80  8bce                 mov ecx, esi
// 006ceb82  e8b919e7ff           call 0x540540
// 006ceb87  b001                 mov al, 1
// 006ceb89  5e                   pop esi
// 006ceb8a  c3                   ret 
// 006ceb8b  32c0                 xor al, al
// 006ceb8d  5e                   pop esi
// 006ceb8e  c3                   ret 
// library rbxgs/util\Math.cpp (function ?orthonormalizeIfNecessary@Math@RBX@@SA_NAAVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
