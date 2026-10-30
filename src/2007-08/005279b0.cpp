// from server: 100% by auto
// roc 2007-08 005279b0  unit: G3D::Line  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005279b0
//
// 005279b0  53                   push ebx
// 005279b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005279b5  55                   push ebp
// 005279b6  56                   push esi
// 005279b7  8bb38c010000         mov esi, dword ptr [ebx + 0x18c]
// 005279bd  837e1800             cmp dword ptr [esi + 0x18], 0
// 005279c1  57                   push edi
// 005279c2  751d                 jne 0x5279e1
// 005279c4  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005279c7  8b5614               mov edx, dword ptr [esi + 0x14]
// 005279ca  8b4304               mov eax, dword ptr [ebx + 4]
// 005279cd  6a00                 push 0
// 005279cf  51                   push ecx
// 005279d0  8b4e08               mov ecx, dword ptr [esi + 8]
// 005279d3  52                   push edx
// 005279d4  8b501c               mov edx, dword ptr [eax + 0x1c]
// 005279d7  51                   push ecx
// 005279d8  53                   push ebx
// 005279d9  ffd2                 call edx
// 005279db  83c414               add esp, 0x14
// 005279de  89460c               mov dword ptr [esi + 0xc], eax
// 005279e1  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 005279e5  8b7e10               mov edi, dword ptr [esi + 0x10]
// 005279e8  8b4d00               mov ecx, dword ptr [ebp]
// 005279eb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005279ef  2b7e18               sub edi, dword ptr [esi + 0x18]
// 005279f2  2bc1                 sub eax, ecx
// 005279f4  3bf8                 cmp edi, eax
// 005279f6  7602                 jbe 0x5279fa
// 005279f8  8bf8                 mov edi, eax
// 005279fa  8b4360               mov eax, dword ptr [ebx + 0x60]
// 005279fd  2b4614               sub eax, dword ptr [esi + 0x14]
// 00527a00  3bf8                 cmp edi, eax
// 00527a02  7602                 jbe 0x527a06
// 00527a04  8bf8                 mov edi, eax
// 00527a06  8b542424             mov edx, dword ptr [esp + 0x24]
// 00527a0a  8b83a8010000         mov eax, dword ptr [ebx + 0x1a8]
// 00527a10  8b4004               mov eax, dword ptr [eax + 4]
// 00527a13  8d0c8a               lea ecx, [edx + ecx*4]
// 00527a16  8b5618               mov edx, dword ptr [esi + 0x18]
// 00527a19  57                   push edi
// 00527a1a  51                   push ecx
// 00527a1b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00527a1e  8d1491               lea edx, [ecx + edx*4]
// 00527a21  52                   push edx
// 00527a22  53                   push ebx
// 00527a23  ffd0                 call eax
// 00527a25  017d00               add dword ptr [ebp], edi
// 00527a28  017e18               add dword ptr [esi + 0x18], edi
// 00527a2b  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00527a2e  8b4610               mov eax, dword ptr [esi + 0x10]
// 00527a31  83c410               add esp, 0x10
// 00527a34  3bc8                 cmp ecx, eax
// 00527a36  720a                 jb 0x527a42
// 00527a38  014614               add dword ptr [esi + 0x14], eax
// 00527a3b  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00527a42  5f                   pop edi
// 00527a43  5e                   pop esi
// 00527a44  5d                   pop ebp
// 00527a45  5b                   pop ebx
// 00527a46  c3                   ret 
// library jpeg-6b/jdpostct.c (function _post_process_2pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
