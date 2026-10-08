// from server: 100% by auto
// roc 2008-06 00507940  unit: G3D::Shader  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00507940
//
// 00507940  55                   push ebp
// 00507941  8bec                 mov ebp, esp
// 00507943  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00507946  8bd1                 mov edx, ecx
// 00507948  8bc1                 mov eax, ecx
// 0050794a  83f910               cmp ecx, 0x10
// 0050794d  7626                 jbe 0x507975
// 0050794f  83e00f               and eax, 0xf
// 00507952  2bc8                 sub ecx, eax
// 00507954  57                   push edi
// 00507955  894d10               mov dword ptr [ebp + 0x10], ecx
// 00507958  0f6f450c             movq mm0, qword ptr [ebp + 0xc]
// 0050795c  0f62c0               punpckldq mm0, mm0
// 0050795f  8b7d08               mov edi, dword ptr [ebp + 8]
// 00507962  0fe707               movntq qword ptr [edi], mm0
// 00507965  0fe74708             movntq qword ptr [edi + 8], mm0
// 00507969  83c710               add edi, 0x10
// 0050796c  836d1010             sub dword ptr [ebp + 0x10], 0x10
// 00507970  7ff0                 jg 0x507962
// 00507972  0f77                 emms 
// 00507974  5f                   pop edi
// 00507975  85c0                 test eax, eax
// 00507977  7e13                 jle 0x50798c
// 00507979  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0050797c  50                   push eax
// 0050797d  2bd0                 sub edx, eax
// 0050797f  035508               add edx, dword ptr [ebp + 8]
// 00507982  51                   push ecx
// 00507983  52                   push edx
// 00507984  e87b9d1900           call 0x6a1704
// 00507989  83c40c               add esp, 0xc
// 0050798c  5d                   pop ebp
// 0050798d  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?memfill@G3D@@YAXPAXHK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
