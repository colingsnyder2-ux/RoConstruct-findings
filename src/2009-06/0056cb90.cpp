// roc 2009-06 0056cb90  unit: G3D::Shader  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056cb90
//
// 0056cb90  b801000000           mov eax, 1
// 0056cb95  8405cc29a400         test byte ptr [0xa429cc], al
// 0056cb9b  7514                 jne 0x56cbb1
// 0056cb9d  d9ee                 fldz 
// 0056cb9f  0905cc29a400         or dword ptr [0xa429cc], eax
// 0056cba5  d915c429a400         fst dword ptr [0xa429c4]
// 0056cbab  d91dc829a400         fstp dword ptr [0xa429c8]
// 0056cbb1  b8c429a400           mov eax, 0xa429c4
// 0056cbb6  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector2.cpp (function ?zero@Vector2@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector2.cpp
