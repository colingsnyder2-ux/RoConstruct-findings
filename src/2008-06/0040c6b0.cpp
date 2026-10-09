// roc 2008-06 0040c6b0  unit: RBX::Reflection::Metadata::VMember::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040c6b0
//
// 0040c6b0  6aff                 push -1
// 0040c6b2  68abfd7b00           push 0x7bfdab
// 0040c6b7  64a100000000         mov eax, dword ptr fs:[0]
// 0040c6bd  50                   push eax
// 0040c6be  64892500000000       mov dword ptr fs:[0], esp
// 0040c6c5  51                   push ecx
// 0040c6c6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0040c6ca  53                   push ebx
// 0040c6cb  55                   push ebp
// 0040c6cc  8be9                 mov ebp, ecx
// 0040c6ce  56                   push esi
// 0040c6cf  8b742420             mov esi, dword ptr [esp + 0x20]
// 0040c6d3  50                   push eax
// 0040c6d4  8d5d04               lea ebx, [ebp + 4]
// 0040c6d7  56                   push esi
// 0040c6d8  8bcb                 mov ecx, ebx
// 0040c6da  896c2414             mov dword ptr [esp + 0x14], ebp
// 0040c6de  897500               mov dword ptr [ebp], esi
// 0040c6e1  e83affffff           call 0x40c620
// 0040c6e6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0040c6ee  85f6                 test esi, esi
// 0040c6f0  7453                 je 0x40c745
// 0040c6f2  57                   push edi
// 0040c6f3  8dbee4000000         lea edi, [esi + 0xe4]
// 0040c6f9  85ff                 test edi, edi
// 0040c6fb  7431                 je 0x40c72e
// 0040c6fd  8937                 mov dword ptr [edi], esi
// 0040c6ff  8b33                 mov esi, dword ptr [ebx]
// 0040c701  85f6                 test esi, esi
// 0040c703  740c                 je 0x40c711
// 0040c705  8d4e08               lea ecx, [esi + 8]
// 0040c708  ba01000000           mov edx, 1
// 0040c70d  f00fc111             lock xadd dword ptr [ecx], edx
// 0040c711  8b4f04               mov ecx, dword ptr [edi + 4]
// 0040c714  85c9                 test ecx, ecx
// 0040c716  7413                 je 0x40c72b
// 0040c718  8d4108               lea eax, [ecx + 8]
// 0040c71b  83caff               or edx, 0xffffffff
// 0040c71e  f00fc110             lock xadd dword ptr [eax], edx
// 0040c722  7507                 jne 0x40c72b
// 0040c724  8b01                 mov eax, dword ptr [ecx]
// 0040c726  8b5008               mov edx, dword ptr [eax + 8]
// 0040c729  ffd2                 call edx
// 0040c72b  897704               mov dword ptr [edi + 4], esi
// 0040c72e  5f                   pop edi
// 0040c72f  5e                   pop esi
// 0040c730  8bc5                 mov eax, ebp
// 0040c732  5d                   pop ebp
// 0040c733  5b                   pop ebx
// 0040c734  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040c738  64890d00000000       mov dword ptr fs:[0], ecx
// 0040c73f  83c410               add esp, 0x10
// 0040c742  c20800               ret 8
// 0040c745  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040c749  5e                   pop esi
// 0040c74a  8bc5                 mov eax, ebp
// 0040c74c  5d                   pop ebp
// 0040c74d  5b                   pop ebx
// 0040c74e  64890d00000000       mov dword ptr fs:[0], ecx
// 0040c755  83c410               add esp, 0x10
// 0040c758  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
