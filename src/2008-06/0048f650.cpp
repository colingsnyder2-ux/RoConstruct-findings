// roc 2008-06 0048f650  unit: RBX::VShirtGraphic::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048f650
//
// 0048f650  6aff                 push -1
// 0048f652  68abfd7b00           push 0x7bfdab
// 0048f657  64a100000000         mov eax, dword ptr fs:[0]
// 0048f65d  50                   push eax
// 0048f65e  64892500000000       mov dword ptr fs:[0], esp
// 0048f665  51                   push ecx
// 0048f666  8b442418             mov eax, dword ptr [esp + 0x18]
// 0048f66a  53                   push ebx
// 0048f66b  55                   push ebp
// 0048f66c  8be9                 mov ebp, ecx
// 0048f66e  56                   push esi
// 0048f66f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0048f673  50                   push eax
// 0048f674  8d5d04               lea ebx, [ebp + 4]
// 0048f677  56                   push esi
// 0048f678  8bcb                 mov ecx, ebx
// 0048f67a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0048f67e  897500               mov dword ptr [ebp], esi
// 0048f681  e83affffff           call 0x48f5c0
// 0048f686  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0048f68e  85f6                 test esi, esi
// 0048f690  7453                 je 0x48f6e5
// 0048f692  57                   push edi
// 0048f693  8dbee4000000         lea edi, [esi + 0xe4]
// 0048f699  85ff                 test edi, edi
// 0048f69b  7431                 je 0x48f6ce
// 0048f69d  8937                 mov dword ptr [edi], esi
// 0048f69f  8b33                 mov esi, dword ptr [ebx]
// 0048f6a1  85f6                 test esi, esi
// 0048f6a3  740c                 je 0x48f6b1
// 0048f6a5  8d4e08               lea ecx, [esi + 8]
// 0048f6a8  ba01000000           mov edx, 1
// 0048f6ad  f00fc111             lock xadd dword ptr [ecx], edx
// 0048f6b1  8b4f04               mov ecx, dword ptr [edi + 4]
// 0048f6b4  85c9                 test ecx, ecx
// 0048f6b6  7413                 je 0x48f6cb
// 0048f6b8  8d4108               lea eax, [ecx + 8]
// 0048f6bb  83caff               or edx, 0xffffffff
// 0048f6be  f00fc110             lock xadd dword ptr [eax], edx
// 0048f6c2  7507                 jne 0x48f6cb
// 0048f6c4  8b01                 mov eax, dword ptr [ecx]
// 0048f6c6  8b5008               mov edx, dword ptr [eax + 8]
// 0048f6c9  ffd2                 call edx
// 0048f6cb  897704               mov dword ptr [edi + 4], esi
// 0048f6ce  5f                   pop edi
// 0048f6cf  5e                   pop esi
// 0048f6d0  8bc5                 mov eax, ebp
// 0048f6d2  5d                   pop ebp
// 0048f6d3  5b                   pop ebx
// 0048f6d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048f6d8  64890d00000000       mov dword ptr fs:[0], ecx
// 0048f6df  83c410               add esp, 0x10
// 0048f6e2  c20800               ret 8
// 0048f6e5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048f6e9  5e                   pop esi
// 0048f6ea  8bc5                 mov eax, ebp
// 0048f6ec  5d                   pop ebp
// 0048f6ed  5b                   pop ebx
// 0048f6ee  64890d00000000       mov dword ptr fs:[0], ecx
// 0048f6f5  83c410               add esp, 0x10
// 0048f6f8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
