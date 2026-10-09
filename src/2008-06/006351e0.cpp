// roc 2008-06 006351e0  unit: RBX::H$1?sIntValue::V?$Value::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006351e0
//
// 006351e0  6aff                 push -1
// 006351e2  68abfd7b00           push 0x7bfdab
// 006351e7  64a100000000         mov eax, dword ptr fs:[0]
// 006351ed  50                   push eax
// 006351ee  64892500000000       mov dword ptr fs:[0], esp
// 006351f5  51                   push ecx
// 006351f6  8b442418             mov eax, dword ptr [esp + 0x18]
// 006351fa  53                   push ebx
// 006351fb  55                   push ebp
// 006351fc  8be9                 mov ebp, ecx
// 006351fe  56                   push esi
// 006351ff  8b742420             mov esi, dword ptr [esp + 0x20]
// 00635203  50                   push eax
// 00635204  8d5d04               lea ebx, [ebp + 4]
// 00635207  56                   push esi
// 00635208  8bcb                 mov ecx, ebx
// 0063520a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0063520e  897500               mov dword ptr [ebp], esi
// 00635211  e83affffff           call 0x635150
// 00635216  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0063521e  85f6                 test esi, esi
// 00635220  7453                 je 0x635275
// 00635222  57                   push edi
// 00635223  8dbee4000000         lea edi, [esi + 0xe4]
// 00635229  85ff                 test edi, edi
// 0063522b  7431                 je 0x63525e
// 0063522d  8937                 mov dword ptr [edi], esi
// 0063522f  8b33                 mov esi, dword ptr [ebx]
// 00635231  85f6                 test esi, esi
// 00635233  740c                 je 0x635241
// 00635235  8d4e08               lea ecx, [esi + 8]
// 00635238  ba01000000           mov edx, 1
// 0063523d  f00fc111             lock xadd dword ptr [ecx], edx
// 00635241  8b4f04               mov ecx, dword ptr [edi + 4]
// 00635244  85c9                 test ecx, ecx
// 00635246  7413                 je 0x63525b
// 00635248  8d4108               lea eax, [ecx + 8]
// 0063524b  83caff               or edx, 0xffffffff
// 0063524e  f00fc110             lock xadd dword ptr [eax], edx
// 00635252  7507                 jne 0x63525b
// 00635254  8b01                 mov eax, dword ptr [ecx]
// 00635256  8b5008               mov edx, dword ptr [eax + 8]
// 00635259  ffd2                 call edx
// 0063525b  897704               mov dword ptr [edi + 4], esi
// 0063525e  5f                   pop edi
// 0063525f  5e                   pop esi
// 00635260  8bc5                 mov eax, ebp
// 00635262  5d                   pop ebp
// 00635263  5b                   pop ebx
// 00635264  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00635268  64890d00000000       mov dword ptr fs:[0], ecx
// 0063526f  83c410               add esp, 0x10
// 00635272  c20800               ret 8
// 00635275  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00635279  5e                   pop esi
// 0063527a  8bc5                 mov eax, ebp
// 0063527c  5d                   pop ebp
// 0063527d  5b                   pop ebx
// 0063527e  64890d00000000       mov dword ptr fs:[0], ecx
// 00635285  83c410               add esp, 0x10
// 00635288  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
