// roc 2012-06 0098b610  unit: CXTPPaintManager  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098b610
//
// 0098b610  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0098b615  0f84ce000000         je 0x98b6e9
// 0098b61b  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 0098b61f  56                   push esi
// 0098b620  7479                 je 0x98b69b
// 0098b622  8db138010000         lea esi, [ecx + 0x138]
// 0098b628  8bce                 mov ecx, esi
// 0098b62a  e841a20600           call 0x9f5870
// 0098b62f  85c0                 test eax, eax
// 0098b631  7468                 je 0x98b69b
// 0098b633  33c9                 xor ecx, ecx
// 0098b635  394c2430             cmp dword ptr [esp + 0x30], ecx
// 0098b639  7507                 jne 0x98b642
// 0098b63b  b903000000           mov ecx, 3
// 0098b640  eb10                 jmp 0x98b652
// 0098b642  394c2424             cmp dword ptr [esp + 0x24], ecx
// 0098b646  740a                 je 0x98b652
// 0098b648  33c9                 xor ecx, ecx
// 0098b64a  394c2428             cmp dword ptr [esp + 0x28], ecx
// 0098b64e  0f95c1               setne cl
// 0098b651  41                   inc ecx
// 0098b652  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0098b656  83f801               cmp eax, 1
// 0098b659  7505                 jne 0x98b660
// 0098b65b  83c104               add ecx, 4
// 0098b65e  eb08                 jmp 0x98b668
// 0098b660  83f802               cmp eax, 2
// 0098b663  7503                 jne 0x98b668
// 0098b665  83c108               add ecx, 8
// 0098b668  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0098b66c  85c0                 test eax, eax
// 0098b66e  7403                 je 0x98b673
// 0098b670  8b4004               mov eax, dword ptr [eax + 4]
// 0098b673  6a00                 push 0
// 0098b675  8d542414             lea edx, [esp + 0x14]
// 0098b679  52                   push edx
// 0098b67a  41                   inc ecx
// 0098b67b  51                   push ecx
// 0098b67c  6a02                 push 2
// 0098b67e  50                   push eax
// 0098b67f  8bce                 mov ecx, esi
// 0098b681  e81a9f0600           call 0x9f55a0
// 0098b686  8b442408             mov eax, dword ptr [esp + 8]
// 0098b68a  5e                   pop esi
// 0098b68b  c7000d000000         mov dword ptr [eax], 0xd
// 0098b691  c740040d000000       mov dword ptr [eax + 4], 0xd
// 0098b698  c22c00               ret 0x2c
// 0098b69b  837c243000           cmp dword ptr [esp + 0x30], 0
// 0098b6a0  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0098b6a4  7409                 je 0x98b6af
// 0098b6a6  83f802               cmp eax, 2
// 0098b6a9  7404                 je 0x98b6af
// 0098b6ab  33c9                 xor ecx, ecx
// 0098b6ad  eb05                 jmp 0x98b6b4
// 0098b6af  b900010000           mov ecx, 0x100
// 0098b6b4  8b542428             mov edx, dword ptr [esp + 0x28]
// 0098b6b8  f7d8                 neg eax
// 0098b6ba  1bc0                 sbb eax, eax
// 0098b6bc  2500040000           and eax, 0x400
// 0098b6c1  f7da                 neg edx
// 0098b6c3  1bd2                 sbb edx, edx
// 0098b6c5  81e200020000         and edx, 0x200
// 0098b6cb  0bc2                 or eax, edx
// 0098b6cd  0bc1                 or eax, ecx
// 0098b6cf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0098b6d3  8b5104               mov edx, dword ptr [ecx + 4]
// 0098b6d6  83c804               or eax, 4
// 0098b6d9  50                   push eax
// 0098b6da  6a04                 push 4
// 0098b6dc  8d442418             lea eax, [esp + 0x18]
// 0098b6e0  50                   push eax
// 0098b6e1  52                   push edx
// 0098b6e2  ff15383bb200         call dword ptr [0xb23b38]
// 0098b6e8  5e                   pop esi
// 0098b6e9  8b442404             mov eax, dword ptr [esp + 4]
// 0098b6ed  c7000d000000         mov dword ptr [eax], 0xd
// 0098b6f3  c740040d000000       mov dword ptr [eax + 4], 0xd
// 0098b6fa  c22c00               ret 0x2c
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawControlRadioButtonMark@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
