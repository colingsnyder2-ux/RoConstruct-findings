// from server: 100% by auto
// roc 2011-06 008510c0  unit: CXTPToolBar::CControlButtonExpand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008510c0
//
// 008510c0  b801000000           mov eax, 1
// 008510c5  84051c88d100         test byte ptr [0xd1881c], al
// 008510cb  7510                 jne 0x8510dd
// 008510cd  09051c88d100         or dword ptr [0xd1881c], eax
// 008510d3  b98887d100           mov ecx, 0xd18788
// 008510d8  e8b3ffffff           call 0x851090
// 008510dd  b88887d100           mov eax, 0xd18788
// 008510e2  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?box@Shape@G3D@@UAEAAVBox@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
