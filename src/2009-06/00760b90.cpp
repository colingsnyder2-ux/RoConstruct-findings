// from server: 100% by auto
// roc 2009-06 00760b90  unit: CXTPToolBar::CControlButtonExpand  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00760b90
//
// 00760b90  56                   push esi
// 00760b91  8bf1                 mov esi, ecx
// 00760b93  56                   push esi
// 00760b94  ff1548e38900         call dword ptr [0x89e348]
// 00760b9a  8bc6                 mov eax, esi
// 00760b9c  5e                   pop esi
// 00760b9d  c3                   ret 
// library g3d-6.09/G3Dcpp\GThread.cpp (function ??0GMutex@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GThread.cpp
