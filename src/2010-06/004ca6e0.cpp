// roc 2010-06 004ca6e0  unit: RBX::Network::Players  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ca6e0
//
// 004ca6e0  6aff                 push -1
// 004ca6e2  684b1d9a00           push 0x9a1d4b
// 004ca6e7  64a100000000         mov eax, dword ptr fs:[0]
// 004ca6ed  50                   push eax
// 004ca6ee  64892500000000       mov dword ptr fs:[0], esp
// 004ca6f5  51                   push ecx
// 004ca6f6  53                   push ebx
// 004ca6f7  56                   push esi
// 004ca6f8  57                   push edi
// 004ca6f9  6a18                 push 0x18
// 004ca6fb  8bf9                 mov edi, ecx
// 004ca6fd  e89ed22d00           call 0x7a79a0
// 004ca702  83c404               add esp, 4
// 004ca705  8944240c             mov dword ptr [esp + 0xc], eax
// 004ca709  33f6                 xor esi, esi
// 004ca70b  89742418             mov dword ptr [esp + 0x18], esi
// 004ca70f  3bc6                 cmp eax, esi
// 004ca711  740e                 je 0x4ca721
// 004ca713  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004ca717  51                   push ecx
// 004ca718  8bc8                 mov ecx, eax
// 004ca71a  e8e1c0f6ff           call 0x436800
// 004ca71f  8bf0                 mov esi, eax
// 004ca721  8d5f04               lea ebx, [edi + 4]
// 004ca724  56                   push esi
// 004ca725  8bcb                 mov ecx, ebx
// 004ca727  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004ca72f  8937                 mov dword ptr [edi], esi
// 004ca731  e82ae2ffff           call 0x4c8960
// 004ca736  56                   push esi
// 004ca737  56                   push esi
// 004ca738  53                   push ebx
// 004ca739  e8729ef8ff           call 0x4545b0
// 004ca73e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004ca742  83c40c               add esp, 0xc
// 004ca745  8bc7                 mov eax, edi
// 004ca747  5f                   pop edi
// 004ca748  5e                   pop esi
// 004ca749  5b                   pop ebx
// 004ca74a  64890d00000000       mov dword ptr fs:[0], ecx
// 004ca751  83c410               add esp, 0x10
// 004ca754  c20400               ret 4
// library rbxgs/v8datamodel\Selection.cpp (function ??0?$CopyOnWrite@V?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@RBX@@QAE@ABV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
