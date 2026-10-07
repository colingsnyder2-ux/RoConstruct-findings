// roc 2010-06 0055ee20  unit: G3D::Line  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055ee20
//
// 0055ee20  83ec0c               sub esp, 0xc
// 0055ee23  6a02                 push 2
// 0055ee25  8d442404             lea eax, [esp + 4]
// 0055ee29  50                   push eax
// 0055ee2a  e8d172ffff           call 0x556100
// 0055ee2f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055ee33  f30f1005000ca200     movss xmm0, dword ptr [0xa20c00]
// 0055ee3b  f30f1008             movss xmm1, dword ptr [eax]
// 0055ee3f  f30f59c8             mulss xmm1, xmm0
// 0055ee43  f30f1109             movss dword ptr [ecx], xmm1
// 0055ee47  f30f104804           movss xmm1, dword ptr [eax + 4]
// 0055ee4c  f30f59c8             mulss xmm1, xmm0
// 0055ee50  f30f114904           movss dword ptr [ecx + 4], xmm1
// 0055ee55  f30f104808           movss xmm1, dword ptr [eax + 8]
// 0055ee5a  f30f59c8             mulss xmm1, xmm0
// 0055ee5e  f30f114908           movss dword ptr [ecx + 8], xmm1
// 0055ee63  8bc1                 mov eax, ecx
// 0055ee65  83c40c               add esp, 0xc
// 0055ee68  c20400               ret 4
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?lookVector@CoordinateFrame@G3D@@QBE?AVVector3@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
