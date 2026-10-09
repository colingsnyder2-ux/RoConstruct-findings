// roc 2008-06 00490130  unit: RBX::VBodyColors::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00490130
//
// 00490130  6aff                 push -1
// 00490132  68abfd7b00           push 0x7bfdab
// 00490137  64a100000000         mov eax, dword ptr fs:[0]
// 0049013d  50                   push eax
// 0049013e  64892500000000       mov dword ptr fs:[0], esp
// 00490145  51                   push ecx
// 00490146  8b442418             mov eax, dword ptr [esp + 0x18]
// 0049014a  53                   push ebx
// 0049014b  55                   push ebp
// 0049014c  8be9                 mov ebp, ecx
// 0049014e  56                   push esi
// 0049014f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00490153  50                   push eax
// 00490154  8d5d04               lea ebx, [ebp + 4]
// 00490157  56                   push esi
// 00490158  8bcb                 mov ecx, ebx
// 0049015a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0049015e  897500               mov dword ptr [ebp], esi
// 00490161  e83affffff           call 0x4900a0
// 00490166  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0049016e  85f6                 test esi, esi
// 00490170  7453                 je 0x4901c5
// 00490172  57                   push edi
// 00490173  8dbee4000000         lea edi, [esi + 0xe4]
// 00490179  85ff                 test edi, edi
// 0049017b  7431                 je 0x4901ae
// 0049017d  8937                 mov dword ptr [edi], esi
// 0049017f  8b33                 mov esi, dword ptr [ebx]
// 00490181  85f6                 test esi, esi
// 00490183  740c                 je 0x490191
// 00490185  8d4e08               lea ecx, [esi + 8]
// 00490188  ba01000000           mov edx, 1
// 0049018d  f00fc111             lock xadd dword ptr [ecx], edx
// 00490191  8b4f04               mov ecx, dword ptr [edi + 4]
// 00490194  85c9                 test ecx, ecx
// 00490196  7413                 je 0x4901ab
// 00490198  8d4108               lea eax, [ecx + 8]
// 0049019b  83caff               or edx, 0xffffffff
// 0049019e  f00fc110             lock xadd dword ptr [eax], edx
// 004901a2  7507                 jne 0x4901ab
// 004901a4  8b01                 mov eax, dword ptr [ecx]
// 004901a6  8b5008               mov edx, dword ptr [eax + 8]
// 004901a9  ffd2                 call edx
// 004901ab  897704               mov dword ptr [edi + 4], esi
// 004901ae  5f                   pop edi
// 004901af  5e                   pop esi
// 004901b0  8bc5                 mov eax, ebp
// 004901b2  5d                   pop ebp
// 004901b3  5b                   pop ebx
// 004901b4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004901b8  64890d00000000       mov dword ptr fs:[0], ecx
// 004901bf  83c410               add esp, 0x10
// 004901c2  c20800               ret 8
// 004901c5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004901c9  5e                   pop esi
// 004901ca  8bc5                 mov eax, ebp
// 004901cc  5d                   pop ebp
// 004901cd  5b                   pop ebx
// 004901ce  64890d00000000       mov dword ptr fs:[0], ecx
// 004901d5  83c410               add esp, 0x10
// 004901d8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
