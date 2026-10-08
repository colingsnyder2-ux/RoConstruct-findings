// from server: 100% by auto
// roc 2012-06 009f5cd0  unit: CXTPPropertyGridItemEnum  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f5cd0
//
// 009f5cd0  b801000000           mov eax, 1
// 009f5cd5  84054ca0e500         test byte ptr [0xe5a04c], al
// 009f5cdb  7510                 jne 0x9f5ced
// 009f5cdd  09054ca0e500         or dword ptr [0xe5a04c], eax
// 009f5ce3  b93ca0e500           mov ecx, 0xe5a03c
// 009f5ce8  e8c3ffffff           call 0x9f5cb0
// 009f5ced  b83ca0e500           mov eax, 0xe5a03c
// 009f5cf2  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?box@Shape@G3D@@UAEAAVBox@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
