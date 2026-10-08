// from server: 100% by auto
// roc 2007-08 0069f060  unit: CXTPPropertyGridItemEnum  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069f060
//
// 0069f060  b801000000           mov eax, 1
// 0069f065  8405ec928c00         test byte ptr [0x8c92ec], al
// 0069f06b  7510                 jne 0x69f07d
// 0069f06d  0905ec928c00         or dword ptr [0x8c92ec], eax
// 0069f073  b9dc928c00           mov ecx, 0x8c92dc
// 0069f078  e8c3ffffff           call 0x69f040
// 0069f07d  b8dc928c00           mov eax, 0x8c92dc
// 0069f082  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?box@Shape@G3D@@UAEAAVBox@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
