// roc 2008-06 0040c2f0  unit: RBX::Reflection::Metadata::VEvents::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040c2f0
//
// 0040c2f0  6aff                 push -1
// 0040c2f2  68abfd7b00           push 0x7bfdab
// 0040c2f7  64a100000000         mov eax, dword ptr fs:[0]
// 0040c2fd  50                   push eax
// 0040c2fe  64892500000000       mov dword ptr fs:[0], esp
// 0040c305  51                   push ecx
// 0040c306  8b442418             mov eax, dword ptr [esp + 0x18]
// 0040c30a  53                   push ebx
// 0040c30b  55                   push ebp
// 0040c30c  8be9                 mov ebp, ecx
// 0040c30e  56                   push esi
// 0040c30f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0040c313  50                   push eax
// 0040c314  8d5d04               lea ebx, [ebp + 4]
// 0040c317  56                   push esi
// 0040c318  8bcb                 mov ecx, ebx
// 0040c31a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0040c31e  897500               mov dword ptr [ebp], esi
// 0040c321  e83affffff           call 0x40c260
// 0040c326  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0040c32e  85f6                 test esi, esi
// 0040c330  7453                 je 0x40c385
// 0040c332  57                   push edi
// 0040c333  8dbee4000000         lea edi, [esi + 0xe4]
// 0040c339  85ff                 test edi, edi
// 0040c33b  7431                 je 0x40c36e
// 0040c33d  8937                 mov dword ptr [edi], esi
// 0040c33f  8b33                 mov esi, dword ptr [ebx]
// 0040c341  85f6                 test esi, esi
// 0040c343  740c                 je 0x40c351
// 0040c345  8d4e08               lea ecx, [esi + 8]
// 0040c348  ba01000000           mov edx, 1
// 0040c34d  f00fc111             lock xadd dword ptr [ecx], edx
// 0040c351  8b4f04               mov ecx, dword ptr [edi + 4]
// 0040c354  85c9                 test ecx, ecx
// 0040c356  7413                 je 0x40c36b
// 0040c358  8d4108               lea eax, [ecx + 8]
// 0040c35b  83caff               or edx, 0xffffffff
// 0040c35e  f00fc110             lock xadd dword ptr [eax], edx
// 0040c362  7507                 jne 0x40c36b
// 0040c364  8b01                 mov eax, dword ptr [ecx]
// 0040c366  8b5008               mov edx, dword ptr [eax + 8]
// 0040c369  ffd2                 call edx
// 0040c36b  897704               mov dword ptr [edi + 4], esi
// 0040c36e  5f                   pop edi
// 0040c36f  5e                   pop esi
// 0040c370  8bc5                 mov eax, ebp
// 0040c372  5d                   pop ebp
// 0040c373  5b                   pop ebx
// 0040c374  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040c378  64890d00000000       mov dword ptr fs:[0], ecx
// 0040c37f  83c410               add esp, 0x10
// 0040c382  c20800               ret 8
// 0040c385  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040c389  5e                   pop esi
// 0040c38a  8bc5                 mov eax, ebp
// 0040c38c  5d                   pop ebp
// 0040c38d  5b                   pop ebx
// 0040c38e  64890d00000000       mov dword ptr fs:[0], ecx
// 0040c395  83c410               add esp, 0x10
// 0040c398  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
