// roc 2008-06 00499ed0  unit: RBX::Network::VPlayers::?$SignalDesc  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00499ed0
//
// 00499ed0  83ec20               sub esp, 0x20
// 00499ed3  53                   push ebx
// 00499ed4  33db                 xor ebx, ebx
// 00499ed6  56                   push esi
// 00499ed7  885c2408             mov byte ptr [esp + 8], bl
// 00499edb  8b442408             mov eax, dword ptr [esp + 8]
// 00499edf  8bf1                 mov esi, ecx
// 00499ee1  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00499ee4  50                   push eax
// 00499ee5  83ec1c               sub esp, 0x1c
// 00499ee8  8bc4                 mov eax, esp
// 00499eea  8908                 mov dword ptr [eax], ecx
// 00499eec  8b5620               mov edx, dword ptr [esi + 0x20]
// 00499eef  895004               mov dword ptr [eax + 4], edx
// 00499ef2  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00499ef5  894808               mov dword ptr [eax + 8], ecx
// 00499ef8  8b5628               mov edx, dword ptr [esi + 0x28]
// 00499efb  89500c               mov dword ptr [eax + 0xc], edx
// 00499efe  895810               mov dword ptr [eax + 0x10], ebx
// 00499f01  895814               mov dword ptr [eax + 0x14], ebx
// 00499f04  8a4e34               mov cl, byte ptr [esi + 0x34]
// 00499f07  884818               mov byte ptr [eax + 0x18], cl
// 00499f0a  3acb                 cmp cl, bl
// 00499f0c  740c                 je 0x499f1a
// 00499f0e  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00499f11  894810               mov dword ptr [eax + 0x10], ecx
// 00499f14  8b5630               mov edx, dword ptr [esi + 0x30]
// 00499f17  895014               mov dword ptr [eax + 0x14], edx
// 00499f1a  8bce                 mov ecx, esi
// 00499f1c  e87f0bf7ff           call 0x40aaa0
// 00499f21  8b0e                 mov ecx, dword ptr [esi]
// 00499f23  83ec1c               sub esp, 0x1c
// 00499f26  8bc4                 mov eax, esp
// 00499f28  8908                 mov dword ptr [eax], ecx
// 00499f2a  8b5604               mov edx, dword ptr [esi + 4]
// 00499f2d  895004               mov dword ptr [eax + 4], edx
// 00499f30  8b4e08               mov ecx, dword ptr [esi + 8]
// 00499f33  894808               mov dword ptr [eax + 8], ecx
// 00499f36  8b560c               mov edx, dword ptr [esi + 0xc]
// 00499f39  89500c               mov dword ptr [eax + 0xc], edx
// 00499f3c  895810               mov dword ptr [eax + 0x10], ebx
// 00499f3f  895814               mov dword ptr [eax + 0x14], ebx
// 00499f42  8a4e18               mov cl, byte ptr [esi + 0x18]
// 00499f45  884818               mov byte ptr [eax + 0x18], cl
// 00499f48  3acb                 cmp cl, bl
// 00499f4a  740c                 je 0x499f58
// 00499f4c  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00499f4f  894810               mov dword ptr [eax + 0x10], ecx
// 00499f52  8b5614               mov edx, dword ptr [esi + 0x14]
// 00499f55  895014               mov dword ptr [eax + 0x14], edx
// 00499f58  8d442448             lea eax, [esp + 0x48]
// 00499f5c  50                   push eax
// 00499f5d  e8ce0ff7ff           call 0x40af30
// 00499f62  8a4818               mov cl, byte ptr [eax + 0x18]
// 00499f65  884e18               mov byte ptr [esi + 0x18], cl
// 00499f68  8b10                 mov edx, dword ptr [eax]
// 00499f6a  8916                 mov dword ptr [esi], edx
// 00499f6c  8b4804               mov ecx, dword ptr [eax + 4]
// 00499f6f  894e04               mov dword ptr [esi + 4], ecx
// 00499f72  8b5008               mov edx, dword ptr [eax + 8]
// 00499f75  895608               mov dword ptr [esi + 8], edx
// 00499f78  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00499f7b  83c440               add esp, 0x40
// 00499f7e  894e0c               mov dword ptr [esi + 0xc], ecx
// 00499f81  385e18               cmp byte ptr [esi + 0x18], bl
// 00499f84  740c                 je 0x499f92
// 00499f86  8b5010               mov edx, dword ptr [eax + 0x10]
// 00499f89  895610               mov dword ptr [esi + 0x10], edx
// 00499f8c  8b4014               mov eax, dword ptr [eax + 0x14]
// 00499f8f  894614               mov dword ptr [esi + 0x14], eax
// 00499f92  8b763c               mov esi, dword ptr [esi + 0x3c]
// 00499f95  381e                 cmp byte ptr [esi], bl
// 00499f97  7402                 je 0x499f9b
// 00499f99  881e                 mov byte ptr [esi], bl
// 00499f9b  5e                   pop esi
// 00499f9c  5b                   pop ebx
// 00499f9d  83c420               add esp, 0x20
// 00499fa0  c3                   ret 
// library rbxgs/humanoid\FallingDown.cpp (function ?increment@?$slot_call_iterator@U?$caller@_NV?$function@$$A6AX_N@ZV?$allocator@X@std@@@boost@@@?$call_bound1@X@detail@signals@boost@@Vnamed_slot_map_iterator@345@@detail@signals@boost@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/FallingDown.cpp
