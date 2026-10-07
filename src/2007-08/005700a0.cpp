// roc 2007-08 005700a0  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005700a0
//
// 005700a0  64a100000000         mov eax, dword ptr fs:[0]
// 005700a6  6aff                 push -1
// 005700a8  680e4c7500           push 0x754c0e
// 005700ad  50                   push eax
// 005700ae  b801000000           mov eax, 1
// 005700b3  64892500000000       mov dword ptr fs:[0], esp
// 005700ba  840534258c00         test byte ptr [0x8c2534], al
// 005700c0  7525                 jne 0x5700e7
// 005700c2  090534258c00         or dword ptr [0x8c2534], eax
// 005700c8  b92c258c00           mov ecx, 0x8c252c
// 005700cd  c744240800000000     mov dword ptr [esp + 8], 0
// 005700d5  e826561b00           call 0x725700
// 005700da  68509f7700           push 0x779f50
// 005700df  e83f0c0c00           call 0x630d23
// 005700e4  83c404               add esp, 4
// 005700e7  8b0c24               mov ecx, dword ptr [esp]
// 005700ea  b82c258c00           mov eax, 0x8c252c
// 005700ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005700f6  83c40c               add esp, 0xc
// 005700f9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
