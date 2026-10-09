// roc 2008-06 0048f9a0  unit: RBX::VClothing::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048f9a0
//
// 0048f9a0  6aff                 push -1
// 0048f9a2  68abfd7b00           push 0x7bfdab
// 0048f9a7  64a100000000         mov eax, dword ptr fs:[0]
// 0048f9ad  50                   push eax
// 0048f9ae  64892500000000       mov dword ptr fs:[0], esp
// 0048f9b5  51                   push ecx
// 0048f9b6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0048f9ba  53                   push ebx
// 0048f9bb  55                   push ebp
// 0048f9bc  8be9                 mov ebp, ecx
// 0048f9be  56                   push esi
// 0048f9bf  8b742420             mov esi, dword ptr [esp + 0x20]
// 0048f9c3  50                   push eax
// 0048f9c4  8d5d04               lea ebx, [ebp + 4]
// 0048f9c7  56                   push esi
// 0048f9c8  8bcb                 mov ecx, ebx
// 0048f9ca  896c2414             mov dword ptr [esp + 0x14], ebp
// 0048f9ce  897500               mov dword ptr [ebp], esi
// 0048f9d1  e82affffff           call 0x48f900
// 0048f9d6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0048f9de  85f6                 test esi, esi
// 0048f9e0  7453                 je 0x48fa35
// 0048f9e2  57                   push edi
// 0048f9e3  8dbee4000000         lea edi, [esi + 0xe4]
// 0048f9e9  85ff                 test edi, edi
// 0048f9eb  7431                 je 0x48fa1e
// 0048f9ed  8937                 mov dword ptr [edi], esi
// 0048f9ef  8b33                 mov esi, dword ptr [ebx]
// 0048f9f1  85f6                 test esi, esi
// 0048f9f3  740c                 je 0x48fa01
// 0048f9f5  8d4e08               lea ecx, [esi + 8]
// 0048f9f8  ba01000000           mov edx, 1
// 0048f9fd  f00fc111             lock xadd dword ptr [ecx], edx
// 0048fa01  8b4f04               mov ecx, dword ptr [edi + 4]
// 0048fa04  85c9                 test ecx, ecx
// 0048fa06  7413                 je 0x48fa1b
// 0048fa08  8d4108               lea eax, [ecx + 8]
// 0048fa0b  83caff               or edx, 0xffffffff
// 0048fa0e  f00fc110             lock xadd dword ptr [eax], edx
// 0048fa12  7507                 jne 0x48fa1b
// 0048fa14  8b01                 mov eax, dword ptr [ecx]
// 0048fa16  8b5008               mov edx, dword ptr [eax + 8]
// 0048fa19  ffd2                 call edx
// 0048fa1b  897704               mov dword ptr [edi + 4], esi
// 0048fa1e  5f                   pop edi
// 0048fa1f  5e                   pop esi
// 0048fa20  8bc5                 mov eax, ebp
// 0048fa22  5d                   pop ebp
// 0048fa23  5b                   pop ebx
// 0048fa24  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048fa28  64890d00000000       mov dword ptr fs:[0], ecx
// 0048fa2f  83c410               add esp, 0x10
// 0048fa32  c20800               ret 8
// 0048fa35  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048fa39  5e                   pop esi
// 0048fa3a  8bc5                 mov eax, ebp
// 0048fa3c  5d                   pop ebp
// 0048fa3d  5b                   pop ebx
// 0048fa3e  64890d00000000       mov dword ptr fs:[0], ecx
// 0048fa45  83c410               add esp, 0x10
// 0048fa48  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
