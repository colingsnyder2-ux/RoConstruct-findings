// roc 2008-06 00616540  unit: RBX::BoxSelectCommand  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00616540
//
// 00616540  6aff                 push -1
// 00616542  68abfd7b00           push 0x7bfdab
// 00616547  64a100000000         mov eax, dword ptr fs:[0]
// 0061654d  50                   push eax
// 0061654e  64892500000000       mov dword ptr fs:[0], esp
// 00616555  51                   push ecx
// 00616556  8b442418             mov eax, dword ptr [esp + 0x18]
// 0061655a  53                   push ebx
// 0061655b  55                   push ebp
// 0061655c  8be9                 mov ebp, ecx
// 0061655e  56                   push esi
// 0061655f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00616563  50                   push eax
// 00616564  8d5d04               lea ebx, [ebp + 4]
// 00616567  56                   push esi
// 00616568  8bcb                 mov ecx, ebx
// 0061656a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0061656e  897500               mov dword ptr [ebp], esi
// 00616571  e89afeffff           call 0x616410
// 00616576  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0061657e  85f6                 test esi, esi
// 00616580  7453                 je 0x6165d5
// 00616582  57                   push edi
// 00616583  8dbee4000000         lea edi, [esi + 0xe4]
// 00616589  85ff                 test edi, edi
// 0061658b  7431                 je 0x6165be
// 0061658d  8937                 mov dword ptr [edi], esi
// 0061658f  8b33                 mov esi, dword ptr [ebx]
// 00616591  85f6                 test esi, esi
// 00616593  740c                 je 0x6165a1
// 00616595  8d4e08               lea ecx, [esi + 8]
// 00616598  ba01000000           mov edx, 1
// 0061659d  f00fc111             lock xadd dword ptr [ecx], edx
// 006165a1  8b4f04               mov ecx, dword ptr [edi + 4]
// 006165a4  85c9                 test ecx, ecx
// 006165a6  7413                 je 0x6165bb
// 006165a8  8d4108               lea eax, [ecx + 8]
// 006165ab  83caff               or edx, 0xffffffff
// 006165ae  f00fc110             lock xadd dword ptr [eax], edx
// 006165b2  7507                 jne 0x6165bb
// 006165b4  8b01                 mov eax, dword ptr [ecx]
// 006165b6  8b5008               mov edx, dword ptr [eax + 8]
// 006165b9  ffd2                 call edx
// 006165bb  897704               mov dword ptr [edi + 4], esi
// 006165be  5f                   pop edi
// 006165bf  5e                   pop esi
// 006165c0  8bc5                 mov eax, ebp
// 006165c2  5d                   pop ebp
// 006165c3  5b                   pop ebx
// 006165c4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006165c8  64890d00000000       mov dword ptr fs:[0], ecx
// 006165cf  83c410               add esp, 0x10
// 006165d2  c20800               ret 8
// 006165d5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006165d9  5e                   pop esi
// 006165da  8bc5                 mov eax, ebp
// 006165dc  5d                   pop ebp
// 006165dd  5b                   pop ebx
// 006165de  64890d00000000       mov dword ptr fs:[0], ecx
// 006165e5  83c410               add esp, 0x10
// 006165e8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
