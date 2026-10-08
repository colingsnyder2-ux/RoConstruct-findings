// from server: 100% by auto
// roc 2010-06 007ff270  unit: CXTPPrintingDialog  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ff270
//
// 007ff270  56                   push esi
// 007ff271  8bf1                 mov esi, ecx
// 007ff273  56                   push esi
// 007ff274  ff15e4ba9e00         call dword ptr [0x9ebae4]
// 007ff27a  8bc6                 mov eax, esi
// 007ff27c  5e                   pop esi
// 007ff27d  c3                   ret 
// library g3d-6.09/G3Dcpp\GThread.cpp (function ??0GMutex@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GThread.cpp
