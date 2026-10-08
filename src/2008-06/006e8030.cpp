// from server: 100% by auto
// roc 2008-06 006e8030  unit: CXTPToolBar::CControlButtonExpand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8030
//
// 006e8030  b801000000           mov eax, 1
// 006e8035  8405b4e69700         test byte ptr [0x97e6b4], al
// 006e803b  7510                 jne 0x6e804d
// 006e803d  0905b4e69700         or dword ptr [0x97e6b4], eax
// 006e8043  b920e69700           mov ecx, 0x97e620
// 006e8048  e8b3ffffff           call 0x6e8000
// 006e804d  b820e69700           mov eax, 0x97e620
// 006e8052  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?box@Shape@G3D@@UAEAAVBox@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
