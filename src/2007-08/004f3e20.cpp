// from server: 100% by auto
// roc 2007-08 004f3e20  unit: boost::bad_lexical_cast  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f3e20
//
// 004f3e20  55                   push ebp
// 004f3e21  56                   push esi
// 004f3e22  57                   push edi
// 004f3e23  8bf9                 mov edi, ecx
// 004f3e25  8b4708               mov eax, dword ptr [edi + 8]
// 004f3e28  8b2f                 mov ebp, dword ptr [edi]
// 004f3e2a  03c0                 add eax, eax
// 004f3e2c  03c0                 add eax, eax
// 004f3e2e  03c0                 add eax, eax
// 004f3e30  6a10                 push 0x10
// 004f3e32  50                   push eax
// 004f3e33  e828c20000           call 0x500060
// 004f3e38  8bf0                 mov esi, eax
// 004f3e3a  8b442418             mov eax, dword ptr [esp + 0x18]
// 004f3e3e  8937                 mov dword ptr [edi], esi
// 004f3e40  8b7f08               mov edi, dword ptr [edi + 8]
// 004f3e43  83c408               add esp, 8
// 004f3e46  3bc7                 cmp eax, edi
// 004f3e48  7c02                 jl 0x4f3e4c
// 004f3e4a  8bc7                 mov eax, edi
// 004f3e4c  8d3cc6               lea edi, [esi + eax*8]
// 004f3e4f  8bc7                 mov eax, edi
// 004f3e51  2bc6                 sub eax, esi
// 004f3e53  83c007               add eax, 7
// 004f3e56  99                   cdq 
// 004f3e57  83e207               and edx, 7
// 004f3e5a  03c2                 add eax, edx
// 004f3e5c  c1f803               sar eax, 3
// 004f3e5f  83f804               cmp eax, 4
// 004f3e62  8bcd                 mov ecx, ebp
// 004f3e64  7c5d                 jl 0x4f3ec3
// 004f3e66  53                   push ebx
// 004f3e67  8d5fe8               lea ebx, [edi - 0x18]
// 004f3e6a  8d4614               lea eax, [esi + 0x14]
// 004f3e6d  8d4900               lea ecx, [ecx]
// 004f3e70  85f6                 test esi, esi
// 004f3e72  740a                 je 0x4f3e7e
// 004f3e74  d901                 fld dword ptr [ecx]
// 004f3e76  d91e                 fstp dword ptr [esi]
// 004f3e78  d94104               fld dword ptr [ecx + 4]
// 004f3e7b  d958f0               fstp dword ptr [eax - 0x10]
// 004f3e7e  8d50f4               lea edx, [eax - 0xc]
// 004f3e81  85d2                 test edx, edx
// 004f3e83  740c                 je 0x4f3e91
// 004f3e85  d94108               fld dword ptr [ecx + 8]
// 004f3e88  d958f4               fstp dword ptr [eax - 0xc]
// 004f3e8b  d9410c               fld dword ptr [ecx + 0xc]
// 004f3e8e  d958f8               fstp dword ptr [eax - 8]
// 004f3e91  8d50fc               lea edx, [eax - 4]
// 004f3e94  85d2                 test edx, edx
// 004f3e96  740b                 je 0x4f3ea3
// 004f3e98  d94110               fld dword ptr [ecx + 0x10]
// 004f3e9b  d958fc               fstp dword ptr [eax - 4]
// 004f3e9e  d94114               fld dword ptr [ecx + 0x14]
// 004f3ea1  d918                 fstp dword ptr [eax]
// 004f3ea3  8d5004               lea edx, [eax + 4]
// 004f3ea6  85d2                 test edx, edx
// 004f3ea8  740b                 je 0x4f3eb5
// 004f3eaa  d94118               fld dword ptr [ecx + 0x18]
// 004f3ead  d91a                 fstp dword ptr [edx]
// 004f3eaf  d9411c               fld dword ptr [ecx + 0x1c]
// 004f3eb2  d95808               fstp dword ptr [eax + 8]
// 004f3eb5  83c620               add esi, 0x20
// 004f3eb8  83c120               add ecx, 0x20
// 004f3ebb  83c020               add eax, 0x20
// 004f3ebe  3bf3                 cmp esi, ebx
// 004f3ec0  7cae                 jl 0x4f3e70
// 004f3ec2  5b                   pop ebx
// 004f3ec3  3bf7                 cmp esi, edi
// 004f3ec5  7318                 jae 0x4f3edf
// 004f3ec7  85f6                 test esi, esi
// 004f3ec9  740a                 je 0x4f3ed5
// 004f3ecb  d901                 fld dword ptr [ecx]
// 004f3ecd  d91e                 fstp dword ptr [esi]
// 004f3ecf  d94104               fld dword ptr [ecx + 4]
// 004f3ed2  d95e04               fstp dword ptr [esi + 4]
// 004f3ed5  83c608               add esi, 8
// 004f3ed8  83c108               add ecx, 8
// 004f3edb  3bf7                 cmp esi, edi
// 004f3edd  72e8                 jb 0x4f3ec7
// 004f3edf  55                   push ebp
// 004f3ee0  e82bb90000           call 0x4ff810
// 004f3ee5  83c404               add esp, 4
// 004f3ee8  5f                   pop edi
// 004f3ee9  5e                   pop esi
// 004f3eea  5d                   pop ebp
// 004f3eeb  c20400               ret 4
// library g3d-6.09/G3Dcpp\ConvexPolyhedron.cpp (function ?realloc@?$Array@VVector2@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/ConvexPolyhedron.cpp
