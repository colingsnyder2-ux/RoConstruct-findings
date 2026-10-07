// roc 2009-06 004c4080  unit: RBX::Network::Players  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c4080
//
// 004c4080  55                   push ebp
// 004c4081  56                   push esi
// 004c4082  8bf1                 mov esi, ecx
// 004c4084  8b4608               mov eax, dword ptr [esi + 8]
// 004c4087  8b2e                 mov ebp, dword ptr [esi]
// 004c4089  03c0                 add eax, eax
// 004c408b  57                   push edi
// 004c408c  03c0                 add eax, eax
// 004c408e  03c0                 add eax, eax
// 004c4090  6a10                 push 0x10
// 004c4092  50                   push eax
// 004c4093  e8d8700a00           call 0x56b170
// 004c4098  8bc8                 mov ecx, eax
// 004c409a  8b442418             mov eax, dword ptr [esp + 0x18]
// 004c409e  890e                 mov dword ptr [esi], ecx
// 004c40a0  8b7608               mov esi, dword ptr [esi + 8]
// 004c40a3  83c408               add esp, 8
// 004c40a6  3bc6                 cmp eax, esi
// 004c40a8  7d02                 jge 0x4c40ac
// 004c40aa  8bf0                 mov esi, eax
// 004c40ac  8d3cf1               lea edi, [ecx + esi*8]
// 004c40af  8bf5                 mov esi, ebp
// 004c40b1  3bcf                 cmp ecx, edi
// 004c40b3  0f838f000000         jae 0x4c4148
// 004c40b9  8bc7                 mov eax, edi
// 004c40bb  2bc1                 sub eax, ecx
// 004c40bd  83c007               add eax, 7
// 004c40c0  99                   cdq 
// 004c40c1  83e207               and edx, 7
// 004c40c4  03c2                 add eax, edx
// 004c40c6  c1f803               sar eax, 3
// 004c40c9  83f804               cmp eax, 4
// 004c40cc  7c5a                 jl 0x4c4128
// 004c40ce  53                   push ebx
// 004c40cf  8d5fe8               lea ebx, [edi - 0x18]
// 004c40d2  8d4114               lea eax, [ecx + 0x14]
// 004c40d5  85c9                 test ecx, ecx
// 004c40d7  740a                 je 0x4c40e3
// 004c40d9  d906                 fld dword ptr [esi]
// 004c40db  d919                 fstp dword ptr [ecx]
// 004c40dd  d94604               fld dword ptr [esi + 4]
// 004c40e0  d958f0               fstp dword ptr [eax - 0x10]
// 004c40e3  8d50f4               lea edx, [eax - 0xc]
// 004c40e6  85d2                 test edx, edx
// 004c40e8  740c                 je 0x4c40f6
// 004c40ea  d94608               fld dword ptr [esi + 8]
// 004c40ed  d958f4               fstp dword ptr [eax - 0xc]
// 004c40f0  d9460c               fld dword ptr [esi + 0xc]
// 004c40f3  d958f8               fstp dword ptr [eax - 8]
// 004c40f6  8d50fc               lea edx, [eax - 4]
// 004c40f9  85d2                 test edx, edx
// 004c40fb  740b                 je 0x4c4108
// 004c40fd  d94610               fld dword ptr [esi + 0x10]
// 004c4100  d958fc               fstp dword ptr [eax - 4]
// 004c4103  d94614               fld dword ptr [esi + 0x14]
// 004c4106  d918                 fstp dword ptr [eax]
// 004c4108  8d5004               lea edx, [eax + 4]
// 004c410b  85d2                 test edx, edx
// 004c410d  740b                 je 0x4c411a
// 004c410f  d94618               fld dword ptr [esi + 0x18]
// 004c4112  d91a                 fstp dword ptr [edx]
// 004c4114  d9461c               fld dword ptr [esi + 0x1c]
// 004c4117  d95808               fstp dword ptr [eax + 8]
// 004c411a  83c120               add ecx, 0x20
// 004c411d  83c620               add esi, 0x20
// 004c4120  83c020               add eax, 0x20
// 004c4123  3bcb                 cmp ecx, ebx
// 004c4125  7cae                 jl 0x4c40d5
// 004c4127  5b                   pop ebx
// 004c4128  3bcf                 cmp ecx, edi
// 004c412a  731c                 jae 0x4c4148
// 004c412c  8d642400             lea esp, [esp]
// 004c4130  85c9                 test ecx, ecx
// 004c4132  740a                 je 0x4c413e
// 004c4134  d906                 fld dword ptr [esi]
// 004c4136  d919                 fstp dword ptr [ecx]
// 004c4138  d94604               fld dword ptr [esi + 4]
// 004c413b  d95904               fstp dword ptr [ecx + 4]
// 004c413e  83c108               add ecx, 8
// 004c4141  83c608               add esi, 8
// 004c4144  3bcf                 cmp ecx, edi
// 004c4146  72e8                 jb 0x4c4130
// 004c4148  55                   push ebp
// 004c4149  e842710a00           call 0x56b290
// 004c414e  83c404               add esp, 4
// 004c4151  5f                   pop edi
// 004c4152  5e                   pop esi
// 004c4153  5d                   pop ebp
// 004c4154  c20400               ret 4
// library g3d-6.09/G3Dcpp\ConvexPolyhedron.cpp (function ?realloc@?$Array@VVector2@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/ConvexPolyhedron.cpp
