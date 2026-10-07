// roc 2007-08 00506bd0  unit: G3D::Ray  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00506bd0
//
// 00506bd0  55                   push ebp
// 00506bd1  56                   push esi
// 00506bd2  57                   push edi
// 00506bd3  8bf9                 mov edi, ecx
// 00506bd5  8b4708               mov eax, dword ptr [edi + 8]
// 00506bd8  8b2f                 mov ebp, dword ptr [edi]
// 00506bda  c1e004               shl eax, 4
// 00506bdd  6a10                 push 0x10
// 00506bdf  50                   push eax
// 00506be0  e87b94ffff           call 0x500060
// 00506be5  8bf0                 mov esi, eax
// 00506be7  8b442418             mov eax, dword ptr [esp + 0x18]
// 00506beb  8937                 mov dword ptr [edi], esi
// 00506bed  8b7f08               mov edi, dword ptr [edi + 8]
// 00506bf0  83c408               add esp, 8
// 00506bf3  3bc7                 cmp eax, edi
// 00506bf5  7c02                 jl 0x506bf9
// 00506bf7  8bc7                 mov eax, edi
// 00506bf9  c1e004               shl eax, 4
// 00506bfc  03c6                 add eax, esi
// 00506bfe  8bf8                 mov edi, eax
// 00506c00  2bc6                 sub eax, esi
// 00506c02  83c00f               add eax, 0xf
// 00506c05  99                   cdq 
// 00506c06  83e20f               and edx, 0xf
// 00506c09  03c2                 add eax, edx
// 00506c0b  c1f804               sar eax, 4
// 00506c0e  83f804               cmp eax, 4
// 00506c11  8bcd                 mov ecx, ebp
// 00506c13  0f8c8d000000         jl 0x506ca6
// 00506c19  53                   push ebx
// 00506c1a  8d5fd0               lea ebx, [edi - 0x30]
// 00506c1d  8d4618               lea eax, [esi + 0x18]
// 00506c20  85f6                 test esi, esi
// 00506c22  7416                 je 0x506c3a
// 00506c24  d901                 fld dword ptr [ecx]
// 00506c26  d91e                 fstp dword ptr [esi]
// 00506c28  d94104               fld dword ptr [ecx + 4]
// 00506c2b  d958ec               fstp dword ptr [eax - 0x14]
// 00506c2e  d94108               fld dword ptr [ecx + 8]
// 00506c31  d958f0               fstp dword ptr [eax - 0x10]
// 00506c34  d9410c               fld dword ptr [ecx + 0xc]
// 00506c37  d958f4               fstp dword ptr [eax - 0xc]
// 00506c3a  8d50f8               lea edx, [eax - 8]
// 00506c3d  85d2                 test edx, edx
// 00506c3f  7417                 je 0x506c58
// 00506c41  d94110               fld dword ptr [ecx + 0x10]
// 00506c44  d958f8               fstp dword ptr [eax - 8]
// 00506c47  d94114               fld dword ptr [ecx + 0x14]
// 00506c4a  d958fc               fstp dword ptr [eax - 4]
// 00506c4d  d94118               fld dword ptr [ecx + 0x18]
// 00506c50  d918                 fstp dword ptr [eax]
// 00506c52  d9411c               fld dword ptr [ecx + 0x1c]
// 00506c55  d95804               fstp dword ptr [eax + 4]
// 00506c58  8d5008               lea edx, [eax + 8]
// 00506c5b  85d2                 test edx, edx
// 00506c5d  7417                 je 0x506c76
// 00506c5f  d94120               fld dword ptr [ecx + 0x20]
// 00506c62  d91a                 fstp dword ptr [edx]
// 00506c64  d94124               fld dword ptr [ecx + 0x24]
// 00506c67  d9580c               fstp dword ptr [eax + 0xc]
// 00506c6a  d94128               fld dword ptr [ecx + 0x28]
// 00506c6d  d95810               fstp dword ptr [eax + 0x10]
// 00506c70  d9412c               fld dword ptr [ecx + 0x2c]
// 00506c73  d95814               fstp dword ptr [eax + 0x14]
// 00506c76  8d5018               lea edx, [eax + 0x18]
// 00506c79  85d2                 test edx, edx
// 00506c7b  7417                 je 0x506c94
// 00506c7d  d94130               fld dword ptr [ecx + 0x30]
// 00506c80  d91a                 fstp dword ptr [edx]
// 00506c82  d94134               fld dword ptr [ecx + 0x34]
// 00506c85  d9581c               fstp dword ptr [eax + 0x1c]
// 00506c88  d94138               fld dword ptr [ecx + 0x38]
// 00506c8b  d95820               fstp dword ptr [eax + 0x20]
// 00506c8e  d9413c               fld dword ptr [ecx + 0x3c]
// 00506c91  d95824               fstp dword ptr [eax + 0x24]
// 00506c94  83c640               add esi, 0x40
// 00506c97  83c140               add ecx, 0x40
// 00506c9a  83c040               add eax, 0x40
// 00506c9d  3bf3                 cmp esi, ebx
// 00506c9f  0f8c7bffffff         jl 0x506c20
// 00506ca5  5b                   pop ebx
// 00506ca6  3bf7                 cmp esi, edi
// 00506ca8  732a                 jae 0x506cd4
// 00506caa  8d9b00000000         lea ebx, [ebx]
// 00506cb0  85f6                 test esi, esi
// 00506cb2  7416                 je 0x506cca
// 00506cb4  d901                 fld dword ptr [ecx]
// 00506cb6  d91e                 fstp dword ptr [esi]
// 00506cb8  d94104               fld dword ptr [ecx + 4]
// 00506cbb  d95e04               fstp dword ptr [esi + 4]
// 00506cbe  d94108               fld dword ptr [ecx + 8]
// 00506cc1  d95e08               fstp dword ptr [esi + 8]
// 00506cc4  d9410c               fld dword ptr [ecx + 0xc]
// 00506cc7  d95e0c               fstp dword ptr [esi + 0xc]
// 00506cca  83c610               add esi, 0x10
// 00506ccd  83c110               add ecx, 0x10
// 00506cd0  3bf7                 cmp esi, edi
// 00506cd2  72dc                 jb 0x506cb0
// 00506cd4  55                   push ebp
// 00506cd5  e8368bffff           call 0x4ff810
// 00506cda  83c404               add esp, 4
// 00506cdd  5f                   pop edi
// 00506cde  5e                   pop esi
// 00506cdf  5d                   pop ebp
// 00506ce0  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?realloc@?$Array@VVector4@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
