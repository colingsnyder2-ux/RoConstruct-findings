// roc 2008-06 004a20a0  unit: RBX::Network::P8Players::?$GetImpl  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a20a0
//
// 004a20a0  6aff                 push -1
// 004a20a2  68abfd7b00           push 0x7bfdab
// 004a20a7  64a100000000         mov eax, dword ptr fs:[0]
// 004a20ad  50                   push eax
// 004a20ae  64892500000000       mov dword ptr fs:[0], esp
// 004a20b5  51                   push ecx
// 004a20b6  8b442418             mov eax, dword ptr [esp + 0x18]
// 004a20ba  53                   push ebx
// 004a20bb  55                   push ebp
// 004a20bc  8be9                 mov ebp, ecx
// 004a20be  56                   push esi
// 004a20bf  8b742420             mov esi, dword ptr [esp + 0x20]
// 004a20c3  50                   push eax
// 004a20c4  8d5d04               lea ebx, [ebp + 4]
// 004a20c7  56                   push esi
// 004a20c8  8bcb                 mov ecx, ebx
// 004a20ca  896c2414             mov dword ptr [esp + 0x14], ebp
// 004a20ce  897500               mov dword ptr [ebp], esi
// 004a20d1  e80afbffff           call 0x4a1be0
// 004a20d6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004a20de  85f6                 test esi, esi
// 004a20e0  7453                 je 0x4a2135
// 004a20e2  57                   push edi
// 004a20e3  8dbee4000000         lea edi, [esi + 0xe4]
// 004a20e9  85ff                 test edi, edi
// 004a20eb  7431                 je 0x4a211e
// 004a20ed  8937                 mov dword ptr [edi], esi
// 004a20ef  8b33                 mov esi, dword ptr [ebx]
// 004a20f1  85f6                 test esi, esi
// 004a20f3  740c                 je 0x4a2101
// 004a20f5  8d4e08               lea ecx, [esi + 8]
// 004a20f8  ba01000000           mov edx, 1
// 004a20fd  f00fc111             lock xadd dword ptr [ecx], edx
// 004a2101  8b4f04               mov ecx, dword ptr [edi + 4]
// 004a2104  85c9                 test ecx, ecx
// 004a2106  7413                 je 0x4a211b
// 004a2108  8d4108               lea eax, [ecx + 8]
// 004a210b  83caff               or edx, 0xffffffff
// 004a210e  f00fc110             lock xadd dword ptr [eax], edx
// 004a2112  7507                 jne 0x4a211b
// 004a2114  8b01                 mov eax, dword ptr [ecx]
// 004a2116  8b5008               mov edx, dword ptr [eax + 8]
// 004a2119  ffd2                 call edx
// 004a211b  897704               mov dword ptr [edi + 4], esi
// 004a211e  5f                   pop edi
// 004a211f  5e                   pop esi
// 004a2120  8bc5                 mov eax, ebp
// 004a2122  5d                   pop ebp
// 004a2123  5b                   pop ebx
// 004a2124  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a2128  64890d00000000       mov dword ptr fs:[0], ecx
// 004a212f  83c410               add esp, 0x10
// 004a2132  c20800               ret 8
// 004a2135  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a2139  5e                   pop esi
// 004a213a  8bc5                 mov eax, ebp
// 004a213c  5d                   pop ebp
// 004a213d  5b                   pop ebx
// 004a213e  64890d00000000       mov dword ptr fs:[0], ecx
// 004a2145  83c410               add esp, 0x10
// 004a2148  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
