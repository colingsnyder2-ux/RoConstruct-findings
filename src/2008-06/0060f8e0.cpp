// roc 2008-06 0060f8e0  unit: RBX::BlockBlockContact  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060f8e0
//
// 0060f8e0  53                   push ebx
// 0060f8e1  56                   push esi
// 0060f8e2  57                   push edi
// 0060f8e3  e87810f0ff           call 0x510960
// 0060f8e8  d900                 fld dword ptr [eax]
// 0060f8ea  8b742410             mov esi, dword ptr [esp + 0x10]
// 0060f8ee  d91e                 fstp dword ptr [esi]
// 0060f8f0  d94004               fld dword ptr [eax + 4]
// 0060f8f3  d95e04               fstp dword ptr [esi + 4]
// 0060f8f6  d94008               fld dword ptr [eax + 8]
// 0060f8f9  d95e08               fstp dword ptr [esi + 8]
// 0060f8fc  e85f10f0ff           call 0x510960
// 0060f901  d94004               fld dword ptr [eax + 4]
// 0060f904  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0060f908  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0060f90c  d9e0                 fchs 
// 0060f90e  d94008               fld dword ptr [eax + 8]
// 0060f911  8d5308               lea edx, [ebx + 8]
// 0060f914  d9e0                 fchs 
// 0060f916  8d4f08               lea ecx, [edi + 8]
// 0060f919  d900                 fld dword ptr [eax]
// 0060f91b  d9e0                 fchs 
// 0060f91d  d95e0c               fstp dword ptr [esi + 0xc]
// 0060f920  d9c9                 fxch st(1)
// 0060f922  d95e10               fstp dword ptr [esi + 0x10]
// 0060f925  d95e14               fstp dword ptr [esi + 0x14]
// 0060f928  d902                 fld dword ptr [edx]
// 0060f92a  d819                 fcomp dword ptr [ecx]
// 0060f92c  dfe0                 fnstsw ax
// 0060f92e  f6c441               test ah, 0x41
// 0060f931  8bc1                 mov eax, ecx
// 0060f933  7402                 je 0x60f937
// 0060f935  8bc2                 mov eax, edx
// 0060f937  d900                 fld dword ptr [eax]
// 0060f939  55                   push ebp
// 0060f93a  d94304               fld dword ptr [ebx + 4]
// 0060f93d  8d6f04               lea ebp, [edi + 4]
// 0060f940  d85d00               fcomp dword ptr [ebp]
// 0060f943  dfe0                 fnstsw ax
// 0060f945  f6c441               test ah, 0x41
// 0060f948  8bc5                 mov eax, ebp
// 0060f94a  7403                 je 0x60f94f
// 0060f94c  8d4304               lea eax, [ebx + 4]
// 0060f94f  d900                 fld dword ptr [eax]
// 0060f951  d903                 fld dword ptr [ebx]
// 0060f953  d81f                 fcomp dword ptr [edi]
// 0060f955  dfe0                 fnstsw ax
// 0060f957  f6c441               test ah, 0x41
// 0060f95a  8bc7                 mov eax, edi
// 0060f95c  7402                 je 0x60f960
// 0060f95e  8bc3                 mov eax, ebx
// 0060f960  d900                 fld dword ptr [eax]
// 0060f962  d91e                 fstp dword ptr [esi]
// 0060f964  d95e04               fstp dword ptr [esi + 4]
// 0060f967  d95e08               fstp dword ptr [esi + 8]
// 0060f96a  d901                 fld dword ptr [ecx]
// 0060f96c  d81a                 fcomp dword ptr [edx]
// 0060f96e  dfe0                 fnstsw ax
// 0060f970  f6c441               test ah, 0x41
// 0060f973  7402                 je 0x60f977
// 0060f975  8bca                 mov ecx, edx
// 0060f977  d901                 fld dword ptr [ecx]
// 0060f979  8d4b04               lea ecx, [ebx + 4]
// 0060f97c  d94500               fld dword ptr [ebp]
// 0060f97f  d819                 fcomp dword ptr [ecx]
// 0060f981  dfe0                 fnstsw ax
// 0060f983  f6c441               test ah, 0x41
// 0060f986  7502                 jne 0x60f98a
// 0060f988  8bcd                 mov ecx, ebp
// 0060f98a  d901                 fld dword ptr [ecx]
// 0060f98c  5d                   pop ebp
// 0060f98d  d907                 fld dword ptr [edi]
// 0060f98f  d81b                 fcomp dword ptr [ebx]
// 0060f991  dfe0                 fnstsw ax
// 0060f993  f6c441               test ah, 0x41
// 0060f996  7402                 je 0x60f99a
// 0060f998  8bfb                 mov edi, ebx
// 0060f99a  d907                 fld dword ptr [edi]
// 0060f99c  5f                   pop edi
// 0060f99d  d95e0c               fstp dword ptr [esi + 0xc]
// 0060f9a0  8bc6                 mov eax, esi
// 0060f9a2  d95e10               fstp dword ptr [esi + 0x10]
// 0060f9a5  d95e14               fstp dword ptr [esi + 0x14]
// 0060f9a8  5e                   pop esi
// 0060f9a9  5b                   pop ebx
// 0060f9aa  c3                   ret 
// library rbxgs-dll/util\Extents.cpp (function ?vv@Extents@RBX@@SA?AV12@ABVVector3@G3D@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll util/Extents.cpp
