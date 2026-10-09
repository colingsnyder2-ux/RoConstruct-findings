// roc 2008-06 006356d0  unit: RBX::N$1?sDoubleValue::V?$Value::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006356d0
//
// 006356d0  6aff                 push -1
// 006356d2  68abfd7b00           push 0x7bfdab
// 006356d7  64a100000000         mov eax, dword ptr fs:[0]
// 006356dd  50                   push eax
// 006356de  64892500000000       mov dword ptr fs:[0], esp
// 006356e5  51                   push ecx
// 006356e6  8b442418             mov eax, dword ptr [esp + 0x18]
// 006356ea  53                   push ebx
// 006356eb  55                   push ebp
// 006356ec  8be9                 mov ebp, ecx
// 006356ee  56                   push esi
// 006356ef  8b742420             mov esi, dword ptr [esp + 0x20]
// 006356f3  50                   push eax
// 006356f4  8d5d04               lea ebx, [ebp + 4]
// 006356f7  56                   push esi
// 006356f8  8bcb                 mov ecx, ebx
// 006356fa  896c2414             mov dword ptr [esp + 0x14], ebp
// 006356fe  897500               mov dword ptr [ebp], esi
// 00635701  e83affffff           call 0x635640
// 00635706  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0063570e  85f6                 test esi, esi
// 00635710  7453                 je 0x635765
// 00635712  57                   push edi
// 00635713  8dbee4000000         lea edi, [esi + 0xe4]
// 00635719  85ff                 test edi, edi
// 0063571b  7431                 je 0x63574e
// 0063571d  8937                 mov dword ptr [edi], esi
// 0063571f  8b33                 mov esi, dword ptr [ebx]
// 00635721  85f6                 test esi, esi
// 00635723  740c                 je 0x635731
// 00635725  8d4e08               lea ecx, [esi + 8]
// 00635728  ba01000000           mov edx, 1
// 0063572d  f00fc111             lock xadd dword ptr [ecx], edx
// 00635731  8b4f04               mov ecx, dword ptr [edi + 4]
// 00635734  85c9                 test ecx, ecx
// 00635736  7413                 je 0x63574b
// 00635738  8d4108               lea eax, [ecx + 8]
// 0063573b  83caff               or edx, 0xffffffff
// 0063573e  f00fc110             lock xadd dword ptr [eax], edx
// 00635742  7507                 jne 0x63574b
// 00635744  8b01                 mov eax, dword ptr [ecx]
// 00635746  8b5008               mov edx, dword ptr [eax + 8]
// 00635749  ffd2                 call edx
// 0063574b  897704               mov dword ptr [edi + 4], esi
// 0063574e  5f                   pop edi
// 0063574f  5e                   pop esi
// 00635750  8bc5                 mov eax, ebp
// 00635752  5d                   pop ebp
// 00635753  5b                   pop ebx
// 00635754  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00635758  64890d00000000       mov dword ptr fs:[0], ecx
// 0063575f  83c410               add esp, 0x10
// 00635762  c20800               ret 8
// 00635765  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00635769  5e                   pop esi
// 0063576a  8bc5                 mov eax, ebp
// 0063576c  5d                   pop ebp
// 0063576d  5b                   pop ebx
// 0063576e  64890d00000000       mov dword ptr fs:[0], ecx
// 00635775  83c410               add esp, 0x10
// 00635778  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
