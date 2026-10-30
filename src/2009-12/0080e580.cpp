// roc 2009-12 0080e580  unit: IIHH::?$CMap  size: 1631 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080e580
//
// 0080e580  6aff                 push -1
// 0080e582  68809d9500           push 0x959d80
// 0080e587  64a100000000         mov eax, dword ptr fs:[0]
// 0080e58d  50                   push eax
// 0080e58e  81ec98000000         sub esp, 0x98
// 0080e594  53                   push ebx
// 0080e595  55                   push ebp
// 0080e596  56                   push esi
// 0080e597  57                   push edi
// 0080e598  a10052b600           mov eax, dword ptr [0xb65200]
// 0080e59d  33c4                 xor eax, esp
// 0080e59f  50                   push eax
// 0080e5a0  8d8424ac000000       lea eax, [esp + 0xac]
// 0080e5a7  64a300000000         mov dword ptr fs:[0], eax
// 0080e5ad  8bf1                 mov esi, ecx
// 0080e5af  8d8e2c010000         lea ecx, [esi + 0x12c]
// 0080e5b5  894c2430             mov dword ptr [esp + 0x30], ecx
// 0080e5b9  e8e2c2ffff           call 0x80a8a0
// 0080e5be  85c0                 test eax, eax
// 0080e5c0  0f84fd050000         je 0x80ebc3
// 0080e5c6  83bc24bc000000ff     cmp dword ptr [esp + 0xbc], -1
// 0080e5ce  8b9c24c0000000       mov ebx, dword ptr [esp + 0xc0]
// 0080e5d5  740d                 je 0x80e5e4
// 0080e5d7  c744242801000000     mov dword ptr [esp + 0x28], 1
// 0080e5df  83fbff               cmp ebx, -1
// 0080e5e2  7508                 jne 0x80e5ec
// 0080e5e4  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0080e5ec  8d4c2448             lea ecx, [esp + 0x48]
// 0080e5f0  e83bc2ffff           call 0x80a830
// 0080e5f5  83c630               add esi, 0x30
// 0080e5f8  56                   push esi
// 0080e5f9  c78424b800000000000000 mov dword ptr [esp + 0xb8], 0
// 0080e604  e8b7f5ffff           call 0x80dbc0
// 0080e609  8d4c2448             lea ecx, [esp + 0x48]
// 0080e60d  e8deaaffff           call 0x8090f0
// 0080e612  85c0                 test eax, eax
// 0080e614  0f85e5020000         jne 0x80e8ff
// 0080e61a  8d442434             lea eax, [esp + 0x34]
// 0080e61e  50                   push eax
// 0080e61f  e84c10d2ff           call 0x52f670
// 0080e624  50                   push eax
// 0080e625  ff15ecc99800         call dword ptr [0x98c9ec]
// 0080e62b  85c0                 test eax, eax
// 0080e62d  0f846e050000         je 0x80eba1
// 0080e633  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0080e637  51                   push ecx
// 0080e638  e8275dfeff           call 0x7f4364
// 0080e63d  50                   push eax
// 0080e63e  6a00                 push 0
// 0080e640  8d4c2474             lea ecx, [esp + 0x74]
// 0080e644  e837d20300           call 0x84b880
// 0080e649  8b542440             mov edx, dword ptr [esp + 0x40]
// 0080e64d  52                   push edx
// 0080e64e  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 0080e656  e8095dfeff           call 0x7f4364
// 0080e65b  50                   push eax
// 0080e65c  6a00                 push 0
// 0080e65e  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0080e665  e816d20300           call 0x84b880
// 0080e66a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0080e66e  8d842480000000       lea eax, [esp + 0x80]
// 0080e675  50                   push eax
// 0080e676  6a18                 push 0x18
// 0080e678  51                   push ecx
// 0080e679  ff155cb19800         call dword ptr [0x98b15c]
// 0080e67f  33ff                 xor edi, edi
// 0080e681  39bc2484000000       cmp dword ptr [esp + 0x84], edi
// 0080e688  0f8e26020000         jle 0x80e8b4
// 0080e68e  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 0080e695  33f6                 xor esi, esi
// 0080e697  85c0                 test eax, eax
// 0080e699  0f8e07020000         jle 0x80e8a6
// 0080e69f  90                   nop 
// 0080e6a0  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 0080e6a7  56                   push esi
// 0080e6a8  57                   push edi
// 0080e6a9  52                   push edx
// 0080e6aa  ff1518b19800         call dword ptr [0x98b118]
// 0080e6b0  56                   push esi
// 0080e6b1  8be8                 mov ebp, eax
// 0080e6b3  8b442474             mov eax, dword ptr [esp + 0x74]
// 0080e6b7  57                   push edi
// 0080e6b8  50                   push eax
// 0080e6b9  ff1518b19800         call dword ptr [0x98b118]
// 0080e6bf  85ed                 test ebp, ebp
// 0080e6c1  0f85cf010000         jne 0x80e896
// 0080e6c7  8bc8                 mov ecx, eax
// 0080e6c9  c1e908               shr ecx, 8
// 0080e6cc  0fb6d1               movzx edx, cl
// 0080e6cf  0fb6c8               movzx ecx, al
// 0080e6d2  c1e810               shr eax, 0x10
// 0080e6d5  396c2428             cmp dword ptr [esp + 0x28], ebp
// 0080e6d9  0f8430010000         je 0x80e80f
// 0080e6df  89542414             mov dword ptr [esp + 0x14], edx
// 0080e6e3  d97c241c             fnstcw word ptr [esp + 0x1c]
// 0080e6e7  db442414             fild dword ptr [esp + 0x14]
// 0080e6eb  0fb6d0               movzx edx, al
// 0080e6ee  894c2414             mov dword ptr [esp + 0x14], ecx
// 0080e6f2  8bc3                 mov eax, ebx
// 0080e6f4  c1e810               shr eax, 0x10
// 0080e6f7  dc0db8239c00         fmul qword ptr [0x9c23b8]
// 0080e6fd  0fb6c8               movzx ecx, al
// 0080e700  db442414             fild dword ptr [esp + 0x14]
// 0080e704  89542414             mov dword ptr [esp + 0x14], edx
// 0080e708  dc0d88309f00         fmul qword ptr [0x9f3088]
// 0080e70e  8b9424bc000000       mov edx, dword ptr [esp + 0xbc]
// 0080e715  8bc2                 mov eax, edx
// 0080e717  c1e810               shr eax, 0x10
// 0080e71a  dec1                 faddp st(1)
// 0080e71c  db442414             fild dword ptr [esp + 0x14]
// 0080e720  894c2414             mov dword ptr [esp + 0x14], ecx
// 0080e724  0fb6c8               movzx ecx, al
// 0080e727  dc0db0239c00         fmul qword ptr [0x9c23b0]
// 0080e72d  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 0080e732  dec1                 faddp st(1)
// 0080e734  0d000c0000           or eax, 0xc00
// 0080e739  dc35e0689a00         fdiv qword ptr [0x9a68e0]
// 0080e73f  d9e8                 fld1 
// 0080e741  d8e1                 fsub st(1)
// 0080e743  db442414             fild dword ptr [esp + 0x14]
// 0080e747  894c2414             mov dword ptr [esp + 0x14], ecx
// 0080e74b  d8c9                 fmul st(1)
// 0080e74d  db442414             fild dword ptr [esp + 0x14]
// 0080e751  89442414             mov dword ptr [esp + 0x14], eax
// 0080e755  d8cb                 fmul st(3)
// 0080e757  dec1                 faddp st(1)
// 0080e759  d96c2414             fldcw word ptr [esp + 0x14]
// 0080e75d  db5c2414             fistp dword ptr [esp + 0x14]
// 0080e761  0fb6442414           movzx eax, byte ptr [esp + 0x14]
// 0080e766  0fb6c8               movzx ecx, al
// 0080e769  d96c241c             fldcw word ptr [esp + 0x1c]
// 0080e76d  8bc3                 mov eax, ebx
// 0080e76f  c1e808               shr eax, 8
// 0080e772  0fb6c0               movzx eax, al
// 0080e775  89442414             mov dword ptr [esp + 0x14], eax
// 0080e779  db442414             fild dword ptr [esp + 0x14]
// 0080e77d  8bc2                 mov eax, edx
// 0080e77f  c1e808               shr eax, 8
// 0080e782  d97c241c             fnstcw word ptr [esp + 0x1c]
// 0080e786  0fb6c0               movzx eax, al
// 0080e789  d8c9                 fmul st(1)
// 0080e78b  89442414             mov dword ptr [esp + 0x14], eax
// 0080e78f  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 0080e794  db442414             fild dword ptr [esp + 0x14]
// 0080e798  0d000c0000           or eax, 0xc00
// 0080e79d  89442414             mov dword ptr [esp + 0x14], eax
// 0080e7a1  d8cb                 fmul st(3)
// 0080e7a3  c1e108               shl ecx, 8
// 0080e7a6  0fb6d2               movzx edx, dl
// 0080e7a9  dec1                 faddp st(1)
// 0080e7ab  d96c2414             fldcw word ptr [esp + 0x14]
// 0080e7af  db5c2414             fistp dword ptr [esp + 0x14]
// 0080e7b3  0fb6442414           movzx eax, byte ptr [esp + 0x14]
// 0080e7b8  0bc8                 or ecx, eax
// 0080e7ba  0fb6c3               movzx eax, bl
// 0080e7bd  d96c241c             fldcw word ptr [esp + 0x1c]
// 0080e7c1  89442414             mov dword ptr [esp + 0x14], eax
// 0080e7c5  c1e108               shl ecx, 8
// 0080e7c8  db442414             fild dword ptr [esp + 0x14]
// 0080e7cc  d97c241c             fnstcw word ptr [esp + 0x1c]
// 0080e7d0  89542414             mov dword ptr [esp + 0x14], edx
// 0080e7d4  dec9                 fmulp st(1)
// 0080e7d6  db442414             fild dword ptr [esp + 0x14]
// 0080e7da  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 0080e7df  0d000c0000           or eax, 0xc00
// 0080e7e4  89442414             mov dword ptr [esp + 0x14], eax
// 0080e7e8  deca                 fmulp st(2)
// 0080e7ea  dec1                 faddp st(1)
// 0080e7ec  d96c2414             fldcw word ptr [esp + 0x14]
// 0080e7f0  db5c2414             fistp dword ptr [esp + 0x14]
// 0080e7f4  0fb6442414           movzx eax, byte ptr [esp + 0x14]
// 0080e7f9  0fb6d0               movzx edx, al
// 0080e7fc  d96c241c             fldcw word ptr [esp + 0x1c]
// 0080e800  0bca                 or ecx, edx
// 0080e802  8b442470             mov eax, dword ptr [esp + 0x70]
// 0080e806  51                   push ecx
// 0080e807  56                   push esi
// 0080e808  57                   push edi
// 0080e809  50                   push eax
// 0080e80a  e981000000           jmp 0x80e890
// 0080e80f  89542414             mov dword ptr [esp + 0x14], edx
// 0080e813  db442414             fild dword ptr [esp + 0x14]
// 0080e817  894c2414             mov dword ptr [esp + 0x14], ecx
// 0080e81b  0fb6d0               movzx edx, al
// 0080e81e  dc0db8239c00         fmul qword ptr [0x9c23b8]
// 0080e824  db442414             fild dword ptr [esp + 0x14]
// 0080e828  89542414             mov dword ptr [esp + 0x14], edx
// 0080e82c  dc0d88309f00         fmul qword ptr [0x9f3088]
// 0080e832  dec1                 faddp st(1)
// 0080e834  db442414             fild dword ptr [esp + 0x14]
// 0080e838  dc0db0239c00         fmul qword ptr [0x9c23b0]
// 0080e83e  dec1                 faddp st(1)
// 0080e840  dc35e0689a00         fdiv qword ptr [0x9a68e0]
// 0080e846  dd05e855b600         fld qword ptr [0xb655e8]
// 0080e84c  e85f68feff           call 0x7f50b0
// 0080e851  dc0de0689a00         fmul qword ptr [0x9a68e0]
// 0080e857  d97c241c             fnstcw word ptr [esp + 0x1c]
// 0080e85b  8b542470             mov edx, dword ptr [esp + 0x70]
// 0080e85f  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 0080e864  0d000c0000           or eax, 0xc00
// 0080e869  89442414             mov dword ptr [esp + 0x14], eax
// 0080e86d  d96c2414             fldcw word ptr [esp + 0x14]
// 0080e871  db5c2414             fistp dword ptr [esp + 0x14]
// 0080e875  8a442414             mov al, byte ptr [esp + 0x14]
// 0080e879  0fb6c0               movzx eax, al
// 0080e87c  8bc8                 mov ecx, eax
// 0080e87e  d96c241c             fldcw word ptr [esp + 0x1c]
// 0080e882  c1e108               shl ecx, 8
// 0080e885  0bc8                 or ecx, eax
// 0080e887  c1e108               shl ecx, 8
// 0080e88a  0bc8                 or ecx, eax
// 0080e88c  51                   push ecx
// 0080e88d  56                   push esi
// 0080e88e  57                   push edi
// 0080e88f  52                   push edx
// 0080e890  ff1514b19800         call dword ptr [0x98b114]
// 0080e896  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 0080e89d  46                   inc esi
// 0080e89e  3bf0                 cmp esi, eax
// 0080e8a0  0f8cfafdffff         jl 0x80e6a0
// 0080e8a6  47                   inc edi
// 0080e8a7  3bbc2484000000       cmp edi, dword ptr [esp + 0x84]
// 0080e8ae  0f8ce1fdffff         jl 0x80e695
// 0080e8b4  8d8c2498000000       lea ecx, [esp + 0x98]
// 0080e8bb  e8d0d00300           call 0x84b990
// 0080e8c0  8d4c246c             lea ecx, [esp + 0x6c]
// 0080e8c4  c68424b400000000     mov byte ptr [esp + 0xb4], 0
// 0080e8cc  e8bfd00300           call 0x84b990
// 0080e8d1  8d442434             lea eax, [esp + 0x34]
// 0080e8d5  50                   push eax
// 0080e8d6  ff1584ca9800         call dword ptr [0x98ca84]
// 0080e8dc  50                   push eax
// 0080e8dd  8d4c244c             lea ecx, [esp + 0x4c]
// 0080e8e1  e87ae4ffff           call 0x80cd60
// 0080e8e6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0080e8ea  8b353cb19800         mov esi, dword ptr [0x98b13c]
// 0080e8f0  51                   push ecx
// 0080e8f1  ffd6                 call esi
// 0080e8f3  8b542444             mov edx, dword ptr [esp + 0x44]
// 0080e8f7  52                   push edx
// 0080e8f8  ffd6                 call esi
// 0080e8fa  e9a2020000           jmp 0x80eba1
// 0080e8ff  e83ce7ffff           call 0x80d040
// 0080e904  85c0                 test eax, eax
// 0080e906  0f8495020000         je 0x80eba1
// 0080e90c  8d4c2448             lea ecx, [esp + 0x48]
// 0080e910  e82be7ffff           call 0x80d040
// 0080e915  8bf8                 mov edi, eax
// 0080e917  8d442420             lea eax, [esp + 0x20]
// 0080e91b  50                   push eax
// 0080e91c  8d4c244c             lea ecx, [esp + 0x4c]
// 0080e920  e8eba7ffff           call 0x809110
// 0080e925  8b442424             mov eax, dword ptr [esp + 0x24]
// 0080e929  0faf442420           imul eax, dword ptr [esp + 0x20]
// 0080e92e  85c0                 test eax, eax
// 0080e930  0f866b020000         jbe 0x80eba1
// 0080e936  dd05b8239c00         fld qword ptr [0x9c23b8]
// 0080e93c  89442414             mov dword ptr [esp + 0x14], eax
// 0080e940  dd0588309f00         fld qword ptr [0x9f3088]
// 0080e946  dd05b0239c00         fld qword ptr [0x9c23b0]
// 0080e94c  dd05e0689a00         fld qword ptr [0x9a68e0]
// 0080e952  0fb67703             movzx esi, byte ptr [edi + 3]
// 0080e956  89742420             mov dword ptr [esp + 0x20], esi
// 0080e95a  85f6                 test esi, esi
// 0080e95c  0f8429020000         je 0x80eb8b
// 0080e962  0fb607               movzx eax, byte ptr [edi]
// 0080e965  69c0ff000000         imul eax, eax, 0xff
// 0080e96b  99                   cdq 
// 0080e96c  f7fe                 idiv esi
// 0080e96e  8944242c             mov dword ptr [esp + 0x2c], eax
// 0080e972  0fb64701             movzx eax, byte ptr [edi + 1]
// 0080e976  69c0ff000000         imul eax, eax, 0xff
// 0080e97c  99                   cdq 
// 0080e97d  f7fe                 idiv esi
// 0080e97f  8944241c             mov dword ptr [esp + 0x1c], eax
// 0080e983  0fb64702             movzx eax, byte ptr [edi + 2]
// 0080e987  db44241c             fild dword ptr [esp + 0x1c]
// 0080e98b  69c0ff000000         imul eax, eax, 0xff
// 0080e991  99                   cdq 
// 0080e992  f7fe                 idiv esi
// 0080e994  837c242800           cmp dword ptr [esp + 0x28], 0
// 0080e999  89442418             mov dword ptr [esp + 0x18], eax
// 0080e99d  0f84fe000000         je 0x80eaa1
// 0080e9a3  d8cc                 fmul st(4)
// 0080e9a5  8bcb                 mov ecx, ebx
// 0080e9a7  db44242c             fild dword ptr [esp + 0x2c]
// 0080e9ab  c1e910               shr ecx, 0x10
// 0080e9ae  0fb6d1               movzx edx, cl
// 0080e9b1  d97c241c             fnstcw word ptr [esp + 0x1c]
// 0080e9b5  d8cb                 fmul st(3)
// 0080e9b7  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 0080e9be  8bc1                 mov eax, ecx
// 0080e9c0  c1e810               shr eax, 0x10
// 0080e9c3  dec1                 faddp st(1)
// 0080e9c5  db442418             fild dword ptr [esp + 0x18]
// 0080e9c9  89542418             mov dword ptr [esp + 0x18], edx
// 0080e9cd  0fb6d0               movzx edx, al
// 0080e9d0  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 0080e9d5  d8cc                 fmul st(4)
// 0080e9d7  0d000c0000           or eax, 0xc00
// 0080e9dc  dec1                 faddp st(1)
// 0080e9de  d8f1                 fdiv st(1)
// 0080e9e0  d9e8                 fld1 
// 0080e9e2  d8e1                 fsub st(1)
// 0080e9e4  db442418             fild dword ptr [esp + 0x18]
// 0080e9e8  89542418             mov dword ptr [esp + 0x18], edx
// 0080e9ec  d8c9                 fmul st(1)
// 0080e9ee  db442418             fild dword ptr [esp + 0x18]
// 0080e9f2  89442418             mov dword ptr [esp + 0x18], eax
// 0080e9f6  d8cb                 fmul st(3)
// 0080e9f8  dec1                 faddp st(1)
// 0080e9fa  d96c2418             fldcw word ptr [esp + 0x18]
// 0080e9fe  db5c2418             fistp dword ptr [esp + 0x18]
// 0080ea02  0fb6442418           movzx eax, byte ptr [esp + 0x18]
// 0080ea07  0fb6d0               movzx edx, al
// 0080ea0a  d96c241c             fldcw word ptr [esp + 0x1c]
// 0080ea0e  8bc3                 mov eax, ebx
// 0080ea10  c1e808               shr eax, 8
// 0080ea13  0fb6c0               movzx eax, al
// 0080ea16  89442418             mov dword ptr [esp + 0x18], eax
// 0080ea1a  db442418             fild dword ptr [esp + 0x18]
// 0080ea1e  8bc1                 mov eax, ecx
// 0080ea20  c1e808               shr eax, 8
// 0080ea23  d97c241c             fnstcw word ptr [esp + 0x1c]
// 0080ea27  0fb6c0               movzx eax, al
// 0080ea2a  d8c9                 fmul st(1)
// 0080ea2c  89442418             mov dword ptr [esp + 0x18], eax
// 0080ea30  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 0080ea35  db442418             fild dword ptr [esp + 0x18]
// 0080ea39  0d000c0000           or eax, 0xc00
// 0080ea3e  89442418             mov dword ptr [esp + 0x18], eax
// 0080ea42  d8cb                 fmul st(3)
// 0080ea44  0fb6c9               movzx ecx, cl
// 0080ea47  dec1                 faddp st(1)
// 0080ea49  d96c2418             fldcw word ptr [esp + 0x18]
// 0080ea4d  db5c2418             fistp dword ptr [esp + 0x18]
// 0080ea51  0fb6442418           movzx eax, byte ptr [esp + 0x18]
// 0080ea56  0fb6e8               movzx ebp, al
// 0080ea59  d96c241c             fldcw word ptr [esp + 0x1c]
// 0080ea5d  0fb6c3               movzx eax, bl
// 0080ea60  89442418             mov dword ptr [esp + 0x18], eax
// 0080ea64  db442418             fild dword ptr [esp + 0x18]
// 0080ea68  d97c241c             fnstcw word ptr [esp + 0x1c]
// 0080ea6c  894c2418             mov dword ptr [esp + 0x18], ecx
// 0080ea70  dec9                 fmulp st(1)
// 0080ea72  db442418             fild dword ptr [esp + 0x18]
// 0080ea76  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 0080ea7b  0d000c0000           or eax, 0xc00
// 0080ea80  89442418             mov dword ptr [esp + 0x18], eax
// 0080ea84  deca                 fmulp st(2)
// 0080ea86  dec1                 faddp st(1)
// 0080ea88  d96c2418             fldcw word ptr [esp + 0x18]
// 0080ea8c  db5c2418             fistp dword ptr [esp + 0x18]
// 0080ea90  0fb6442418           movzx eax, byte ptr [esp + 0x18]
// 0080ea95  0fb6c8               movzx ecx, al
// 0080ea98  d96c241c             fldcw word ptr [esp + 0x1c]
// 0080ea9c  e997000000           jmp 0x80eb38
// 0080eaa1  decc                 fmulp st(4)
// 0080eaa3  db44242c             fild dword ptr [esp + 0x2c]
// 0080eaa7  deca                 fmulp st(2)
// 0080eaa9  d9cb                 fxch st(3)
// 0080eaab  dec1                 faddp st(1)
// 0080eaad  db442418             fild dword ptr [esp + 0x18]
// 0080eab1  deca                 fmulp st(2)
// 0080eab3  dec1                 faddp st(1)
// 0080eab5  def1                 fdivrp st(1)
// 0080eab7  dd05e855b600         fld qword ptr [0xb655e8]
// 0080eabd  e8ee65feff           call 0x7f50b0
// 0080eac2  dd05e0689a00         fld qword ptr [0x9a68e0]
// 0080eac8  d97c241c             fnstcw word ptr [esp + 0x1c]
// 0080eacc  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 0080ead1  dcc9                 fmul st(1), st(0)
// 0080ead3  0d000c0000           or eax, 0xc00
// 0080ead8  d9c9                 fxch st(1)
// 0080eada  89442418             mov dword ptr [esp + 0x18], eax
// 0080eade  d96c2418             fldcw word ptr [esp + 0x18]
// 0080eae2  db5c2418             fistp dword ptr [esp + 0x18]
// 0080eae6  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 0080eaea  0fb6c9               movzx ecx, cl
// 0080eaed  8be9                 mov ebp, ecx
// 0080eaef  d96c241c             fldcw word ptr [esp + 0x1c]
// 0080eaf3  8bd1                 mov edx, ecx
// 0080eaf5  db442420             fild dword ptr [esp + 0x20]
// 0080eaf9  d97c241c             fnstcw word ptr [esp + 0x1c]
// 0080eafd  dc35e055b600         fdiv qword ptr [0xb655e0]
// 0080eb03  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 0080eb08  0d000c0000           or eax, 0xc00
// 0080eb0d  89442420             mov dword ptr [esp + 0x20], eax
// 0080eb11  d96c2420             fldcw word ptr [esp + 0x20]
// 0080eb15  db5c2420             fistp dword ptr [esp + 0x20]
// 0080eb19  8a442420             mov al, byte ptr [esp + 0x20]
// 0080eb1d  0fb6f0               movzx esi, al
// 0080eb20  d96c241c             fldcw word ptr [esp + 0x1c]
// 0080eb24  dd0588309f00         fld qword ptr [0x9f3088]
// 0080eb2a  dd05b0239c00         fld qword ptr [0x9c23b0]
// 0080eb30  dd05b8239c00         fld qword ptr [0x9c23b8]
// 0080eb36  d9cb                 fxch st(3)
// 0080eb38  0fafd6               imul edx, esi
// 0080eb3b  0fafee               imul ebp, esi
// 0080eb3e  0fafce               imul ecx, esi
// 0080eb41  8bda                 mov ebx, edx
// 0080eb43  b881808080           mov eax, 0x80808081
// 0080eb48  f7eb                 imul ebx
// 0080eb4a  03d3                 add edx, ebx
// 0080eb4c  c1fa07               sar edx, 7
// 0080eb4f  8bc2                 mov eax, edx
// 0080eb51  c1e81f               shr eax, 0x1f
// 0080eb54  03c2                 add eax, edx
// 0080eb56  8807                 mov byte ptr [edi], al
// 0080eb58  b881808080           mov eax, 0x80808081
// 0080eb5d  f7ed                 imul ebp
// 0080eb5f  03d5                 add edx, ebp
// 0080eb61  c1fa07               sar edx, 7
// 0080eb64  8bc2                 mov eax, edx
// 0080eb66  8b9c24c0000000       mov ebx, dword ptr [esp + 0xc0]
// 0080eb6d  c1e81f               shr eax, 0x1f
// 0080eb70  03c2                 add eax, edx
// 0080eb72  884701               mov byte ptr [edi + 1], al
// 0080eb75  b881808080           mov eax, 0x80808081
// 0080eb7a  f7e9                 imul ecx
// 0080eb7c  03d1                 add edx, ecx
// 0080eb7e  c1fa07               sar edx, 7
// 0080eb81  8bca                 mov ecx, edx
// 0080eb83  c1e91f               shr ecx, 0x1f
// 0080eb86  03ca                 add ecx, edx
// 0080eb88  884f02               mov byte ptr [edi + 2], cl
// 0080eb8b  83c704               add edi, 4
// 0080eb8e  836c241401           sub dword ptr [esp + 0x14], 1
// 0080eb93  0f85b9fdffff         jne 0x80e952
// 0080eb99  ddd8                 fstp st(0)
// 0080eb9b  ddda                 fstp st(2)
// 0080eb9d  ddd8                 fstp st(0)
// 0080eb9f  ddd8                 fstp st(0)
// 0080eba1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0080eba5  8d542448             lea edx, [esp + 0x48]
// 0080eba9  52                   push edx
// 0080ebaa  e811f0ffff           call 0x80dbc0
// 0080ebaf  8d4c2448             lea ecx, [esp + 0x48]
// 0080ebb3  c78424b4000000ffffffff mov dword ptr [esp + 0xb4], 0xffffffff
// 0080ebbe  e81de2ffff           call 0x80cde0
// 0080ebc3  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 0080ebca  64890d00000000       mov dword ptr fs:[0], ecx
// 0080ebd1  59                   pop ecx
// 0080ebd2  5f                   pop edi
// 0080ebd3  5e                   pop esi
// 0080ebd4  5d                   pop ebp
// 0080ebd5  5b                   pop ebx
// 0080ebd6  81c4a4000000         add esp, 0xa4
// 0080ebdc  c20800               ret 8
// copied from an identical function in another client (function ?CreateDisabledIcon@CXTPImageManagerIcon@@QAEXKK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp