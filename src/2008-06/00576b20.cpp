// roc 2008-06 00576b20  unit: RBX::DataModel  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00576b20
//
// 00576b20  6aff                 push -1
// 00576b22  68abfd7b00           push 0x7bfdab
// 00576b27  64a100000000         mov eax, dword ptr fs:[0]
// 00576b2d  50                   push eax
// 00576b2e  64892500000000       mov dword ptr fs:[0], esp
// 00576b35  51                   push ecx
// 00576b36  8b442418             mov eax, dword ptr [esp + 0x18]
// 00576b3a  53                   push ebx
// 00576b3b  55                   push ebp
// 00576b3c  8be9                 mov ebp, ecx
// 00576b3e  56                   push esi
// 00576b3f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00576b43  50                   push eax
// 00576b44  8d5d04               lea ebx, [ebp + 4]
// 00576b47  56                   push esi
// 00576b48  8bcb                 mov ecx, ebx
// 00576b4a  896c2414             mov dword ptr [esp + 0x14], ebp
// 00576b4e  897500               mov dword ptr [ebp], esi
// 00576b51  e86afbffff           call 0x5766c0
// 00576b56  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00576b5e  85f6                 test esi, esi
// 00576b60  7453                 je 0x576bb5
// 00576b62  57                   push edi
// 00576b63  8dbee4000000         lea edi, [esi + 0xe4]
// 00576b69  85ff                 test edi, edi
// 00576b6b  7431                 je 0x576b9e
// 00576b6d  8937                 mov dword ptr [edi], esi
// 00576b6f  8b33                 mov esi, dword ptr [ebx]
// 00576b71  85f6                 test esi, esi
// 00576b73  740c                 je 0x576b81
// 00576b75  8d4e08               lea ecx, [esi + 8]
// 00576b78  ba01000000           mov edx, 1
// 00576b7d  f00fc111             lock xadd dword ptr [ecx], edx
// 00576b81  8b4f04               mov ecx, dword ptr [edi + 4]
// 00576b84  85c9                 test ecx, ecx
// 00576b86  7413                 je 0x576b9b
// 00576b88  8d4108               lea eax, [ecx + 8]
// 00576b8b  83caff               or edx, 0xffffffff
// 00576b8e  f00fc110             lock xadd dword ptr [eax], edx
// 00576b92  7507                 jne 0x576b9b
// 00576b94  8b01                 mov eax, dword ptr [ecx]
// 00576b96  8b5008               mov edx, dword ptr [eax + 8]
// 00576b99  ffd2                 call edx
// 00576b9b  897704               mov dword ptr [edi + 4], esi
// 00576b9e  5f                   pop edi
// 00576b9f  5e                   pop esi
// 00576ba0  8bc5                 mov eax, ebp
// 00576ba2  5d                   pop ebp
// 00576ba3  5b                   pop ebx
// 00576ba4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00576ba8  64890d00000000       mov dword ptr fs:[0], ecx
// 00576baf  83c410               add esp, 0x10
// 00576bb2  c20800               ret 8
// 00576bb5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00576bb9  5e                   pop esi
// 00576bba  8bc5                 mov eax, ebp
// 00576bbc  5d                   pop ebp
// 00576bbd  5b                   pop ebx
// 00576bbe  64890d00000000       mov dword ptr fs:[0], ecx
// 00576bc5  83c410               add esp, 0x10
// 00576bc8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
