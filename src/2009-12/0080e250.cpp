// roc 2009-12 0080e250  unit: IIHH::?$CMap  size: 801 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080e250
//
// 0080e250  6aff                 push -1
// 0080e252  68409d9500           push 0x959d40
// 0080e257  64a100000000         mov eax, dword ptr fs:[0]
// 0080e25d  50                   push eax
// 0080e25e  81ec88000000         sub esp, 0x88
// 0080e264  53                   push ebx
// 0080e265  55                   push ebp
// 0080e266  56                   push esi
// 0080e267  57                   push edi
// 0080e268  a10052b600           mov eax, dword ptr [0xb65200]
// 0080e26d  33c4                 xor eax, esp
// 0080e26f  50                   push eax
// 0080e270  8d84249c000000       lea eax, [esp + 0x9c]
// 0080e277  64a300000000         mov dword ptr fs:[0], eax
// 0080e27d  8be9                 mov ebp, ecx
// 0080e27f  896c2420             mov dword ptr [esp + 0x20], ebp
// 0080e283  33ff                 xor edi, edi
// 0080e285  397d50               cmp dword ptr [ebp + 0x50], edi
// 0080e288  0f84c9020000         je 0x80e557
// 0080e28e  e83d170200           call 0x82f9d0
// 0080e293  6a1f                 push 0x1f
// 0080e295  8bc8                 mov ecx, eax
// 0080e297  e8640e0200           call 0x82f100
// 0080e29c  8bc8                 mov ecx, eax
// 0080e29e  c1e810               shr eax, 0x10
// 0080e2a1  0fb6d0               movzx edx, al
// 0080e2a4  89542414             mov dword ptr [esp + 0x14], edx
// 0080e2a8  8bd1                 mov edx, ecx
// 0080e2aa  c1ea08               shr edx, 8
// 0080e2ad  db442414             fild dword ptr [esp + 0x14]
// 0080e2b1  0fb6c9               movzx ecx, cl
// 0080e2b4  dd0578329f00         fld qword ptr [0x9f3278]
// 0080e2ba  d97c2414             fnstcw word ptr [esp + 0x14]
// 0080e2be  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 0080e2c3  dcc9                 fmul st(1), st(0)
// 0080e2c5  d9c9                 fxch st(1)
// 0080e2c7  0d000c0000           or eax, 0xc00
// 0080e2cc  89442418             mov dword ptr [esp + 0x18], eax
// 0080e2d0  d96c2418             fldcw word ptr [esp + 0x18]
// 0080e2d4  db5c2418             fistp dword ptr [esp + 0x18]
// 0080e2d8  8a442418             mov al, byte ptr [esp + 0x18]
// 0080e2dc  0fb6d8               movzx ebx, al
// 0080e2df  0fb6c2               movzx eax, dl
// 0080e2e2  d96c2414             fldcw word ptr [esp + 0x14]
// 0080e2e6  89442418             mov dword ptr [esp + 0x18], eax
// 0080e2ea  c1e308               shl ebx, 8
// 0080e2ed  db442418             fild dword ptr [esp + 0x18]
// 0080e2f1  d97c2414             fnstcw word ptr [esp + 0x14]
// 0080e2f5  d8c9                 fmul st(1)
// 0080e2f7  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 0080e2fc  0d000c0000           or eax, 0xc00
// 0080e301  89442418             mov dword ptr [esp + 0x18], eax
// 0080e305  d96c2418             fldcw word ptr [esp + 0x18]
// 0080e309  db5c2418             fistp dword ptr [esp + 0x18]
// 0080e30d  0fb6542418           movzx edx, byte ptr [esp + 0x18]
// 0080e312  0fb6c2               movzx eax, dl
// 0080e315  d96c2414             fldcw word ptr [esp + 0x14]
// 0080e319  0bd8                 or ebx, eax
// 0080e31b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0080e31f  c1e308               shl ebx, 8
// 0080e322  8d4c2438             lea ecx, [esp + 0x38]
// 0080e326  db442418             fild dword ptr [esp + 0x18]
// 0080e32a  d97c2414             fnstcw word ptr [esp + 0x14]
// 0080e32e  dec9                 fmulp st(1)
// 0080e330  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 0080e335  0d000c0000           or eax, 0xc00
// 0080e33a  89442418             mov dword ptr [esp + 0x18], eax
// 0080e33e  d96c2418             fldcw word ptr [esp + 0x18]
// 0080e342  db5c2418             fistp dword ptr [esp + 0x18]
// 0080e346  0fb6542418           movzx edx, byte ptr [esp + 0x18]
// 0080e34b  0fb6c2               movzx eax, dl
// 0080e34e  d96c2414             fldcw word ptr [esp + 0x14]
// 0080e352  0bd8                 or ebx, eax
// 0080e354  e8d7c4ffff           call 0x80a830
// 0080e359  8bcd                 mov ecx, ebp
// 0080e35b  89bc24a4000000       mov dword ptr [esp + 0xa4], edi
// 0080e362  e8e9c7ffff           call 0x80ab50
// 0080e367  50                   push eax
// 0080e368  8d4c243c             lea ecx, [esp + 0x3c]
// 0080e36c  e84ff8ffff           call 0x80dbc0
// 0080e371  8d4c2438             lea ecx, [esp + 0x38]
// 0080e375  e876adffff           call 0x8090f0
// 0080e37a  85c0                 test eax, eax
// 0080e37c  0f85fb000000         jne 0x80e47d
// 0080e382  8d4c2424             lea ecx, [esp + 0x24]
// 0080e386  51                   push ecx
// 0080e387  8d4c243c             lea ecx, [esp + 0x3c]
// 0080e38b  e8e012d2ff           call 0x52f670
// 0080e390  50                   push eax
// 0080e391  ff15ecc99800         call dword ptr [0x98c9ec]
// 0080e397  85c0                 test eax, eax
// 0080e399  0f8497010000         je 0x80e536
// 0080e39f  8b542434             mov edx, dword ptr [esp + 0x34]
// 0080e3a3  52                   push edx
// 0080e3a4  e8bb5ffeff           call 0x7f4364
// 0080e3a9  50                   push eax
// 0080e3aa  57                   push edi
// 0080e3ab  8d4c247c             lea ecx, [esp + 0x7c]
// 0080e3af  e8ccd40300           call 0x84b880
// 0080e3b4  8b442430             mov eax, dword ptr [esp + 0x30]
// 0080e3b8  50                   push eax
// 0080e3b9  c68424a800000001     mov byte ptr [esp + 0xa8], 1
// 0080e3c1  e89e5ffeff           call 0x7f4364
// 0080e3c6  50                   push eax
// 0080e3c7  57                   push edi
// 0080e3c8  8d8c2490000000       lea ecx, [esp + 0x90]
// 0080e3cf  e8acd40300           call 0x84b880
// 0080e3d4  8b542434             mov edx, dword ptr [esp + 0x34]
// 0080e3d8  8d4c245c             lea ecx, [esp + 0x5c]
// 0080e3dc  51                   push ecx
// 0080e3dd  6a18                 push 0x18
// 0080e3df  52                   push edx
// 0080e3e0  ff155cb19800         call dword ptr [0x98b15c]
// 0080e3e6  397c2460             cmp dword ptr [esp + 0x60], edi
// 0080e3ea  7e46                 jle 0x80e432
// 0080e3ec  8b2d18b19800         mov ebp, dword ptr [0x98b118]
// 0080e3f2  8b442464             mov eax, dword ptr [esp + 0x64]
// 0080e3f6  33f6                 xor esi, esi
// 0080e3f8  85c0                 test eax, eax
// 0080e3fa  7e2b                 jle 0x80e427
// 0080e3fc  8d642400             lea esp, [esp]
// 0080e400  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0080e407  56                   push esi
// 0080e408  57                   push edi
// 0080e409  50                   push eax
// 0080e40a  ffd5                 call ebp
// 0080e40c  85c0                 test eax, eax
// 0080e40e  750e                 jne 0x80e41e
// 0080e410  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0080e414  53                   push ebx
// 0080e415  56                   push esi
// 0080e416  57                   push edi
// 0080e417  51                   push ecx
// 0080e418  ff1514b19800         call dword ptr [0x98b114]
// 0080e41e  8b442464             mov eax, dword ptr [esp + 0x64]
// 0080e422  46                   inc esi
// 0080e423  3bf0                 cmp esi, eax
// 0080e425  7cd9                 jl 0x80e400
// 0080e427  47                   inc edi
// 0080e428  3b7c2460             cmp edi, dword ptr [esp + 0x60]
// 0080e42c  7cc8                 jl 0x80e3f6
// 0080e42e  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0080e432  8d8c2488000000       lea ecx, [esp + 0x88]
// 0080e439  e852d50300           call 0x84b990
// 0080e43e  8d4c2474             lea ecx, [esp + 0x74]
// 0080e442  c68424a400000000     mov byte ptr [esp + 0xa4], 0
// 0080e44a  e841d50300           call 0x84b990
// 0080e44f  8d542424             lea edx, [esp + 0x24]
// 0080e453  52                   push edx
// 0080e454  ff1584ca9800         call dword ptr [0x98ca84]
// 0080e45a  50                   push eax
// 0080e45b  8d4c243c             lea ecx, [esp + 0x3c]
// 0080e45f  e8fce8ffff           call 0x80cd60
// 0080e464  8b442430             mov eax, dword ptr [esp + 0x30]
// 0080e468  8b353cb19800         mov esi, dword ptr [0x98b13c]
// 0080e46e  50                   push eax
// 0080e46f  ffd6                 call esi
// 0080e471  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0080e475  51                   push ecx
// 0080e476  ffd6                 call esi
// 0080e478  e9b9000000           jmp 0x80e536
// 0080e47d  8d4c2438             lea ecx, [esp + 0x38]
// 0080e481  e8baebffff           call 0x80d040
// 0080e486  85c0                 test eax, eax
// 0080e488  0f84a8000000         je 0x80e536
// 0080e48e  8d4c2438             lea ecx, [esp + 0x38]
// 0080e492  e8a9ebffff           call 0x80d040
// 0080e497  8d542418             lea edx, [esp + 0x18]
// 0080e49b  52                   push edx
// 0080e49c  8d4c243c             lea ecx, [esp + 0x3c]
// 0080e4a0  8bf0                 mov esi, eax
// 0080e4a2  e869acffff           call 0x809110
// 0080e4a7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0080e4ab  0faf442418           imul eax, dword ptr [esp + 0x18]
// 0080e4b0  3bc7                 cmp eax, edi
// 0080e4b2  0f867e000000         jbe 0x80e536
// 0080e4b8  0fb6cb               movzx ecx, bl
// 0080e4bb  894c2418             mov dword ptr [esp + 0x18], ecx
// 0080e4bf  668bcb               mov cx, bx
// 0080e4c2  66c1e908             shr cx, 8
// 0080e4c6  66894c2414           mov word ptr [esp + 0x14], cx
// 0080e4cb  c1eb10               shr ebx, 0x10
// 0080e4ce  8be8                 mov ebp, eax
// 0080e4d0  0fb67e03             movzx edi, byte ptr [esi + 3]
// 0080e4d4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080e4d8  0fafcf               imul ecx, edi
// 0080e4db  b881808080           mov eax, 0x80808081
// 0080e4e0  f7e9                 imul ecx
// 0080e4e2  03d1                 add edx, ecx
// 0080e4e4  0fb64c2414           movzx ecx, byte ptr [esp + 0x14]
// 0080e4e9  c1fa07               sar edx, 7
// 0080e4ec  0fafcf               imul ecx, edi
// 0080e4ef  8bc2                 mov eax, edx
// 0080e4f1  c1e81f               shr eax, 0x1f
// 0080e4f4  03c2                 add eax, edx
// 0080e4f6  8806                 mov byte ptr [esi], al
// 0080e4f8  b881808080           mov eax, 0x80808081
// 0080e4fd  f7e9                 imul ecx
// 0080e4ff  03d1                 add edx, ecx
// 0080e501  c1fa07               sar edx, 7
// 0080e504  8bca                 mov ecx, edx
// 0080e506  c1e91f               shr ecx, 0x1f
// 0080e509  03ca                 add ecx, edx
// 0080e50b  884e01               mov byte ptr [esi + 1], cl
// 0080e50e  0fb6cb               movzx ecx, bl
// 0080e511  0fafcf               imul ecx, edi
// 0080e514  b881808080           mov eax, 0x80808081
// 0080e519  f7e9                 imul ecx
// 0080e51b  03d1                 add edx, ecx
// 0080e51d  c1fa07               sar edx, 7
// 0080e520  8bc2                 mov eax, edx
// 0080e522  c1e81f               shr eax, 0x1f
// 0080e525  03c2                 add eax, edx
// 0080e527  884602               mov byte ptr [esi + 2], al
// 0080e52a  83c604               add esi, 4
// 0080e52d  83ed01               sub ebp, 1
// 0080e530  759e                 jne 0x80e4d0
// 0080e532  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0080e536  8d4c2438             lea ecx, [esp + 0x38]
// 0080e53a  51                   push ecx
// 0080e53b  8d4d78               lea ecx, [ebp + 0x78]
// 0080e53e  e87df6ffff           call 0x80dbc0
// 0080e543  8d4c2438             lea ecx, [esp + 0x38]
// 0080e547  c78424a4000000ffffffff mov dword ptr [esp + 0xa4], 0xffffffff
// 0080e552  e889e8ffff           call 0x80cde0
// 0080e557  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 0080e55e  64890d00000000       mov dword ptr fs:[0], ecx
// 0080e565  59                   pop ecx
// 0080e566  5f                   pop edi
// 0080e567  5e                   pop esi
// 0080e568  5d                   pop ebp
// 0080e569  5b                   pop ebx
// 0080e56a  81c494000000         add esp, 0x94
// 0080e570  c3                   ret 
// copied from an identical function in another client (function ?CreateShadowIcon@CXTPImageManagerIcon@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp