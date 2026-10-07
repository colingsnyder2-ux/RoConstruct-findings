// roc 2010-06 008243a0  unit: CXTPNewToolbarDlg  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008243a0
//
// 008243a0  b801000000           mov eax, 1
// 008243a5  84051c62c200         test byte ptr [0xc2621c], al
// 008243ab  751d                 jne 0x8243ca
// 008243ad  09051c62c200         or dword ptr [0xc2621c], eax
// 008243b3  b90c62c200           mov ecx, 0xc2620c
// 008243b8  e833ffffff           call 0x8242f0
// 008243bd  6830919e00           push 0x9e9130
// 008243c2  e89c46f8ff           call 0x7a8a63
// 008243c7  83c404               add esp, 4
// 008243ca  b80c62c200           mov eax, 0xc2620c
// 008243cf  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
