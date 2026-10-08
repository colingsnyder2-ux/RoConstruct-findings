// roc 2010-06 00690ef0  unit: RBX::Mechanism  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00690ef0
//
// 00690ef0  56                   push esi
// 00690ef1  8b742408             mov esi, dword ptr [esp + 8]
// 00690ef5  8bce                 mov ecx, esi
// 00690ef7  e8d45decff           call 0x556cd0
// 00690efc  84c0                 test al, al
// 00690efe  750b                 jne 0x690f0b
// 00690f00  8bce                 mov ecx, esi
// 00690f02  e85956ecff           call 0x556560
// 00690f07  b001                 mov al, 1
// 00690f09  5e                   pop esi
// 00690f0a  c3                   ret 
// 00690f0b  32c0                 xor al, al
// 00690f0d  5e                   pop esi
// 00690f0e  c3                   ret 
// library rbxgs/util\Math.cpp (function ?orthonormalizeIfNecessary@Math@RBX@@SA_NAAVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
