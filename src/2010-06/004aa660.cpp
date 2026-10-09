// roc 2010-06 004aa660  unit: RBX::Network::Player  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004aa660
//
// 004aa660  55                   push ebp
// 004aa661  8bec                 mov ebp, esp
// 004aa663  6aff                 push -1
// 004aa665  68e0879800           push 0x9887e0
// 004aa66a  64a100000000         mov eax, dword ptr fs:[0]
// 004aa670  50                   push eax
// 004aa671  64892500000000       mov dword ptr fs:[0], esp
// 004aa678  83ec08               sub esp, 8
// 004aa67b  53                   push ebx
// 004aa67c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 004aa67f  33c0                 xor eax, eax
// 004aa681  56                   push esi
// 004aa682  8bf1                 mov esi, ecx
// 004aa684  57                   push edi
// 004aa685  8965f0               mov dword ptr [ebp - 0x10], esp
// 004aa688  8975ec               mov dword ptr [ebp - 0x14], esi
// 004aa68b  89460c               mov dword ptr [esi + 0xc], eax
// 004aa68e  894610               mov dword ptr [esi + 0x10], eax
// 004aa691  894614               mov dword ptr [esi + 0x14], eax
// 004aa694  3bd8                 cmp ebx, eax
// 004aa696  744d                 je 0x4aa6e5
// 004aa698  81fbffffff3f         cmp ebx, 0x3fffffff
// 004aa69e  7605                 jbe 0x4aa6a5
// 004aa6a0  e84b97f7ff           call 0x423df0
// 004aa6a5  50                   push eax
// 004aa6a6  53                   push ebx
// 004aa6a7  e864ac4200           call 0x8d5310
// 004aa6ac  8bf8                 mov edi, eax
// 004aa6ae  c6450800             mov byte ptr [ebp + 8], 0
// 004aa6b2  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004aa6b5  8b5508               mov edx, dword ptr [ebp + 8]
// 004aa6b8  51                   push ecx
// 004aa6b9  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004aa6bc  8d049f               lea eax, [edi + ebx*4]
// 004aa6bf  52                   push edx
// 004aa6c0  894614               mov dword ptr [esi + 0x14], eax
// 004aa6c3  8d4608               lea eax, [esi + 8]
// 004aa6c6  50                   push eax
// 004aa6c7  51                   push ecx
// 004aa6c8  53                   push ebx
// 004aa6c9  57                   push edi
// 004aa6ca  897e0c               mov dword ptr [esi + 0xc], edi
// 004aa6cd  897e10               mov dword ptr [esi + 0x10], edi
// 004aa6d0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004aa6d7  e8e4cfffff           call 0x4a76c0
// 004aa6dc  8d149f               lea edx, [edi + ebx*4]
// 004aa6df  83c420               add esp, 0x20
// 004aa6e2  895610               mov dword ptr [esi + 0x10], edx
// 004aa6e5  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004aa6e8  5f                   pop edi
// 004aa6e9  5e                   pop esi
// 004aa6ea  64890d00000000       mov dword ptr fs:[0], ecx
// 004aa6f1  5b                   pop ebx
// 004aa6f2  8be5                 mov esp, ebp
// 004aa6f4  5d                   pop ebp
// 004aa6f5  c20800               ret 8
// library openrbx-client/App\util\RunStateOwner.cpp (function ?_Construct_n@?$vector@Vany@boost@@V?$allocator@Vany@boost@@@std@@@std@@QAEXIABVany@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
