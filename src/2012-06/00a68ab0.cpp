// roc 2012-06 00a68ab0  unit: PAVCXTShadowWnd::?$CList  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a68ab0
//
// 00a68ab0  b801000000           mov eax, 1
// 00a68ab5  84054ca4e500         test byte ptr [0xe5a44c], al
// 00a68abb  751d                 jne 0xa68ada
// 00a68abd  09054ca4e500         or dword ptr [0xe5a44c], eax
// 00a68ac3  b910a4e500           mov ecx, 0xe5a410
// 00a68ac8  e863feffff           call 0xa68930
// 00a68acd  684018b200           push 0xb21840
// 00a68ad2  e81ea7f1ff           call 0x9831f5
// 00a68ad7  83c404               add esp, 4
// 00a68ada  b810a4e500           mov eax, 0xe5a410
// 00a68adf  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
