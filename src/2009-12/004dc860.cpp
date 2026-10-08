// roc 2009-12 004dc860  unit: G3D::Shader  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dc860
//
// 004dc860  6aff                 push -1
// 004dc862  68598c9300           push 0x938c59
// 004dc867  64a100000000         mov eax, dword ptr fs:[0]
// 004dc86d  50                   push eax
// 004dc86e  64892500000000       mov dword ptr fs:[0], esp
// 004dc875  51                   push ecx
// 004dc876  56                   push esi
// 004dc877  8bf1                 mov esi, ecx
// 004dc879  89742404             mov dword ptr [esp + 4], esi
// 004dc87d  8b465c               mov eax, dword ptr [esi + 0x5c]
// 004dc880  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004dc888  85c0                 test eax, eax
// 004dc88a  742c                 je 0x4dc8b8
// 004dc88c  83c004               add eax, 4
// 004dc88f  50                   push eax
// 004dc890  ff1508b29800         call dword ptr [0x98b208]
// 004dc896  85c0                 test eax, eax
// 004dc898  7517                 jne 0x4dc8b1
// 004dc89a  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 004dc89d  e87ee7f6ff           call 0x44b020
// 004dc8a2  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 004dc8a5  85c9                 test ecx, ecx
// 004dc8a7  7408                 je 0x4dc8b1
// 004dc8a9  8b01                 mov eax, dword ptr [ecx]
// 004dc8ab  8b10                 mov edx, dword ptr [eax]
// 004dc8ad  6a01                 push 1
// 004dc8af  ffd2                 call edx
// 004dc8b1  c7465c00000000       mov dword ptr [esi + 0x5c], 0
// 004dc8b8  8bce                 mov ecx, esi
// 004dc8ba  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004dc8c2  ff15e4b69800         call dword ptr [0x98b6e4]
// 004dc8c8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004dc8cc  5e                   pop esi
// 004dc8cd  64890d00000000       mov dword ptr fs:[0], ecx
// 004dc8d4  83c410               add esp, 0x10
// 004dc8d7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??1Entry@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
