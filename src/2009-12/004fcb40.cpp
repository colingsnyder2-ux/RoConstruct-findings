// roc 2009-12 004fcb40  unit: RBX::Network::Player  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004fcb40
//
// 004fcb40  55                   push ebp
// 004fcb41  8bec                 mov ebp, esp
// 004fcb43  6aff                 push -1
// 004fcb45  68b0609300           push 0x9360b0
// 004fcb4a  64a100000000         mov eax, dword ptr fs:[0]
// 004fcb50  50                   push eax
// 004fcb51  64892500000000       mov dword ptr fs:[0], esp
// 004fcb58  83ec08               sub esp, 8
// 004fcb5b  53                   push ebx
// 004fcb5c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 004fcb5f  33c0                 xor eax, eax
// 004fcb61  56                   push esi
// 004fcb62  8bf1                 mov esi, ecx
// 004fcb64  57                   push edi
// 004fcb65  8965f0               mov dword ptr [ebp - 0x10], esp
// 004fcb68  8975ec               mov dword ptr [ebp - 0x14], esi
// 004fcb6b  89460c               mov dword ptr [esi + 0xc], eax
// 004fcb6e  894610               mov dword ptr [esi + 0x10], eax
// 004fcb71  894614               mov dword ptr [esi + 0x14], eax
// 004fcb74  3bd8                 cmp ebx, eax
// 004fcb76  744d                 je 0x4fcbc5
// 004fcb78  81fbffffff3f         cmp ebx, 0x3fffffff
// 004fcb7e  7605                 jbe 0x4fcb85
// 004fcb80  e8db55f4ff           call 0x442160
// 004fcb85  50                   push eax
// 004fcb86  53                   push ebx
// 004fcb87  e8b43df3ff           call 0x430940
// 004fcb8c  8bf8                 mov edi, eax
// 004fcb8e  c6450800             mov byte ptr [ebp + 8], 0
// 004fcb92  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004fcb95  8b5508               mov edx, dword ptr [ebp + 8]
// 004fcb98  51                   push ecx
// 004fcb99  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004fcb9c  8d049f               lea eax, [edi + ebx*4]
// 004fcb9f  52                   push edx
// 004fcba0  894614               mov dword ptr [esi + 0x14], eax
// 004fcba3  8d4608               lea eax, [esi + 8]
// 004fcba6  50                   push eax
// 004fcba7  51                   push ecx
// 004fcba8  53                   push ebx
// 004fcba9  57                   push edi
// 004fcbaa  897e0c               mov dword ptr [esi + 0xc], edi
// 004fcbad  897e10               mov dword ptr [esi + 0x10], edi
// 004fcbb0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004fcbb7  e894cdffff           call 0x4f9950
// 004fcbbc  8d149f               lea edx, [edi + ebx*4]
// 004fcbbf  83c420               add esp, 0x20
// 004fcbc2  895610               mov dword ptr [esi + 0x10], edx
// 004fcbc5  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004fcbc8  5f                   pop edi
// 004fcbc9  5e                   pop esi
// 004fcbca  64890d00000000       mov dword ptr fs:[0], ecx
// 004fcbd1  5b                   pop ebx
// 004fcbd2  8be5                 mov esp, ebp
// 004fcbd4  5d                   pop ebp
// 004fcbd5  c20800               ret 8
// library openrbx-client/App\util\RunStateOwner.cpp (function ?_Construct_n@?$vector@Vany@boost@@V?$allocator@Vany@boost@@@std@@@std@@QAEXIABVany@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
