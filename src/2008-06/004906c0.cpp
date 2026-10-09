// roc 2008-06 004906c0  unit: RBX::VTimerService::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004906c0
//
// 004906c0  6aff                 push -1
// 004906c2  68abfd7b00           push 0x7bfdab
// 004906c7  64a100000000         mov eax, dword ptr fs:[0]
// 004906cd  50                   push eax
// 004906ce  64892500000000       mov dword ptr fs:[0], esp
// 004906d5  51                   push ecx
// 004906d6  8b442418             mov eax, dword ptr [esp + 0x18]
// 004906da  53                   push ebx
// 004906db  55                   push ebp
// 004906dc  8be9                 mov ebp, ecx
// 004906de  56                   push esi
// 004906df  8b742420             mov esi, dword ptr [esp + 0x20]
// 004906e3  50                   push eax
// 004906e4  8d5d04               lea ebx, [ebp + 4]
// 004906e7  56                   push esi
// 004906e8  8bcb                 mov ecx, ebx
// 004906ea  896c2414             mov dword ptr [esp + 0x14], ebp
// 004906ee  897500               mov dword ptr [ebp], esi
// 004906f1  e83affffff           call 0x490630
// 004906f6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004906fe  85f6                 test esi, esi
// 00490700  7453                 je 0x490755
// 00490702  57                   push edi
// 00490703  8dbee4000000         lea edi, [esi + 0xe4]
// 00490709  85ff                 test edi, edi
// 0049070b  7431                 je 0x49073e
// 0049070d  8937                 mov dword ptr [edi], esi
// 0049070f  8b33                 mov esi, dword ptr [ebx]
// 00490711  85f6                 test esi, esi
// 00490713  740c                 je 0x490721
// 00490715  8d4e08               lea ecx, [esi + 8]
// 00490718  ba01000000           mov edx, 1
// 0049071d  f00fc111             lock xadd dword ptr [ecx], edx
// 00490721  8b4f04               mov ecx, dword ptr [edi + 4]
// 00490724  85c9                 test ecx, ecx
// 00490726  7413                 je 0x49073b
// 00490728  8d4108               lea eax, [ecx + 8]
// 0049072b  83caff               or edx, 0xffffffff
// 0049072e  f00fc110             lock xadd dword ptr [eax], edx
// 00490732  7507                 jne 0x49073b
// 00490734  8b01                 mov eax, dword ptr [ecx]
// 00490736  8b5008               mov edx, dword ptr [eax + 8]
// 00490739  ffd2                 call edx
// 0049073b  897704               mov dword ptr [edi + 4], esi
// 0049073e  5f                   pop edi
// 0049073f  5e                   pop esi
// 00490740  8bc5                 mov eax, ebp
// 00490742  5d                   pop ebp
// 00490743  5b                   pop ebx
// 00490744  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00490748  64890d00000000       mov dword ptr fs:[0], ecx
// 0049074f  83c410               add esp, 0x10
// 00490752  c20800               ret 8
// 00490755  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00490759  5e                   pop esi
// 0049075a  8bc5                 mov eax, ebp
// 0049075c  5d                   pop ebp
// 0049075d  5b                   pop ebx
// 0049075e  64890d00000000       mov dword ptr fs:[0], ecx
// 00490765  83c410               add esp, 0x10
// 00490768  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
