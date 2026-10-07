// roc 2007-08 00712ec0  unit: PAVCXTShadowWnd::?$CList  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00712ec0
//
// 00712ec0  b801000000           mov eax, 1
// 00712ec5  8405f4978c00         test byte ptr [0x8c97f4], al
// 00712ecb  751d                 jne 0x712eea
// 00712ecd  0905f4978c00         or dword ptr [0x8c97f4], eax
// 00712ed3  b9b8978c00           mov ecx, 0x8c97b8
// 00712ed8  e863feffff           call 0x712d40
// 00712edd  6830cd7700           push 0x77cd30
// 00712ee2  e83cdef1ff           call 0x630d23
// 00712ee7  83c404               add esp, 4
// 00712eea  b8b8978c00           mov eax, 0x8c97b8
// 00712eef  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
