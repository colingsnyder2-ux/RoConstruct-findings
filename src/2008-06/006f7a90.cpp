// from server: 100% by auto
// roc 2008-06 006f7a90  unit: CXTPPrintingDialog  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f7a90
//
// 006f7a90  56                   push esi
// 006f7a91  8bf1                 mov esi, ecx
// 006f7a93  56                   push esi
// 006f7a94  ff157c2c8000         call dword ptr [0x802c7c]
// 006f7a9a  8bc6                 mov eax, esi
// 006f7a9c  5e                   pop esi
// 006f7a9d  c3                   ret 
// library g3d-6.09/G3Dcpp\GThread.cpp (function ??0GMutex@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GThread.cpp
