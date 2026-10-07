// roc 2012-06 009d5100  unit: CXTPPrintingDialog  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d5100
//
// 009d5100  56                   push esi
// 009d5101  8bf1                 mov esi, ecx
// 009d5103  56                   push esi
// 009d5104  ff15903ab200         call dword ptr [0xb23a90]
// 009d510a  8bc6                 mov eax, esi
// 009d510c  5e                   pop esi
// 009d510d  c3                   ret 
// library g3d-6.09/G3Dcpp\GThread.cpp (function ??0GMutex@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GThread.cpp
