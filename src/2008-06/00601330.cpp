// roc 2008-06 00601330  unit: RBX::VTool::?$BoundPropGetSet  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00601330
//
// 00601330  6aff                 push -1
// 00601332  68abfd7b00           push 0x7bfdab
// 00601337  64a100000000         mov eax, dword ptr fs:[0]
// 0060133d  50                   push eax
// 0060133e  64892500000000       mov dword ptr fs:[0], esp
// 00601345  51                   push ecx
// 00601346  8b442418             mov eax, dword ptr [esp + 0x18]
// 0060134a  53                   push ebx
// 0060134b  55                   push ebp
// 0060134c  8be9                 mov ebp, ecx
// 0060134e  56                   push esi
// 0060134f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00601353  50                   push eax
// 00601354  8d5d04               lea ebx, [ebp + 4]
// 00601357  56                   push esi
// 00601358  8bcb                 mov ecx, ebx
// 0060135a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0060135e  897500               mov dword ptr [ebp], esi
// 00601361  e8caf3ffff           call 0x600730
// 00601366  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0060136e  85f6                 test esi, esi
// 00601370  7453                 je 0x6013c5
// 00601372  57                   push edi
// 00601373  8dbee4000000         lea edi, [esi + 0xe4]
// 00601379  85ff                 test edi, edi
// 0060137b  7431                 je 0x6013ae
// 0060137d  8937                 mov dword ptr [edi], esi
// 0060137f  8b33                 mov esi, dword ptr [ebx]
// 00601381  85f6                 test esi, esi
// 00601383  740c                 je 0x601391
// 00601385  8d4e08               lea ecx, [esi + 8]
// 00601388  ba01000000           mov edx, 1
// 0060138d  f00fc111             lock xadd dword ptr [ecx], edx
// 00601391  8b4f04               mov ecx, dword ptr [edi + 4]
// 00601394  85c9                 test ecx, ecx
// 00601396  7413                 je 0x6013ab
// 00601398  8d4108               lea eax, [ecx + 8]
// 0060139b  83caff               or edx, 0xffffffff
// 0060139e  f00fc110             lock xadd dword ptr [eax], edx
// 006013a2  7507                 jne 0x6013ab
// 006013a4  8b01                 mov eax, dword ptr [ecx]
// 006013a6  8b5008               mov edx, dword ptr [eax + 8]
// 006013a9  ffd2                 call edx
// 006013ab  897704               mov dword ptr [edi + 4], esi
// 006013ae  5f                   pop edi
// 006013af  5e                   pop esi
// 006013b0  8bc5                 mov eax, ebp
// 006013b2  5d                   pop ebp
// 006013b3  5b                   pop ebx
// 006013b4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006013b8  64890d00000000       mov dword ptr fs:[0], ecx
// 006013bf  83c410               add esp, 0x10
// 006013c2  c20800               ret 8
// 006013c5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006013c9  5e                   pop esi
// 006013ca  8bc5                 mov eax, ebp
// 006013cc  5d                   pop ebp
// 006013cd  5b                   pop ebx
// 006013ce  64890d00000000       mov dword ptr fs:[0], ecx
// 006013d5  83c410               add esp, 0x10
// 006013d8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
