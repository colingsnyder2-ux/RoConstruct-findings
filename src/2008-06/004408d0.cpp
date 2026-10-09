// roc 2008-06 004408d0  unit: RBX::Soundscape::VSoundId::?$ContentItem  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004408d0
//
// 004408d0  6aff                 push -1
// 004408d2  68abfd7b00           push 0x7bfdab
// 004408d7  64a100000000         mov eax, dword ptr fs:[0]
// 004408dd  50                   push eax
// 004408de  64892500000000       mov dword ptr fs:[0], esp
// 004408e5  51                   push ecx
// 004408e6  8b442418             mov eax, dword ptr [esp + 0x18]
// 004408ea  53                   push ebx
// 004408eb  55                   push ebp
// 004408ec  8be9                 mov ebp, ecx
// 004408ee  56                   push esi
// 004408ef  8b742420             mov esi, dword ptr [esp + 0x20]
// 004408f3  50                   push eax
// 004408f4  8d5d04               lea ebx, [ebp + 4]
// 004408f7  56                   push esi
// 004408f8  8bcb                 mov ecx, ebx
// 004408fa  896c2414             mov dword ptr [esp + 0x14], ebp
// 004408fe  897500               mov dword ptr [ebp], esi
// 00440901  e83affffff           call 0x440840
// 00440906  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0044090e  85f6                 test esi, esi
// 00440910  7453                 je 0x440965
// 00440912  57                   push edi
// 00440913  8dbee4000000         lea edi, [esi + 0xe4]
// 00440919  85ff                 test edi, edi
// 0044091b  7431                 je 0x44094e
// 0044091d  8937                 mov dword ptr [edi], esi
// 0044091f  8b33                 mov esi, dword ptr [ebx]
// 00440921  85f6                 test esi, esi
// 00440923  740c                 je 0x440931
// 00440925  8d4e08               lea ecx, [esi + 8]
// 00440928  ba01000000           mov edx, 1
// 0044092d  f00fc111             lock xadd dword ptr [ecx], edx
// 00440931  8b4f04               mov ecx, dword ptr [edi + 4]
// 00440934  85c9                 test ecx, ecx
// 00440936  7413                 je 0x44094b
// 00440938  8d4108               lea eax, [ecx + 8]
// 0044093b  83caff               or edx, 0xffffffff
// 0044093e  f00fc110             lock xadd dword ptr [eax], edx
// 00440942  7507                 jne 0x44094b
// 00440944  8b01                 mov eax, dword ptr [ecx]
// 00440946  8b5008               mov edx, dword ptr [eax + 8]
// 00440949  ffd2                 call edx
// 0044094b  897704               mov dword ptr [edi + 4], esi
// 0044094e  5f                   pop edi
// 0044094f  5e                   pop esi
// 00440950  8bc5                 mov eax, ebp
// 00440952  5d                   pop ebp
// 00440953  5b                   pop ebx
// 00440954  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00440958  64890d00000000       mov dword ptr fs:[0], ecx
// 0044095f  83c410               add esp, 0x10
// 00440962  c20800               ret 8
// 00440965  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00440969  5e                   pop esi
// 0044096a  8bc5                 mov eax, ebp
// 0044096c  5d                   pop ebp
// 0044096d  5b                   pop ebx
// 0044096e  64890d00000000       mov dword ptr fs:[0], ecx
// 00440975  83c410               add esp, 0x10
// 00440978  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
