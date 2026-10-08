// roc 2009-12 004cc8e0  unit: G3D::VARArea  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cc8e0
//
// 004cc8e0  53                   push ebx
// 004cc8e1  57                   push edi
// 004cc8e2  8bf9                 mov edi, ecx
// 004cc8e4  33db                 xor ebx, ebx
// 004cc8e6  395f0c               cmp dword ptr [edi + 0xc], ebx
// 004cc8e9  7e2e                 jle 0x4cc919
// 004cc8eb  56                   push esi
// 004cc8ec  8d642400             lea esp, [esp]
// 004cc8f0  8b4708               mov eax, dword ptr [edi + 8]
// 004cc8f3  8b0498               mov eax, dword ptr [eax + ebx*4]
// 004cc8f6  85c0                 test eax, eax
// 004cc8f8  7418                 je 0x4cc912
// 004cc8fa  8d9b00000000         lea ebx, [ebx]
// 004cc900  8b700c               mov esi, dword ptr [eax + 0xc]
// 004cc903  50                   push eax
// 004cc904  e897f80800           call 0x55c1a0
// 004cc909  83c404               add esp, 4
// 004cc90c  8bc6                 mov eax, esi
// 004cc90e  85f6                 test esi, esi
// 004cc910  75ee                 jne 0x4cc900
// 004cc912  43                   inc ebx
// 004cc913  3b5f0c               cmp ebx, dword ptr [edi + 0xc]
// 004cc916  7cd8                 jl 0x4cc8f0
// 004cc918  5e                   pop esi
// 004cc919  8b4f08               mov ecx, dword ptr [edi + 8]
// 004cc91c  51                   push ecx
// 004cc91d  e8beda1100           call 0x5ea3e0
// 004cc922  83c404               add esp, 4
// 004cc925  c7470800000000       mov dword ptr [edi + 8], 0
// 004cc92c  c7470c00000000       mov dword ptr [edi + 0xc], 0
// 004cc933  c7470400000000       mov dword ptr [edi + 4], 0
// 004cc93a  5f                   pop edi
// 004cc93b  5b                   pop ebx
// 004cc93c  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?freeMemory@?$Table@PAV?$Array@H@G3D@@_N@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
