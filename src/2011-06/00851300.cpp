// from server: 100% by auto
// roc 2011-06 00851300  unit: CXTPToolBar::CControlButtonExpand  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851300
//
// 00851300  56                   push esi
// 00851301  8bf1                 mov esi, ecx
// 00851303  56                   push esi
// 00851304  ff15a003a400         call dword ptr [0xa403a0]
// 0085130a  8bc6                 mov eax, esi
// 0085130c  5e                   pop esi
// 0085130d  c3                   ret 
// library g3d-6.09/G3Dcpp\GThread.cpp (function ??0GMutex@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GThread.cpp
