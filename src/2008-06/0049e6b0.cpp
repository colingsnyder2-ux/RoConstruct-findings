// roc 2008-06 0049e6b0  unit: RBX::Network::AbuseReporter::Udata::?$sp_counted_impl_p  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049e6b0
//
// 0049e6b0  6aff                 push -1
// 0049e6b2  68abfd7b00           push 0x7bfdab
// 0049e6b7  64a100000000         mov eax, dword ptr fs:[0]
// 0049e6bd  50                   push eax
// 0049e6be  64892500000000       mov dword ptr fs:[0], esp
// 0049e6c5  51                   push ecx
// 0049e6c6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0049e6ca  53                   push ebx
// 0049e6cb  55                   push ebp
// 0049e6cc  8be9                 mov ebp, ecx
// 0049e6ce  56                   push esi
// 0049e6cf  8b742420             mov esi, dword ptr [esp + 0x20]
// 0049e6d3  50                   push eax
// 0049e6d4  8d5d04               lea ebx, [ebp + 4]
// 0049e6d7  56                   push esi
// 0049e6d8  8bcb                 mov ecx, ebx
// 0049e6da  896c2414             mov dword ptr [esp + 0x14], ebp
// 0049e6de  897500               mov dword ptr [ebp], esi
// 0049e6e1  e8aafeffff           call 0x49e590
// 0049e6e6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0049e6ee  85f6                 test esi, esi
// 0049e6f0  7453                 je 0x49e745
// 0049e6f2  57                   push edi
// 0049e6f3  8dbee4000000         lea edi, [esi + 0xe4]
// 0049e6f9  85ff                 test edi, edi
// 0049e6fb  7431                 je 0x49e72e
// 0049e6fd  8937                 mov dword ptr [edi], esi
// 0049e6ff  8b33                 mov esi, dword ptr [ebx]
// 0049e701  85f6                 test esi, esi
// 0049e703  740c                 je 0x49e711
// 0049e705  8d4e08               lea ecx, [esi + 8]
// 0049e708  ba01000000           mov edx, 1
// 0049e70d  f00fc111             lock xadd dword ptr [ecx], edx
// 0049e711  8b4f04               mov ecx, dword ptr [edi + 4]
// 0049e714  85c9                 test ecx, ecx
// 0049e716  7413                 je 0x49e72b
// 0049e718  8d4108               lea eax, [ecx + 8]
// 0049e71b  83caff               or edx, 0xffffffff
// 0049e71e  f00fc110             lock xadd dword ptr [eax], edx
// 0049e722  7507                 jne 0x49e72b
// 0049e724  8b01                 mov eax, dword ptr [ecx]
// 0049e726  8b5008               mov edx, dword ptr [eax + 8]
// 0049e729  ffd2                 call edx
// 0049e72b  897704               mov dword ptr [edi + 4], esi
// 0049e72e  5f                   pop edi
// 0049e72f  5e                   pop esi
// 0049e730  8bc5                 mov eax, ebp
// 0049e732  5d                   pop ebp
// 0049e733  5b                   pop ebx
// 0049e734  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049e738  64890d00000000       mov dword ptr fs:[0], ecx
// 0049e73f  83c410               add esp, 0x10
// 0049e742  c20800               ret 8
// 0049e745  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049e749  5e                   pop esi
// 0049e74a  8bc5                 mov eax, ebp
// 0049e74c  5d                   pop ebp
// 0049e74d  5b                   pop ebx
// 0049e74e  64890d00000000       mov dword ptr fs:[0], ecx
// 0049e755  83c410               add esp, 0x10
// 0049e758  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
