// roc 2009-12 0051ca20  unit: RBX::Network::Players  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0051ca20
//
// 0051ca20  6aff                 push -1
// 0051ca22  68eba59400           push 0x94a5eb
// 0051ca27  64a100000000         mov eax, dword ptr fs:[0]
// 0051ca2d  50                   push eax
// 0051ca2e  64892500000000       mov dword ptr fs:[0], esp
// 0051ca35  51                   push ecx
// 0051ca36  53                   push ebx
// 0051ca37  56                   push esi
// 0051ca38  57                   push edi
// 0051ca39  6a18                 push 0x18
// 0051ca3b  8bf9                 mov edi, ecx
// 0051ca3d  e81e6e2d00           call 0x7f3860
// 0051ca42  83c404               add esp, 4
// 0051ca45  8944240c             mov dword ptr [esp + 0xc], eax
// 0051ca49  33f6                 xor esi, esi
// 0051ca4b  89742418             mov dword ptr [esp + 0x18], esi
// 0051ca4f  3bc6                 cmp eax, esi
// 0051ca51  740e                 je 0x51ca61
// 0051ca53  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0051ca57  51                   push ecx
// 0051ca58  8bc8                 mov ecx, eax
// 0051ca5a  e80187f1ff           call 0x435160
// 0051ca5f  8bf0                 mov esi, eax
// 0051ca61  8d5f04               lea ebx, [edi + 4]
// 0051ca64  56                   push esi
// 0051ca65  8bcb                 mov ecx, ebx
// 0051ca67  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0051ca6f  8937                 mov dword ptr [edi], esi
// 0051ca71  e81ae3ffff           call 0x51ad90
// 0051ca76  56                   push esi
// 0051ca77  56                   push esi
// 0051ca78  53                   push ebx
// 0051ca79  e812803300           call 0x854a90
// 0051ca7e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0051ca82  83c40c               add esp, 0xc
// 0051ca85  8bc7                 mov eax, edi
// 0051ca87  5f                   pop edi
// 0051ca88  5e                   pop esi
// 0051ca89  5b                   pop ebx
// 0051ca8a  64890d00000000       mov dword ptr fs:[0], ecx
// 0051ca91  83c410               add esp, 0x10
// 0051ca94  c20400               ret 4
// library rbxgs/v8datamodel\Selection.cpp (function ??0?$CopyOnWrite@V?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@RBX@@QAE@ABV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
