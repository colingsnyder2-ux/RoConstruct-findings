// roc 2008-06 0040c000  unit: RBX::Reflection::Metadata::VFunctions::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040c000
//
// 0040c000  6aff                 push -1
// 0040c002  68abfd7b00           push 0x7bfdab
// 0040c007  64a100000000         mov eax, dword ptr fs:[0]
// 0040c00d  50                   push eax
// 0040c00e  64892500000000       mov dword ptr fs:[0], esp
// 0040c015  51                   push ecx
// 0040c016  8b442418             mov eax, dword ptr [esp + 0x18]
// 0040c01a  53                   push ebx
// 0040c01b  55                   push ebp
// 0040c01c  8be9                 mov ebp, ecx
// 0040c01e  56                   push esi
// 0040c01f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0040c023  50                   push eax
// 0040c024  8d5d04               lea ebx, [ebp + 4]
// 0040c027  56                   push esi
// 0040c028  8bcb                 mov ecx, ebx
// 0040c02a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0040c02e  897500               mov dword ptr [ebp], esi
// 0040c031  e83affffff           call 0x40bf70
// 0040c036  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0040c03e  85f6                 test esi, esi
// 0040c040  7453                 je 0x40c095
// 0040c042  57                   push edi
// 0040c043  8dbee4000000         lea edi, [esi + 0xe4]
// 0040c049  85ff                 test edi, edi
// 0040c04b  7431                 je 0x40c07e
// 0040c04d  8937                 mov dword ptr [edi], esi
// 0040c04f  8b33                 mov esi, dword ptr [ebx]
// 0040c051  85f6                 test esi, esi
// 0040c053  740c                 je 0x40c061
// 0040c055  8d4e08               lea ecx, [esi + 8]
// 0040c058  ba01000000           mov edx, 1
// 0040c05d  f00fc111             lock xadd dword ptr [ecx], edx
// 0040c061  8b4f04               mov ecx, dword ptr [edi + 4]
// 0040c064  85c9                 test ecx, ecx
// 0040c066  7413                 je 0x40c07b
// 0040c068  8d4108               lea eax, [ecx + 8]
// 0040c06b  83caff               or edx, 0xffffffff
// 0040c06e  f00fc110             lock xadd dword ptr [eax], edx
// 0040c072  7507                 jne 0x40c07b
// 0040c074  8b01                 mov eax, dword ptr [ecx]
// 0040c076  8b5008               mov edx, dword ptr [eax + 8]
// 0040c079  ffd2                 call edx
// 0040c07b  897704               mov dword ptr [edi + 4], esi
// 0040c07e  5f                   pop edi
// 0040c07f  5e                   pop esi
// 0040c080  8bc5                 mov eax, ebp
// 0040c082  5d                   pop ebp
// 0040c083  5b                   pop ebx
// 0040c084  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040c088  64890d00000000       mov dword ptr fs:[0], ecx
// 0040c08f  83c410               add esp, 0x10
// 0040c092  c20800               ret 8
// 0040c095  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040c099  5e                   pop esi
// 0040c09a  8bc5                 mov eax, ebp
// 0040c09c  5d                   pop ebp
// 0040c09d  5b                   pop ebx
// 0040c09e  64890d00000000       mov dword ptr fs:[0], ecx
// 0040c0a5  83c410               add esp, 0x10
// 0040c0a8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
