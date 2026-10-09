// roc 2008-06 005c1950  unit: RBX::VGeometryService::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c1950
//
// 005c1950  6aff                 push -1
// 005c1952  68abfd7b00           push 0x7bfdab
// 005c1957  64a100000000         mov eax, dword ptr fs:[0]
// 005c195d  50                   push eax
// 005c195e  64892500000000       mov dword ptr fs:[0], esp
// 005c1965  51                   push ecx
// 005c1966  8b442418             mov eax, dword ptr [esp + 0x18]
// 005c196a  53                   push ebx
// 005c196b  55                   push ebp
// 005c196c  8be9                 mov ebp, ecx
// 005c196e  56                   push esi
// 005c196f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005c1973  50                   push eax
// 005c1974  8d5d04               lea ebx, [ebp + 4]
// 005c1977  56                   push esi
// 005c1978  8bcb                 mov ecx, ebx
// 005c197a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005c197e  897500               mov dword ptr [ebp], esi
// 005c1981  e83affffff           call 0x5c18c0
// 005c1986  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005c198e  85f6                 test esi, esi
// 005c1990  7453                 je 0x5c19e5
// 005c1992  57                   push edi
// 005c1993  8dbee4000000         lea edi, [esi + 0xe4]
// 005c1999  85ff                 test edi, edi
// 005c199b  7431                 je 0x5c19ce
// 005c199d  8937                 mov dword ptr [edi], esi
// 005c199f  8b33                 mov esi, dword ptr [ebx]
// 005c19a1  85f6                 test esi, esi
// 005c19a3  740c                 je 0x5c19b1
// 005c19a5  8d4e08               lea ecx, [esi + 8]
// 005c19a8  ba01000000           mov edx, 1
// 005c19ad  f00fc111             lock xadd dword ptr [ecx], edx
// 005c19b1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005c19b4  85c9                 test ecx, ecx
// 005c19b6  7413                 je 0x5c19cb
// 005c19b8  8d4108               lea eax, [ecx + 8]
// 005c19bb  83caff               or edx, 0xffffffff
// 005c19be  f00fc110             lock xadd dword ptr [eax], edx
// 005c19c2  7507                 jne 0x5c19cb
// 005c19c4  8b01                 mov eax, dword ptr [ecx]
// 005c19c6  8b5008               mov edx, dword ptr [eax + 8]
// 005c19c9  ffd2                 call edx
// 005c19cb  897704               mov dword ptr [edi + 4], esi
// 005c19ce  5f                   pop edi
// 005c19cf  5e                   pop esi
// 005c19d0  8bc5                 mov eax, ebp
// 005c19d2  5d                   pop ebp
// 005c19d3  5b                   pop ebx
// 005c19d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c19d8  64890d00000000       mov dword ptr fs:[0], ecx
// 005c19df  83c410               add esp, 0x10
// 005c19e2  c20800               ret 8
// 005c19e5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c19e9  5e                   pop esi
// 005c19ea  8bc5                 mov eax, ebp
// 005c19ec  5d                   pop ebp
// 005c19ed  5b                   pop ebx
// 005c19ee  64890d00000000       mov dword ptr fs:[0], ecx
// 005c19f5  83c410               add esp, 0x10
// 005c19f8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
