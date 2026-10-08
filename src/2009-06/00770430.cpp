// from server: 100% by auto
// roc 2009-06 00770430  unit: CXTPPrintingDialog  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00770430
//
// 00770430  56                   push esi
// 00770431  8bf1                 mov esi, ecx
// 00770433  56                   push esi
// 00770434  ff15c8ee8900         call dword ptr [0x89eec8]
// 0077043a  8bc6                 mov eax, esi
// 0077043c  5e                   pop esi
// 0077043d  c3                   ret 
// library g3d-6.09/G3Dcpp\GThread.cpp (function ??0GMutex@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GThread.cpp
