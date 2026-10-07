// roc 2008-06 005bb2c0  unit: RBX::Soundscape::SoundService  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bb2c0
//
// 005bb2c0  64a100000000         mov eax, dword ptr fs:[0]
// 005bb2c6  6aff                 push -1
// 005bb2c8  68ce3b7d00           push 0x7d3bce
// 005bb2cd  50                   push eax
// 005bb2ce  b801000000           mov eax, 1
// 005bb2d3  64892500000000       mov dword ptr fs:[0], esp
// 005bb2da  8405c8729700         test byte ptr [0x9772c8], al
// 005bb2e0  7525                 jne 0x5bb307
// 005bb2e2  0905c8729700         or dword ptr [0x9772c8], eax
// 005bb2e8  b9e0719700           mov ecx, 0x9771e0
// 005bb2ed  c744240800000000     mov dword ptr [esp + 8], 0
// 005bb2f5  e826de0600           call 0x629120
// 005bb2fa  68b0e47f00           push 0x7fe4b0
// 005bb2ff  e8ab640e00           call 0x6a17af
// 005bb304  83c404               add esp, 4
// 005bb307  8b0c24               mov ecx, dword ptr [esp]
// 005bb30a  b8e0719700           mov eax, 0x9771e0
// 005bb30f  64890d00000000       mov dword ptr fs:[0], ecx
// 005bb316  83c40c               add esp, 0xc
// 005bb319  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
