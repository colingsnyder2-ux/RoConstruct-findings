// roc 2007-08 00588860  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00588860
//
// 00588860  6aff                 push -1
// 00588862  687b6b7500           push 0x756b7b
// 00588867  64a100000000         mov eax, dword ptr fs:[0]
// 0058886d  50                   push eax
// 0058886e  64892500000000       mov dword ptr fs:[0], esp
// 00588875  51                   push ecx
// 00588876  8b442418             mov eax, dword ptr [esp + 0x18]
// 0058887a  53                   push ebx
// 0058887b  55                   push ebp
// 0058887c  8be9                 mov ebp, ecx
// 0058887e  56                   push esi
// 0058887f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00588883  50                   push eax
// 00588884  8d5d04               lea ebx, [ebp + 4]
// 00588887  56                   push esi
// 00588888  8bcb                 mov ecx, ebx
// 0058888a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0058888e  897500               mov dword ptr [ebp], esi
// 00588891  e8eaf8ffff           call 0x588180
// 00588896  85f6                 test esi, esi
// 00588898  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005888a0  7453                 je 0x5888f5
// 005888a2  57                   push edi
// 005888a3  8dbea4000000         lea edi, [esi + 0xa4]
// 005888a9  85ff                 test edi, edi
// 005888ab  7431                 je 0x5888de
// 005888ad  8937                 mov dword ptr [edi], esi
// 005888af  8b33                 mov esi, dword ptr [ebx]
// 005888b1  85f6                 test esi, esi
// 005888b3  740c                 je 0x5888c1
// 005888b5  8d4e08               lea ecx, [esi + 8]
// 005888b8  ba01000000           mov edx, 1
// 005888bd  f00fc111             lock xadd dword ptr [ecx], edx
// 005888c1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005888c4  85c9                 test ecx, ecx
// 005888c6  7413                 je 0x5888db
// 005888c8  8d4108               lea eax, [ecx + 8]
// 005888cb  83caff               or edx, 0xffffffff
// 005888ce  f00fc110             lock xadd dword ptr [eax], edx
// 005888d2  7507                 jne 0x5888db
// 005888d4  8b01                 mov eax, dword ptr [ecx]
// 005888d6  8b5008               mov edx, dword ptr [eax + 8]
// 005888d9  ffd2                 call edx
// 005888db  897704               mov dword ptr [edi + 4], esi
// 005888de  5f                   pop edi
// 005888df  5e                   pop esi
// 005888e0  8bc5                 mov eax, ebp
// 005888e2  5d                   pop ebp
// 005888e3  5b                   pop ebx
// 005888e4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005888e8  64890d00000000       mov dword ptr fs:[0], ecx
// 005888ef  83c410               add esp, 0x10
// 005888f2  c20800               ret 8
// 005888f5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005888f9  5e                   pop esi
// 005888fa  8bc5                 mov eax, ebp
// 005888fc  5d                   pop ebp
// 005888fd  5b                   pop ebx
// 005888fe  64890d00000000       mov dword ptr fs:[0], ecx
// 00588905  83c410               add esp, 0x10
// 00588908  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
