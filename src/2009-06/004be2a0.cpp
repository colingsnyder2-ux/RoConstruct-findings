// roc 2009-06 004be2a0  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::slot  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004be2a0
//
// 004be2a0  55                   push ebp
// 004be2a1  8bec                 mov ebp, esp
// 004be2a3  6aff                 push -1
// 004be2a5  68e0938500           push 0x8593e0
// 004be2aa  64a100000000         mov eax, dword ptr fs:[0]
// 004be2b0  50                   push eax
// 004be2b1  64892500000000       mov dword ptr fs:[0], esp
// 004be2b8  83ec08               sub esp, 8
// 004be2bb  53                   push ebx
// 004be2bc  8b5d08               mov ebx, dword ptr [ebp + 8]
// 004be2bf  33c0                 xor eax, eax
// 004be2c1  56                   push esi
// 004be2c2  8bf1                 mov esi, ecx
// 004be2c4  57                   push edi
// 004be2c5  8965f0               mov dword ptr [ebp - 0x10], esp
// 004be2c8  8975ec               mov dword ptr [ebp - 0x14], esi
// 004be2cb  89460c               mov dword ptr [esi + 0xc], eax
// 004be2ce  894610               mov dword ptr [esi + 0x10], eax
// 004be2d1  894614               mov dword ptr [esi + 0x14], eax
// 004be2d4  3bd8                 cmp ebx, eax
// 004be2d6  744d                 je 0x4be325
// 004be2d8  81fbffffff3f         cmp ebx, 0x3fffffff
// 004be2de  7605                 jbe 0x4be2e5
// 004be2e0  e87b20fdff           call 0x490360
// 004be2e5  50                   push eax
// 004be2e6  53                   push ebx
// 004be2e7  e814a71300           call 0x5f8a00
// 004be2ec  8bf8                 mov edi, eax
// 004be2ee  c6450800             mov byte ptr [ebp + 8], 0
// 004be2f2  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004be2f5  8b5508               mov edx, dword ptr [ebp + 8]
// 004be2f8  51                   push ecx
// 004be2f9  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004be2fc  8d049f               lea eax, [edi + ebx*4]
// 004be2ff  52                   push edx
// 004be300  894614               mov dword ptr [esi + 0x14], eax
// 004be303  8d4608               lea eax, [esi + 8]
// 004be306  50                   push eax
// 004be307  51                   push ecx
// 004be308  53                   push ebx
// 004be309  57                   push edi
// 004be30a  897e0c               mov dword ptr [esi + 0xc], edi
// 004be30d  897e10               mov dword ptr [esi + 0x10], edi
// 004be310  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004be317  e874fbffff           call 0x4bde90
// 004be31c  8d149f               lea edx, [edi + ebx*4]
// 004be31f  83c420               add esp, 0x20
// 004be322  895610               mov dword ptr [esi + 0x10], edx
// 004be325  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004be328  5f                   pop edi
// 004be329  5e                   pop esi
// 004be32a  64890d00000000       mov dword ptr fs:[0], ecx
// 004be331  5b                   pop ebx
// 004be332  8be5                 mov esp, ebp
// 004be334  5d                   pop ebp
// 004be335  c20800               ret 8
// library openrbx-client/App\util\RunStateOwner.cpp (function ?_Construct_n@?$vector@Vany@boost@@V?$allocator@Vany@boost@@@std@@@std@@QAEXIABVany@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
