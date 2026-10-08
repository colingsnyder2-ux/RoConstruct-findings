// roc 2007-03 004f2f90  unit: seg_004f0000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f2f90
//
// 004f2f90  55                   push ebp
// 004f2f91  8bec                 mov ebp, esp
// 004f2f93  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004f2f96  83f910               cmp ecx, 0x10
// 004f2f99  8bd1                 mov edx, ecx
// 004f2f9b  8bc1                 mov eax, ecx
// 004f2f9d  7626                 jbe 0x4f2fc5
// 004f2f9f  83e00f               and eax, 0xf
// 004f2fa2  2bc8                 sub ecx, eax
// 004f2fa4  57                   push edi
// 004f2fa5  894d10               mov dword ptr [ebp + 0x10], ecx
// 004f2fa8  0f6f450c             movq mm0, qword ptr [ebp + 0xc]
// 004f2fac  0f62c0               punpckldq mm0, mm0
// 004f2faf  8b7d08               mov edi, dword ptr [ebp + 8]
// 004f2fb2  0fe707               movntq qword ptr [edi], mm0
// 004f2fb5  0fe74708             movntq qword ptr [edi + 8], mm0
// 004f2fb9  83c710               add edi, 0x10
// 004f2fbc  836d1010             sub dword ptr [ebp + 0x10], 0x10
// 004f2fc0  7ff0                 jg 0x4f2fb2
// 004f2fc2  0f77                 emms 
// 004f2fc4  5f                   pop edi
// 004f2fc5  85c0                 test eax, eax
// 004f2fc7  7e13                 jle 0x4f2fdc
// 004f2fc9  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004f2fcc  50                   push eax
// 004f2fcd  2bd0                 sub edx, eax
// 004f2fcf  035508               add edx, dword ptr [ebp + 8]
// 004f2fd2  51                   push ecx
// 004f2fd3  52                   push edx
// 004f2fd4  e843c01200           call 0x61f01c
// 004f2fd9  83c40c               add esp, 0xc
// 004f2fdc  5d                   pop ebp
// 004f2fdd  c3                   ret 
// library rbxgs-g3d/G3Dcpp\System.cpp (function ?memfill@G3D@@YAXPAXHK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/System.cpp
