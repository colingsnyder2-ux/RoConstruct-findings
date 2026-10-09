// roc 2008-06 005a1090  unit: RBX::PartTool  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a1090
//
// 005a1090  6aff                 push -1
// 005a1092  68abfd7b00           push 0x7bfdab
// 005a1097  64a100000000         mov eax, dword ptr fs:[0]
// 005a109d  50                   push eax
// 005a109e  64892500000000       mov dword ptr fs:[0], esp
// 005a10a5  51                   push ecx
// 005a10a6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005a10aa  53                   push ebx
// 005a10ab  55                   push ebp
// 005a10ac  8be9                 mov ebp, ecx
// 005a10ae  56                   push esi
// 005a10af  8b742420             mov esi, dword ptr [esp + 0x20]
// 005a10b3  50                   push eax
// 005a10b4  8d5d04               lea ebx, [ebp + 4]
// 005a10b7  56                   push esi
// 005a10b8  8bcb                 mov ecx, ebx
// 005a10ba  896c2414             mov dword ptr [esp + 0x14], ebp
// 005a10be  897500               mov dword ptr [ebp], esi
// 005a10c1  e88afaffff           call 0x5a0b50
// 005a10c6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005a10ce  85f6                 test esi, esi
// 005a10d0  7453                 je 0x5a1125
// 005a10d2  57                   push edi
// 005a10d3  8dbee4000000         lea edi, [esi + 0xe4]
// 005a10d9  85ff                 test edi, edi
// 005a10db  7431                 je 0x5a110e
// 005a10dd  8937                 mov dword ptr [edi], esi
// 005a10df  8b33                 mov esi, dword ptr [ebx]
// 005a10e1  85f6                 test esi, esi
// 005a10e3  740c                 je 0x5a10f1
// 005a10e5  8d4e08               lea ecx, [esi + 8]
// 005a10e8  ba01000000           mov edx, 1
// 005a10ed  f00fc111             lock xadd dword ptr [ecx], edx
// 005a10f1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005a10f4  85c9                 test ecx, ecx
// 005a10f6  7413                 je 0x5a110b
// 005a10f8  8d4108               lea eax, [ecx + 8]
// 005a10fb  83caff               or edx, 0xffffffff
// 005a10fe  f00fc110             lock xadd dword ptr [eax], edx
// 005a1102  7507                 jne 0x5a110b
// 005a1104  8b01                 mov eax, dword ptr [ecx]
// 005a1106  8b5008               mov edx, dword ptr [eax + 8]
// 005a1109  ffd2                 call edx
// 005a110b  897704               mov dword ptr [edi + 4], esi
// 005a110e  5f                   pop edi
// 005a110f  5e                   pop esi
// 005a1110  8bc5                 mov eax, ebp
// 005a1112  5d                   pop ebp
// 005a1113  5b                   pop ebx
// 005a1114  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a1118  64890d00000000       mov dword ptr fs:[0], ecx
// 005a111f  83c410               add esp, 0x10
// 005a1122  c20800               ret 8
// 005a1125  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a1129  5e                   pop esi
// 005a112a  8bc5                 mov eax, ebp
// 005a112c  5d                   pop ebp
// 005a112d  5b                   pop ebx
// 005a112e  64890d00000000       mov dword ptr fs:[0], ecx
// 005a1135  83c410               add esp, 0x10
// 005a1138  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
