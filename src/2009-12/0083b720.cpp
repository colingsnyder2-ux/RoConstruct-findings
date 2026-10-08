// roc 2009-12 0083b720  unit: CXTPToolBar::CControlButtonExpand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083b720
//
// 0083b720  b801000000           mov eax, 1
// 0083b725  840504b4b900         test byte ptr [0xb9b404], al
// 0083b72b  7510                 jne 0x83b73d
// 0083b72d  090504b4b900         or dword ptr [0xb9b404], eax
// 0083b733  b970b3b900           mov ecx, 0xb9b370
// 0083b738  e8b3ffffff           call 0x83b6f0
// 0083b73d  b870b3b900           mov eax, 0xb9b370
// 0083b742  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?box@Shape@G3D@@UAEAAVBox@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
