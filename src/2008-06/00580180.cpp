// roc 2008-06 00580180  unit: RBX::VMotorFeature::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00580180
//
// 00580180  6aff                 push -1
// 00580182  68abfd7b00           push 0x7bfdab
// 00580187  64a100000000         mov eax, dword ptr fs:[0]
// 0058018d  50                   push eax
// 0058018e  64892500000000       mov dword ptr fs:[0], esp
// 00580195  51                   push ecx
// 00580196  8b442418             mov eax, dword ptr [esp + 0x18]
// 0058019a  53                   push ebx
// 0058019b  55                   push ebp
// 0058019c  8be9                 mov ebp, ecx
// 0058019e  56                   push esi
// 0058019f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005801a3  50                   push eax
// 005801a4  8d5d04               lea ebx, [ebp + 4]
// 005801a7  56                   push esi
// 005801a8  8bcb                 mov ecx, ebx
// 005801aa  896c2414             mov dword ptr [esp + 0x14], ebp
// 005801ae  897500               mov dword ptr [ebp], esi
// 005801b1  e83affffff           call 0x5800f0
// 005801b6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005801be  85f6                 test esi, esi
// 005801c0  7453                 je 0x580215
// 005801c2  57                   push edi
// 005801c3  8dbee4000000         lea edi, [esi + 0xe4]
// 005801c9  85ff                 test edi, edi
// 005801cb  7431                 je 0x5801fe
// 005801cd  8937                 mov dword ptr [edi], esi
// 005801cf  8b33                 mov esi, dword ptr [ebx]
// 005801d1  85f6                 test esi, esi
// 005801d3  740c                 je 0x5801e1
// 005801d5  8d4e08               lea ecx, [esi + 8]
// 005801d8  ba01000000           mov edx, 1
// 005801dd  f00fc111             lock xadd dword ptr [ecx], edx
// 005801e1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005801e4  85c9                 test ecx, ecx
// 005801e6  7413                 je 0x5801fb
// 005801e8  8d4108               lea eax, [ecx + 8]
// 005801eb  83caff               or edx, 0xffffffff
// 005801ee  f00fc110             lock xadd dword ptr [eax], edx
// 005801f2  7507                 jne 0x5801fb
// 005801f4  8b01                 mov eax, dword ptr [ecx]
// 005801f6  8b5008               mov edx, dword ptr [eax + 8]
// 005801f9  ffd2                 call edx
// 005801fb  897704               mov dword ptr [edi + 4], esi
// 005801fe  5f                   pop edi
// 005801ff  5e                   pop esi
// 00580200  8bc5                 mov eax, ebp
// 00580202  5d                   pop ebp
// 00580203  5b                   pop ebx
// 00580204  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00580208  64890d00000000       mov dword ptr fs:[0], ecx
// 0058020f  83c410               add esp, 0x10
// 00580212  c20800               ret 8
// 00580215  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00580219  5e                   pop esi
// 0058021a  8bc5                 mov eax, ebp
// 0058021c  5d                   pop ebp
// 0058021d  5b                   pop ebx
// 0058021e  64890d00000000       mov dword ptr fs:[0], ecx
// 00580225  83c410               add esp, 0x10
// 00580228  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
