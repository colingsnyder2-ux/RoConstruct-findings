// from server: 100% by auto
// roc 2007-08 0046f6e0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046f6e0
//
// 0046f6e0  b801000000           mov eax, 1
// 0046f6e5  84054cd08b00         test byte ptr [0x8bd04c], al
// 0046f6eb  7510                 jne 0x46f6fd
// 0046f6ed  09054cd08b00         or dword ptr [0x8bd04c], eax
// 0046f6f3  b930d08b00           mov ecx, 0x8bd030
// 0046f6f8  e8a3ffffff           call 0x46f6a0
// 0046f6fd  b830d08b00           mov eax, 0x8bd030
// 0046f702  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?box@Shape@G3D@@UAEAAVBox@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
