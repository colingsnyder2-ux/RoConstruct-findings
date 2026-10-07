// roc 2010-06 0055b700  unit: G3D::GCamera  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055b700
//
// 0055b700  6aff                 push -1
// 0055b702  6818d49800           push 0x98d418
// 0055b707  64a100000000         mov eax, dword ptr fs:[0]
// 0055b70d  50                   push eax
// 0055b70e  64892500000000       mov dword ptr fs:[0], esp
// 0055b715  51                   push ecx
// 0055b716  56                   push esi
// 0055b717  8bf1                 mov esi, ecx
// 0055b719  89742404             mov dword ptr [esp + 4], esi
// 0055b71d  8d4e0c               lea ecx, [esi + 0xc]
// 0055b720  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0055b728  e8c3fdffff           call 0x55b4f0
// 0055b72d  8b06                 mov eax, dword ptr [esi]
// 0055b72f  50                   push eax
// 0055b730  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0055b738  e88322ffff           call 0x54d9c0
// 0055b73d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0055b741  83c404               add esp, 4
// 0055b744  c70600000000         mov dword ptr [esi], 0
// 0055b74a  c7460400000000       mov dword ptr [esi + 4], 0
// 0055b751  c7460800000000       mov dword ptr [esi + 8], 0
// 0055b758  5e                   pop esi
// 0055b759  64890d00000000       mov dword ptr fs:[0], ecx
// 0055b760  83c410               add esp, 0x10
// 0055b763  c3                   ret 
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??1Frustum@GCamera@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
