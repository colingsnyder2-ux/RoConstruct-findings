// from server: 100% by auto
// roc 2007-08 00671380  unit: CXTPToolBar::CControlButtonExpand  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671380
//
// 00671380  56                   push esi
// 00671381  8bf1                 mov esi, ecx
// 00671383  56                   push esi
// 00671384  ff1508d37700         call dword ptr [0x77d308]
// 0067138a  8bc6                 mov eax, esi
// 0067138c  5e                   pop esi
// 0067138d  c3                   ret 
// library g3d-6.09/G3Dcpp\GThread.cpp (function ??0GMutex@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GThread.cpp
