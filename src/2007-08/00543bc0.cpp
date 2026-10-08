// from server: 100% by auto
// roc 2007-08 00543bc0  unit: RBX::Debugable::W4AssertAction::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00543bc0
//
// 00543bc0  64a100000000         mov eax, dword ptr fs:[0]
// 00543bc6  6aff                 push -1
// 00543bc8  68ce177500           push 0x7517ce
// 00543bcd  50                   push eax
// 00543bce  b801000000           mov eax, 1
// 00543bd3  64892500000000       mov dword ptr fs:[0], esp
// 00543bda  8405d8198c00         test byte ptr [0x8c19d8], al
// 00543be0  7525                 jne 0x543c07
// 00543be2  0905d8198c00         or dword ptr [0x8c19d8], eax
// 00543be8  b940198c00           mov ecx, 0x8c1940
// 00543bed  c744240800000000     mov dword ptr [esp + 8], 0
// 00543bf5  e8d6fcffff           call 0x5438d0
// 00543bfa  68009a7700           push 0x779a00
// 00543bff  e81fd10e00           call 0x630d23
// 00543c04  83c404               add esp, 4
// 00543c07  8b0c24               mov ecx, dword ptr [esp]
// 00543c0a  b840198c00           mov eax, 0x8c1940
// 00543c0f  64890d00000000       mov dword ptr fs:[0], ecx
// 00543c16  83c40c               add esp, 0xc
// 00543c19  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
