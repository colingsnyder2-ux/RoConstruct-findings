// roc 2007-08 005fbeb0  unit: RBX::SlingshotTool  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fbeb0
//
// 005fbeb0  b801000000           mov eax, 1
// 005fbeb5  8405a47f8c00         test byte ptr [0x8c7fa4], al
// 005fbebb  7510                 jne 0x5fbecd
// 005fbebd  0905a47f8c00         or dword ptr [0x8c7fa4], eax
// 005fbec3  b98c7f8c00           mov ecx, 0x8c7f8c
// 005fbec8  e8639eeaff           call 0x4a5d30
// 005fbecd  b88c7f8c00           mov eax, 0x8c7f8c
// 005fbed2  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?box@Shape@G3D@@UAEAAVBox@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
