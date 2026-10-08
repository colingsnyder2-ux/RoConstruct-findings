// from server: 100% by auto
// roc 2009-06 005658f0  unit: RBX::RbxG3D::RenderScene  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005658f0
//
// 005658f0  55                   push ebp
// 005658f1  56                   push esi
// 005658f2  57                   push edi
// 005658f3  8bf9                 mov edi, ecx
// 005658f5  8b4708               mov eax, dword ptr [edi + 8]
// 005658f8  8b2f                 mov ebp, dword ptr [edi]
// 005658fa  8d0440               lea eax, [eax + eax*2]
// 005658fd  03c0                 add eax, eax
// 005658ff  03c0                 add eax, eax
// 00565901  6a10                 push 0x10
// 00565903  50                   push eax
// 00565904  e867580000           call 0x56b170
// 00565909  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0056590d  8907                 mov dword ptr [edi], eax
// 0056590f  8b7f08               mov edi, dword ptr [edi + 8]
// 00565912  83c408               add esp, 8
// 00565915  3bcf                 cmp ecx, edi
// 00565917  7c02                 jl 0x56591b
// 00565919  8bcf                 mov ecx, edi
// 0056591b  8d0c49               lea ecx, [ecx + ecx*2]
// 0056591e  8d3c88               lea edi, [eax + ecx*4]
// 00565921  8bf0                 mov esi, eax
// 00565923  8bcd                 mov ecx, ebp
// 00565925  3bf7                 cmp esi, edi
// 00565927  0f83b1000000         jae 0x5659de
// 0056592d  8bd7                 mov edx, edi
// 0056592f  2bd0                 sub edx, eax
// 00565931  83c20b               add edx, 0xb
// 00565934  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00565939  f7ea                 imul edx
// 0056593b  d1fa                 sar edx, 1
// 0056593d  8bc2                 mov eax, edx
// 0056593f  c1e81f               shr eax, 0x1f
// 00565942  03c2                 add eax, edx
// 00565944  83f804               cmp eax, 4
// 00565947  7c71                 jl 0x5659ba
// 00565949  53                   push ebx
// 0056594a  8d5fdc               lea ebx, [edi - 0x24]
// 0056594d  8d4614               lea eax, [esi + 0x14]
// 00565950  85f6                 test esi, esi
// 00565952  7410                 je 0x565964
// 00565954  d901                 fld dword ptr [ecx]
// 00565956  d91e                 fstp dword ptr [esi]
// 00565958  d94104               fld dword ptr [ecx + 4]
// 0056595b  d958f0               fstp dword ptr [eax - 0x10]
// 0056595e  d94108               fld dword ptr [ecx + 8]
// 00565961  d958f4               fstp dword ptr [eax - 0xc]
// 00565964  8d50f8               lea edx, [eax - 8]
// 00565967  85d2                 test edx, edx
// 00565969  7411                 je 0x56597c
// 0056596b  d9410c               fld dword ptr [ecx + 0xc]
// 0056596e  d958f8               fstp dword ptr [eax - 8]
// 00565971  d94110               fld dword ptr [ecx + 0x10]
// 00565974  d958fc               fstp dword ptr [eax - 4]
// 00565977  d94114               fld dword ptr [ecx + 0x14]
// 0056597a  d918                 fstp dword ptr [eax]
// 0056597c  8d5004               lea edx, [eax + 4]
// 0056597f  85d2                 test edx, edx
// 00565981  7411                 je 0x565994
// 00565983  d94118               fld dword ptr [ecx + 0x18]
// 00565986  d91a                 fstp dword ptr [edx]
// 00565988  d9411c               fld dword ptr [ecx + 0x1c]
// 0056598b  d95808               fstp dword ptr [eax + 8]
// 0056598e  d94120               fld dword ptr [ecx + 0x20]
// 00565991  d9580c               fstp dword ptr [eax + 0xc]
// 00565994  8d5010               lea edx, [eax + 0x10]
// 00565997  85d2                 test edx, edx
// 00565999  7411                 je 0x5659ac
// 0056599b  d94124               fld dword ptr [ecx + 0x24]
// 0056599e  d91a                 fstp dword ptr [edx]
// 005659a0  d94128               fld dword ptr [ecx + 0x28]
// 005659a3  d95814               fstp dword ptr [eax + 0x14]
// 005659a6  d9412c               fld dword ptr [ecx + 0x2c]
// 005659a9  d95818               fstp dword ptr [eax + 0x18]
// 005659ac  83c630               add esi, 0x30
// 005659af  83c130               add ecx, 0x30
// 005659b2  83c030               add eax, 0x30
// 005659b5  3bf3                 cmp esi, ebx
// 005659b7  7c97                 jl 0x565950
// 005659b9  5b                   pop ebx
// 005659ba  3bf7                 cmp esi, edi
// 005659bc  7320                 jae 0x5659de
// 005659be  8bff                 mov edi, edi
// 005659c0  85f6                 test esi, esi
// 005659c2  7410                 je 0x5659d4
// 005659c4  d901                 fld dword ptr [ecx]
// 005659c6  d91e                 fstp dword ptr [esi]
// 005659c8  d94104               fld dword ptr [ecx + 4]
// 005659cb  d95e04               fstp dword ptr [esi + 4]
// 005659ce  d94108               fld dword ptr [ecx + 8]
// 005659d1  d95e08               fstp dword ptr [esi + 8]
// 005659d4  83c60c               add esi, 0xc
// 005659d7  83c10c               add ecx, 0xc
// 005659da  3bf7                 cmp esi, edi
// 005659dc  72e2                 jb 0x5659c0
// 005659de  55                   push ebp
// 005659df  e8ac580000           call 0x56b290
// 005659e4  83c404               add esp, 4
// 005659e7  5f                   pop edi
// 005659e8  5e                   pop esi
// 005659e9  5d                   pop ebp
// 005659ea  c20400               ret 4
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?realloc@?$Array@VVector3@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
