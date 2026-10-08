// from server: 100% by auto
// roc 2009-06 00572f40  unit: G3D::Ray  size: 277 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00572f40
//
// 00572f40  55                   push ebp
// 00572f41  56                   push esi
// 00572f42  57                   push edi
// 00572f43  8bf9                 mov edi, ecx
// 00572f45  8b4708               mov eax, dword ptr [edi + 8]
// 00572f48  8b2f                 mov ebp, dword ptr [edi]
// 00572f4a  c1e004               shl eax, 4
// 00572f4d  6a10                 push 0x10
// 00572f4f  50                   push eax
// 00572f50  e81b82ffff           call 0x56b170
// 00572f55  8bf0                 mov esi, eax
// 00572f57  8b442418             mov eax, dword ptr [esp + 0x18]
// 00572f5b  8937                 mov dword ptr [edi], esi
// 00572f5d  8b7f08               mov edi, dword ptr [edi + 8]
// 00572f60  83c408               add esp, 8
// 00572f63  3bc7                 cmp eax, edi
// 00572f65  7c02                 jl 0x572f69
// 00572f67  8bc7                 mov eax, edi
// 00572f69  c1e004               shl eax, 4
// 00572f6c  03c6                 add eax, esi
// 00572f6e  8bf8                 mov edi, eax
// 00572f70  8bcd                 mov ecx, ebp
// 00572f72  3bf7                 cmp esi, edi
// 00572f74  0f83cc000000         jae 0x573046
// 00572f7a  2bc6                 sub eax, esi
// 00572f7c  83c00f               add eax, 0xf
// 00572f7f  99                   cdq 
// 00572f80  83e20f               and edx, 0xf
// 00572f83  03c2                 add eax, edx
// 00572f85  c1f804               sar eax, 4
// 00572f88  83f804               cmp eax, 4
// 00572f8b  0f8c8d000000         jl 0x57301e
// 00572f91  53                   push ebx
// 00572f92  8d5fd0               lea ebx, [edi - 0x30]
// 00572f95  8d4618               lea eax, [esi + 0x18]
// 00572f98  85f6                 test esi, esi
// 00572f9a  7416                 je 0x572fb2
// 00572f9c  d901                 fld dword ptr [ecx]
// 00572f9e  d91e                 fstp dword ptr [esi]
// 00572fa0  d94104               fld dword ptr [ecx + 4]
// 00572fa3  d958ec               fstp dword ptr [eax - 0x14]
// 00572fa6  d94108               fld dword ptr [ecx + 8]
// 00572fa9  d958f0               fstp dword ptr [eax - 0x10]
// 00572fac  d9410c               fld dword ptr [ecx + 0xc]
// 00572faf  d958f4               fstp dword ptr [eax - 0xc]
// 00572fb2  8d50f8               lea edx, [eax - 8]
// 00572fb5  85d2                 test edx, edx
// 00572fb7  7417                 je 0x572fd0
// 00572fb9  d94110               fld dword ptr [ecx + 0x10]
// 00572fbc  d958f8               fstp dword ptr [eax - 8]
// 00572fbf  d94114               fld dword ptr [ecx + 0x14]
// 00572fc2  d958fc               fstp dword ptr [eax - 4]
// 00572fc5  d94118               fld dword ptr [ecx + 0x18]
// 00572fc8  d918                 fstp dword ptr [eax]
// 00572fca  d9411c               fld dword ptr [ecx + 0x1c]
// 00572fcd  d95804               fstp dword ptr [eax + 4]
// 00572fd0  8d5008               lea edx, [eax + 8]
// 00572fd3  85d2                 test edx, edx
// 00572fd5  7417                 je 0x572fee
// 00572fd7  d94120               fld dword ptr [ecx + 0x20]
// 00572fda  d91a                 fstp dword ptr [edx]
// 00572fdc  d94124               fld dword ptr [ecx + 0x24]
// 00572fdf  d9580c               fstp dword ptr [eax + 0xc]
// 00572fe2  d94128               fld dword ptr [ecx + 0x28]
// 00572fe5  d95810               fstp dword ptr [eax + 0x10]
// 00572fe8  d9412c               fld dword ptr [ecx + 0x2c]
// 00572feb  d95814               fstp dword ptr [eax + 0x14]
// 00572fee  8d5018               lea edx, [eax + 0x18]
// 00572ff1  85d2                 test edx, edx
// 00572ff3  7417                 je 0x57300c
// 00572ff5  d94130               fld dword ptr [ecx + 0x30]
// 00572ff8  d91a                 fstp dword ptr [edx]
// 00572ffa  d94134               fld dword ptr [ecx + 0x34]
// 00572ffd  d9581c               fstp dword ptr [eax + 0x1c]
// 00573000  d94138               fld dword ptr [ecx + 0x38]
// 00573003  d95820               fstp dword ptr [eax + 0x20]
// 00573006  d9413c               fld dword ptr [ecx + 0x3c]
// 00573009  d95824               fstp dword ptr [eax + 0x24]
// 0057300c  83c640               add esi, 0x40
// 0057300f  83c140               add ecx, 0x40
// 00573012  83c040               add eax, 0x40
// 00573015  3bf3                 cmp esi, ebx
// 00573017  0f8c7bffffff         jl 0x572f98
// 0057301d  5b                   pop ebx
// 0057301e  3bf7                 cmp esi, edi
// 00573020  7324                 jae 0x573046
// 00573022  85f6                 test esi, esi
// 00573024  7416                 je 0x57303c
// 00573026  d901                 fld dword ptr [ecx]
// 00573028  d91e                 fstp dword ptr [esi]
// 0057302a  d94104               fld dword ptr [ecx + 4]
// 0057302d  d95e04               fstp dword ptr [esi + 4]
// 00573030  d94108               fld dword ptr [ecx + 8]
// 00573033  d95e08               fstp dword ptr [esi + 8]
// 00573036  d9410c               fld dword ptr [ecx + 0xc]
// 00573039  d95e0c               fstp dword ptr [esi + 0xc]
// 0057303c  83c610               add esi, 0x10
// 0057303f  83c110               add ecx, 0x10
// 00573042  3bf7                 cmp esi, edi
// 00573044  72dc                 jb 0x573022
// 00573046  55                   push ebp
// 00573047  e84482ffff           call 0x56b290
// 0057304c  83c404               add esp, 4
// 0057304f  5f                   pop edi
// 00573050  5e                   pop esi
// 00573051  5d                   pop ebp
// 00573052  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?realloc@?$Array@VVector4@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
