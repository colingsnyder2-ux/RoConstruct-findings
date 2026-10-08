// roc 2008-06 00587420  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00587420
//
// 00587420  6aff                 push -1
// 00587422  6818047c00           push 0x7c0418
// 00587427  64a100000000         mov eax, dword ptr fs:[0]
// 0058742d  50                   push eax
// 0058742e  64892500000000       mov dword ptr fs:[0], esp
// 00587435  51                   push ecx
// 00587436  56                   push esi
// 00587437  8bd1                 mov edx, ecx
// 00587439  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0058743d  83ec08               sub esp, 8
// 00587440  8bc4                 mov eax, esp
// 00587442  8908                 mov dword ptr [eax], ecx
// 00587444  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00587448  894804               mov dword ptr [eax + 4], ecx
// 0058744b  8b442428             mov eax, dword ptr [esp + 0x28]
// 0058744f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00587457  8964240c             mov dword ptr [esp + 0xc], esp
// 0058745b  85c0                 test eax, eax
// 0058745d  740c                 je 0x58746b
// 0058745f  83c004               add eax, 4
// 00587462  b901000000           mov ecx, 1
// 00587467  f00fc108             lock xadd dword ptr [eax], ecx
// 0058746b  8b4a04               mov ecx, dword ptr [edx + 4]
// 0058746e  034c2420             add ecx, dword ptr [esp + 0x20]
// 00587472  8b12                 mov edx, dword ptr [edx]
// 00587474  ffd2                 call edx
// 00587476  8b742420             mov esi, dword ptr [esp + 0x20]
// 0058747a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00587482  85f6                 test esi, esi
// 00587484  742a                 je 0x5874b0
// 00587486  8d4604               lea eax, [esi + 4]
// 00587489  83c9ff               or ecx, 0xffffffff
// 0058748c  f00fc108             lock xadd dword ptr [eax], ecx
// 00587490  751e                 jne 0x5874b0
// 00587492  8b16                 mov edx, dword ptr [esi]
// 00587494  8b4204               mov eax, dword ptr [edx + 4]
// 00587497  8bce                 mov ecx, esi
// 00587499  ffd0                 call eax
// 0058749b  8d4e08               lea ecx, [esi + 8]
// 0058749e  83caff               or edx, 0xffffffff
// 005874a1  f00fc111             lock xadd dword ptr [ecx], edx
// 005874a5  7509                 jne 0x5874b0
// 005874a7  8b06                 mov eax, dword ptr [esi]
// 005874a9  8b5008               mov edx, dword ptr [eax + 8]
// 005874ac  8bce                 mov ecx, esi
// 005874ae  ffd2                 call edx
// 005874b0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005874b4  64890d00000000       mov dword ptr fs:[0], ecx
// 005874bb  5e                   pop esi
// 005874bc  83c410               add esp, 0x10
// 005874bf  c20c00               ret 0xc
// library rbxgs-net/IdManager.cpp (function ??R?$mf1@XVIdManager@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@QBEXPAVIdManager@RBX@@V?$shared_ptr@VInstance@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net IdManager.cpp
