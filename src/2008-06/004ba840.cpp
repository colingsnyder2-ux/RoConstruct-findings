// roc 2008-06 004ba840  unit: RBX::Network::IdSerializer  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ba840
//
// 004ba840  6aff                 push -1
// 004ba842  68a3927c00           push 0x7c92a3
// 004ba847  64a100000000         mov eax, dword ptr fs:[0]
// 004ba84d  50                   push eax
// 004ba84e  64892500000000       mov dword ptr fs:[0], esp
// 004ba855  83ec0c               sub esp, 0xc
// 004ba858  53                   push ebx
// 004ba859  33db                 xor ebx, ebx
// 004ba85b  56                   push esi
// 004ba85c  8bf1                 mov esi, ecx
// 004ba85e  89742410             mov dword ptr [esp + 0x10], esi
// 004ba862  895e08               mov dword ptr [esi + 8], ebx
// 004ba865  891e                 mov dword ptr [esi], ebx
// 004ba867  895e04               mov dword ptr [esi + 4], ebx
// 004ba86a  885e14               mov byte ptr [esi + 0x14], bl
// 004ba86d  6804080000           push 0x804
// 004ba872  895c2420             mov dword ptr [esp + 0x20], ebx
// 004ba876  e8a5601e00           call 0x6a0920
// 004ba87b  83c404               add esp, 4
// 004ba87e  8944240c             mov dword ptr [esp + 0xc], eax
// 004ba882  c644241c01           mov byte ptr [esp + 0x1c], 1
// 004ba887  3bc3                 cmp eax, ebx
// 004ba889  7409                 je 0x4ba894
// 004ba88b  8bc8                 mov ecx, eax
// 004ba88d  e87e5f0300           call 0x4f0810
// 004ba892  eb02                 jmp 0x4ba896
// 004ba894  33c0                 xor eax, eax
// 004ba896  6848c79300           push 0x93c748
// 004ba89b  8bc8                 mov ecx, eax
// 004ba89d  885c2420             mov byte ptr [esp + 0x20], bl
// 004ba8a1  8944240c             mov dword ptr [esp + 0xc], eax
// 004ba8a5  e8363a0100           call 0x4ce2e0
// 004ba8aa  8d442408             lea eax, [esp + 8]
// 004ba8ae  50                   push eax
// 004ba8af  8d4c2410             lea ecx, [esp + 0x10]
// 004ba8b3  51                   push ecx
// 004ba8b4  8bce                 mov ecx, esi
// 004ba8b6  895c2414             mov dword ptr [esp + 0x14], ebx
// 004ba8ba  e8d1feffff           call 0x4ba790
// 004ba8bf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ba8c3  8bc6                 mov eax, esi
// 004ba8c5  5e                   pop esi
// 004ba8c6  5b                   pop ebx
// 004ba8c7  64890d00000000       mov dword ptr fs:[0], ecx
// 004ba8ce  83c418               add esp, 0x18
// 004ba8d1  c3                   ret 
// library rbxgs-raknet/StringCompressor.cpp (function ??0StringCompressor@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet StringCompressor.cpp
