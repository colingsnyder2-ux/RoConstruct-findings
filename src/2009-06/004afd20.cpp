// from server: 100% by auto
// roc 2009-06 004afd20  unit: G3D::Shader  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004afd20
//
// 004afd20  6aff                 push -1
// 004afd22  68991c8700           push 0x871c99
// 004afd27  64a100000000         mov eax, dword ptr fs:[0]
// 004afd2d  50                   push eax
// 004afd2e  64892500000000       mov dword ptr fs:[0], esp
// 004afd35  51                   push ecx
// 004afd36  56                   push esi
// 004afd37  8bf1                 mov esi, ecx
// 004afd39  89742404             mov dword ptr [esp + 4], esi
// 004afd3d  8b465c               mov eax, dword ptr [esi + 0x5c]
// 004afd40  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004afd48  85c0                 test eax, eax
// 004afd4a  742c                 je 0x4afd78
// 004afd4c  83c004               add eax, 4
// 004afd4f  50                   push eax
// 004afd50  ff15a4e18900         call dword ptr [0x89e1a4]
// 004afd56  85c0                 test eax, eax
// 004afd58  7517                 jne 0x4afd71
// 004afd5a  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 004afd5d  e81e50f9ff           call 0x444d80
// 004afd62  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 004afd65  85c9                 test ecx, ecx
// 004afd67  7408                 je 0x4afd71
// 004afd69  8b01                 mov eax, dword ptr [ecx]
// 004afd6b  8b10                 mov edx, dword ptr [eax]
// 004afd6d  6a01                 push 1
// 004afd6f  ffd2                 call edx
// 004afd71  c7465c00000000       mov dword ptr [esi + 0x5c], 0
// 004afd78  8bce                 mov ecx, esi
// 004afd7a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004afd82  ff15c4e48900         call dword ptr [0x89e4c4]
// 004afd88  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004afd8c  5e                   pop esi
// 004afd8d  64890d00000000       mov dword ptr fs:[0], ecx
// 004afd94  83c410               add esp, 0x10
// 004afd97  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??1Entry@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
