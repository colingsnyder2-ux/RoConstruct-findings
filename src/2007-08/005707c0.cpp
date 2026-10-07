// roc 2007-08 005707c0  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005707c0
//
// 005707c0  64a100000000         mov eax, dword ptr fs:[0]
// 005707c6  6aff                 push -1
// 005707c8  687e4c7500           push 0x754c7e
// 005707cd  50                   push eax
// 005707ce  b801000000           mov eax, 1
// 005707d3  64892500000000       mov dword ptr fs:[0], esp
// 005707da  840544258c00         test byte ptr [0x8c2544], al
// 005707e0  7525                 jne 0x570807
// 005707e2  090544258c00         or dword ptr [0x8c2544], eax
// 005707e8  b93c258c00           mov ecx, 0x8c253c
// 005707ed  c744240800000000     mov dword ptr [esp + 8], 0
// 005707f5  e8064f1b00           call 0x725700
// 005707fa  68609f7700           push 0x779f60
// 005707ff  e81f050c00           call 0x630d23
// 00570804  83c404               add esp, 4
// 00570807  8b0c24               mov ecx, dword ptr [esp]
// 0057080a  b83c258c00           mov eax, 0x8c253c
// 0057080f  64890d00000000       mov dword ptr fs:[0], ecx
// 00570816  83c40c               add esp, 0xc
// 00570819  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
