// roc 2009-12 00512860  unit: RBX::Network::Players  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00512860
//
// 00512860  55                   push ebp
// 00512861  56                   push esi
// 00512862  57                   push edi
// 00512863  8bf9                 mov edi, ecx
// 00512865  8b4708               mov eax, dword ptr [edi + 8]
// 00512868  8b2f                 mov ebp, dword ptr [edi]
// 0051286a  8d0440               lea eax, [eax + eax*2]
// 0051286d  03c0                 add eax, eax
// 0051286f  03c0                 add eax, eax
// 00512871  6a10                 push 0x10
// 00512873  50                   push eax
// 00512874  e8477a0d00           call 0x5ea2c0
// 00512879  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0051287d  8907                 mov dword ptr [edi], eax
// 0051287f  8b7f08               mov edi, dword ptr [edi + 8]
// 00512882  83c408               add esp, 8
// 00512885  3bcf                 cmp ecx, edi
// 00512887  7c02                 jl 0x51288b
// 00512889  8bcf                 mov ecx, edi
// 0051288b  8d0c49               lea ecx, [ecx + ecx*2]
// 0051288e  8d3c88               lea edi, [eax + ecx*4]
// 00512891  8bf0                 mov esi, eax
// 00512893  8bcd                 mov ecx, ebp
// 00512895  3bf7                 cmp esi, edi
// 00512897  0f83b1000000         jae 0x51294e
// 0051289d  8bd7                 mov edx, edi
// 0051289f  2bd0                 sub edx, eax
// 005128a1  83c20b               add edx, 0xb
// 005128a4  b8abaaaa2a           mov eax, 0x2aaaaaab
// 005128a9  f7ea                 imul edx
// 005128ab  d1fa                 sar edx, 1
// 005128ad  8bc2                 mov eax, edx
// 005128af  c1e81f               shr eax, 0x1f
// 005128b2  03c2                 add eax, edx
// 005128b4  83f804               cmp eax, 4
// 005128b7  7c71                 jl 0x51292a
// 005128b9  53                   push ebx
// 005128ba  8d5fdc               lea ebx, [edi - 0x24]
// 005128bd  8d4614               lea eax, [esi + 0x14]
// 005128c0  85f6                 test esi, esi
// 005128c2  7410                 je 0x5128d4
// 005128c4  d901                 fld dword ptr [ecx]
// 005128c6  d91e                 fstp dword ptr [esi]
// 005128c8  d94104               fld dword ptr [ecx + 4]
// 005128cb  d958f0               fstp dword ptr [eax - 0x10]
// 005128ce  d94108               fld dword ptr [ecx + 8]
// 005128d1  d958f4               fstp dword ptr [eax - 0xc]
// 005128d4  8d50f8               lea edx, [eax - 8]
// 005128d7  85d2                 test edx, edx
// 005128d9  7411                 je 0x5128ec
// 005128db  d9410c               fld dword ptr [ecx + 0xc]
// 005128de  d958f8               fstp dword ptr [eax - 8]
// 005128e1  d94110               fld dword ptr [ecx + 0x10]
// 005128e4  d958fc               fstp dword ptr [eax - 4]
// 005128e7  d94114               fld dword ptr [ecx + 0x14]
// 005128ea  d918                 fstp dword ptr [eax]
// 005128ec  8d5004               lea edx, [eax + 4]
// 005128ef  85d2                 test edx, edx
// 005128f1  7411                 je 0x512904
// 005128f3  d94118               fld dword ptr [ecx + 0x18]
// 005128f6  d91a                 fstp dword ptr [edx]
// 005128f8  d9411c               fld dword ptr [ecx + 0x1c]
// 005128fb  d95808               fstp dword ptr [eax + 8]
// 005128fe  d94120               fld dword ptr [ecx + 0x20]
// 00512901  d9580c               fstp dword ptr [eax + 0xc]
// 00512904  8d5010               lea edx, [eax + 0x10]
// 00512907  85d2                 test edx, edx
// 00512909  7411                 je 0x51291c
// 0051290b  d94124               fld dword ptr [ecx + 0x24]
// 0051290e  d91a                 fstp dword ptr [edx]
// 00512910  d94128               fld dword ptr [ecx + 0x28]
// 00512913  d95814               fstp dword ptr [eax + 0x14]
// 00512916  d9412c               fld dword ptr [ecx + 0x2c]
// 00512919  d95818               fstp dword ptr [eax + 0x18]
// 0051291c  83c630               add esi, 0x30
// 0051291f  83c130               add ecx, 0x30
// 00512922  83c030               add eax, 0x30
// 00512925  3bf3                 cmp esi, ebx
// 00512927  7c97                 jl 0x5128c0
// 00512929  5b                   pop ebx
// 0051292a  3bf7                 cmp esi, edi
// 0051292c  7320                 jae 0x51294e
// 0051292e  8bff                 mov edi, edi
// 00512930  85f6                 test esi, esi
// 00512932  7410                 je 0x512944
// 00512934  d901                 fld dword ptr [ecx]
// 00512936  d91e                 fstp dword ptr [esi]
// 00512938  d94104               fld dword ptr [ecx + 4]
// 0051293b  d95e04               fstp dword ptr [esi + 4]
// 0051293e  d94108               fld dword ptr [ecx + 8]
// 00512941  d95e08               fstp dword ptr [esi + 8]
// 00512944  83c60c               add esi, 0xc
// 00512947  83c10c               add ecx, 0xc
// 0051294a  3bf7                 cmp esi, edi
// 0051294c  72e2                 jb 0x512930
// 0051294e  55                   push ebp
// 0051294f  e88c7a0d00           call 0x5ea3e0
// 00512954  83c404               add esp, 4
// 00512957  5f                   pop edi
// 00512958  5e                   pop esi
// 00512959  5d                   pop ebp
// 0051295a  c20400               ret 4
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?realloc@?$Array@VVector3@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
