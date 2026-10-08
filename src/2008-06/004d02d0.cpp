// roc 2008-06 004d02d0  unit: RBX::Network::PhysicsSender  size: 631 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d02d0
//
// 004d02d0  51                   push ecx
// 004d02d1  53                   push ebx
// 004d02d2  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004d02d6  55                   push ebp
// 004d02d7  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004d02db  56                   push esi
// 004d02dc  57                   push edi
// 004d02dd  894c2410             mov dword ptr [esp + 0x10], ecx
// 004d02e1  85db                 test ebx, ebx
// 004d02e3  7e6a                 jle 0x4d034f
// 004d02e5  8bb49d0c010000       mov esi, dword ptr [ebp + ebx*4 + 0x10c]
// 004d02ec  837e0410             cmp dword ptr [esi + 4], 0x10
// 004d02f0  7e5d                 jle 0x4d034f
// 004d02f2  8bbc9d10010000       mov edi, dword ptr [ebp + ebx*4 + 0x110]
// 004d02f9  57                   push edi
// 004d02fa  e841f4ffff           call 0x4cf740
// 004d02ff  803f00               cmp byte ptr [edi], 0
// 004d0302  741c                 je 0x4d0320
// 004d0304  8b4604               mov eax, dword ptr [esi + 4]
// 004d0307  8b4c8604             mov ecx, dword ptr [esi + eax*4 + 4]
// 004d030b  894f08               mov dword ptr [edi + 8], ecx
// 004d030e  8b5604               mov edx, dword ptr [esi + 4]
// 004d0311  8b849684000000       mov eax, dword ptr [esi + edx*4 + 0x84]
// 004d0318  898788000000         mov dword ptr [edi + 0x88], eax
// 004d031e  eb17                 jmp 0x4d0337
// 004d0320  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d0323  8b948e10010000       mov edx, dword ptr [esi + ecx*4 + 0x110]
// 004d032a  899710010000         mov dword ptr [edi + 0x110], edx
// 004d0330  8b449d04             mov eax, dword ptr [ebp + ebx*4 + 4]
// 004d0334  894708               mov dword ptr [edi + 8], eax
// 004d0337  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d033a  8b548e04             mov edx, dword ptr [esi + ecx*4 + 4]
// 004d033e  89549d04             mov dword ptr [ebp + ebx*4 + 4], edx
// 004d0342  ff4e04               dec dword ptr [esi + 4]
// 004d0345  5f                   pop edi
// 004d0346  5e                   pop esi
// 004d0347  5d                   pop ebp
// 004d0348  32c0                 xor al, al
// 004d034a  5b                   pop ebx
// 004d034b  59                   pop ecx
// 004d034c  c21000               ret 0x10
// 004d034f  8b4504               mov eax, dword ptr [ebp + 4]
// 004d0352  3bd8                 cmp ebx, eax
// 004d0354  0f8db0000000         jge 0x4d040a
// 004d035a  8b949d14010000       mov edx, dword ptr [ebp + ebx*4 + 0x114]
// 004d0361  837a0410             cmp dword ptr [edx + 4], 0x10
// 004d0365  0f8e8b000000         jle 0x4d03f6
// 004d036b  8b849d10010000       mov eax, dword ptr [ebp + ebx*4 + 0x110]
// 004d0372  803800               cmp byte ptr [eax], 0
// 004d0375  7434                 je 0x4d03ab
// 004d0377  8b7004               mov esi, dword ptr [eax + 4]
// 004d037a  8b7a08               mov edi, dword ptr [edx + 8]
// 004d037d  897cb008             mov dword ptr [eax + esi*4 + 8], edi
// 004d0381  8b7004               mov esi, dword ptr [eax + 4]
// 004d0384  8bba88000000         mov edi, dword ptr [edx + 0x88]
// 004d038a  89bcb088000000       mov dword ptr [eax + esi*4 + 0x88], edi
// 004d0391  8b720c               mov esi, dword ptr [edx + 0xc]
// 004d0394  89749d08             mov dword ptr [ebp + ebx*4 + 8], esi
// 004d0398  ff4004               inc dword ptr [eax + 4]
// 004d039b  52                   push edx
// 004d039c  e82ff3ffff           call 0x4cf6d0
// 004d03a1  5f                   pop edi
// 004d03a2  5e                   pop esi
// 004d03a3  5d                   pop ebp
// 004d03a4  32c0                 xor al, al
// 004d03a6  5b                   pop ebx
// 004d03a7  59                   pop ecx
// 004d03a8  c21000               ret 0x10
// 004d03ab  8b742424             mov esi, dword ptr [esp + 0x24]
// 004d03af  837e0800             cmp dword ptr [esi + 8], 0
// 004d03b3  750c                 jne 0x4d03c1
// 004d03b5  c7460803000000       mov dword ptr [esi + 8], 3
// 004d03bc  8b7808               mov edi, dword ptr [eax + 8]
// 004d03bf  893e                 mov dword ptr [esi], edi
// 004d03c1  8b7004               mov esi, dword ptr [eax + 4]
// 004d03c4  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004d03c8  897cb008             mov dword ptr [eax + esi*4 + 8], edi
// 004d03cc  8b7004               mov esi, dword ptr [eax + 4]
// 004d03cf  8bba10010000         mov edi, dword ptr [edx + 0x110]
// 004d03d5  89bcb014010000       mov dword ptr [eax + esi*4 + 0x114], edi
// 004d03dc  8b7208               mov esi, dword ptr [edx + 8]
// 004d03df  89749d08             mov dword ptr [ebp + ebx*4 + 8], esi
// 004d03e3  ff4004               inc dword ptr [eax + 4]
// 004d03e6  52                   push edx
// 004d03e7  e8e4f2ffff           call 0x4cf6d0
// 004d03ec  5f                   pop edi
// 004d03ed  5e                   pop esi
// 004d03ee  5d                   pop ebp
// 004d03ef  32c0                 xor al, al
// 004d03f1  5b                   pop ebx
// 004d03f2  59                   pop ecx
// 004d03f3  c21000               ret 0x10
// 004d03f6  3bd8                 cmp ebx, eax
// 004d03f8  7d10                 jge 0x4d040a
// 004d03fa  8bb49d10010000       mov esi, dword ptr [ebp + ebx*4 + 0x110]
// 004d0401  8bbc9d14010000       mov edi, dword ptr [ebp + ebx*4 + 0x114]
// 004d0408  eb0e                 jmp 0x4d0418
// 004d040a  8bb49d0c010000       mov esi, dword ptr [ebp + ebx*4 + 0x10c]
// 004d0411  8bbc9d10010000       mov edi, dword ptr [ebp + ebx*4 + 0x110]
// 004d0418  803e00               cmp byte ptr [esi], 0
// 004d041b  7444                 je 0x4d0461
// 004d041d  837f0400             cmp dword ptr [edi + 4], 0
// 004d0421  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004d0429  0f8e8a000000         jle 0x4d04b9
// 004d042f  8d8788000000         lea eax, [edi + 0x88]
// 004d0435  8b5080               mov edx, dword ptr [eax - 0x80]
// 004d0438  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d043b  89548e08             mov dword ptr [esi + ecx*4 + 8], edx
// 004d043f  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d0442  8b10                 mov edx, dword ptr [eax]
// 004d0444  89948e88000000       mov dword ptr [esi + ecx*4 + 0x88], edx
// 004d044b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004d044f  ff4604               inc dword ptr [esi + 4]
// 004d0452  41                   inc ecx
// 004d0453  83c004               add eax, 4
// 004d0456  3b4f04               cmp ecx, dword ptr [edi + 4]
// 004d0459  894c2420             mov dword ptr [esp + 0x20], ecx
// 004d045d  7cd6                 jl 0x4d0435
// 004d045f  eb58                 jmp 0x4d04b9
// 004d0461  8b4604               mov eax, dword ptr [esi + 4]
// 004d0464  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004d0468  894c8608             mov dword ptr [esi + eax*4 + 8], ecx
// 004d046c  8b5604               mov edx, dword ptr [esi + 4]
// 004d046f  8b8710010000         mov eax, dword ptr [edi + 0x110]
// 004d0475  89849614010000       mov dword ptr [esi + edx*4 + 0x114], eax
// 004d047c  ff4604               inc dword ptr [esi + 4]
// 004d047f  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d0482  33d2                 xor edx, edx
// 004d0484  395704               cmp dword ptr [edi + 4], edx
// 004d0487  7e30                 jle 0x4d04b9
// 004d0489  8d8714010000         lea eax, [edi + 0x114]
// 004d048f  90                   nop 
// 004d0490  8ba8f4feffff         mov ebp, dword ptr [eax - 0x10c]
// 004d0496  896c8e08             mov dword ptr [esi + ecx*4 + 8], ebp
// 004d049a  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d049d  8b28                 mov ebp, dword ptr [eax]
// 004d049f  89ac8e14010000       mov dword ptr [esi + ecx*4 + 0x114], ebp
// 004d04a6  ff4604               inc dword ptr [esi + 4]
// 004d04a9  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d04ac  42                   inc edx
// 004d04ad  83c004               add eax, 4
// 004d04b0  3b5704               cmp edx, dword ptr [edi + 4]
// 004d04b3  7cdb                 jl 0x4d0490
// 004d04b5  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004d04b9  3b5d04               cmp ebx, dword ptr [ebp + 4]
// 004d04bc  7d04                 jge 0x4d04c2
// 004d04be  55                   push ebp
// 004d04bf  53                   push ebx
// 004d04c0  eb09                 jmp 0x4d04cb
// 004d04c2  85db                 test ebx, ebx
// 004d04c4  7e10                 jle 0x4d04d6
// 004d04c6  55                   push ebp
// 004d04c7  8d53ff               lea edx, [ebx - 1]
// 004d04ca  52                   push edx
// 004d04cb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004d04cf  e82cedffff           call 0x4cf200
// 004d04d4  85db                 test ebx, ebx
// 004d04d6  7515                 jne 0x4d04ed
// 004d04d8  803e00               cmp byte ptr [esi], 0
// 004d04db  7410                 je 0x4d04ed
// 004d04dd  8b442424             mov eax, dword ptr [esp + 0x24]
// 004d04e1  c7400803000000       mov dword ptr [eax + 8], 3
// 004d04e8  8b4e08               mov ecx, dword ptr [esi + 8]
// 004d04eb  8908                 mov dword ptr [eax], ecx
// 004d04ed  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d04f1  3b7918               cmp edi, dword ptr [ecx + 0x18]
// 004d04f4  7509                 jne 0x4d04ff
// 004d04f6  8b9708010000         mov edx, dword ptr [edi + 0x108]
// 004d04fc  895118               mov dword ptr [ecx + 0x18], edx
// 004d04ff  803f00               cmp byte ptr [edi], 0
// 004d0502  742c                 je 0x4d0530
// 004d0504  8b870c010000         mov eax, dword ptr [edi + 0x10c]
// 004d050a  85c0                 test eax, eax
// 004d050c  740c                 je 0x4d051a
// 004d050e  8b9708010000         mov edx, dword ptr [edi + 0x108]
// 004d0514  899008010000         mov dword ptr [eax + 0x108], edx
// 004d051a  8b8708010000         mov eax, dword ptr [edi + 0x108]
// 004d0520  85c0                 test eax, eax
// 004d0522  740c                 je 0x4d0530
// 004d0524  8b970c010000         mov edx, dword ptr [edi + 0x10c]
// 004d052a  89900c010000         mov dword ptr [eax + 0x10c], edx
// 004d0530  57                   push edi
// 004d0531  e87af6ffff           call 0x4cfbb0
// 004d0536  5f                   pop edi
// 004d0537  33c0                 xor eax, eax
// 004d0539  837d0410             cmp dword ptr [ebp + 4], 0x10
// 004d053d  5e                   pop esi
// 004d053e  5d                   pop ebp
// 004d053f  0f9cc0               setl al
// 004d0542  5b                   pop ebx
// 004d0543  59                   pop ecx
// 004d0544  c21000               ret 0x10
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?FixUnderflow@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAE_NHPAU?$Page@IPAUInternalPacket@@$0CA@@2@IPAUReturnAction@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
