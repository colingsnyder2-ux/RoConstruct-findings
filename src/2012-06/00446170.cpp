// roc 2012-06 00446170  unit: CMainFrame  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00446170
//
// 00446170  56                   push esi
// 00446171  8bf1                 mov esi, ecx
// 00446173  56                   push esi
// 00446174  ff15582bb200         call dword ptr [0xb22b58]
// 0044617a  8bc6                 mov eax, esi
// 0044617c  5e                   pop esi
// 0044617d  c3                   ret 
// library g3d-6.09/G3Dcpp\GThread.cpp (function ??0GMutex@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GThread.cpp
