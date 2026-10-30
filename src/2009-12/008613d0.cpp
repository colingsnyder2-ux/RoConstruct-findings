// roc 2009-12 008613d0  unit: CXTPToolTipContext::CHTMLToolTip  size: 1417 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008613d0
//
// 008613d0  6aff                 push -1
// 008613d2  6815e99500           push 0x95e915
// 008613d7  64a100000000         mov eax, dword ptr fs:[0]
// 008613dd  50                   push eax
// 008613de  81ec9c000000         sub esp, 0x9c
// 008613e4  a10052b600           mov eax, dword ptr [0xb65200]
// 008613e9  33c4                 xor eax, esp
// 008613eb  89842498000000       mov dword ptr [esp + 0x98], eax
// 008613f2  53                   push ebx
// 008613f3  55                   push ebp
// 008613f4  56                   push esi
// 008613f5  57                   push edi
// 008613f6  a10052b600           mov eax, dword ptr [0xb65200]
// 008613fb  33c4                 xor eax, esp
// 008613fd  50                   push eax
// 008613fe  8d8424b0000000       lea eax, [esp + 0xb0]
// 00861405  64a300000000         mov dword ptr fs:[0], eax
// 0086140b  8b8424c4000000       mov eax, dword ptr [esp + 0xc4]
// 00861412  8bbc24c0000000       mov edi, dword ptr [esp + 0xc0]
// 00861419  8be9                 mov ebp, ecx
// 0086141b  8d8d38010000         lea ecx, [ebp + 0x138]
// 00861421  896c245c             mov dword ptr [esp + 0x5c], ebp
// 00861425  89442454             mov dword ptr [esp + 0x54], eax
// 00861429  e8f029f9ff           call 0x7f3e1e
// 0086142e  8d9d40010000         lea ebx, [ebp + 0x140]
// 00861434  33f6                 xor esi, esi
// 00861436  3bde                 cmp ebx, esi
// 00861438  7409                 je 0x861443
// 0086143a  397320               cmp dword ptr [ebx + 0x20], esi
// 0086143d  0f8562020000         jne 0x8616a5
// 00861443  56                   push esi
// 00861444  56                   push esi
// 00861445  56                   push esi
// 00861446  6800e90000           push 0xe900
// 0086144b  55                   push ebp
// 0086144c  8d4c2474             lea ecx, [esp + 0x74]
// 00861450  51                   push ecx
// 00861451  6800000050           push 0x50000000
// 00861456  b8c8000000           mov eax, 0xc8
// 0086145b  56                   push esi
// 0086145c  68c0169f00           push 0x9f16c0
// 00861461  8bcb                 mov ecx, ebx
// 00861463  89b42484000000       mov dword ptr [esp + 0x84], esi
// 0086146a  89b42488000000       mov dword ptr [esp + 0x88], esi
// 00861471  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 00861478  89842490000000       mov dword ptr [esp + 0x90], eax
// 0086147f  e8d4570c00           call 0x926c58
// 00861484  85c0                 test eax, eax
// 00861486  750a                 jne 0x861492
// 00861488  8937                 mov dword ptr [edi], esi
// 0086148a  897704               mov dword ptr [edi + 4], esi
// 0086148d  e92e030000           jmp 0x8617c0
// 00861492  8bcb                 mov ecx, ebx
// 00861494  e8b9570c00           call 0x926c52
// 00861499  8b10                 mov edx, dword ptr [eax]
// 0086149b  8db594010000         lea esi, [ebp + 0x194]
// 008614a1  56                   push esi
// 008614a2  68b0169f00           push 0x9f16b0
// 008614a7  50                   push eax
// 008614a8  8b02                 mov eax, dword ptr [edx]
// 008614aa  ffd0                 call eax
// 008614ac  85c0                 test eax, eax
// 008614ae  0f8c38030000         jl 0x8617ec
// 008614b4  8b06                 mov eax, dword ptr [esi]
// 008614b6  85c0                 test eax, eax
// 008614b8  0f842e030000         je 0x8617ec
// 008614be  8d542414             lea edx, [esp + 0x14]
// 008614c2  52                   push edx
// 008614c3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008614cb  8b08                 mov ecx, dword ptr [eax]
// 008614cd  68c04ba200           push 0xa24bc0
// 008614d2  50                   push eax
// 008614d3  8b01                 mov eax, dword ptr [ecx]
// 008614d5  ffd0                 call eax
// 008614d7  8b442414             mov eax, dword ptr [esp + 0x14]
// 008614db  85c0                 test eax, eax
// 008614dd  742f                 je 0x86150e
// 008614df  8b00                 mov eax, dword ptr [eax]
// 008614e1  83c00c               add eax, 0xc
// 008614e4  68b04ba200           push 0xa24bb0
// 008614e9  8bcd                 mov ecx, ebp
// 008614eb  8944241c             mov dword ptr [esp + 0x1c], eax
// 008614ef  e8c64f0c00           call 0x9264ba
// 008614f4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008614f8  8b542418             mov edx, dword ptr [esp + 0x18]
// 008614fc  50                   push eax
// 008614fd  8b02                 mov eax, dword ptr [edx]
// 008614ff  51                   push ecx
// 00861500  ffd0                 call eax
// 00861502  8b442414             mov eax, dword ptr [esp + 0x14]
// 00861506  8b08                 mov ecx, dword ptr [eax]
// 00861508  8b5108               mov edx, dword ptr [ecx + 8]
// 0086150b  50                   push eax
// 0086150c  ffd2                 call edx
// 0086150e  68ccb99f00           push 0x9fb9cc
// 00861513  8d4c2440             lea ecx, [esp + 0x40]
// 00861517  ff15b8de9800         call dword ptr [0x98deb8]
// 0086151d  8b456c               mov eax, dword ptr [ebp + 0x6c]
// 00861520  8b909c000000         mov edx, dword ptr [eax + 0x9c]
// 00861526  8d4c2470             lea ecx, [esp + 0x70]
// 0086152a  51                   push ecx
// 0086152b  0598000000           add eax, 0x98
// 00861530  6a3c                 push 0x3c
// 00861532  52                   push edx
// 00861533  c78424c400000000000000 mov dword ptr [esp + 0xc4], 0
// 0086153e  c74424240b000000     mov dword ptr [esp + 0x24], 0xb
// 00861546  ff155cb19800         call dword ptr [0x98b15c]
// 0086154c  85c0                 test eax, eax
// 0086154e  7420                 je 0x861570
// 00861550  8d84248c000000       lea eax, [esp + 0x8c]
// 00861557  50                   push eax
// 00861558  8d4c2440             lea ecx, [esp + 0x40]
// 0086155c  ff155cde9800         call dword ptr [0x98de5c]
// 00861562  8b442470             mov eax, dword ptr [esp + 0x70]
// 00861566  85c0                 test eax, eax
// 00861568  7d02                 jge 0x86156c
// 0086156a  f7d8                 neg eax
// 0086156c  89442418             mov dword ptr [esp + 0x18], eax
// 00861570  8d4c2424             lea ecx, [esp + 0x24]
// 00861574  ff1574de9800         call dword ptr [0x98de74]
// 0086157a  8b4d6c               mov ecx, dword ptr [ebp + 0x6c]
// 0086157d  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 00861585  e836ecffff           call 0x8601c0
// 0086158a  8bc8                 mov ecx, eax
// 0086158c  c1e910               shr ecx, 0x10
// 0086158f  0fb6d1               movzx edx, cl
// 00861592  52                   push edx
// 00861593  8bc8                 mov ecx, eax
// 00861595  c1e908               shr ecx, 8
// 00861598  0fb6d1               movzx edx, cl
// 0086159b  52                   push edx
// 0086159c  0fb6c0               movzx eax, al
// 0086159f  50                   push eax
// 008615a0  8d4c2430             lea ecx, [esp + 0x30]
// 008615a4  6894df9f00           push 0x9fdf94
// 008615a9  51                   push ecx
// 008615aa  ff157cde9800         call dword ptr [0x98de7c]
// 008615b0  83c414               add esp, 0x14
// 008615b3  8d4c2420             lea ecx, [esp + 0x20]
// 008615b7  ff1574de9800         call dword ptr [0x98de74]
// 008615bd  8d4c2424             lea ecx, [esp + 0x24]
// 008615c1  c68424b800000002     mov byte ptr [esp + 0xb8], 2
// 008615c9  ff1580de9800         call dword ptr [0x98de80]
// 008615cf  8b542418             mov edx, dword ptr [esp + 0x18]
// 008615d3  50                   push eax
// 008615d4  52                   push edx
// 008615d5  8d4c2444             lea ecx, [esp + 0x44]
// 008615d9  ff1580de9800         call dword ptr [0x98de80]
// 008615df  50                   push eax
// 008615e0  8b442424             mov eax, dword ptr [esp + 0x24]
// 008615e4  50                   push eax
// 008615e5  8d4c244c             lea ecx, [esp + 0x4c]
// 008615e9  ff1580de9800         call dword ptr [0x98de80]
// 008615ef  50                   push eax
// 008615f0  8d4c2434             lea ecx, [esp + 0x34]
// 008615f4  68d8de9f00           push 0x9fded8
// 008615f9  51                   push ecx
// 008615fa  ff157cde9800         call dword ptr [0x98de7c]
// 00861600  83c41c               add esp, 0x1c
// 00861603  8d542440             lea edx, [esp + 0x40]
// 00861607  52                   push edx
// 00861608  e8db500c00           call 0x9266e8
// 0086160d  8d4c2420             lea ecx, [esp + 0x20]
// 00861611  c68424b800000003     mov byte ptr [esp + 0xb8], 3
// 00861619  ff156cd69800         call dword ptr [0x98d66c]
// 0086161f  8b0e                 mov ecx, dword ptr [esi]
// 00861621  8d542440             lea edx, [esp + 0x40]
// 00861625  52                   push edx
// 00861626  52                   push edx
// 00861627  52                   push edx
// 00861628  89442424             mov dword ptr [esp + 0x24], eax
// 0086162c  8b01                 mov eax, dword ptr [ecx]
// 0086162e  8b402c               mov eax, dword ptr [eax + 0x2c]
// 00861631  52                   push edx
// 00861632  8b542428             mov edx, dword ptr [esp + 0x28]
// 00861636  52                   push edx
// 00861637  51                   push ecx
// 00861638  ffd0                 call eax
// 0086163a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0086163e  51                   push ecx
// 0086163f  ff1590ba9800         call dword ptr [0x98ba90]
// 00861645  e8d424f9ff           call 0x7f3b1e
// 0086164a  8b4004               mov eax, dword ptr [eax + 4]
// 0086164d  8b10                 mov edx, dword ptr [eax]
// 0086164f  8bc8                 mov ecx, eax
// 00861651  8b4264               mov eax, dword ptr [edx + 0x64]
// 00861654  ffd0                 call eax
// 00861656  8b06                 mov eax, dword ptr [esi]
// 00861658  8b08                 mov ecx, dword ptr [eax]
// 0086165a  8d542458             lea edx, [esp + 0x58]
// 0086165e  52                   push edx
// 0086165f  50                   push eax
// 00861660  8b81e0000000         mov eax, dword ptr [ecx + 0xe0]
// 00861666  ffd0                 call eax
// 00861668  837c245804           cmp dword ptr [esp + 0x58], 4
// 0086166d  75d6                 jne 0x861645
// 0086166f  8d4c2440             lea ecx, [esp + 0x40]
// 00861673  51                   push ecx
// 00861674  ff1534ba9800         call dword ptr [0x98ba34]
// 0086167a  8d4c2420             lea ecx, [esp + 0x20]
// 0086167e  ff15c0de9800         call dword ptr [0x98dec0]
// 00861684  8d4c2424             lea ecx, [esp + 0x24]
// 00861688  ff15c0de9800         call dword ptr [0x98dec0]
// 0086168e  8d4c243c             lea ecx, [esp + 0x3c]
// 00861692  c78424b8000000ffffffff mov dword ptr [esp + 0xb8], 0xffffffff
// 0086169d  ff15c0de9800         call dword ptr [0x98dec0]
// 008616a3  33f6                 xor esi, esi
// 008616a5  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008616a9  51                   push ecx
// 008616aa  8d542420             lea edx, [esp + 0x20]
// 008616ae  52                   push edx
// 008616af  8bcd                 mov ecx, ebp
// 008616b1  e86ae6ffff           call 0x85fd20
// 008616b6  8d4c241c             lea ecx, [esp + 0x1c]
// 008616ba  c78424b800000004000000 mov dword ptr [esp + 0xb8], 4
// 008616c5  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008616cb  84c0                 test al, al
// 008616cd  0f85de000000         jne 0x8617b1
// 008616d3  8b8594010000         mov eax, dword ptr [ebp + 0x194]
// 008616d9  8d542428             lea edx, [esp + 0x28]
// 008616dd  89742428             mov dword ptr [esp + 0x28], esi
// 008616e1  8b08                 mov ecx, dword ptr [eax]
// 008616e3  52                   push edx
// 008616e4  50                   push eax
// 008616e5  8b4148               mov eax, dword ptr [ecx + 0x48]
// 008616e8  ffd0                 call eax
// 008616ea  8b442428             mov eax, dword ptr [esp + 0x28]
// 008616ee  3bc6                 cmp eax, esi
// 008616f0  0f84bb000000         je 0x8617b1
// 008616f6  8d542434             lea edx, [esp + 0x34]
// 008616fa  52                   push edx
// 008616fb  89742438             mov dword ptr [esp + 0x38], esi
// 008616ff  8b08                 mov ecx, dword ptr [eax]
// 00861701  68e04ba200           push 0xa24be0
// 00861706  50                   push eax
// 00861707  8b01                 mov eax, dword ptr [ecx]
// 00861709  ffd0                 call eax
// 0086170b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0086170f  3bc6                 cmp eax, esi
// 00861711  0f848e000000         je 0x8617a5
// 00861717  8d54242c             lea edx, [esp + 0x2c]
// 0086171b  8974242c             mov dword ptr [esp + 0x2c], esi
// 0086171f  8b08                 mov ecx, dword ptr [eax]
// 00861721  52                   push edx
// 00861722  50                   push eax
// 00861723  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00861726  ffd0                 call eax
// 00861728  85c0                 test eax, eax
// 0086172a  7c6d                 jl 0x861799
// 0086172c  3974242c             cmp dword ptr [esp + 0x2c], esi
// 00861730  7467                 je 0x861799
// 00861732  8d4c241c             lea ecx, [esp + 0x1c]
// 00861736  ff156cd69800         call dword ptr [0x98d66c]
// 0086173c  8bf0                 mov esi, eax
// 0086173e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00861742  8b08                 mov ecx, dword ptr [eax]
// 00861744  8b91e4000000         mov edx, dword ptr [ecx + 0xe4]
// 0086174a  56                   push esi
// 0086174b  50                   push eax
// 0086174c  ffd2                 call edx
// 0086174e  56                   push esi
// 0086174f  ff1590ba9800         call dword ptr [0x98ba90]
// 00861755  6a01                 push 1
// 00861757  68c8000000           push 0xc8
// 0086175c  688a020000           push 0x28a
// 00861761  33f6                 xor esi, esi
// 00861763  56                   push esi
// 00861764  56                   push esi
// 00861765  8bcb                 mov ecx, ebx
// 00861767  e8c624f9ff           call 0x7f3c32
// 0086176c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00861770  8d542430             lea edx, [esp + 0x30]
// 00861774  52                   push edx
// 00861775  89742434             mov dword ptr [esp + 0x34], esi
// 00861779  8b08                 mov ecx, dword ptr [eax]
// 0086177b  68d04ba200           push 0xa24bd0
// 00861780  50                   push eax
// 00861781  8b01                 mov eax, dword ptr [ecx]
// 00861783  ffd0                 call eax
// 00861785  8b442430             mov eax, dword ptr [esp + 0x30]
// 00861789  3bc6                 cmp eax, esi
// 0086178b  757d                 jne 0x86180a
// 0086178d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00861791  8b08                 mov ecx, dword ptr [eax]
// 00861793  8b5108               mov edx, dword ptr [ecx + 8]
// 00861796  50                   push eax
// 00861797  ffd2                 call edx
// 00861799  8b442434             mov eax, dword ptr [esp + 0x34]
// 0086179d  8b08                 mov ecx, dword ptr [eax]
// 0086179f  8b5108               mov edx, dword ptr [ecx + 8]
// 008617a2  50                   push eax
// 008617a3  ffd2                 call edx
// 008617a5  8b442428             mov eax, dword ptr [esp + 0x28]
// 008617a9  8b08                 mov ecx, dword ptr [eax]
// 008617ab  8b5108               mov edx, dword ptr [ecx + 8]
// 008617ae  50                   push eax
// 008617af  ffd2                 call edx
// 008617b1  8937                 mov dword ptr [edi], esi
// 008617b3  8d4c241c             lea ecx, [esp + 0x1c]
// 008617b7  897704               mov dword ptr [edi + 4], esi
// 008617ba  ff15c0de9800         call dword ptr [0x98dec0]
// 008617c0  8bc7                 mov eax, edi
// 008617c2  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 008617c9  64890d00000000       mov dword ptr fs:[0], ecx
// 008617d0  59                   pop ecx
// 008617d1  5f                   pop edi
// 008617d2  5e                   pop esi
// 008617d3  5d                   pop ebp
// 008617d4  5b                   pop ebx
// 008617d5  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 008617dc  33cc                 xor ecx, esp
// 008617de  e8b73bf9ff           call 0x7f539a
// 008617e3  81c4a8000000         add esp, 0xa8
// 008617e9  c20800               ret 8
// 008617ec  8b13                 mov edx, dword ptr [ebx]
// 008617ee  8b4268               mov eax, dword ptr [edx + 0x68]
// 008617f1  8bcb                 mov ecx, ebx
// 008617f3  c70600000000         mov dword ptr [esi], 0
// 008617f9  ffd0                 call eax
// 008617fb  c70700000000         mov dword ptr [edi], 0
// 00861801  c7470400000000       mov dword ptr [edi + 4], 0
// 00861808  ebb6                 jmp 0x8617c0
// 0086180a  8b08                 mov ecx, dword ptr [eax]
// 0086180c  8d542438             lea edx, [esp + 0x38]
// 00861810  52                   push edx
// 00861811  50                   push eax
// 00861812  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00861815  ffd0                 call eax
// 00861817  8b4d6c               mov ecx, dword ptr [ebp + 0x6c]
// 0086181a  e8718fffff           call 0x85a790
// 0086181f  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00861823  8be8                 mov ebp, eax
// 00861825  8d542d00             lea edx, [ebp + ebp]
// 00861829  894c2414             mov dword ptr [esp + 0x14], ecx
// 0086182d  89742420             mov dword ptr [esp + 0x20], esi
// 00861831  89542424             mov dword ptr [esp + 0x24], edx
// 00861835  8b542420             mov edx, dword ptr [esp + 0x20]
// 00861839  8b442424             mov eax, dword ptr [esp + 0x24]
// 0086183d  03c2                 add eax, edx
// 0086183f  99                   cdq 
// 00861840  6a01                 push 1
// 00861842  2bc2                 sub eax, edx
// 00861844  51                   push ecx
// 00861845  8bf0                 mov esi, eax
// 00861847  d1fe                 sar esi, 1
// 00861849  56                   push esi
// 0086184a  6a00                 push 0
// 0086184c  6a00                 push 0
// 0086184e  8bcb                 mov ecx, ebx
// 00861850  e8dd23f9ff           call 0x7f3c32
// 00861855  8b442430             mov eax, dword ptr [esp + 0x30]
// 00861859  8b08                 mov ecx, dword ptr [eax]
// 0086185b  8d542438             lea edx, [esp + 0x38]
// 0086185f  52                   push edx
// 00861860  50                   push eax
// 00861861  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00861864  ffd0                 call eax
// 00861866  8b442430             mov eax, dword ptr [esp + 0x30]
// 0086186a  8b08                 mov ecx, dword ptr [eax]
// 0086186c  8d542450             lea edx, [esp + 0x50]
// 00861870  52                   push edx
// 00861871  50                   push eax
// 00861872  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00861875  ffd0                 call eax
// 00861877  8b442450             mov eax, dword ptr [esp + 0x50]
// 0086187b  3bc6                 cmp eax, esi
// 0086187d  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00861881  0f8ea9000000         jle 0x861930
// 00861887  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0086188b  0f8fa5000000         jg 0x861936
// 00861891  8be8                 mov ebp, eax
// 00861893  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00861897  6a01                 push 1
// 00861899  51                   push ecx
// 0086189a  55                   push ebp
// 0086189b  6a00                 push 0
// 0086189d  6a00                 push 0
// 0086189f  8bcb                 mov ecx, ebx
// 008618a1  e88c23f9ff           call 0x7f3c32
// 008618a6  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008618aa  8b426c               mov eax, dword ptr [edx + 0x6c]
// 008618ad  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008618b0  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008618b3  8b7044               mov esi, dword ptr [eax + 0x44]
// 008618b6  8b4050               mov eax, dword ptr [eax + 0x50]
// 008618b9  6a01                 push 1
// 008618bb  8954244c             mov dword ptr [esp + 0x4c], edx
// 008618bf  8b542418             mov edx, dword ptr [esp + 0x18]
// 008618c3  52                   push edx
// 008618c4  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008618c8  55                   push ebp
// 008618c9  83c103               add ecx, 3
// 008618cc  89442458             mov dword ptr [esp + 0x58], eax
// 008618d0  51                   push ecx
// 008618d1  8d4603               lea eax, [esi + 3]
// 008618d4  50                   push eax
// 008618d5  8bcb                 mov ecx, ebx
// 008618d7  e85623f9ff           call 0x7f3c32
// 008618dc  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008618e0  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008618e4  8b442444             mov eax, dword ptr [esp + 0x44]
// 008618e8  8d743106             lea esi, [ecx + esi + 6]
// 008618ec  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008618f0  8d440206             lea eax, [edx + eax + 6]
// 008618f4  03ee                 add ebp, esi
// 008618f6  8d3408               lea esi, [eax + ecx]
// 008618f9  8b442430             mov eax, dword ptr [esp + 0x30]
// 008618fd  8b10                 mov edx, dword ptr [eax]
// 008618ff  50                   push eax
// 00861900  8b4208               mov eax, dword ptr [edx + 8]
// 00861903  ffd0                 call eax
// 00861905  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00861909  8b08                 mov ecx, dword ptr [eax]
// 0086190b  8b5108               mov edx, dword ptr [ecx + 8]
// 0086190e  50                   push eax
// 0086190f  ffd2                 call edx
// 00861911  8b442434             mov eax, dword ptr [esp + 0x34]
// 00861915  8b08                 mov ecx, dword ptr [eax]
// 00861917  8b5108               mov edx, dword ptr [ecx + 8]
// 0086191a  50                   push eax
// 0086191b  ffd2                 call edx
// 0086191d  8b442428             mov eax, dword ptr [esp + 0x28]
// 00861921  8b08                 mov ecx, dword ptr [eax]
// 00861923  8b5108               mov edx, dword ptr [ecx + 8]
// 00861926  50                   push eax
// 00861927  ffd2                 call edx
// 00861929  892f                 mov dword ptr [edi], ebp
// 0086192b  e983feffff           jmp 0x8617b3
// 00861930  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 00861934  7e07                 jle 0x86193d
// 00861936  46                   inc esi
// 00861937  89742420             mov dword ptr [esp + 0x20], esi
// 0086193b  eb09                 jmp 0x861946
// 0086193d  8d56ff               lea edx, [esi - 1]
// 00861940  89542424             mov dword ptr [esp + 0x24], edx
// 00861944  8bee                 mov ebp, esi
// 00861946  8b442424             mov eax, dword ptr [esp + 0x24]
// 0086194a  39442420             cmp dword ptr [esp + 0x20], eax
// 0086194e  0f8ee1feffff         jle 0x861835
// 00861954  e93affffff           jmp 0x861893
// copied from an identical function in another client (function ?GetToolSize@CHTMLToolTip@CXTPToolTipContext@@MAE?AVCSize@@PAUTOOLITEM@CXTPToolTipContextToolTip@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp