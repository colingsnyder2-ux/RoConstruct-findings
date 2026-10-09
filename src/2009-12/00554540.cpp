// roc 2009-12 00554540  unit: RBX::Network::ClientReplicator  size: 631 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00554540
//
// 00554540  51                   push ecx
// 00554541  53                   push ebx
// 00554542  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00554546  55                   push ebp
// 00554547  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0055454b  56                   push esi
// 0055454c  57                   push edi
// 0055454d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00554551  85db                 test ebx, ebx
// 00554553  7e6a                 jle 0x5545bf
// 00554555  8bb49d0c010000       mov esi, dword ptr [ebp + ebx*4 + 0x10c]
// 0055455c  837e0410             cmp dword ptr [esi + 4], 0x10
// 00554560  7e5d                 jle 0x5545bf
// 00554562  8bbc9d10010000       mov edi, dword ptr [ebp + ebx*4 + 0x110]
// 00554569  57                   push edi
// 0055456a  e891f3ffff           call 0x553900
// 0055456f  803f00               cmp byte ptr [edi], 0
// 00554572  741c                 je 0x554590
// 00554574  8b4604               mov eax, dword ptr [esi + 4]
// 00554577  8b4c8604             mov ecx, dword ptr [esi + eax*4 + 4]
// 0055457b  894f08               mov dword ptr [edi + 8], ecx
// 0055457e  8b5604               mov edx, dword ptr [esi + 4]
// 00554581  8b849684000000       mov eax, dword ptr [esi + edx*4 + 0x84]
// 00554588  898788000000         mov dword ptr [edi + 0x88], eax
// 0055458e  eb17                 jmp 0x5545a7
// 00554590  8b4e04               mov ecx, dword ptr [esi + 4]
// 00554593  8b948e10010000       mov edx, dword ptr [esi + ecx*4 + 0x110]
// 0055459a  899710010000         mov dword ptr [edi + 0x110], edx
// 005545a0  8b449d04             mov eax, dword ptr [ebp + ebx*4 + 4]
// 005545a4  894708               mov dword ptr [edi + 8], eax
// 005545a7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005545aa  8b548e04             mov edx, dword ptr [esi + ecx*4 + 4]
// 005545ae  89549d04             mov dword ptr [ebp + ebx*4 + 4], edx
// 005545b2  ff4e04               dec dword ptr [esi + 4]
// 005545b5  5f                   pop edi
// 005545b6  5e                   pop esi
// 005545b7  5d                   pop ebp
// 005545b8  32c0                 xor al, al
// 005545ba  5b                   pop ebx
// 005545bb  59                   pop ecx
// 005545bc  c21000               ret 0x10
// 005545bf  8b4504               mov eax, dword ptr [ebp + 4]
// 005545c2  3bd8                 cmp ebx, eax
// 005545c4  0f8db0000000         jge 0x55467a
// 005545ca  8b949d14010000       mov edx, dword ptr [ebp + ebx*4 + 0x114]
// 005545d1  837a0410             cmp dword ptr [edx + 4], 0x10
// 005545d5  0f8e8b000000         jle 0x554666
// 005545db  8b849d10010000       mov eax, dword ptr [ebp + ebx*4 + 0x110]
// 005545e2  803800               cmp byte ptr [eax], 0
// 005545e5  7434                 je 0x55461b
// 005545e7  8b7004               mov esi, dword ptr [eax + 4]
// 005545ea  8b7a08               mov edi, dword ptr [edx + 8]
// 005545ed  897cb008             mov dword ptr [eax + esi*4 + 8], edi
// 005545f1  8b7004               mov esi, dword ptr [eax + 4]
// 005545f4  8bba88000000         mov edi, dword ptr [edx + 0x88]
// 005545fa  89bcb088000000       mov dword ptr [eax + esi*4 + 0x88], edi
// 00554601  8b720c               mov esi, dword ptr [edx + 0xc]
// 00554604  89749d08             mov dword ptr [ebp + ebx*4 + 8], esi
// 00554608  ff4004               inc dword ptr [eax + 4]
// 0055460b  52                   push edx
// 0055460c  e87ff2ffff           call 0x553890
// 00554611  5f                   pop edi
// 00554612  5e                   pop esi
// 00554613  5d                   pop ebp
// 00554614  32c0                 xor al, al
// 00554616  5b                   pop ebx
// 00554617  59                   pop ecx
// 00554618  c21000               ret 0x10
// 0055461b  8b742424             mov esi, dword ptr [esp + 0x24]
// 0055461f  837e0800             cmp dword ptr [esi + 8], 0
// 00554623  750c                 jne 0x554631
// 00554625  c7460803000000       mov dword ptr [esi + 8], 3
// 0055462c  8b7808               mov edi, dword ptr [eax + 8]
// 0055462f  893e                 mov dword ptr [esi], edi
// 00554631  8b7004               mov esi, dword ptr [eax + 4]
// 00554634  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00554638  897cb008             mov dword ptr [eax + esi*4 + 8], edi
// 0055463c  8b7004               mov esi, dword ptr [eax + 4]
// 0055463f  8bba10010000         mov edi, dword ptr [edx + 0x110]
// 00554645  89bcb014010000       mov dword ptr [eax + esi*4 + 0x114], edi
// 0055464c  8b7208               mov esi, dword ptr [edx + 8]
// 0055464f  89749d08             mov dword ptr [ebp + ebx*4 + 8], esi
// 00554653  ff4004               inc dword ptr [eax + 4]
// 00554656  52                   push edx
// 00554657  e834f2ffff           call 0x553890
// 0055465c  5f                   pop edi
// 0055465d  5e                   pop esi
// 0055465e  5d                   pop ebp
// 0055465f  32c0                 xor al, al
// 00554661  5b                   pop ebx
// 00554662  59                   pop ecx
// 00554663  c21000               ret 0x10
// 00554666  3bd8                 cmp ebx, eax
// 00554668  7d10                 jge 0x55467a
// 0055466a  8bb49d10010000       mov esi, dword ptr [ebp + ebx*4 + 0x110]
// 00554671  8bbc9d14010000       mov edi, dword ptr [ebp + ebx*4 + 0x114]
// 00554678  eb0e                 jmp 0x554688
// 0055467a  8bb49d0c010000       mov esi, dword ptr [ebp + ebx*4 + 0x10c]
// 00554681  8bbc9d10010000       mov edi, dword ptr [ebp + ebx*4 + 0x110]
// 00554688  803e00               cmp byte ptr [esi], 0
// 0055468b  7444                 je 0x5546d1
// 0055468d  837f0400             cmp dword ptr [edi + 4], 0
// 00554691  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00554699  0f8e8a000000         jle 0x554729
// 0055469f  8d8788000000         lea eax, [edi + 0x88]
// 005546a5  8b5080               mov edx, dword ptr [eax - 0x80]
// 005546a8  8b4e04               mov ecx, dword ptr [esi + 4]
// 005546ab  89548e08             mov dword ptr [esi + ecx*4 + 8], edx
// 005546af  8b4e04               mov ecx, dword ptr [esi + 4]
// 005546b2  8b10                 mov edx, dword ptr [eax]
// 005546b4  89948e88000000       mov dword ptr [esi + ecx*4 + 0x88], edx
// 005546bb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005546bf  ff4604               inc dword ptr [esi + 4]
// 005546c2  41                   inc ecx
// 005546c3  83c004               add eax, 4
// 005546c6  3b4f04               cmp ecx, dword ptr [edi + 4]
// 005546c9  894c2420             mov dword ptr [esp + 0x20], ecx
// 005546cd  7cd6                 jl 0x5546a5
// 005546cf  eb58                 jmp 0x554729
// 005546d1  8b4604               mov eax, dword ptr [esi + 4]
// 005546d4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005546d8  894c8608             mov dword ptr [esi + eax*4 + 8], ecx
// 005546dc  8b5604               mov edx, dword ptr [esi + 4]
// 005546df  8b8710010000         mov eax, dword ptr [edi + 0x110]
// 005546e5  89849614010000       mov dword ptr [esi + edx*4 + 0x114], eax
// 005546ec  ff4604               inc dword ptr [esi + 4]
// 005546ef  8b4e04               mov ecx, dword ptr [esi + 4]
// 005546f2  33d2                 xor edx, edx
// 005546f4  395704               cmp dword ptr [edi + 4], edx
// 005546f7  7e30                 jle 0x554729
// 005546f9  8d8714010000         lea eax, [edi + 0x114]
// 005546ff  90                   nop 
// 00554700  8ba8f4feffff         mov ebp, dword ptr [eax - 0x10c]
// 00554706  896c8e08             mov dword ptr [esi + ecx*4 + 8], ebp
// 0055470a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0055470d  8b28                 mov ebp, dword ptr [eax]
// 0055470f  89ac8e14010000       mov dword ptr [esi + ecx*4 + 0x114], ebp
// 00554716  ff4604               inc dword ptr [esi + 4]
// 00554719  8b4e04               mov ecx, dword ptr [esi + 4]
// 0055471c  42                   inc edx
// 0055471d  83c004               add eax, 4
// 00554720  3b5704               cmp edx, dword ptr [edi + 4]
// 00554723  7cdb                 jl 0x554700
// 00554725  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00554729  3b5d04               cmp ebx, dword ptr [ebp + 4]
// 0055472c  7d04                 jge 0x554732
// 0055472e  55                   push ebp
// 0055472f  53                   push ebx
// 00554730  eb09                 jmp 0x55473b
// 00554732  85db                 test ebx, ebx
// 00554734  7e10                 jle 0x554746
// 00554736  55                   push ebp
// 00554737  8d53ff               lea edx, [ebx - 1]
// 0055473a  52                   push edx
// 0055473b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0055473f  e84cedffff           call 0x553490
// 00554744  85db                 test ebx, ebx
// 00554746  7515                 jne 0x55475d
// 00554748  803e00               cmp byte ptr [esi], 0
// 0055474b  7410                 je 0x55475d
// 0055474d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00554751  c7400803000000       mov dword ptr [eax + 8], 3
// 00554758  8b4e08               mov ecx, dword ptr [esi + 8]
// 0055475b  8908                 mov dword ptr [eax], ecx
// 0055475d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00554761  3b7918               cmp edi, dword ptr [ecx + 0x18]
// 00554764  7509                 jne 0x55476f
// 00554766  8b9708010000         mov edx, dword ptr [edi + 0x108]
// 0055476c  895118               mov dword ptr [ecx + 0x18], edx
// 0055476f  803f00               cmp byte ptr [edi], 0
// 00554772  742c                 je 0x5547a0
// 00554774  8b870c010000         mov eax, dword ptr [edi + 0x10c]
// 0055477a  85c0                 test eax, eax
// 0055477c  740c                 je 0x55478a
// 0055477e  8b9708010000         mov edx, dword ptr [edi + 0x108]
// 00554784  899008010000         mov dword ptr [eax + 0x108], edx
// 0055478a  8b8708010000         mov eax, dword ptr [edi + 0x108]
// 00554790  85c0                 test eax, eax
// 00554792  740c                 je 0x5547a0
// 00554794  8b970c010000         mov edx, dword ptr [edi + 0x10c]
// 0055479a  89900c010000         mov dword ptr [eax + 0x10c], edx
// 005547a0  57                   push edi
// 005547a1  e8eaf8ffff           call 0x554090
// 005547a6  5f                   pop edi
// 005547a7  33c0                 xor eax, eax
// 005547a9  837d0410             cmp dword ptr [ebp + 4], 0x10
// 005547ad  5e                   pop esi
// 005547ae  5d                   pop ebp
// 005547af  0f9cc0               setl al
// 005547b2  5b                   pop ebx
// 005547b3  59                   pop ecx
// 005547b4  c21000               ret 0x10
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?FixUnderflow@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAE_NHPAU?$Page@IPAUInternalPacket@@$0CA@@2@IPAUReturnAction@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
