// from server: 100% by auto
// roc 2009-06 0056b080  unit: G3D::Shader  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056b080
//
// 0056b080  55                   push ebp
// 0056b081  8bec                 mov ebp, esp
// 0056b083  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0056b086  8bd1                 mov edx, ecx
// 0056b088  8bc1                 mov eax, ecx
// 0056b08a  83f910               cmp ecx, 0x10
// 0056b08d  7626                 jbe 0x56b0b5
// 0056b08f  83e00f               and eax, 0xf
// 0056b092  2bc8                 sub ecx, eax
// 0056b094  57                   push edi
// 0056b095  894d10               mov dword ptr [ebp + 0x10], ecx
// 0056b098  0f6f450c             movq mm0, qword ptr [ebp + 0xc]
// 0056b09c  0f62c0               punpckldq mm0, mm0
// 0056b09f  8b7d08               mov edi, dword ptr [ebp + 8]
// 0056b0a2  0fe707               movntq qword ptr [edi], mm0
// 0056b0a5  0fe74708             movntq qword ptr [edi + 8], mm0
// 0056b0a9  83c710               add edi, 0x10
// 0056b0ac  836d1010             sub dword ptr [ebp + 0x10], 0x10
// 0056b0b0  7ff0                 jg 0x56b0a2
// 0056b0b2  0f77                 emms 
// 0056b0b4  5f                   pop edi
// 0056b0b5  85c0                 test eax, eax
// 0056b0b7  7e13                 jle 0x56b0cc
// 0056b0b9  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0056b0bc  50                   push eax
// 0056b0bd  2bd0                 sub edx, eax
// 0056b0bf  035508               add edx, dword ptr [ebp + 8]
// 0056b0c2  51                   push ecx
// 0056b0c3  52                   push edx
// 0056b0c4  e8abeb1a00           call 0x719c74
// 0056b0c9  83c40c               add esp, 0xc
// 0056b0cc  5d                   pop ebp
// 0056b0cd  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?memfill@G3D@@YAXPAXHK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
