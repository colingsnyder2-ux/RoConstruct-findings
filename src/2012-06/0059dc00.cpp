// roc 2012-06 0059dc00  unit: VAuthoringSettings::?$FactoryProduct  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059dc00
//
// 0059dc00  6aff                 push -1
// 0059dc02  689b16ab00           push 0xab169b
// 0059dc07  64a100000000         mov eax, dword ptr fs:[0]
// 0059dc0d  50                   push eax
// 0059dc0e  64892500000000       mov dword ptr fs:[0], esp
// 0059dc15  51                   push ecx
// 0059dc16  56                   push esi
// 0059dc17  8bf1                 mov esi, ecx
// 0059dc19  57                   push edi
// 0059dc1a  33ff                 xor edi, edi
// 0059dc1c  89742408             mov dword ptr [esp + 8], esi
// 0059dc20  897e1c               mov dword ptr [esi + 0x1c], edi
// 0059dc23  897e10               mov dword ptr [esi + 0x10], edi
// 0059dc26  897e14               mov dword ptr [esi + 0x14], edi
// 0059dc29  897e18               mov dword ptr [esi + 0x18], edi
// 0059dc2c  897e08               mov dword ptr [esi + 8], edi
// 0059dc2f  897e0c               mov dword ptr [esi + 0xc], edi
// 0059dc32  893e                 mov dword ptr [esi], edi
// 0059dc34  897e04               mov dword ptr [esi + 4], edi
// 0059dc37  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0059dc3a  897c2414             mov dword ptr [esp + 0x14], edi
// 0059dc3e  3bc7                 cmp eax, edi
// 0059dc40  7434                 je 0x59dc76
// 0059dc42  83f820               cmp eax, 0x20
// 0059dc45  7629                 jbe 0x59dc70
// 0059dc47  8b4610               mov eax, dword ptr [esi + 0x10]
// 0059dc4a  3bc7                 cmp eax, edi
// 0059dc4c  741f                 je 0x59dc6d
// 0059dc4e  8b48fc               mov ecx, dword ptr [eax - 4]
// 0059dc51  53                   push ebx
// 0059dc52  8d58fc               lea ebx, [eax - 4]
// 0059dc55  6890a75900           push 0x59a790
// 0059dc5a  51                   push ecx
// 0059dc5b  6a10                 push 0x10
// 0059dc5d  50                   push eax
// 0059dc5e  e80d563e00           call 0x983270
// 0059dc63  53                   push ebx
// 0059dc64  e851473e00           call 0x9823ba
// 0059dc69  83c404               add esp, 4
// 0059dc6c  5b                   pop ebx
// 0059dc6d  897e1c               mov dword ptr [esi + 0x1c], edi
// 0059dc70  897e14               mov dword ptr [esi + 0x14], edi
// 0059dc73  897e18               mov dword ptr [esi + 0x18], edi
// 0059dc76  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059dc7a  5f                   pop edi
// 0059dc7b  8bc6                 mov eax, esi
// 0059dc7d  5e                   pop esi
// 0059dc7e  64890d00000000       mov dword ptr fs:[0], ecx
// 0059dc85  83c410               add esp, 0x10
// 0059dc88  c3                   ret 
// library rbx2016-raknet/ReliabilityLayer.cpp (function ??0BPSTracker@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
