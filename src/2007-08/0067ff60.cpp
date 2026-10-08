// from server: 100% by auto
// roc 2007-08 0067ff60  unit: CXTPPrintingDialog  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067ff60
//
// 0067ff60  56                   push esi
// 0067ff61  8bf1                 mov esi, ecx
// 0067ff63  56                   push esi
// 0067ff64  ff1514ee7700         call dword ptr [0x77ee14]
// 0067ff6a  8bc6                 mov eax, esi
// 0067ff6c  5e                   pop esi
// 0067ff6d  c3                   ret 
// library g3d-6.09/G3Dcpp\GThread.cpp (function ??0GMutex@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GThread.cpp
