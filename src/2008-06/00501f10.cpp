// from server: 100% by auto
// roc 2008-06 00501f10  unit: G3D::Sphere  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00501f10
//
// 00501f10  55                   push ebp
// 00501f11  56                   push esi
// 00501f12  8bf1                 mov esi, ecx
// 00501f14  8b4608               mov eax, dword ptr [esi + 8]
// 00501f17  8b2e                 mov ebp, dword ptr [esi]
// 00501f19  8d0440               lea eax, [eax + eax*2]
// 00501f1c  57                   push edi
// 00501f1d  03c0                 add eax, eax
// 00501f1f  03c0                 add eax, eax
// 00501f21  6a10                 push 0x10
// 00501f23  50                   push eax
// 00501f24  e857660000           call 0x508580
// 00501f29  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00501f2d  8906                 mov dword ptr [esi], eax
// 00501f2f  8b7608               mov esi, dword ptr [esi + 8]
// 00501f32  83c408               add esp, 8
// 00501f35  3bce                 cmp ecx, esi
// 00501f37  7c02                 jl 0x501f3b
// 00501f39  8bce                 mov ecx, esi
// 00501f3b  8d0c49               lea ecx, [ecx + ecx*2]
// 00501f3e  8d3c88               lea edi, [eax + ecx*4]
// 00501f41  8bf0                 mov esi, eax
// 00501f43  8bd7                 mov edx, edi
// 00501f45  2bd0                 sub edx, eax
// 00501f47  83c20b               add edx, 0xb
// 00501f4a  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00501f4f  f7ea                 imul edx
// 00501f51  d1fa                 sar edx, 1
// 00501f53  8bc2                 mov eax, edx
// 00501f55  c1e81f               shr eax, 0x1f
// 00501f58  03c2                 add eax, edx
// 00501f5a  83f804               cmp eax, 4
// 00501f5d  8bcd                 mov ecx, ebp
// 00501f5f  7c71                 jl 0x501fd2
// 00501f61  53                   push ebx
// 00501f62  8d5fdc               lea ebx, [edi - 0x24]
// 00501f65  8d4614               lea eax, [esi + 0x14]
// 00501f68  85f6                 test esi, esi
// 00501f6a  7410                 je 0x501f7c
// 00501f6c  d901                 fld dword ptr [ecx]
// 00501f6e  d91e                 fstp dword ptr [esi]
// 00501f70  d94104               fld dword ptr [ecx + 4]
// 00501f73  d958f0               fstp dword ptr [eax - 0x10]
// 00501f76  d94108               fld dword ptr [ecx + 8]
// 00501f79  d958f4               fstp dword ptr [eax - 0xc]
// 00501f7c  8d50f8               lea edx, [eax - 8]
// 00501f7f  85d2                 test edx, edx
// 00501f81  7411                 je 0x501f94
// 00501f83  d9410c               fld dword ptr [ecx + 0xc]
// 00501f86  d958f8               fstp dword ptr [eax - 8]
// 00501f89  d94110               fld dword ptr [ecx + 0x10]
// 00501f8c  d958fc               fstp dword ptr [eax - 4]
// 00501f8f  d94114               fld dword ptr [ecx + 0x14]
// 00501f92  d918                 fstp dword ptr [eax]
// 00501f94  8d5004               lea edx, [eax + 4]
// 00501f97  85d2                 test edx, edx
// 00501f99  7411                 je 0x501fac
// 00501f9b  d94118               fld dword ptr [ecx + 0x18]
// 00501f9e  d91a                 fstp dword ptr [edx]
// 00501fa0  d9411c               fld dword ptr [ecx + 0x1c]
// 00501fa3  d95808               fstp dword ptr [eax + 8]
// 00501fa6  d94120               fld dword ptr [ecx + 0x20]
// 00501fa9  d9580c               fstp dword ptr [eax + 0xc]
// 00501fac  8d5010               lea edx, [eax + 0x10]
// 00501faf  85d2                 test edx, edx
// 00501fb1  7411                 je 0x501fc4
// 00501fb3  d94124               fld dword ptr [ecx + 0x24]
// 00501fb6  d91a                 fstp dword ptr [edx]
// 00501fb8  d94128               fld dword ptr [ecx + 0x28]
// 00501fbb  d95814               fstp dword ptr [eax + 0x14]
// 00501fbe  d9412c               fld dword ptr [ecx + 0x2c]
// 00501fc1  d95818               fstp dword ptr [eax + 0x18]
// 00501fc4  83c630               add esi, 0x30
// 00501fc7  83c130               add ecx, 0x30
// 00501fca  83c030               add eax, 0x30
// 00501fcd  3bf3                 cmp esi, ebx
// 00501fcf  7c97                 jl 0x501f68
// 00501fd1  5b                   pop ebx
// 00501fd2  3bf7                 cmp esi, edi
// 00501fd4  731e                 jae 0x501ff4
// 00501fd6  85f6                 test esi, esi
// 00501fd8  7410                 je 0x501fea
// 00501fda  d901                 fld dword ptr [ecx]
// 00501fdc  d91e                 fstp dword ptr [esi]
// 00501fde  d94104               fld dword ptr [ecx + 4]
// 00501fe1  d95e04               fstp dword ptr [esi + 4]
// 00501fe4  d94108               fld dword ptr [ecx + 8]
// 00501fe7  d95e08               fstp dword ptr [esi + 8]
// 00501fea  83c60c               add esi, 0xc
// 00501fed  83c10c               add ecx, 0xc
// 00501ff0  3bf7                 cmp esi, edi
// 00501ff2  72e2                 jb 0x501fd6
// 00501ff4  55                   push ebp
// 00501ff5  e8265d0000           call 0x507d20
// 00501ffa  83c404               add esp, 4
// 00501ffd  5f                   pop edi
// 00501ffe  5e                   pop esi
// 00501fff  5d                   pop ebp
// 00502000  c20400               ret 4
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?realloc@?$Array@VVector3@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
