// roc 2009-06 004cb030  unit: RBX::Network::Players  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004cb030
//
// 004cb030  6aff                 push -1
// 004cb032  687b9c8600           push 0x869c7b
// 004cb037  64a100000000         mov eax, dword ptr fs:[0]
// 004cb03d  50                   push eax
// 004cb03e  64892500000000       mov dword ptr fs:[0], esp
// 004cb045  51                   push ecx
// 004cb046  53                   push ebx
// 004cb047  56                   push esi
// 004cb048  57                   push edi
// 004cb049  6a18                 push 0x18
// 004cb04b  8bf9                 mov edi, ecx
// 004cb04d  e8e6d92400           call 0x718a38
// 004cb052  83c404               add esp, 4
// 004cb055  8944240c             mov dword ptr [esp + 0xc], eax
// 004cb059  33f6                 xor esi, esi
// 004cb05b  89742418             mov dword ptr [esp + 0x18], esi
// 004cb05f  3bc6                 cmp eax, esi
// 004cb061  740e                 je 0x4cb071
// 004cb063  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004cb067  51                   push ecx
// 004cb068  8bc8                 mov ecx, eax
// 004cb06a  e8d1c81600           call 0x637940
// 004cb06f  8bf0                 mov esi, eax
// 004cb071  8d5f04               lea ebx, [edi + 4]
// 004cb074  56                   push esi
// 004cb075  8bcb                 mov ecx, ebx
// 004cb077  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004cb07f  8937                 mov dword ptr [edi], esi
// 004cb081  e81af1ffff           call 0x4ca1a0
// 004cb086  56                   push esi
// 004cb087  56                   push esi
// 004cb088  53                   push ebx
// 004cb089  e852991a00           call 0x6749e0
// 004cb08e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004cb092  83c40c               add esp, 0xc
// 004cb095  8bc7                 mov eax, edi
// 004cb097  5f                   pop edi
// 004cb098  5e                   pop esi
// 004cb099  5b                   pop ebx
// 004cb09a  64890d00000000       mov dword ptr fs:[0], ecx
// 004cb0a1  83c410               add esp, 0x10
// 004cb0a4  c20400               ret 4
// library rbxgs/v8datamodel\Selection.cpp (function ??0?$CopyOnWrite@V?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@RBX@@QAE@ABV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
