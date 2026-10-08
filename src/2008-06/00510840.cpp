// from server: 100% by auto
// roc 2008-06 00510840  unit: G3D::Ray  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00510840
//
// 00510840  55                   push ebp
// 00510841  56                   push esi
// 00510842  57                   push edi
// 00510843  8bf9                 mov edi, ecx
// 00510845  8b4708               mov eax, dword ptr [edi + 8]
// 00510848  8b2f                 mov ebp, dword ptr [edi]
// 0051084a  c1e004               shl eax, 4
// 0051084d  6a10                 push 0x10
// 0051084f  50                   push eax
// 00510850  e82b7dffff           call 0x508580
// 00510855  8bf0                 mov esi, eax
// 00510857  8b442418             mov eax, dword ptr [esp + 0x18]
// 0051085b  8937                 mov dword ptr [edi], esi
// 0051085d  8b7f08               mov edi, dword ptr [edi + 8]
// 00510860  83c408               add esp, 8
// 00510863  3bc7                 cmp eax, edi
// 00510865  7c02                 jl 0x510869
// 00510867  8bc7                 mov eax, edi
// 00510869  c1e004               shl eax, 4
// 0051086c  03c6                 add eax, esi
// 0051086e  8bf8                 mov edi, eax
// 00510870  2bc6                 sub eax, esi
// 00510872  83c00f               add eax, 0xf
// 00510875  99                   cdq 
// 00510876  83e20f               and edx, 0xf
// 00510879  03c2                 add eax, edx
// 0051087b  c1f804               sar eax, 4
// 0051087e  83f804               cmp eax, 4
// 00510881  8bcd                 mov ecx, ebp
// 00510883  0f8c8d000000         jl 0x510916
// 00510889  53                   push ebx
// 0051088a  8d5fd0               lea ebx, [edi - 0x30]
// 0051088d  8d4618               lea eax, [esi + 0x18]
// 00510890  85f6                 test esi, esi
// 00510892  7416                 je 0x5108aa
// 00510894  d901                 fld dword ptr [ecx]
// 00510896  d91e                 fstp dword ptr [esi]
// 00510898  d94104               fld dword ptr [ecx + 4]
// 0051089b  d958ec               fstp dword ptr [eax - 0x14]
// 0051089e  d94108               fld dword ptr [ecx + 8]
// 005108a1  d958f0               fstp dword ptr [eax - 0x10]
// 005108a4  d9410c               fld dword ptr [ecx + 0xc]
// 005108a7  d958f4               fstp dword ptr [eax - 0xc]
// 005108aa  8d50f8               lea edx, [eax - 8]
// 005108ad  85d2                 test edx, edx
// 005108af  7417                 je 0x5108c8
// 005108b1  d94110               fld dword ptr [ecx + 0x10]
// 005108b4  d958f8               fstp dword ptr [eax - 8]
// 005108b7  d94114               fld dword ptr [ecx + 0x14]
// 005108ba  d958fc               fstp dword ptr [eax - 4]
// 005108bd  d94118               fld dword ptr [ecx + 0x18]
// 005108c0  d918                 fstp dword ptr [eax]
// 005108c2  d9411c               fld dword ptr [ecx + 0x1c]
// 005108c5  d95804               fstp dword ptr [eax + 4]
// 005108c8  8d5008               lea edx, [eax + 8]
// 005108cb  85d2                 test edx, edx
// 005108cd  7417                 je 0x5108e6
// 005108cf  d94120               fld dword ptr [ecx + 0x20]
// 005108d2  d91a                 fstp dword ptr [edx]
// 005108d4  d94124               fld dword ptr [ecx + 0x24]
// 005108d7  d9580c               fstp dword ptr [eax + 0xc]
// 005108da  d94128               fld dword ptr [ecx + 0x28]
// 005108dd  d95810               fstp dword ptr [eax + 0x10]
// 005108e0  d9412c               fld dword ptr [ecx + 0x2c]
// 005108e3  d95814               fstp dword ptr [eax + 0x14]
// 005108e6  8d5018               lea edx, [eax + 0x18]
// 005108e9  85d2                 test edx, edx
// 005108eb  7417                 je 0x510904
// 005108ed  d94130               fld dword ptr [ecx + 0x30]
// 005108f0  d91a                 fstp dword ptr [edx]
// 005108f2  d94134               fld dword ptr [ecx + 0x34]
// 005108f5  d9581c               fstp dword ptr [eax + 0x1c]
// 005108f8  d94138               fld dword ptr [ecx + 0x38]
// 005108fb  d95820               fstp dword ptr [eax + 0x20]
// 005108fe  d9413c               fld dword ptr [ecx + 0x3c]
// 00510901  d95824               fstp dword ptr [eax + 0x24]
// 00510904  83c640               add esi, 0x40
// 00510907  83c140               add ecx, 0x40
// 0051090a  83c040               add eax, 0x40
// 0051090d  3bf3                 cmp esi, ebx
// 0051090f  0f8c7bffffff         jl 0x510890
// 00510915  5b                   pop ebx
// 00510916  3bf7                 cmp esi, edi
// 00510918  732a                 jae 0x510944
// 0051091a  8d9b00000000         lea ebx, [ebx]
// 00510920  85f6                 test esi, esi
// 00510922  7416                 je 0x51093a
// 00510924  d901                 fld dword ptr [ecx]
// 00510926  d91e                 fstp dword ptr [esi]
// 00510928  d94104               fld dword ptr [ecx + 4]
// 0051092b  d95e04               fstp dword ptr [esi + 4]
// 0051092e  d94108               fld dword ptr [ecx + 8]
// 00510931  d95e08               fstp dword ptr [esi + 8]
// 00510934  d9410c               fld dword ptr [ecx + 0xc]
// 00510937  d95e0c               fstp dword ptr [esi + 0xc]
// 0051093a  83c610               add esi, 0x10
// 0051093d  83c110               add ecx, 0x10
// 00510940  3bf7                 cmp esi, edi
// 00510942  72dc                 jb 0x510920
// 00510944  55                   push ebp
// 00510945  e8d673ffff           call 0x507d20
// 0051094a  83c404               add esp, 4
// 0051094d  5f                   pop edi
// 0051094e  5e                   pop esi
// 0051094f  5d                   pop ebp
// 00510950  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?realloc@?$Array@VVector4@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
