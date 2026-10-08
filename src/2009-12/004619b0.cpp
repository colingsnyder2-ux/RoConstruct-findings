// roc 2009-12 004619b0  unit: G3D::Hashable  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004619b0
//
// 004619b0  6aff                 push -1
// 004619b2  6878339300           push 0x933378
// 004619b7  64a100000000         mov eax, dword ptr fs:[0]
// 004619bd  50                   push eax
// 004619be  64892500000000       mov dword ptr fs:[0], esp
// 004619c5  51                   push ecx
// 004619c6  56                   push esi
// 004619c7  8bf1                 mov esi, ecx
// 004619c9  89742404             mov dword ptr [esp + 4], esi
// 004619cd  c70620e69a00         mov dword ptr [esi], 0x9ae620
// 004619d3  8d4e04               lea ecx, [esi + 4]
// 004619d6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004619de  ff15e4b69800         call dword ptr [0x98b6e4]
// 004619e4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004619e8  c70608e69a00         mov dword ptr [esi], 0x9ae608
// 004619ee  5e                   pop esi
// 004619ef  64890d00000000       mov dword ptr fs:[0], ecx
// 004619f6  83c410               add esp, 0x10
// 004619f9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??1TextureArgs@TextureManager@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
