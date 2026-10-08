// from server: 100% by auto
// roc 2009-06 00791000  unit: CXTPPropertyGridItemEnum  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00791000
//
// 00791000  b801000000           mov eax, 1
// 00791005  84056c26a500         test byte ptr [0xa5266c], al
// 0079100b  7510                 jne 0x79101d
// 0079100d  09056c26a500         or dword ptr [0xa5266c], eax
// 00791013  b95c26a500           mov ecx, 0xa5265c
// 00791018  e8c3ffffff           call 0x790fe0
// 0079101d  b85c26a500           mov eax, 0xa5265c
// 00791022  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?box@Shape@G3D@@UAEAAVBox@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
