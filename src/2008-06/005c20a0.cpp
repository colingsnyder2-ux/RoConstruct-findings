// roc 2008-06 005c20a0  unit: RBX::VBodyThrust::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c20a0
//
// 005c20a0  6aff                 push -1
// 005c20a2  68abfd7b00           push 0x7bfdab
// 005c20a7  64a100000000         mov eax, dword ptr fs:[0]
// 005c20ad  50                   push eax
// 005c20ae  64892500000000       mov dword ptr fs:[0], esp
// 005c20b5  51                   push ecx
// 005c20b6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005c20ba  53                   push ebx
// 005c20bb  55                   push ebp
// 005c20bc  8be9                 mov ebp, ecx
// 005c20be  56                   push esi
// 005c20bf  8b742420             mov esi, dword ptr [esp + 0x20]
// 005c20c3  50                   push eax
// 005c20c4  8d5d04               lea ebx, [ebp + 4]
// 005c20c7  56                   push esi
// 005c20c8  8bcb                 mov ecx, ebx
// 005c20ca  896c2414             mov dword ptr [esp + 0x14], ebp
// 005c20ce  897500               mov dword ptr [ebp], esi
// 005c20d1  e83affffff           call 0x5c2010
// 005c20d6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005c20de  85f6                 test esi, esi
// 005c20e0  7453                 je 0x5c2135
// 005c20e2  57                   push edi
// 005c20e3  8dbee4000000         lea edi, [esi + 0xe4]
// 005c20e9  85ff                 test edi, edi
// 005c20eb  7431                 je 0x5c211e
// 005c20ed  8937                 mov dword ptr [edi], esi
// 005c20ef  8b33                 mov esi, dword ptr [ebx]
// 005c20f1  85f6                 test esi, esi
// 005c20f3  740c                 je 0x5c2101
// 005c20f5  8d4e08               lea ecx, [esi + 8]
// 005c20f8  ba01000000           mov edx, 1
// 005c20fd  f00fc111             lock xadd dword ptr [ecx], edx
// 005c2101  8b4f04               mov ecx, dword ptr [edi + 4]
// 005c2104  85c9                 test ecx, ecx
// 005c2106  7413                 je 0x5c211b
// 005c2108  8d4108               lea eax, [ecx + 8]
// 005c210b  83caff               or edx, 0xffffffff
// 005c210e  f00fc110             lock xadd dword ptr [eax], edx
// 005c2112  7507                 jne 0x5c211b
// 005c2114  8b01                 mov eax, dword ptr [ecx]
// 005c2116  8b5008               mov edx, dword ptr [eax + 8]
// 005c2119  ffd2                 call edx
// 005c211b  897704               mov dword ptr [edi + 4], esi
// 005c211e  5f                   pop edi
// 005c211f  5e                   pop esi
// 005c2120  8bc5                 mov eax, ebp
// 005c2122  5d                   pop ebp
// 005c2123  5b                   pop ebx
// 005c2124  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c2128  64890d00000000       mov dword ptr fs:[0], ecx
// 005c212f  83c410               add esp, 0x10
// 005c2132  c20800               ret 8
// 005c2135  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c2139  5e                   pop esi
// 005c213a  8bc5                 mov eax, ebp
// 005c213c  5d                   pop ebp
// 005c213d  5b                   pop ebx
// 005c213e  64890d00000000       mov dword ptr fs:[0], ecx
// 005c2145  83c410               add esp, 0x10
// 005c2148  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
