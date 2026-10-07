// roc 2007-08 004f3d20  unit: boost::bad_lexical_cast  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f3d20
//
// 004f3d20  55                   push ebp
// 004f3d21  56                   push esi
// 004f3d22  8bf1                 mov esi, ecx
// 004f3d24  8b4608               mov eax, dword ptr [esi + 8]
// 004f3d27  8b2e                 mov ebp, dword ptr [esi]
// 004f3d29  8d0440               lea eax, [eax + eax*2]
// 004f3d2c  57                   push edi
// 004f3d2d  03c0                 add eax, eax
// 004f3d2f  03c0                 add eax, eax
// 004f3d31  6a10                 push 0x10
// 004f3d33  50                   push eax
// 004f3d34  e827c30000           call 0x500060
// 004f3d39  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004f3d3d  8906                 mov dword ptr [esi], eax
// 004f3d3f  8b7608               mov esi, dword ptr [esi + 8]
// 004f3d42  83c408               add esp, 8
// 004f3d45  3bce                 cmp ecx, esi
// 004f3d47  7c02                 jl 0x4f3d4b
// 004f3d49  8bce                 mov ecx, esi
// 004f3d4b  8d0c49               lea ecx, [ecx + ecx*2]
// 004f3d4e  8d3c88               lea edi, [eax + ecx*4]
// 004f3d51  8bf0                 mov esi, eax
// 004f3d53  8bd7                 mov edx, edi
// 004f3d55  2bd0                 sub edx, eax
// 004f3d57  83c20b               add edx, 0xb
// 004f3d5a  b8abaaaa2a           mov eax, 0x2aaaaaab
// 004f3d5f  f7ea                 imul edx
// 004f3d61  d1fa                 sar edx, 1
// 004f3d63  8bc2                 mov eax, edx
// 004f3d65  c1e81f               shr eax, 0x1f
// 004f3d68  03c2                 add eax, edx
// 004f3d6a  83f804               cmp eax, 4
// 004f3d6d  8bcd                 mov ecx, ebp
// 004f3d6f  7c71                 jl 0x4f3de2
// 004f3d71  53                   push ebx
// 004f3d72  8d5fdc               lea ebx, [edi - 0x24]
// 004f3d75  8d4614               lea eax, [esi + 0x14]
// 004f3d78  85f6                 test esi, esi
// 004f3d7a  7410                 je 0x4f3d8c
// 004f3d7c  d901                 fld dword ptr [ecx]
// 004f3d7e  d91e                 fstp dword ptr [esi]
// 004f3d80  d94104               fld dword ptr [ecx + 4]
// 004f3d83  d958f0               fstp dword ptr [eax - 0x10]
// 004f3d86  d94108               fld dword ptr [ecx + 8]
// 004f3d89  d958f4               fstp dword ptr [eax - 0xc]
// 004f3d8c  8d50f8               lea edx, [eax - 8]
// 004f3d8f  85d2                 test edx, edx
// 004f3d91  7411                 je 0x4f3da4
// 004f3d93  d9410c               fld dword ptr [ecx + 0xc]
// 004f3d96  d958f8               fstp dword ptr [eax - 8]
// 004f3d99  d94110               fld dword ptr [ecx + 0x10]
// 004f3d9c  d958fc               fstp dword ptr [eax - 4]
// 004f3d9f  d94114               fld dword ptr [ecx + 0x14]
// 004f3da2  d918                 fstp dword ptr [eax]
// 004f3da4  8d5004               lea edx, [eax + 4]
// 004f3da7  85d2                 test edx, edx
// 004f3da9  7411                 je 0x4f3dbc
// 004f3dab  d94118               fld dword ptr [ecx + 0x18]
// 004f3dae  d91a                 fstp dword ptr [edx]
// 004f3db0  d9411c               fld dword ptr [ecx + 0x1c]
// 004f3db3  d95808               fstp dword ptr [eax + 8]
// 004f3db6  d94120               fld dword ptr [ecx + 0x20]
// 004f3db9  d9580c               fstp dword ptr [eax + 0xc]
// 004f3dbc  8d5010               lea edx, [eax + 0x10]
// 004f3dbf  85d2                 test edx, edx
// 004f3dc1  7411                 je 0x4f3dd4
// 004f3dc3  d94124               fld dword ptr [ecx + 0x24]
// 004f3dc6  d91a                 fstp dword ptr [edx]
// 004f3dc8  d94128               fld dword ptr [ecx + 0x28]
// 004f3dcb  d95814               fstp dword ptr [eax + 0x14]
// 004f3dce  d9412c               fld dword ptr [ecx + 0x2c]
// 004f3dd1  d95818               fstp dword ptr [eax + 0x18]
// 004f3dd4  83c630               add esi, 0x30
// 004f3dd7  83c130               add ecx, 0x30
// 004f3dda  83c030               add eax, 0x30
// 004f3ddd  3bf3                 cmp esi, ebx
// 004f3ddf  7c97                 jl 0x4f3d78
// 004f3de1  5b                   pop ebx
// 004f3de2  3bf7                 cmp esi, edi
// 004f3de4  731e                 jae 0x4f3e04
// 004f3de6  85f6                 test esi, esi
// 004f3de8  7410                 je 0x4f3dfa
// 004f3dea  d901                 fld dword ptr [ecx]
// 004f3dec  d91e                 fstp dword ptr [esi]
// 004f3dee  d94104               fld dword ptr [ecx + 4]
// 004f3df1  d95e04               fstp dword ptr [esi + 4]
// 004f3df4  d94108               fld dword ptr [ecx + 8]
// 004f3df7  d95e08               fstp dword ptr [esi + 8]
// 004f3dfa  83c60c               add esi, 0xc
// 004f3dfd  83c10c               add ecx, 0xc
// 004f3e00  3bf7                 cmp esi, edi
// 004f3e02  72e2                 jb 0x4f3de6
// 004f3e04  55                   push ebp
// 004f3e05  e806ba0000           call 0x4ff810
// 004f3e0a  83c404               add esp, 4
// 004f3e0d  5f                   pop edi
// 004f3e0e  5e                   pop esi
// 004f3e0f  5d                   pop ebp
// 004f3e10  c20400               ret 4
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?realloc@?$Array@VVector3@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
