// from server: 100% by auto
// roc 2007-08 004ff420  unit: G3D::Shader  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ff420
//
// 004ff420  55                   push ebp
// 004ff421  8bec                 mov ebp, esp
// 004ff423  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004ff426  83f910               cmp ecx, 0x10
// 004ff429  8bd1                 mov edx, ecx
// 004ff42b  8bc1                 mov eax, ecx
// 004ff42d  7626                 jbe 0x4ff455
// 004ff42f  83e00f               and eax, 0xf
// 004ff432  2bc8                 sub ecx, eax
// 004ff434  57                   push edi
// 004ff435  894d10               mov dword ptr [ebp + 0x10], ecx
// 004ff438  0f6f450c             movq mm0, qword ptr [ebp + 0xc]
// 004ff43c  0f62c0               punpckldq mm0, mm0
// 004ff43f  8b7d08               mov edi, dword ptr [ebp + 8]
// 004ff442  0fe707               movntq qword ptr [edi], mm0
// 004ff445  0fe74708             movntq qword ptr [edi + 8], mm0
// 004ff449  83c710               add edi, 0x10
// 004ff44c  836d1010             sub dword ptr [ebp + 0x10], 0x10
// 004ff450  7ff0                 jg 0x4ff442
// 004ff452  0f77                 emms 
// 004ff454  5f                   pop edi
// 004ff455  85c0                 test eax, eax
// 004ff457  7e13                 jle 0x4ff46c
// 004ff459  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004ff45c  50                   push eax
// 004ff45d  2bd0                 sub edx, eax
// 004ff45f  035508               add edx, dword ptr [ebp + 8]
// 004ff462  51                   push ecx
// 004ff463  52                   push edx
// 004ff464  e823171300           call 0x630b8c
// 004ff469  83c40c               add esp, 0xc
// 004ff46c  5d                   pop ebp
// 004ff46d  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?memfill@G3D@@YAXPAXHK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
