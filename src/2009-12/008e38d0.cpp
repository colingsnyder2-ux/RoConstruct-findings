// roc 2009-12 008e38d0  unit: PAVCXTShadowWnd::?$CList  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e38d0
//
// 008e38d0  b801000000           mov eax, 1
// 008e38d5  8405c4bfb900         test byte ptr [0xb9bfc4], al
// 008e38db  751d                 jne 0x8e38fa
// 008e38dd  0905c4bfb900         or dword ptr [0xb9bfc4], eax
// 008e38e3  b988bfb900           mov ecx, 0xb9bf88
// 008e38e8  e863feffff           call 0x8e3750
// 008e38ed  68b0a79800           push 0x98a7b0
// 008e38f2  e83210f1ff           call 0x7f4929
// 008e38f7  83c404               add esp, 4
// 008e38fa  b888bfb900           mov eax, 0xb9bf88
// 008e38ff  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
