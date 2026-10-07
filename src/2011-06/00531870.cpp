// roc 2011-06 00531870  unit: seg_00530000  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00531870
//
// 00531870  6aff                 push -1
// 00531872  680be69d00           push 0x9de60b
// 00531877  64a100000000         mov eax, dword ptr fs:[0]
// 0053187d  50                   push eax
// 0053187e  64892500000000       mov dword ptr fs:[0], esp
// 00531885  51                   push ecx
// 00531886  56                   push esi
// 00531887  8bf1                 mov esi, ecx
// 00531889  57                   push edi
// 0053188a  33ff                 xor edi, edi
// 0053188c  89742408             mov dword ptr [esp + 8], esi
// 00531890  897e1c               mov dword ptr [esi + 0x1c], edi
// 00531893  897e10               mov dword ptr [esi + 0x10], edi
// 00531896  897e14               mov dword ptr [esi + 0x14], edi
// 00531899  897e18               mov dword ptr [esi + 0x18], edi
// 0053189c  897e08               mov dword ptr [esi + 8], edi
// 0053189f  897e0c               mov dword ptr [esi + 0xc], edi
// 005318a2  893e                 mov dword ptr [esi], edi
// 005318a4  897e04               mov dword ptr [esi + 4], edi
// 005318a7  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005318aa  897c2414             mov dword ptr [esp + 0x14], edi
// 005318ae  3bc7                 cmp eax, edi
// 005318b0  7434                 je 0x5318e6
// 005318b2  83f820               cmp eax, 0x20
// 005318b5  7629                 jbe 0x5318e0
// 005318b7  8b4610               mov eax, dword ptr [esi + 0x10]
// 005318ba  3bc7                 cmp eax, edi
// 005318bc  741f                 je 0x5318dd
// 005318be  8b48fc               mov ecx, dword ptr [eax - 4]
// 005318c1  53                   push ebx
// 005318c2  8d58fc               lea ebx, [eax - 4]
// 005318c5  6840b68600           push 0x86b640
// 005318ca  51                   push ecx
// 005318cb  6a10                 push 0x10
// 005318cd  50                   push eax
// 005318ce  e805992d00           call 0x80b1d8
// 005318d3  53                   push ebx
// 005318d4  e82b8a2d00           call 0x80a304
// 005318d9  83c404               add esp, 4
// 005318dc  5b                   pop ebx
// 005318dd  897e1c               mov dword ptr [esi + 0x1c], edi
// 005318e0  897e14               mov dword ptr [esi + 0x14], edi
// 005318e3  897e18               mov dword ptr [esi + 0x18], edi
// 005318e6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005318ea  5f                   pop edi
// 005318eb  8bc6                 mov eax, esi
// 005318ed  5e                   pop esi
// 005318ee  64890d00000000       mov dword ptr fs:[0], ecx
// 005318f5  83c410               add esp, 0x10
// 005318f8  c3                   ret 
// library rbx2016-raknet/ReliabilityLayer.cpp (function ??0BPSTracker@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
