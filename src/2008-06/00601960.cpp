// roc 2008-06 00601960  unit: RBX::VTool::?$BoundPropGetSet  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00601960
//
// 00601960  6aff                 push -1
// 00601962  68abfd7b00           push 0x7bfdab
// 00601967  64a100000000         mov eax, dword ptr fs:[0]
// 0060196d  50                   push eax
// 0060196e  64892500000000       mov dword ptr fs:[0], esp
// 00601975  51                   push ecx
// 00601976  8b442418             mov eax, dword ptr [esp + 0x18]
// 0060197a  53                   push ebx
// 0060197b  55                   push ebp
// 0060197c  8be9                 mov ebp, ecx
// 0060197e  56                   push esi
// 0060197f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00601983  50                   push eax
// 00601984  8d5d04               lea ebx, [ebp + 4]
// 00601987  56                   push esi
// 00601988  8bcb                 mov ecx, ebx
// 0060198a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0060198e  897500               mov dword ptr [ebp], esi
// 00601991  e8aaf2ffff           call 0x600c40
// 00601996  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0060199e  85f6                 test esi, esi
// 006019a0  7453                 je 0x6019f5
// 006019a2  57                   push edi
// 006019a3  8dbee4000000         lea edi, [esi + 0xe4]
// 006019a9  85ff                 test edi, edi
// 006019ab  7431                 je 0x6019de
// 006019ad  8937                 mov dword ptr [edi], esi
// 006019af  8b33                 mov esi, dword ptr [ebx]
// 006019b1  85f6                 test esi, esi
// 006019b3  740c                 je 0x6019c1
// 006019b5  8d4e08               lea ecx, [esi + 8]
// 006019b8  ba01000000           mov edx, 1
// 006019bd  f00fc111             lock xadd dword ptr [ecx], edx
// 006019c1  8b4f04               mov ecx, dword ptr [edi + 4]
// 006019c4  85c9                 test ecx, ecx
// 006019c6  7413                 je 0x6019db
// 006019c8  8d4108               lea eax, [ecx + 8]
// 006019cb  83caff               or edx, 0xffffffff
// 006019ce  f00fc110             lock xadd dword ptr [eax], edx
// 006019d2  7507                 jne 0x6019db
// 006019d4  8b01                 mov eax, dword ptr [ecx]
// 006019d6  8b5008               mov edx, dword ptr [eax + 8]
// 006019d9  ffd2                 call edx
// 006019db  897704               mov dword ptr [edi + 4], esi
// 006019de  5f                   pop edi
// 006019df  5e                   pop esi
// 006019e0  8bc5                 mov eax, ebp
// 006019e2  5d                   pop ebp
// 006019e3  5b                   pop ebx
// 006019e4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006019e8  64890d00000000       mov dword ptr fs:[0], ecx
// 006019ef  83c410               add esp, 0x10
// 006019f2  c20800               ret 8
// 006019f5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006019f9  5e                   pop esi
// 006019fa  8bc5                 mov eax, ebp
// 006019fc  5d                   pop ebp
// 006019fd  5b                   pop ebx
// 006019fe  64890d00000000       mov dword ptr fs:[0], ecx
// 00601a05  83c410               add esp, 0x10
// 00601a08  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
