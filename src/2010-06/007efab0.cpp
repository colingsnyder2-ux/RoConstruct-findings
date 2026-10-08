// from server: 100% by auto
// roc 2010-06 007efab0  unit: CXTPToolBar::CControlButtonExpand  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007efab0
//
// 007efab0  56                   push esi
// 007efab1  8bf1                 mov esi, ecx
// 007efab3  56                   push esi
// 007efab4  ff15c0a39e00         call dword ptr [0x9ea3c0]
// 007efaba  8bc6                 mov eax, esi
// 007efabc  5e                   pop esi
// 007efabd  c3                   ret 
// library g3d-6.09/G3Dcpp\GThread.cpp (function ??0GMutex@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GThread.cpp
