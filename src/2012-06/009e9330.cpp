// roc 2012-06 009e9330  unit: CXTColorDialog  size: 879 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e9330
//
// 009e9330  6aff                 push -1
// 009e9332  684c13ae00           push 0xae134c
// 009e9337  64a100000000         mov eax, dword ptr fs:[0]
// 009e933d  50                   push eax
// 009e933e  81ec9c000000         sub esp, 0x9c
// 009e9344  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009e9349  33c4                 xor eax, esp
// 009e934b  89842498000000       mov dword ptr [esp + 0x98], eax
// 009e9352  55                   push ebp
// 009e9353  56                   push esi
// 009e9354  57                   push edi
// 009e9355  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009e935a  33c4                 xor eax, esp
// 009e935c  50                   push eax
// 009e935d  8d8424ac000000       lea eax, [esp + 0xac]
// 009e9364  64a300000000         mov dword ptr fs:[0], eax
// 009e936a  8bf1                 mov esi, ecx
// 009e936c  56                   push esi
// 009e936d  8d4c2458             lea ecx, [esp + 0x58]
// 009e9371  e8f896f9ff           call 0x982a6e
// 009e9376  6a01                 push 1
// 009e9378  8d4c2458             lea ecx, [esp + 0x58]
// 009e937c  c78424b800000000000000 mov dword ptr [esp + 0xb8], 0
// 009e9387  e81c020b00           call 0xa995a8
// 009e938c  e8cf44fdff           call 0x9bd860
// 009e9391  6a08                 push 8
// 009e9393  8bc8                 mov ecx, eax
// 009e9395  e8463cfdff           call 0x9bcfe0
// 009e939a  50                   push eax
// 009e939b  8d4c2458             lea ecx, [esp + 0x58]
// 009e939f  e8ac020b00           call 0xa99650
// 009e93a4  8b4620               mov eax, dword ptr [esi + 0x20]
// 009e93a7  6a00                 push 0
// 009e93a9  6a00                 push 0
// 009e93ab  6a31                 push 0x31
// 009e93ad  50                   push eax
// 009e93ae  ff15043cb200         call dword ptr [0xb23c04]
// 009e93b4  50                   push eax
// 009e93b5  e83498f9ff           call 0x982bee
// 009e93ba  50                   push eax
// 009e93bb  8d4c2458             lea ecx, [esp + 0x58]
// 009e93bf  51                   push ecx
// 009e93c0  8d4c244c             lea ecx, [esp + 0x4c]
// 009e93c4  e867c1feff           call 0x9d5530
// 009e93c9  6a02                 push 2
// 009e93cb  8bce                 mov ecx, esi
// 009e93cd  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 009e93d5  e8169cf9ff           call 0x982ff0
// 009e93da  50                   push eax
// 009e93db  8d4c2438             lea ecx, [esp + 0x38]
// 009e93df  e85cbdfeff           call 0x9d5140
// 009e93e4  8d542434             lea edx, [esp + 0x34]
// 009e93e8  52                   push edx
// 009e93e9  8bce                 mov ecx, esi
// 009e93eb  e8ae9cf9ff           call 0x98309e
// 009e93f0  56                   push esi
// 009e93f1  8d4c2418             lea ecx, [esp + 0x18]
// 009e93f5  e8a6bdfeff           call 0x9d51a0
// 009e93fa  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 009e93fe  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 009e9402  8b2d4c3bb200         mov ebp, dword ptr [0xb23b4c]
// 009e9408  8944241c             mov dword ptr [esp + 0x1c], eax
// 009e940c  8b442420             mov eax, dword ptr [esp + 0x20]
// 009e9410  83e820               sub eax, 0x20
// 009e9413  89442420             mov dword ptr [esp + 0x20], eax
// 009e9417  83c0be               add eax, -0x42
// 009e941a  f686ac00000040       test byte ptr [esi + 0xac], 0x40
// 009e9421  894c2414             mov dword ptr [esp + 0x14], ecx
// 009e9425  89442418             mov dword ptr [esp + 0x18], eax
// 009e9429  746b                 je 0x9e9496
// 009e942b  6a03                 push 3
// 009e942d  6a03                 push 3
// 009e942f  8d54241c             lea edx, [esp + 0x1c]
// 009e9433  52                   push edx
// 009e9434  ffd5                 call ebp
// 009e9436  e82544fdff           call 0x9bd860
// 009e943b  6a15                 push 0x15
// 009e943d  8bc8                 mov ecx, eax
// 009e943f  e89c3bfdff           call 0x9bcfe0
// 009e9444  8bf8                 mov edi, eax
// 009e9446  e81544fdff           call 0x9bd860
// 009e944b  57                   push edi
// 009e944c  6a14                 push 0x14
// 009e944e  8bc8                 mov ecx, eax
// 009e9450  e88b3bfdff           call 0x9bcfe0
// 009e9455  50                   push eax
// 009e9456  8d44241c             lea eax, [esp + 0x1c]
// 009e945a  50                   push eax
// 009e945b  8d4c2460             lea ecx, [esp + 0x60]
// 009e945f  e8429af9ff           call 0x982ea6
// 009e9464  6afd                 push -3
// 009e9466  6afd                 push -3
// 009e9468  8d4c241c             lea ecx, [esp + 0x1c]
// 009e946c  51                   push ecx
// 009e946d  ffd5                 call ebp
// 009e946f  e8ec43fdff           call 0x9bd860
// 009e9474  6a14                 push 0x14
// 009e9476  8bc8                 mov ecx, eax
// 009e9478  e8633bfdff           call 0x9bcfe0
// 009e947d  8bf8                 mov edi, eax
// 009e947f  e8dc43fdff           call 0x9bd860
// 009e9484  57                   push edi
// 009e9485  6a10                 push 0x10
// 009e9487  8bc8                 mov ecx, eax
// 009e9489  e8523bfdff           call 0x9bcfe0
// 009e948e  50                   push eax
// 009e948f  8d54241c             lea edx, [esp + 0x1c]
// 009e9493  52                   push edx
// 009e9494  eb25                 jmp 0x9e94bb
// 009e9496  e8c543fdff           call 0x9bd860
// 009e949b  6a06                 push 6
// 009e949d  8bc8                 mov ecx, eax
// 009e949f  e83c3bfdff           call 0x9bcfe0
// 009e94a4  8bf8                 mov edi, eax
// 009e94a6  e8b543fdff           call 0x9bd860
// 009e94ab  57                   push edi
// 009e94ac  6a06                 push 6
// 009e94ae  8bc8                 mov ecx, eax
// 009e94b0  e82b3bfdff           call 0x9bcfe0
// 009e94b5  50                   push eax
// 009e94b6  8d44241c             lea eax, [esp + 0x1c]
// 009e94ba  50                   push eax
// 009e94bb  8d4c2460             lea ecx, [esp + 0x60]
// 009e94bf  e8e299f9ff           call 0x982ea6
// 009e94c4  8b442418             mov eax, dword ptr [esp + 0x18]
// 009e94c8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009e94cc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009e94d0  89442428             mov dword ptr [esp + 0x28], eax
// 009e94d4  894c2424             mov dword ptr [esp + 0x24], ecx
// 009e94d8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009e94dc  83c0ea               add eax, -0x16
// 009e94df  894c2430             mov dword ptr [esp + 0x30], ecx
// 009e94e3  89442428             mov dword ptr [esp + 0x28], eax
// 009e94e7  83c016               add eax, 0x16
// 009e94ea  8d4c2410             lea ecx, [esp + 0x10]
// 009e94ee  8954242c             mov dword ptr [esp + 0x2c], edx
// 009e94f2  89442430             mov dword ptr [esp + 0x30], eax
// 009e94f6  ff158447b200         call dword ptr [0xb24784]
// 009e94fc  c68424b400000002     mov byte ptr [esp + 0xb4], 2
// 009e9504  e8e7ef0000           call 0x9f84f0
// 009e9509  8b10                 mov edx, dword ptr [eax]
// 009e950b  8b5208               mov edx, dword ptr [edx + 8]
// 009e950e  6888240000           push 0x2488
// 009e9513  8d4c2414             lea ecx, [esp + 0x14]
// 009e9517  51                   push ecx
// 009e9518  8bc8                 mov ecx, eax
// 009e951a  ffd2                 call edx
// 009e951c  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 009e9520  6a25                 push 0x25
// 009e9522  8d442428             lea eax, [esp + 0x28]
// 009e9526  50                   push eax
// 009e9527  8d4c2418             lea ecx, [esp + 0x18]
// 009e952b  83c770               add edi, 0x70
// 009e952e  ff155846b200         call dword ptr [0xb24658]
// 009e9534  50                   push eax
// 009e9535  8d4c241c             lea ecx, [esp + 0x1c]
// 009e9539  ff159847b200         call dword ptr [0xb24798]
// 009e953f  8b17                 mov edx, dword ptr [edi]
// 009e9541  50                   push eax
// 009e9542  8d4c2464             lea ecx, [esp + 0x64]
// 009e9546  ffd2                 call edx
// 009e9548  8b442414             mov eax, dword ptr [esp + 0x14]
// 009e954c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009e9550  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009e9554  89442424             mov dword ptr [esp + 0x24], eax
// 009e9558  8b442420             mov eax, dword ptr [esp + 0x20]
// 009e955c  894c2428             mov dword ptr [esp + 0x28], ecx
// 009e9560  89442430             mov dword ptr [esp + 0x30], eax
// 009e9564  89442428             mov dword ptr [esp + 0x28], eax
// 009e9568  83c016               add eax, 0x16
// 009e956b  8954242c             mov dword ptr [esp + 0x2c], edx
// 009e956f  89442430             mov dword ptr [esp + 0x30], eax
// 009e9573  e878ef0000           call 0x9f84f0
// 009e9578  8b10                 mov edx, dword ptr [eax]
// 009e957a  8b5208               mov edx, dword ptr [edx + 8]
// 009e957d  6889240000           push 0x2489
// 009e9582  8d4c2414             lea ecx, [esp + 0x14]
// 009e9586  51                   push ecx
// 009e9587  8bc8                 mov ecx, eax
// 009e9589  ffd2                 call edx
// 009e958b  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 009e958f  6a25                 push 0x25
// 009e9591  8d442428             lea eax, [esp + 0x28]
// 009e9595  50                   push eax
// 009e9596  8d4c2418             lea ecx, [esp + 0x18]
// 009e959a  83c770               add edi, 0x70
// 009e959d  ff155846b200         call dword ptr [0xb24658]
// 009e95a3  50                   push eax
// 009e95a4  8d4c241c             lea ecx, [esp + 0x1c]
// 009e95a8  ff159847b200         call dword ptr [0xb24798]
// 009e95ae  8b17                 mov edx, dword ptr [edi]
// 009e95b0  50                   push eax
// 009e95b1  8d4c2464             lea ecx, [esp + 0x64]
// 009e95b5  ffd2                 call edx
// 009e95b7  6aff                 push -1
// 009e95b9  6aff                 push -1
// 009e95bb  8d44241c             lea eax, [esp + 0x1c]
// 009e95bf  50                   push eax
// 009e95c0  ffd5                 call ebp
// 009e95c2  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 009e95c6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009e95ca  8bc5                 mov eax, ebp
// 009e95cc  2bc1                 sub eax, ecx
// 009e95ce  99                   cdq 
// 009e95cf  2bc2                 sub eax, edx
// 009e95d1  8b542414             mov edx, dword ptr [esp + 0x14]
// 009e95d5  899604010000         mov dword ptr [esi + 0x104], edx
// 009e95db  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009e95df  8bf8                 mov edi, eax
// 009e95e1  8d8604010000         lea eax, [esi + 0x104]
// 009e95e7  894804               mov dword ptr [eax + 4], ecx
// 009e95ea  895008               mov dword ptr [eax + 8], edx
// 009e95ed  8b9624010000         mov edx, dword ptr [esi + 0x124]
// 009e95f3  d1ff                 sar edi, 1
// 009e95f5  03cf                 add ecx, edi
// 009e95f7  89680c               mov dword ptr [eax + 0xc], ebp
// 009e95fa  52                   push edx
// 009e95fb  898e10010000         mov dword ptr [esi + 0x110], ecx
// 009e9601  50                   push eax
// 009e9602  8d4c245c             lea ecx, [esp + 0x5c]
// 009e9606  e8a198f9ff           call 0x982eac
// 009e960b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009e960f  8b542418             mov edx, dword ptr [esp + 0x18]
// 009e9613  898e14010000         mov dword ptr [esi + 0x114], ecx
// 009e9619  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009e961d  8d8614010000         lea eax, [esi + 0x114]
// 009e9623  895004               mov dword ptr [eax + 4], edx
// 009e9626  8b9628010000         mov edx, dword ptr [esi + 0x128]
// 009e962c  894808               mov dword ptr [eax + 8], ecx
// 009e962f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009e9633  89480c               mov dword ptr [eax + 0xc], ecx
// 009e9636  2bcf                 sub ecx, edi
// 009e9638  52                   push edx
// 009e9639  898e18010000         mov dword ptr [esi + 0x118], ecx
// 009e963f  50                   push eax
// 009e9640  8d4c245c             lea ecx, [esp + 0x5c]
// 009e9644  e86398f9ff           call 0x982eac
// 009e9649  8d4c2410             lea ecx, [esp + 0x10]
// 009e964d  ff15d047b200         call dword ptr [0xb247d0]
// 009e9653  8d4c2444             lea ecx, [esp + 0x44]
// 009e9657  c68424b400000000     mov byte ptr [esp + 0xb4], 0
// 009e965f  e84cbffeff           call 0x9d55b0
// 009e9664  8d4c2454             lea ecx, [esp + 0x54]
// 009e9668  c78424b4000000ffffffff mov dword ptr [esp + 0xb4], 0xffffffff
// 009e9673  e8f093f9ff           call 0x982a68
// 009e9678  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 009e967f  64890d00000000       mov dword ptr fs:[0], ecx
// 009e9686  59                   pop ecx
// 009e9687  5f                   pop edi
// 009e9688  5e                   pop esi
// 009e9689  5d                   pop ebp
// 009e968a  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 009e9691  33cc                 xor ecx, esp
// 009e9693  e89fa3f9ff           call 0x983a37
// 009e9698  81c4a8000000         add esp, 0xa8
// 009e969e  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTColorDialog@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTColorDialog.cpp