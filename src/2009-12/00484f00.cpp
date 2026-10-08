// roc 2009-12 00484f00  unit: G3D::GCamera  size: 277 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00484f00
//
// 00484f00  55                   push ebp
// 00484f01  56                   push esi
// 00484f02  57                   push edi
// 00484f03  8bf9                 mov edi, ecx
// 00484f05  8b4708               mov eax, dword ptr [edi + 8]
// 00484f08  8b2f                 mov ebp, dword ptr [edi]
// 00484f0a  c1e004               shl eax, 4
// 00484f0d  6a10                 push 0x10
// 00484f0f  50                   push eax
// 00484f10  e8ab531600           call 0x5ea2c0
// 00484f15  8bf0                 mov esi, eax
// 00484f17  8b442418             mov eax, dword ptr [esp + 0x18]
// 00484f1b  8937                 mov dword ptr [edi], esi
// 00484f1d  8b7f08               mov edi, dword ptr [edi + 8]
// 00484f20  83c408               add esp, 8
// 00484f23  3bc7                 cmp eax, edi
// 00484f25  7c02                 jl 0x484f29
// 00484f27  8bc7                 mov eax, edi
// 00484f29  c1e004               shl eax, 4
// 00484f2c  03c6                 add eax, esi
// 00484f2e  8bf8                 mov edi, eax
// 00484f30  8bcd                 mov ecx, ebp
// 00484f32  3bf7                 cmp esi, edi
// 00484f34  0f83cc000000         jae 0x485006
// 00484f3a  2bc6                 sub eax, esi
// 00484f3c  83c00f               add eax, 0xf
// 00484f3f  99                   cdq 
// 00484f40  83e20f               and edx, 0xf
// 00484f43  03c2                 add eax, edx
// 00484f45  c1f804               sar eax, 4
// 00484f48  83f804               cmp eax, 4
// 00484f4b  0f8c8d000000         jl 0x484fde
// 00484f51  53                   push ebx
// 00484f52  8d5fd0               lea ebx, [edi - 0x30]
// 00484f55  8d4618               lea eax, [esi + 0x18]
// 00484f58  85f6                 test esi, esi
// 00484f5a  7416                 je 0x484f72
// 00484f5c  d901                 fld dword ptr [ecx]
// 00484f5e  d91e                 fstp dword ptr [esi]
// 00484f60  d94104               fld dword ptr [ecx + 4]
// 00484f63  d958ec               fstp dword ptr [eax - 0x14]
// 00484f66  d94108               fld dword ptr [ecx + 8]
// 00484f69  d958f0               fstp dword ptr [eax - 0x10]
// 00484f6c  d9410c               fld dword ptr [ecx + 0xc]
// 00484f6f  d958f4               fstp dword ptr [eax - 0xc]
// 00484f72  8d50f8               lea edx, [eax - 8]
// 00484f75  85d2                 test edx, edx
// 00484f77  7417                 je 0x484f90
// 00484f79  d94110               fld dword ptr [ecx + 0x10]
// 00484f7c  d958f8               fstp dword ptr [eax - 8]
// 00484f7f  d94114               fld dword ptr [ecx + 0x14]
// 00484f82  d958fc               fstp dword ptr [eax - 4]
// 00484f85  d94118               fld dword ptr [ecx + 0x18]
// 00484f88  d918                 fstp dword ptr [eax]
// 00484f8a  d9411c               fld dword ptr [ecx + 0x1c]
// 00484f8d  d95804               fstp dword ptr [eax + 4]
// 00484f90  8d5008               lea edx, [eax + 8]
// 00484f93  85d2                 test edx, edx
// 00484f95  7417                 je 0x484fae
// 00484f97  d94120               fld dword ptr [ecx + 0x20]
// 00484f9a  d91a                 fstp dword ptr [edx]
// 00484f9c  d94124               fld dword ptr [ecx + 0x24]
// 00484f9f  d9580c               fstp dword ptr [eax + 0xc]
// 00484fa2  d94128               fld dword ptr [ecx + 0x28]
// 00484fa5  d95810               fstp dword ptr [eax + 0x10]
// 00484fa8  d9412c               fld dword ptr [ecx + 0x2c]
// 00484fab  d95814               fstp dword ptr [eax + 0x14]
// 00484fae  8d5018               lea edx, [eax + 0x18]
// 00484fb1  85d2                 test edx, edx
// 00484fb3  7417                 je 0x484fcc
// 00484fb5  d94130               fld dword ptr [ecx + 0x30]
// 00484fb8  d91a                 fstp dword ptr [edx]
// 00484fba  d94134               fld dword ptr [ecx + 0x34]
// 00484fbd  d9581c               fstp dword ptr [eax + 0x1c]
// 00484fc0  d94138               fld dword ptr [ecx + 0x38]
// 00484fc3  d95820               fstp dword ptr [eax + 0x20]
// 00484fc6  d9413c               fld dword ptr [ecx + 0x3c]
// 00484fc9  d95824               fstp dword ptr [eax + 0x24]
// 00484fcc  83c640               add esi, 0x40
// 00484fcf  83c140               add ecx, 0x40
// 00484fd2  83c040               add eax, 0x40
// 00484fd5  3bf3                 cmp esi, ebx
// 00484fd7  0f8c7bffffff         jl 0x484f58
// 00484fdd  5b                   pop ebx
// 00484fde  3bf7                 cmp esi, edi
// 00484fe0  7324                 jae 0x485006
// 00484fe2  85f6                 test esi, esi
// 00484fe4  7416                 je 0x484ffc
// 00484fe6  d901                 fld dword ptr [ecx]
// 00484fe8  d91e                 fstp dword ptr [esi]
// 00484fea  d94104               fld dword ptr [ecx + 4]
// 00484fed  d95e04               fstp dword ptr [esi + 4]
// 00484ff0  d94108               fld dword ptr [ecx + 8]
// 00484ff3  d95e08               fstp dword ptr [esi + 8]
// 00484ff6  d9410c               fld dword ptr [ecx + 0xc]
// 00484ff9  d95e0c               fstp dword ptr [esi + 0xc]
// 00484ffc  83c610               add esi, 0x10
// 00484fff  83c110               add ecx, 0x10
// 00485002  3bf7                 cmp esi, edi
// 00485004  72dc                 jb 0x484fe2
// 00485006  55                   push ebp
// 00485007  e8d4531600           call 0x5ea3e0
// 0048500c  83c404               add esp, 4
// 0048500f  5f                   pop edi
// 00485010  5e                   pop esi
// 00485011  5d                   pop ebp
// 00485012  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?realloc@?$Array@VVector4@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
