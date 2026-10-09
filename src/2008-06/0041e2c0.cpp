// roc 2008-06 0041e2c0  unit: VDHTMLWindow::?$SignalDesc  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041e2c0
//
// 0041e2c0  6aff                 push -1
// 0041e2c2  68abfd7b00           push 0x7bfdab
// 0041e2c7  64a100000000         mov eax, dword ptr fs:[0]
// 0041e2cd  50                   push eax
// 0041e2ce  64892500000000       mov dword ptr fs:[0], esp
// 0041e2d5  51                   push ecx
// 0041e2d6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0041e2da  53                   push ebx
// 0041e2db  55                   push ebp
// 0041e2dc  8be9                 mov ebp, ecx
// 0041e2de  56                   push esi
// 0041e2df  8b742420             mov esi, dword ptr [esp + 0x20]
// 0041e2e3  50                   push eax
// 0041e2e4  8d5d04               lea ebx, [ebp + 4]
// 0041e2e7  56                   push esi
// 0041e2e8  8bcb                 mov ecx, ebx
// 0041e2ea  896c2414             mov dword ptr [esp + 0x14], ebp
// 0041e2ee  897500               mov dword ptr [ebp], esi
// 0041e2f1  e80afeffff           call 0x41e100
// 0041e2f6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0041e2fe  85f6                 test esi, esi
// 0041e300  7453                 je 0x41e355
// 0041e302  57                   push edi
// 0041e303  8dbee4000000         lea edi, [esi + 0xe4]
// 0041e309  85ff                 test edi, edi
// 0041e30b  7431                 je 0x41e33e
// 0041e30d  8937                 mov dword ptr [edi], esi
// 0041e30f  8b33                 mov esi, dword ptr [ebx]
// 0041e311  85f6                 test esi, esi
// 0041e313  740c                 je 0x41e321
// 0041e315  8d4e08               lea ecx, [esi + 8]
// 0041e318  ba01000000           mov edx, 1
// 0041e31d  f00fc111             lock xadd dword ptr [ecx], edx
// 0041e321  8b4f04               mov ecx, dword ptr [edi + 4]
// 0041e324  85c9                 test ecx, ecx
// 0041e326  7413                 je 0x41e33b
// 0041e328  8d4108               lea eax, [ecx + 8]
// 0041e32b  83caff               or edx, 0xffffffff
// 0041e32e  f00fc110             lock xadd dword ptr [eax], edx
// 0041e332  7507                 jne 0x41e33b
// 0041e334  8b01                 mov eax, dword ptr [ecx]
// 0041e336  8b5008               mov edx, dword ptr [eax + 8]
// 0041e339  ffd2                 call edx
// 0041e33b  897704               mov dword ptr [edi + 4], esi
// 0041e33e  5f                   pop edi
// 0041e33f  5e                   pop esi
// 0041e340  8bc5                 mov eax, ebp
// 0041e342  5d                   pop ebp
// 0041e343  5b                   pop ebx
// 0041e344  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041e348  64890d00000000       mov dword ptr fs:[0], ecx
// 0041e34f  83c410               add esp, 0x10
// 0041e352  c20800               ret 8
// 0041e355  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041e359  5e                   pop esi
// 0041e35a  8bc5                 mov eax, ebp
// 0041e35c  5d                   pop ebp
// 0041e35d  5b                   pop ebx
// 0041e35e  64890d00000000       mov dword ptr fs:[0], ecx
// 0041e365  83c410               add esp, 0x10
// 0041e368  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
