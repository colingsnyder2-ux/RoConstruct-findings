// roc 2012-06 005c87b0  unit: RBX::AdornRbxGfx  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c87b0
//
// 005c87b0  56                   push esi
// 005c87b1  8bf1                 mov esi, ecx
// 005c87b3  56                   push esi
// 005c87b4  ff15dc21b200         call dword ptr [0xb221dc]
// 005c87ba  8bc6                 mov eax, esi
// 005c87bc  5e                   pop esi
// 005c87bd  c3                   ret 
// library g3d-6.09/G3Dcpp\GThread.cpp (function ??0GMutex@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GThread.cpp
