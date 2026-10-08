// from server: 100% by auto
// roc 2011-06 0085ccf0  unit: CXTPPrintingDialog  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085ccf0
//
// 0085ccf0  56                   push esi
// 0085ccf1  8bf1                 mov esi, ecx
// 0085ccf3  56                   push esi
// 0085ccf4  ff15ac19a400         call dword ptr [0xa419ac]
// 0085ccfa  8bc6                 mov eax, esi
// 0085ccfc  5e                   pop esi
// 0085ccfd  c3                   ret 
// library g3d-6.09/G3Dcpp\GThread.cpp (function ??0GMutex@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GThread.cpp
