// roc 2010-06 007ef870  unit: CXTPToolBar::CControlButtonExpand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ef870
//
// 007ef870  b801000000           mov eax, 1
// 007ef875  8405345bc200         test byte ptr [0xc25b34], al
// 007ef87b  7510                 jne 0x7ef88d
// 007ef87d  0905345bc200         or dword ptr [0xc25b34], eax
// 007ef883  b9a05ac200           mov ecx, 0xc25aa0
// 007ef888  e8b3ffffff           call 0x7ef840
// 007ef88d  b8a05ac200           mov eax, 0xc25aa0
// 007ef892  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?box@Shape@G3D@@UAEAAVBox@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
