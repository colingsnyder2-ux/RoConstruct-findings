// roc 2009-06 004f6750  unit: RBX::Network::ClientReplicator  size: 631 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f6750
//
// 004f6750  51                   push ecx
// 004f6751  53                   push ebx
// 004f6752  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004f6756  55                   push ebp
// 004f6757  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004f675b  56                   push esi
// 004f675c  57                   push edi
// 004f675d  894c2410             mov dword ptr [esp + 0x10], ecx
// 004f6761  85db                 test ebx, ebx
// 004f6763  7e6a                 jle 0x4f67cf
// 004f6765  8bb49d0c010000       mov esi, dword ptr [ebp + ebx*4 + 0x10c]
// 004f676c  837e0410             cmp dword ptr [esi + 4], 0x10
// 004f6770  7e5d                 jle 0x4f67cf
// 004f6772  8bbc9d10010000       mov edi, dword ptr [ebp + ebx*4 + 0x110]
// 004f6779  57                   push edi
// 004f677a  e8d1f2ffff           call 0x4f5a50
// 004f677f  803f00               cmp byte ptr [edi], 0
// 004f6782  741c                 je 0x4f67a0
// 004f6784  8b4604               mov eax, dword ptr [esi + 4]
// 004f6787  8b4c8604             mov ecx, dword ptr [esi + eax*4 + 4]
// 004f678b  894f08               mov dword ptr [edi + 8], ecx
// 004f678e  8b5604               mov edx, dword ptr [esi + 4]
// 004f6791  8b849684000000       mov eax, dword ptr [esi + edx*4 + 0x84]
// 004f6798  898788000000         mov dword ptr [edi + 0x88], eax
// 004f679e  eb17                 jmp 0x4f67b7
// 004f67a0  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f67a3  8b948e10010000       mov edx, dword ptr [esi + ecx*4 + 0x110]
// 004f67aa  899710010000         mov dword ptr [edi + 0x110], edx
// 004f67b0  8b449d04             mov eax, dword ptr [ebp + ebx*4 + 4]
// 004f67b4  894708               mov dword ptr [edi + 8], eax
// 004f67b7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f67ba  8b548e04             mov edx, dword ptr [esi + ecx*4 + 4]
// 004f67be  89549d04             mov dword ptr [ebp + ebx*4 + 4], edx
// 004f67c2  ff4e04               dec dword ptr [esi + 4]
// 004f67c5  5f                   pop edi
// 004f67c6  5e                   pop esi
// 004f67c7  5d                   pop ebp
// 004f67c8  32c0                 xor al, al
// 004f67ca  5b                   pop ebx
// 004f67cb  59                   pop ecx
// 004f67cc  c21000               ret 0x10
// 004f67cf  8b4504               mov eax, dword ptr [ebp + 4]
// 004f67d2  3bd8                 cmp ebx, eax
// 004f67d4  0f8db0000000         jge 0x4f688a
// 004f67da  8b949d14010000       mov edx, dword ptr [ebp + ebx*4 + 0x114]
// 004f67e1  837a0410             cmp dword ptr [edx + 4], 0x10
// 004f67e5  0f8e8b000000         jle 0x4f6876
// 004f67eb  8b849d10010000       mov eax, dword ptr [ebp + ebx*4 + 0x110]
// 004f67f2  803800               cmp byte ptr [eax], 0
// 004f67f5  7434                 je 0x4f682b
// 004f67f7  8b7004               mov esi, dword ptr [eax + 4]
// 004f67fa  8b7a08               mov edi, dword ptr [edx + 8]
// 004f67fd  897cb008             mov dword ptr [eax + esi*4 + 8], edi
// 004f6801  8b7004               mov esi, dword ptr [eax + 4]
// 004f6804  8bba88000000         mov edi, dword ptr [edx + 0x88]
// 004f680a  89bcb088000000       mov dword ptr [eax + esi*4 + 0x88], edi
// 004f6811  8b720c               mov esi, dword ptr [edx + 0xc]
// 004f6814  89749d08             mov dword ptr [ebp + ebx*4 + 8], esi
// 004f6818  ff4004               inc dword ptr [eax + 4]
// 004f681b  52                   push edx
// 004f681c  e8bff1ffff           call 0x4f59e0
// 004f6821  5f                   pop edi
// 004f6822  5e                   pop esi
// 004f6823  5d                   pop ebp
// 004f6824  32c0                 xor al, al
// 004f6826  5b                   pop ebx
// 004f6827  59                   pop ecx
// 004f6828  c21000               ret 0x10
// 004f682b  8b742424             mov esi, dword ptr [esp + 0x24]
// 004f682f  837e0800             cmp dword ptr [esi + 8], 0
// 004f6833  750c                 jne 0x4f6841
// 004f6835  c7460803000000       mov dword ptr [esi + 8], 3
// 004f683c  8b7808               mov edi, dword ptr [eax + 8]
// 004f683f  893e                 mov dword ptr [esi], edi
// 004f6841  8b7004               mov esi, dword ptr [eax + 4]
// 004f6844  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004f6848  897cb008             mov dword ptr [eax + esi*4 + 8], edi
// 004f684c  8b7004               mov esi, dword ptr [eax + 4]
// 004f684f  8bba10010000         mov edi, dword ptr [edx + 0x110]
// 004f6855  89bcb014010000       mov dword ptr [eax + esi*4 + 0x114], edi
// 004f685c  8b7208               mov esi, dword ptr [edx + 8]
// 004f685f  89749d08             mov dword ptr [ebp + ebx*4 + 8], esi
// 004f6863  ff4004               inc dword ptr [eax + 4]
// 004f6866  52                   push edx
// 004f6867  e874f1ffff           call 0x4f59e0
// 004f686c  5f                   pop edi
// 004f686d  5e                   pop esi
// 004f686e  5d                   pop ebp
// 004f686f  32c0                 xor al, al
// 004f6871  5b                   pop ebx
// 004f6872  59                   pop ecx
// 004f6873  c21000               ret 0x10
// 004f6876  3bd8                 cmp ebx, eax
// 004f6878  7d10                 jge 0x4f688a
// 004f687a  8bb49d10010000       mov esi, dword ptr [ebp + ebx*4 + 0x110]
// 004f6881  8bbc9d14010000       mov edi, dword ptr [ebp + ebx*4 + 0x114]
// 004f6888  eb0e                 jmp 0x4f6898
// 004f688a  8bb49d0c010000       mov esi, dword ptr [ebp + ebx*4 + 0x10c]
// 004f6891  8bbc9d10010000       mov edi, dword ptr [ebp + ebx*4 + 0x110]
// 004f6898  803e00               cmp byte ptr [esi], 0
// 004f689b  7444                 je 0x4f68e1
// 004f689d  837f0400             cmp dword ptr [edi + 4], 0
// 004f68a1  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004f68a9  0f8e8a000000         jle 0x4f6939
// 004f68af  8d8788000000         lea eax, [edi + 0x88]
// 004f68b5  8b5080               mov edx, dword ptr [eax - 0x80]
// 004f68b8  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f68bb  89548e08             mov dword ptr [esi + ecx*4 + 8], edx
// 004f68bf  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f68c2  8b10                 mov edx, dword ptr [eax]
// 004f68c4  89948e88000000       mov dword ptr [esi + ecx*4 + 0x88], edx
// 004f68cb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004f68cf  ff4604               inc dword ptr [esi + 4]
// 004f68d2  41                   inc ecx
// 004f68d3  83c004               add eax, 4
// 004f68d6  3b4f04               cmp ecx, dword ptr [edi + 4]
// 004f68d9  894c2420             mov dword ptr [esp + 0x20], ecx
// 004f68dd  7cd6                 jl 0x4f68b5
// 004f68df  eb58                 jmp 0x4f6939
// 004f68e1  8b4604               mov eax, dword ptr [esi + 4]
// 004f68e4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004f68e8  894c8608             mov dword ptr [esi + eax*4 + 8], ecx
// 004f68ec  8b5604               mov edx, dword ptr [esi + 4]
// 004f68ef  8b8710010000         mov eax, dword ptr [edi + 0x110]
// 004f68f5  89849614010000       mov dword ptr [esi + edx*4 + 0x114], eax
// 004f68fc  ff4604               inc dword ptr [esi + 4]
// 004f68ff  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f6902  33d2                 xor edx, edx
// 004f6904  395704               cmp dword ptr [edi + 4], edx
// 004f6907  7e30                 jle 0x4f6939
// 004f6909  8d8714010000         lea eax, [edi + 0x114]
// 004f690f  90                   nop 
// 004f6910  8ba8f4feffff         mov ebp, dword ptr [eax - 0x10c]
// 004f6916  896c8e08             mov dword ptr [esi + ecx*4 + 8], ebp
// 004f691a  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f691d  8b28                 mov ebp, dword ptr [eax]
// 004f691f  89ac8e14010000       mov dword ptr [esi + ecx*4 + 0x114], ebp
// 004f6926  ff4604               inc dword ptr [esi + 4]
// 004f6929  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f692c  42                   inc edx
// 004f692d  83c004               add eax, 4
// 004f6930  3b5704               cmp edx, dword ptr [edi + 4]
// 004f6933  7cdb                 jl 0x4f6910
// 004f6935  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004f6939  3b5d04               cmp ebx, dword ptr [ebp + 4]
// 004f693c  7d04                 jge 0x4f6942
// 004f693e  55                   push ebp
// 004f693f  53                   push ebx
// 004f6940  eb09                 jmp 0x4f694b
// 004f6942  85db                 test ebx, ebx
// 004f6944  7e10                 jle 0x4f6956
// 004f6946  55                   push ebp
// 004f6947  8d53ff               lea edx, [ebx - 1]
// 004f694a  52                   push edx
// 004f694b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004f694f  e8bcebffff           call 0x4f5510
// 004f6954  85db                 test ebx, ebx
// 004f6956  7515                 jne 0x4f696d
// 004f6958  803e00               cmp byte ptr [esi], 0
// 004f695b  7410                 je 0x4f696d
// 004f695d  8b442424             mov eax, dword ptr [esp + 0x24]
// 004f6961  c7400803000000       mov dword ptr [eax + 8], 3
// 004f6968  8b4e08               mov ecx, dword ptr [esi + 8]
// 004f696b  8908                 mov dword ptr [eax], ecx
// 004f696d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004f6971  3b7918               cmp edi, dword ptr [ecx + 0x18]
// 004f6974  7509                 jne 0x4f697f
// 004f6976  8b9708010000         mov edx, dword ptr [edi + 0x108]
// 004f697c  895118               mov dword ptr [ecx + 0x18], edx
// 004f697f  803f00               cmp byte ptr [edi], 0
// 004f6982  742c                 je 0x4f69b0
// 004f6984  8b870c010000         mov eax, dword ptr [edi + 0x10c]
// 004f698a  85c0                 test eax, eax
// 004f698c  740c                 je 0x4f699a
// 004f698e  8b9708010000         mov edx, dword ptr [edi + 0x108]
// 004f6994  899008010000         mov dword ptr [eax + 0x108], edx
// 004f699a  8b8708010000         mov eax, dword ptr [edi + 0x108]
// 004f69a0  85c0                 test eax, eax
// 004f69a2  740c                 je 0x4f69b0
// 004f69a4  8b970c010000         mov edx, dword ptr [edi + 0x10c]
// 004f69aa  89900c010000         mov dword ptr [eax + 0x10c], edx
// 004f69b0  57                   push edi
// 004f69b1  e8eaf8ffff           call 0x4f62a0
// 004f69b6  5f                   pop edi
// 004f69b7  33c0                 xor eax, eax
// 004f69b9  837d0410             cmp dword ptr [ebp + 4], 0x10
// 004f69bd  5e                   pop esi
// 004f69be  5d                   pop ebp
// 004f69bf  0f9cc0               setl al
// 004f69c2  5b                   pop ebx
// 004f69c3  59                   pop ecx
// 004f69c4  c21000               ret 0x10
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?FixUnderflow@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAE_NHPAU?$Page@IPAUInternalPacket@@$0CA@@2@IPAUReturnAction@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
