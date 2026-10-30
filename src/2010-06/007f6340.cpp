// roc 2010-06 007f6340  unit: CXTPPopupBar  size: 1063 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f6340
//
// 007f6340  6aff                 push -1
// 007f6342  68762d9b00           push 0x9b2d76
// 007f6347  64a100000000         mov eax, dword ptr fs:[0]
// 007f634d  50                   push eax
// 007f634e  81ec9c000000         sub esp, 0x9c
// 007f6354  53                   push ebx
// 007f6355  55                   push ebp
// 007f6356  56                   push esi
// 007f6357  57                   push edi
// 007f6358  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007f635d  33c4                 xor eax, esp
// 007f635f  50                   push eax
// 007f6360  8d8424b0000000       lea eax, [esp + 0xb0]
// 007f6367  64a300000000         mov dword ptr fs:[0], eax
// 007f636d  8bf1                 mov esi, ecx
// 007f636f  33db                 xor ebx, ebx
// 007f6371  399ea0010000         cmp dword ptr [esi + 0x1a0], ebx
// 007f6377  0f85d0030000         jne 0x7f674d
// 007f637d  395e20               cmp dword ptr [esi + 0x20], ebx
// 007f6380  0f84c7030000         je 0x7f674d
// 007f6386  399ee0000000         cmp dword ptr [esi + 0xe0], ebx
// 007f638c  0f84bb030000         je 0x7f674d
// 007f6392  8b06                 mov eax, dword ptr [esi]
// 007f6394  8b90e4010000         mov edx, dword ptr [eax + 0x1e4]
// 007f639a  ffd2                 call edx
// 007f639c  8b06                 mov eax, dword ptr [esi]
// 007f639e  8b9008020000         mov edx, dword ptr [eax + 0x208]
// 007f63a4  8bce                 mov ecx, esi
// 007f63a6  ffd2                 call edx
// 007f63a8  8b3e                 mov edi, dword ptr [esi]
// 007f63aa  8b97d0010000         mov edx, dword ptr [edi + 0x1d0]
// 007f63b0  53                   push ebx
// 007f63b1  53                   push ebx
// 007f63b2  8d44245c             lea eax, [esp + 0x5c]
// 007f63b6  50                   push eax
// 007f63b7  8bce                 mov ecx, esi
// 007f63b9  ffd2                 call edx
// 007f63bb  8b4804               mov ecx, dword ptr [eax + 4]
// 007f63be  8b10                 mov edx, dword ptr [eax]
// 007f63c0  51                   push ecx
// 007f63c1  52                   push edx
// 007f63c2  8b9704020000         mov edx, dword ptr [edi + 0x204]
// 007f63c8  8d44241c             lea eax, [esp + 0x1c]
// 007f63cc  50                   push eax
// 007f63cd  8bce                 mov ecx, esi
// 007f63cf  ffd2                 call edx
// 007f63d1  56                   push esi
// 007f63d2  8d4c2474             lea ecx, [esp + 0x74]
// 007f63d6  e8d58e0000           call 0x7ff2b0
// 007f63db  399eac010000         cmp dword ptr [esi + 0x1ac], ebx
// 007f63e1  7528                 jne 0x7f640b
// 007f63e3  8d442470             lea eax, [esp + 0x70]
// 007f63e7  50                   push eax
// 007f63e8  8d4c2418             lea ecx, [esp + 0x18]
// 007f63ec  51                   push ecx
// 007f63ed  ff1518ba9e00         call dword ptr [0x9eba18]
// 007f63f3  85c0                 test eax, eax
// 007f63f5  7414                 je 0x7f640b
// 007f63f7  8b16                 mov edx, dword ptr [esi]
// 007f63f9  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 007f63ff  6a01                 push 1
// 007f6401  53                   push ebx
// 007f6402  8bce                 mov ecx, esi
// 007f6404  ffd0                 call eax
// 007f6406  e942030000           jmp 0x7f674d
// 007f640b  8bce                 mov ecx, esi
// 007f640d  e8be21fcff           call 0x7b85d0
// 007f6412  8bce                 mov ecx, esi
// 007f6414  8be8                 mov ebp, eax
// 007f6416  e84520fdff           call 0x7c8460
// 007f641b  8bf8                 mov edi, eax
// 007f641d  897c2454             mov dword ptr [esp + 0x54], edi
// 007f6421  3bfb                 cmp edi, ebx
// 007f6423  740b                 je 0x7f6430
// 007f6425  3beb                 cmp ebp, ebx
// 007f6427  7407                 je 0x7f6430
// 007f6429  8bcd                 mov ecx, ebp
// 007f642b  e87037fdff           call 0x7c9ba0
// 007f6430  56                   push esi
// 007f6431  e87ae20700           call 0x8746b0
// 007f6436  8bc8                 mov ecx, eax
// 007f6438  e823e20700           call 0x874660
// 007f643d  33ed                 xor ebp, ebp
// 007f643f  399eac010000         cmp dword ptr [esi + 0x1ac], ebx
// 007f6445  0f8462020000         je 0x7f66ad
// 007f644b  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 007f644f  33c9                 xor ecx, ecx
// 007f6451  3b542420             cmp edx, dword ptr [esp + 0x20]
// 007f6455  0f9cc1               setl cl
// 007f6458  894c242c             mov dword ptr [esp + 0x2c], ecx
// 007f645c  8bce                 mov ecx, esi
// 007f645e  e8bdfcffff           call 0x7f6120
// 007f6463  50                   push eax
// 007f6464  e8e7f4ffff           call 0x7f5950
// 007f6469  83c404               add esp, 4
// 007f646c  85c0                 test eax, eax
// 007f646e  0f8427020000         je 0x7f669b
// 007f6474  8b2d74ba9e00         mov ebp, dword ptr [0x9eba74]
// 007f647a  ffd5                 call ebp
// 007f647c  50                   push eax
// 007f647d  e8e817fbff           call 0x7a7c6a
// 007f6482  8bc8                 mov ecx, eax
// 007f6484  e8975afdff           call 0x7cbf20
// 007f6489  8bf8                 mov edi, eax
// 007f648b  895c2428             mov dword ptr [esp + 0x28], ebx
// 007f648f  c7442424a02ea000     mov dword ptr [esp + 0x24], 0xa02ea0
// 007f6497  8b442420             mov eax, dword ptr [esp + 0x20]
// 007f649b  2b442418             sub eax, dword ptr [esp + 0x18]
// 007f649f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007f64a3  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 007f64a7  50                   push eax
// 007f64a8  51                   push ecx
// 007f64a9  57                   push edi
// 007f64aa  8d4c2430             lea ecx, [esp + 0x30]
// 007f64ae  899c24c4000000       mov dword ptr [esp + 0xc4], ebx
// 007f64b5  e8f678fcff           call 0x7bddb0
// 007f64ba  8d542424             lea edx, [esp + 0x24]
// 007f64be  52                   push edx
// 007f64bf  57                   push edi
// 007f64c0  8d4c2464             lea ecx, [esp + 0x64]
// 007f64c4  e8f7930000           call 0x7ff8c0
// 007f64c9  8b442418             mov eax, dword ptr [esp + 0x18]
// 007f64cd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007f64d1  8b542420             mov edx, dword ptr [esp + 0x20]
// 007f64d5  682000cc00           push 0xcc0020
// 007f64da  50                   push eax
// 007f64db  51                   push ecx
// 007f64dc  57                   push edi
// 007f64dd  2bd0                 sub edx, eax
// 007f64df  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007f64e3  52                   push edx
// 007f64e4  2bc1                 sub eax, ecx
// 007f64e6  50                   push eax
// 007f64e7  53                   push ebx
// 007f64e8  53                   push ebx
// 007f64e9  8d4c247c             lea ecx, [esp + 0x7c]
// 007f64ed  c68424d800000001     mov byte ptr [esp + 0xd8], 1
// 007f64f5  e83677fbff           call 0x7adc30
// 007f64fa  57                   push edi
// 007f64fb  ffd5                 call ebp
// 007f64fd  50                   push eax
// 007f64fe  e86717fbff           call 0x7a7c6a
// 007f6503  8bc8                 mov ecx, eax
// 007f6505  e86641fbff           call 0x7aa670
// 007f650a  53                   push ebx
// 007f650b  8bce                 mov ecx, esi
// 007f650d  e87617fbff           call 0x7a7c88
// 007f6512  8bce                 mov ecx, esi
// 007f6514  e8e74cfcff           call 0x7bb200
// 007f6519  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007f651c  51                   push ecx
// 007f651d  ff15d8ba9e00         call dword ptr [0x9ebad8]
// 007f6523  8b442418             mov eax, dword ptr [esp + 0x18]
// 007f6527  8b542420             mov edx, dword ptr [esp + 0x20]
// 007f652b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007f652f  685c020000           push 0x25c
// 007f6534  2bd0                 sub edx, eax
// 007f6536  52                   push edx
// 007f6537  8b542424             mov edx, dword ptr [esp + 0x24]
// 007f653b  2bd1                 sub edx, ecx
// 007f653d  52                   push edx
// 007f653e  50                   push eax
// 007f653f  51                   push ecx
// 007f6540  53                   push ebx
// 007f6541  8bce                 mov ecx, esi
// 007f6543  e82418fbff           call 0x7a7d6c
// 007f6548  8bce                 mov ecx, esi
// 007f654a  e84121fcff           call 0x7b8690
// 007f654f  8b10                 mov edx, dword ptr [eax]
// 007f6551  8bc8                 mov ecx, eax
// 007f6553  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 007f6559  56                   push esi
// 007f655a  ffd0                 call eax
// 007f655c  bd01000000           mov ebp, 1
// 007f6561  56                   push esi
// 007f6562  8d4c2434             lea ecx, [esp + 0x34]
// 007f6566  e831681800           call 0x97cd9c
// 007f656b  56                   push esi
// 007f656c  8d4c2448             lea ecx, [esp + 0x48]
// 007f6570  c68424bc00000002     mov byte ptr [esp + 0xbc], 2
// 007f6578  e8938d0000           call 0x7ff310
// 007f657d  8d4c2430             lea ecx, [esp + 0x30]
// 007f6581  51                   push ecx
// 007f6582  e8c99b0000           call 0x800150
// 007f6587  8d542434             lea edx, [esp + 0x34]
// 007f658b  53                   push ebx
// 007f658c  52                   push edx
// 007f658d  8bf8                 mov edi, eax
// 007f658f  e8ec9b0000           call 0x800180
// 007f6594  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007f6598  2b4c2424             sub ecx, dword ptr [esp + 0x24]
// 007f659c  8b542428             mov edx, dword ptr [esp + 0x28]
// 007f65a0  2b542420             sub edx, dword ptr [esp + 0x20]
// 007f65a4  83c40c               add esp, 0xc
// 007f65a7  682000cc00           push 0xcc0020
// 007f65ac  53                   push ebx
// 007f65ad  53                   push ebx
// 007f65ae  8d442468             lea eax, [esp + 0x68]
// 007f65b2  50                   push eax
// 007f65b3  51                   push ecx
// 007f65b4  52                   push edx
// 007f65b5  53                   push ebx
// 007f65b6  53                   push ebx
// 007f65b7  8d4c2450             lea ecx, [esp + 0x50]
// 007f65bb  e87076fbff           call 0x7adc30
// 007f65c0  8d442430             lea eax, [esp + 0x30]
// 007f65c4  57                   push edi
// 007f65c5  50                   push eax
// 007f65c6  e8b59b0000           call 0x800180
// 007f65cb  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007f65cf  83c408               add esp, 8
// 007f65d2  8d4c2444             lea ecx, [esp + 0x44]
// 007f65d6  51                   push ecx
// 007f65d7  52                   push edx
// 007f65d8  8d8c2488000000       lea ecx, [esp + 0x88]
// 007f65df  e88c8d0000           call 0x7ff370
// 007f65e4  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007f65e8  8b16                 mov edx, dword ptr [esi]
// 007f65ea  8b92b0010000         mov edx, dword ptr [edx + 0x1b0]
// 007f65f0  83ec10               sub esp, 0x10
// 007f65f3  8bc4                 mov eax, esp
// 007f65f5  8908                 mov dword ptr [eax], ecx
// 007f65f7  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007f65fb  894804               mov dword ptr [eax + 4], ecx
// 007f65fe  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007f6602  894808               mov dword ptr [eax + 8], ecx
// 007f6605  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007f6609  89480c               mov dword ptr [eax + 0xc], ecx
// 007f660c  8d842490000000       lea eax, [esp + 0x90]
// 007f6613  50                   push eax
// 007f6614  8bce                 mov ecx, esi
// 007f6616  c68424cc00000003     mov byte ptr [esp + 0xcc], 3
// 007f661e  ffd2                 call edx
// 007f6620  8bce                 mov ecx, esi
// 007f6622  e86920fcff           call 0x7b8690
// 007f6627  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007f662b  8b10                 mov edx, dword ptr [eax]
// 007f662d  8b92fc000000         mov edx, dword ptr [edx + 0xfc]
// 007f6633  51                   push ecx
// 007f6634  8d8c2484000000       lea ecx, [esp + 0x84]
// 007f663b  51                   push ecx
// 007f663c  8d4c2438             lea ecx, [esp + 0x38]
// 007f6640  51                   push ecx
// 007f6641  56                   push esi
// 007f6642  8bc8                 mov ecx, eax
// 007f6644  ffd2                 call edx
// 007f6646  8d8c2480000000       lea ecx, [esp + 0x80]
// 007f664d  c68424b800000002     mov byte ptr [esp + 0xb8], 2
// 007f6655  e8268f0000           call 0x7ff580
// 007f665a  8d4c2430             lea ecx, [esp + 0x30]
// 007f665e  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 007f6666  e82b671800           call 0x97cd96
// 007f666b  8d4c245c             lea ecx, [esp + 0x5c]
// 007f666f  889c24b8000000       mov byte ptr [esp + 0xb8], bl
// 007f6676  e855930000           call 0x7ff9d0
// 007f667b  8d4c2424             lea ecx, [esp + 0x24]
// 007f667f  c78424b8000000ffffffff mov dword ptr [esp + 0xb8], 0xffffffff
// 007f668a  c7442424a02ea000     mov dword ptr [esp + 0x24], 0xa02ea0
// 007f6692  e8c98fc1ff           call 0x40f660
// 007f6697  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 007f669b  6a02                 push 2
// 007f669d  e8fedc0200           call 0x8243a0
// 007f66a2  8bc8                 mov ecx, eax
// 007f66a4  e8e7dd0200           call 0x824490
// 007f66a9  3beb                 cmp ebp, ebx
// 007f66ab  7539                 jne 0x7f66e6
// 007f66ad  8b442418             mov eax, dword ptr [esp + 0x18]
// 007f66b1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007f66b5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007f66b9  6854020000           push 0x254
// 007f66be  2bc8                 sub ecx, eax
// 007f66c0  51                   push ecx
// 007f66c1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007f66c5  2bd1                 sub edx, ecx
// 007f66c7  52                   push edx
// 007f66c8  50                   push eax
// 007f66c9  51                   push ecx
// 007f66ca  53                   push ebx
// 007f66cb  8bce                 mov ecx, esi
// 007f66cd  e89a16fbff           call 0x7a7d6c
// 007f66d2  8bce                 mov ecx, esi
// 007f66d4  e8b71ffcff           call 0x7b8690
// 007f66d9  8b10                 mov edx, dword ptr [eax]
// 007f66db  8bc8                 mov ecx, eax
// 007f66dd  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 007f66e3  56                   push esi
// 007f66e4  ffd0                 call eax
// 007f66e6  83be0001000005       cmp dword ptr [esi + 0x100], 5
// 007f66ed  751c                 jne 0x7f670b
// 007f66ef  399efc010000         cmp dword ptr [esi + 0x1fc], ebx
// 007f66f5  7414                 je 0x7f670b
// 007f66f7  8d8e8c010000         lea ecx, [esi + 0x18c]
// 007f66fd  51                   push ecx
// 007f66fe  56                   push esi
// 007f66ff  e8acdf0700           call 0x8746b0
// 007f6704  8bc8                 mov ecx, eax
// 007f6706  e8a5e90700           call 0x8750b0
// 007f670b  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 007f6711  3bcb                 cmp ecx, ebx
// 007f6713  740a                 je 0x7f671f
// 007f6715  8b11                 mov edx, dword ptr [ecx]
// 007f6717  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 007f671d  ffd0                 call eax
// 007f671f  8b16                 mov edx, dword ptr [esi]
// 007f6721  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 007f6727  6a01                 push 1
// 007f6729  53                   push ebx
// 007f672a  8bce                 mov ecx, esi
// 007f672c  ffd0                 call eax
// 007f672e  3bfb                 cmp edi, ebx
// 007f6730  7415                 je 0x7f6747
// 007f6732  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007f6735  53                   push ebx
// 007f6736  68cacc0000           push 0xccca
// 007f673b  6813010000           push 0x113
// 007f6740  51                   push ecx
// 007f6741  ff1548ba9e00         call dword ptr [0x9eba48]
// 007f6747  899eac010000         mov dword ptr [esi + 0x1ac], ebx
// 007f674d  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 007f6754  64890d00000000       mov dword ptr fs:[0], ecx
// 007f675b  59                   pop ecx
// 007f675c  5f                   pop edi
// 007f675d  5e                   pop esi
// 007f675e  5d                   pop ebp
// 007f675f  5b                   pop ebx
// 007f6760  81c4a8000000         add esp, 0xa8
// 007f6766  c3                   ret 
// copied from an identical function in another client (function ?OnRecalcLayout@CXTPPopupBar@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp