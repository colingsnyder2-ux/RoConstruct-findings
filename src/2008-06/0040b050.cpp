// roc 2008-06 0040b050  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 387 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040b050
//
// 0040b050  83ec20               sub esp, 0x20
// 0040b053  53                   push ebx
// 0040b054  33db                 xor ebx, ebx
// 0040b056  56                   push esi
// 0040b057  57                   push edi
// 0040b058  885c240c             mov byte ptr [esp + 0xc], bl
// 0040b05c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0040b060  8bf9                 mov edi, ecx
// 0040b062  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 0040b065  50                   push eax
// 0040b066  83ec1c               sub esp, 0x1c
// 0040b069  8bc4                 mov eax, esp
// 0040b06b  8908                 mov dword ptr [eax], ecx
// 0040b06d  8b5720               mov edx, dword ptr [edi + 0x20]
// 0040b070  895004               mov dword ptr [eax + 4], edx
// 0040b073  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0040b076  894808               mov dword ptr [eax + 8], ecx
// 0040b079  8b5728               mov edx, dword ptr [edi + 0x28]
// 0040b07c  89500c               mov dword ptr [eax + 0xc], edx
// 0040b07f  895810               mov dword ptr [eax + 0x10], ebx
// 0040b082  895814               mov dword ptr [eax + 0x14], ebx
// 0040b085  8a4f34               mov cl, byte ptr [edi + 0x34]
// 0040b088  884818               mov byte ptr [eax + 0x18], cl
// 0040b08b  3acb                 cmp cl, bl
// 0040b08d  740c                 je 0x40b09b
// 0040b08f  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 0040b092  894810               mov dword ptr [eax + 0x10], ecx
// 0040b095  8b5730               mov edx, dword ptr [edi + 0x30]
// 0040b098  895014               mov dword ptr [eax + 0x14], edx
// 0040b09b  8b0f                 mov ecx, dword ptr [edi]
// 0040b09d  83ec1c               sub esp, 0x1c
// 0040b0a0  8bc4                 mov eax, esp
// 0040b0a2  8908                 mov dword ptr [eax], ecx
// 0040b0a4  8b5704               mov edx, dword ptr [edi + 4]
// 0040b0a7  895004               mov dword ptr [eax + 4], edx
// 0040b0aa  8b4f08               mov ecx, dword ptr [edi + 8]
// 0040b0ad  894808               mov dword ptr [eax + 8], ecx
// 0040b0b0  8b570c               mov edx, dword ptr [edi + 0xc]
// 0040b0b3  89500c               mov dword ptr [eax + 0xc], edx
// 0040b0b6  895810               mov dword ptr [eax + 0x10], ebx
// 0040b0b9  895814               mov dword ptr [eax + 0x14], ebx
// 0040b0bc  8a4f18               mov cl, byte ptr [edi + 0x18]
// 0040b0bf  884818               mov byte ptr [eax + 0x18], cl
// 0040b0c2  3acb                 cmp cl, bl
// 0040b0c4  740c                 je 0x40b0d2
// 0040b0c6  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0040b0c9  894810               mov dword ptr [eax + 0x10], ecx
// 0040b0cc  8b5714               mov edx, dword ptr [edi + 0x14]
// 0040b0cf  895014               mov dword ptr [eax + 0x14], edx
// 0040b0d2  8d44244c             lea eax, [esp + 0x4c]
// 0040b0d6  50                   push eax
// 0040b0d7  e854feffff           call 0x40af30
// 0040b0dc  8a4818               mov cl, byte ptr [eax + 0x18]
// 0040b0df  884f18               mov byte ptr [edi + 0x18], cl
// 0040b0e2  8b10                 mov edx, dword ptr [eax]
// 0040b0e4  8917                 mov dword ptr [edi], edx
// 0040b0e6  8b4804               mov ecx, dword ptr [eax + 4]
// 0040b0e9  894f04               mov dword ptr [edi + 4], ecx
// 0040b0ec  8b5008               mov edx, dword ptr [eax + 8]
// 0040b0ef  895708               mov dword ptr [edi + 8], edx
// 0040b0f2  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0040b0f5  83c440               add esp, 0x40
// 0040b0f8  894f0c               mov dword ptr [edi + 0xc], ecx
// 0040b0fb  385f18               cmp byte ptr [edi + 0x18], bl
// 0040b0fe  740c                 je 0x40b10c
// 0040b100  8b5010               mov edx, dword ptr [eax + 0x10]
// 0040b103  895710               mov dword ptr [edi + 0x10], edx
// 0040b106  8b4014               mov eax, dword ptr [eax + 0x14]
// 0040b109  894714               mov dword ptr [edi + 0x14], eax
// 0040b10c  8b742430             mov esi, dword ptr [esp + 0x30]
// 0040b110  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0040b113  885c240c             mov byte ptr [esp + 0xc], bl
// 0040b117  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040b11b  51                   push ecx
// 0040b11c  83ec1c               sub esp, 0x1c
// 0040b11f  8bc4                 mov eax, esp
// 0040b121  8910                 mov dword ptr [eax], edx
// 0040b123  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0040b126  894804               mov dword ptr [eax + 4], ecx
// 0040b129  8b5624               mov edx, dword ptr [esi + 0x24]
// 0040b12c  895008               mov dword ptr [eax + 8], edx
// 0040b12f  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0040b132  89480c               mov dword ptr [eax + 0xc], ecx
// 0040b135  895810               mov dword ptr [eax + 0x10], ebx
// 0040b138  895814               mov dword ptr [eax + 0x14], ebx
// 0040b13b  8a4e34               mov cl, byte ptr [esi + 0x34]
// 0040b13e  884818               mov byte ptr [eax + 0x18], cl
// 0040b141  3acb                 cmp cl, bl
// 0040b143  740c                 je 0x40b151
// 0040b145  8b562c               mov edx, dword ptr [esi + 0x2c]
// 0040b148  895010               mov dword ptr [eax + 0x10], edx
// 0040b14b  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0040b14e  894814               mov dword ptr [eax + 0x14], ecx
// 0040b151  8b16                 mov edx, dword ptr [esi]
// 0040b153  83ec1c               sub esp, 0x1c
// 0040b156  8bc4                 mov eax, esp
// 0040b158  8910                 mov dword ptr [eax], edx
// 0040b15a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040b15d  894804               mov dword ptr [eax + 4], ecx
// 0040b160  8b5608               mov edx, dword ptr [esi + 8]
// 0040b163  895008               mov dword ptr [eax + 8], edx
// 0040b166  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0040b169  89480c               mov dword ptr [eax + 0xc], ecx
// 0040b16c  895810               mov dword ptr [eax + 0x10], ebx
// 0040b16f  895814               mov dword ptr [eax + 0x14], ebx
// 0040b172  8a4e18               mov cl, byte ptr [esi + 0x18]
// 0040b175  884818               mov byte ptr [eax + 0x18], cl
// 0040b178  3acb                 cmp cl, bl
// 0040b17a  740c                 je 0x40b188
// 0040b17c  8b5610               mov edx, dword ptr [esi + 0x10]
// 0040b17f  895010               mov dword ptr [eax + 0x10], edx
// 0040b182  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0040b185  894814               mov dword ptr [eax + 0x14], ecx
// 0040b188  8d54244c             lea edx, [esp + 0x4c]
// 0040b18c  52                   push edx
// 0040b18d  e89efdffff           call 0x40af30
// 0040b192  8a4818               mov cl, byte ptr [eax + 0x18]
// 0040b195  884e18               mov byte ptr [esi + 0x18], cl
// 0040b198  8b10                 mov edx, dword ptr [eax]
// 0040b19a  8916                 mov dword ptr [esi], edx
// 0040b19c  8b4804               mov ecx, dword ptr [eax + 4]
// 0040b19f  894e04               mov dword ptr [esi + 4], ecx
// 0040b1a2  8b5008               mov edx, dword ptr [eax + 8]
// 0040b1a5  895608               mov dword ptr [esi + 8], edx
// 0040b1a8  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0040b1ab  83c440               add esp, 0x40
// 0040b1ae  894e0c               mov dword ptr [esi + 0xc], ecx
// 0040b1b1  385e18               cmp byte ptr [esi + 0x18], bl
// 0040b1b4  740c                 je 0x40b1c2
// 0040b1b6  8b5010               mov edx, dword ptr [eax + 0x10]
// 0040b1b9  895610               mov dword ptr [esi + 0x10], edx
// 0040b1bc  8b4014               mov eax, dword ptr [eax + 0x14]
// 0040b1bf  894614               mov dword ptr [esi + 0x14], eax
// 0040b1c2  56                   push esi
// 0040b1c3  8bcf                 mov ecx, edi
// 0040b1c5  e8a6eeffff           call 0x40a070
// 0040b1ca  5f                   pop edi
// 0040b1cb  5e                   pop esi
// 0040b1cc  5b                   pop ebx
// 0040b1cd  83c420               add esp, 0x20
// 0040b1d0  c20400               ret 4
// library rbxgs/humanoid\FallingDown.cpp (function ?equal@?$slot_call_iterator@U?$caller@_NV?$function@$$A6AX_N@ZV?$allocator@X@std@@@boost@@@?$call_bound1@X@detail@signals@boost@@Vnamed_slot_map_iterator@345@@detail@signals@boost@@QBE_NABV1234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/FallingDown.cpp
