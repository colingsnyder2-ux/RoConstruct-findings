// roc 2008-06 004d3f80  unit: seg_004d0000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d3f80
//
// 004d3f80  56                   push esi
// 004d3f81  8bf1                 mov esi, ecx
// 004d3f83  56                   push esi
// 004d3f84  ff15e0228000         call dword ptr [0x8022e0]
// 004d3f8a  8bc6                 mov eax, esi
// 004d3f8c  5e                   pop esi
// 004d3f8d  c3                   ret 
// library g3d-6.09/G3Dcpp\GThread.cpp (function ??0GMutex@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GThread.cpp
