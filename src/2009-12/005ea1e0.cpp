// roc 2009-12 005ea1e0  unit: G3D::Shader  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ea1e0
//
// 005ea1e0  55                   push ebp
// 005ea1e1  8bec                 mov ebp, esp
// 005ea1e3  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005ea1e6  8bd1                 mov edx, ecx
// 005ea1e8  8bc1                 mov eax, ecx
// 005ea1ea  83f910               cmp ecx, 0x10
// 005ea1ed  7626                 jbe 0x5ea215
// 005ea1ef  83e00f               and eax, 0xf
// 005ea1f2  2bc8                 sub ecx, eax
// 005ea1f4  57                   push edi
// 005ea1f5  894d10               mov dword ptr [ebp + 0x10], ecx
// 005ea1f8  0f6f450c             movq mm0, qword ptr [ebp + 0xc]
// 005ea1fc  0f62c0               punpckldq mm0, mm0
// 005ea1ff  8b7d08               mov edi, dword ptr [ebp + 8]
// 005ea202  0fe707               movntq qword ptr [edi], mm0
// 005ea205  0fe74708             movntq qword ptr [edi + 8], mm0
// 005ea209  83c710               add edi, 0x10
// 005ea20c  836d1010             sub dword ptr [ebp + 0x10], 0x10
// 005ea210  7ff0                 jg 0x5ea202
// 005ea212  0f77                 emms 
// 005ea214  5f                   pop edi
// 005ea215  85c0                 test eax, eax
// 005ea217  7e13                 jle 0x5ea22c
// 005ea219  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005ea21c  50                   push eax
// 005ea21d  2bd0                 sub edx, eax
// 005ea21f  035508               add edx, dword ptr [ebp + 8]
// 005ea222  51                   push ecx
// 005ea223  52                   push edx
// 005ea224  e87ba82000           call 0x7f4aa4
// 005ea229  83c40c               add esp, 0xc
// 005ea22c  5d                   pop ebp
// 005ea22d  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?memfill@G3D@@YAXPAXHK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
