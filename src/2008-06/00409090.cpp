// roc 2008-06 00409090  unit: VCRenderSettings::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00409090
//
// 00409090  6aff                 push -1
// 00409092  68abfd7b00           push 0x7bfdab
// 00409097  64a100000000         mov eax, dword ptr fs:[0]
// 0040909d  50                   push eax
// 0040909e  64892500000000       mov dword ptr fs:[0], esp
// 004090a5  51                   push ecx
// 004090a6  8b442418             mov eax, dword ptr [esp + 0x18]
// 004090aa  53                   push ebx
// 004090ab  55                   push ebp
// 004090ac  8be9                 mov ebp, ecx
// 004090ae  56                   push esi
// 004090af  8b742420             mov esi, dword ptr [esp + 0x20]
// 004090b3  50                   push eax
// 004090b4  8d5d04               lea ebx, [ebp + 4]
// 004090b7  56                   push esi
// 004090b8  8bcb                 mov ecx, ebx
// 004090ba  896c2414             mov dword ptr [esp + 0x14], ebp
// 004090be  897500               mov dword ptr [ebp], esi
// 004090c1  e83affffff           call 0x409000
// 004090c6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004090ce  85f6                 test esi, esi
// 004090d0  7453                 je 0x409125
// 004090d2  57                   push edi
// 004090d3  8dbee4000000         lea edi, [esi + 0xe4]
// 004090d9  85ff                 test edi, edi
// 004090db  7431                 je 0x40910e
// 004090dd  8937                 mov dword ptr [edi], esi
// 004090df  8b33                 mov esi, dword ptr [ebx]
// 004090e1  85f6                 test esi, esi
// 004090e3  740c                 je 0x4090f1
// 004090e5  8d4e08               lea ecx, [esi + 8]
// 004090e8  ba01000000           mov edx, 1
// 004090ed  f00fc111             lock xadd dword ptr [ecx], edx
// 004090f1  8b4f04               mov ecx, dword ptr [edi + 4]
// 004090f4  85c9                 test ecx, ecx
// 004090f6  7413                 je 0x40910b
// 004090f8  8d4108               lea eax, [ecx + 8]
// 004090fb  83caff               or edx, 0xffffffff
// 004090fe  f00fc110             lock xadd dword ptr [eax], edx
// 00409102  7507                 jne 0x40910b
// 00409104  8b01                 mov eax, dword ptr [ecx]
// 00409106  8b5008               mov edx, dword ptr [eax + 8]
// 00409109  ffd2                 call edx
// 0040910b  897704               mov dword ptr [edi + 4], esi
// 0040910e  5f                   pop edi
// 0040910f  5e                   pop esi
// 00409110  8bc5                 mov eax, ebp
// 00409112  5d                   pop ebp
// 00409113  5b                   pop ebx
// 00409114  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00409118  64890d00000000       mov dword ptr fs:[0], ecx
// 0040911f  83c410               add esp, 0x10
// 00409122  c20800               ret 8
// 00409125  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00409129  5e                   pop esi
// 0040912a  8bc5                 mov eax, ebp
// 0040912c  5d                   pop ebp
// 0040912d  5b                   pop ebx
// 0040912e  64890d00000000       mov dword ptr fs:[0], ecx
// 00409135  83c410               add esp, 0x10
// 00409138  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
