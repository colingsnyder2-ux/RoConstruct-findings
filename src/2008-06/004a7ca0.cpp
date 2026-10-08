// from server: 100% by auto
// roc 2008-06 004a7ca0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a7ca0
//
// 004a7ca0  64a100000000         mov eax, dword ptr fs:[0]
// 004a7ca6  6aff                 push -1
// 004a7ca8  685e7f7c00           push 0x7c7f5e
// 004a7cad  50                   push eax
// 004a7cae  b801000000           mov eax, 1
// 004a7cb3  64892500000000       mov dword ptr fs:[0], esp
// 004a7cba  840500109700         test byte ptr [0x971000], al
// 004a7cc0  7525                 jne 0x4a7ce7
// 004a7cc2  090500109700         or dword ptr [0x971000], eax
// 004a7cc8  b9e80f9700           mov ecx, 0x970fe8
// 004a7ccd  c744240800000000     mov dword ptr [esp + 8], 0
// 004a7cd5  e8f616f8ff           call 0x4293d0
// 004a7cda  6810bd7f00           push 0x7fbd10
// 004a7cdf  e8cb9a1f00           call 0x6a17af
// 004a7ce4  83c404               add esp, 4
// 004a7ce7  8b0c24               mov ecx, dword ptr [esp]
// 004a7cea  b8e80f9700           mov eax, 0x970fe8
// 004a7cef  64890d00000000       mov dword ptr fs:[0], ecx
// 004a7cf6  83c40c               add esp, 0xc
// 004a7cf9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
