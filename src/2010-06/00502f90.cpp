// roc 2010-06 00502f90  unit: RBX::Network::ClientReplicator  size: 631 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00502f90
//
// 00502f90  51                   push ecx
// 00502f91  53                   push ebx
// 00502f92  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00502f96  55                   push ebp
// 00502f97  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00502f9b  56                   push esi
// 00502f9c  57                   push edi
// 00502f9d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00502fa1  85db                 test ebx, ebx
// 00502fa3  7e6a                 jle 0x50300f
// 00502fa5  8bb49d0c010000       mov esi, dword ptr [ebp + ebx*4 + 0x10c]
// 00502fac  837e0410             cmp dword ptr [esi + 4], 0x10
// 00502fb0  7e5d                 jle 0x50300f
// 00502fb2  8bbc9d10010000       mov edi, dword ptr [ebp + ebx*4 + 0x110]
// 00502fb9  57                   push edi
// 00502fba  e8b1f2ffff           call 0x502270
// 00502fbf  803f00               cmp byte ptr [edi], 0
// 00502fc2  741c                 je 0x502fe0
// 00502fc4  8b4604               mov eax, dword ptr [esi + 4]
// 00502fc7  8b4c8604             mov ecx, dword ptr [esi + eax*4 + 4]
// 00502fcb  894f08               mov dword ptr [edi + 8], ecx
// 00502fce  8b5604               mov edx, dword ptr [esi + 4]
// 00502fd1  8b849684000000       mov eax, dword ptr [esi + edx*4 + 0x84]
// 00502fd8  898788000000         mov dword ptr [edi + 0x88], eax
// 00502fde  eb17                 jmp 0x502ff7
// 00502fe0  8b4e04               mov ecx, dword ptr [esi + 4]
// 00502fe3  8b948e10010000       mov edx, dword ptr [esi + ecx*4 + 0x110]
// 00502fea  899710010000         mov dword ptr [edi + 0x110], edx
// 00502ff0  8b449d04             mov eax, dword ptr [ebp + ebx*4 + 4]
// 00502ff4  894708               mov dword ptr [edi + 8], eax
// 00502ff7  8b4e04               mov ecx, dword ptr [esi + 4]
// 00502ffa  8b548e04             mov edx, dword ptr [esi + ecx*4 + 4]
// 00502ffe  89549d04             mov dword ptr [ebp + ebx*4 + 4], edx
// 00503002  ff4e04               dec dword ptr [esi + 4]
// 00503005  5f                   pop edi
// 00503006  5e                   pop esi
// 00503007  5d                   pop ebp
// 00503008  32c0                 xor al, al
// 0050300a  5b                   pop ebx
// 0050300b  59                   pop ecx
// 0050300c  c21000               ret 0x10
// 0050300f  8b4504               mov eax, dword ptr [ebp + 4]
// 00503012  3bd8                 cmp ebx, eax
// 00503014  0f8db0000000         jge 0x5030ca
// 0050301a  8b949d14010000       mov edx, dword ptr [ebp + ebx*4 + 0x114]
// 00503021  837a0410             cmp dword ptr [edx + 4], 0x10
// 00503025  0f8e8b000000         jle 0x5030b6
// 0050302b  8b849d10010000       mov eax, dword ptr [ebp + ebx*4 + 0x110]
// 00503032  803800               cmp byte ptr [eax], 0
// 00503035  7434                 je 0x50306b
// 00503037  8b7004               mov esi, dword ptr [eax + 4]
// 0050303a  8b7a08               mov edi, dword ptr [edx + 8]
// 0050303d  897cb008             mov dword ptr [eax + esi*4 + 8], edi
// 00503041  8b7004               mov esi, dword ptr [eax + 4]
// 00503044  8bba88000000         mov edi, dword ptr [edx + 0x88]
// 0050304a  89bcb088000000       mov dword ptr [eax + esi*4 + 0x88], edi
// 00503051  8b720c               mov esi, dword ptr [edx + 0xc]
// 00503054  89749d08             mov dword ptr [ebp + ebx*4 + 8], esi
// 00503058  ff4004               inc dword ptr [eax + 4]
// 0050305b  52                   push edx
// 0050305c  e89ff1ffff           call 0x502200
// 00503061  5f                   pop edi
// 00503062  5e                   pop esi
// 00503063  5d                   pop ebp
// 00503064  32c0                 xor al, al
// 00503066  5b                   pop ebx
// 00503067  59                   pop ecx
// 00503068  c21000               ret 0x10
// 0050306b  8b742424             mov esi, dword ptr [esp + 0x24]
// 0050306f  837e0800             cmp dword ptr [esi + 8], 0
// 00503073  750c                 jne 0x503081
// 00503075  c7460803000000       mov dword ptr [esi + 8], 3
// 0050307c  8b7808               mov edi, dword ptr [eax + 8]
// 0050307f  893e                 mov dword ptr [esi], edi
// 00503081  8b7004               mov esi, dword ptr [eax + 4]
// 00503084  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00503088  897cb008             mov dword ptr [eax + esi*4 + 8], edi
// 0050308c  8b7004               mov esi, dword ptr [eax + 4]
// 0050308f  8bba10010000         mov edi, dword ptr [edx + 0x110]
// 00503095  89bcb014010000       mov dword ptr [eax + esi*4 + 0x114], edi
// 0050309c  8b7208               mov esi, dword ptr [edx + 8]
// 0050309f  89749d08             mov dword ptr [ebp + ebx*4 + 8], esi
// 005030a3  ff4004               inc dword ptr [eax + 4]
// 005030a6  52                   push edx
// 005030a7  e854f1ffff           call 0x502200
// 005030ac  5f                   pop edi
// 005030ad  5e                   pop esi
// 005030ae  5d                   pop ebp
// 005030af  32c0                 xor al, al
// 005030b1  5b                   pop ebx
// 005030b2  59                   pop ecx
// 005030b3  c21000               ret 0x10
// 005030b6  3bd8                 cmp ebx, eax
// 005030b8  7d10                 jge 0x5030ca
// 005030ba  8bb49d10010000       mov esi, dword ptr [ebp + ebx*4 + 0x110]
// 005030c1  8bbc9d14010000       mov edi, dword ptr [ebp + ebx*4 + 0x114]
// 005030c8  eb0e                 jmp 0x5030d8
// 005030ca  8bb49d0c010000       mov esi, dword ptr [ebp + ebx*4 + 0x10c]
// 005030d1  8bbc9d10010000       mov edi, dword ptr [ebp + ebx*4 + 0x110]
// 005030d8  803e00               cmp byte ptr [esi], 0
// 005030db  7444                 je 0x503121
// 005030dd  837f0400             cmp dword ptr [edi + 4], 0
// 005030e1  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005030e9  0f8e8a000000         jle 0x503179
// 005030ef  8d8788000000         lea eax, [edi + 0x88]
// 005030f5  8b5080               mov edx, dword ptr [eax - 0x80]
// 005030f8  8b4e04               mov ecx, dword ptr [esi + 4]
// 005030fb  89548e08             mov dword ptr [esi + ecx*4 + 8], edx
// 005030ff  8b4e04               mov ecx, dword ptr [esi + 4]
// 00503102  8b10                 mov edx, dword ptr [eax]
// 00503104  89948e88000000       mov dword ptr [esi + ecx*4 + 0x88], edx
// 0050310b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0050310f  ff4604               inc dword ptr [esi + 4]
// 00503112  41                   inc ecx
// 00503113  83c004               add eax, 4
// 00503116  3b4f04               cmp ecx, dword ptr [edi + 4]
// 00503119  894c2420             mov dword ptr [esp + 0x20], ecx
// 0050311d  7cd6                 jl 0x5030f5
// 0050311f  eb58                 jmp 0x503179
// 00503121  8b4604               mov eax, dword ptr [esi + 4]
// 00503124  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00503128  894c8608             mov dword ptr [esi + eax*4 + 8], ecx
// 0050312c  8b5604               mov edx, dword ptr [esi + 4]
// 0050312f  8b8710010000         mov eax, dword ptr [edi + 0x110]
// 00503135  89849614010000       mov dword ptr [esi + edx*4 + 0x114], eax
// 0050313c  ff4604               inc dword ptr [esi + 4]
// 0050313f  8b4e04               mov ecx, dword ptr [esi + 4]
// 00503142  33d2                 xor edx, edx
// 00503144  395704               cmp dword ptr [edi + 4], edx
// 00503147  7e30                 jle 0x503179
// 00503149  8d8714010000         lea eax, [edi + 0x114]
// 0050314f  90                   nop 
// 00503150  8ba8f4feffff         mov ebp, dword ptr [eax - 0x10c]
// 00503156  896c8e08             mov dword ptr [esi + ecx*4 + 8], ebp
// 0050315a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050315d  8b28                 mov ebp, dword ptr [eax]
// 0050315f  89ac8e14010000       mov dword ptr [esi + ecx*4 + 0x114], ebp
// 00503166  ff4604               inc dword ptr [esi + 4]
// 00503169  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050316c  42                   inc edx
// 0050316d  83c004               add eax, 4
// 00503170  3b5704               cmp edx, dword ptr [edi + 4]
// 00503173  7cdb                 jl 0x503150
// 00503175  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00503179  3b5d04               cmp ebx, dword ptr [ebp + 4]
// 0050317c  7d04                 jge 0x503182
// 0050317e  55                   push ebp
// 0050317f  53                   push ebx
// 00503180  eb09                 jmp 0x50318b
// 00503182  85db                 test ebx, ebx
// 00503184  7e10                 jle 0x503196
// 00503186  55                   push ebp
// 00503187  8d53ff               lea edx, [ebx - 1]
// 0050318a  52                   push edx
// 0050318b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0050318f  e89cebffff           call 0x501d30
// 00503194  85db                 test ebx, ebx
// 00503196  7515                 jne 0x5031ad
// 00503198  803e00               cmp byte ptr [esi], 0
// 0050319b  7410                 je 0x5031ad
// 0050319d  8b442424             mov eax, dword ptr [esp + 0x24]
// 005031a1  c7400803000000       mov dword ptr [eax + 8], 3
// 005031a8  8b4e08               mov ecx, dword ptr [esi + 8]
// 005031ab  8908                 mov dword ptr [eax], ecx
// 005031ad  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005031b1  3b7918               cmp edi, dword ptr [ecx + 0x18]
// 005031b4  7509                 jne 0x5031bf
// 005031b6  8b9708010000         mov edx, dword ptr [edi + 0x108]
// 005031bc  895118               mov dword ptr [ecx + 0x18], edx
// 005031bf  803f00               cmp byte ptr [edi], 0
// 005031c2  742c                 je 0x5031f0
// 005031c4  8b870c010000         mov eax, dword ptr [edi + 0x10c]
// 005031ca  85c0                 test eax, eax
// 005031cc  740c                 je 0x5031da
// 005031ce  8b9708010000         mov edx, dword ptr [edi + 0x108]
// 005031d4  899008010000         mov dword ptr [eax + 0x108], edx
// 005031da  8b8708010000         mov eax, dword ptr [edi + 0x108]
// 005031e0  85c0                 test eax, eax
// 005031e2  740c                 je 0x5031f0
// 005031e4  8b970c010000         mov edx, dword ptr [edi + 0x10c]
// 005031ea  89900c010000         mov dword ptr [eax + 0x10c], edx
// 005031f0  57                   push edi
// 005031f1  e84af8ffff           call 0x502a40
// 005031f6  5f                   pop edi
// 005031f7  33c0                 xor eax, eax
// 005031f9  837d0410             cmp dword ptr [ebp + 4], 0x10
// 005031fd  5e                   pop esi
// 005031fe  5d                   pop ebp
// 005031ff  0f9cc0               setl al
// 00503202  5b                   pop ebx
// 00503203  59                   pop ecx
// 00503204  c21000               ret 0x10
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?FixUnderflow@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAE_NHPAU?$Page@IPAUInternalPacket@@$0CA@@2@IPAUReturnAction@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
