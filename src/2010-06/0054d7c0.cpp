// from server: 100% by auto
// roc 2010-06 0054d7c0  unit: G3D::Shader  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054d7c0
//
// 0054d7c0  55                   push ebp
// 0054d7c1  8bec                 mov ebp, esp
// 0054d7c3  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0054d7c6  8bd1                 mov edx, ecx
// 0054d7c8  8bc1                 mov eax, ecx
// 0054d7ca  83f910               cmp ecx, 0x10
// 0054d7cd  7626                 jbe 0x54d7f5
// 0054d7cf  83e00f               and eax, 0xf
// 0054d7d2  2bc8                 sub ecx, eax
// 0054d7d4  57                   push edi
// 0054d7d5  894d10               mov dword ptr [ebp + 0x10], ecx
// 0054d7d8  0f6f450c             movq mm0, qword ptr [ebp + 0xc]
// 0054d7dc  0f62c0               punpckldq mm0, mm0
// 0054d7df  8b7d08               mov edi, dword ptr [ebp + 8]
// 0054d7e2  0fe707               movntq qword ptr [edi], mm0
// 0054d7e5  0fe74708             movntq qword ptr [edi + 8], mm0
// 0054d7e9  83c710               add edi, 0x10
// 0054d7ec  836d1010             sub dword ptr [ebp + 0x10], 0x10
// 0054d7f0  7ff0                 jg 0x54d7e2
// 0054d7f2  0f77                 emms 
// 0054d7f4  5f                   pop edi
// 0054d7f5  85c0                 test eax, eax
// 0054d7f7  7e13                 jle 0x54d80c
// 0054d7f9  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0054d7fc  50                   push eax
// 0054d7fd  2bd0                 sub edx, eax
// 0054d7ff  035508               add edx, dword ptr [ebp + 8]
// 0054d802  51                   push ecx
// 0054d803  52                   push edx
// 0054d804  e8dbb32500           call 0x7a8be4
// 0054d809  83c40c               add esp, 0xc
// 0054d80c  5d                   pop ebp
// 0054d80d  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?memfill@G3D@@YAXPAXHK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
