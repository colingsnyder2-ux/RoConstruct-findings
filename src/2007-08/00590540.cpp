// roc 2007-08 00590540  unit: RBX::VObjectValue::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00590540
//
// 00590540  6aff                 push -1
// 00590542  687b6b7500           push 0x756b7b
// 00590547  64a100000000         mov eax, dword ptr fs:[0]
// 0059054d  50                   push eax
// 0059054e  64892500000000       mov dword ptr fs:[0], esp
// 00590555  51                   push ecx
// 00590556  8b442418             mov eax, dword ptr [esp + 0x18]
// 0059055a  53                   push ebx
// 0059055b  55                   push ebp
// 0059055c  8be9                 mov ebp, ecx
// 0059055e  56                   push esi
// 0059055f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00590563  50                   push eax
// 00590564  8d5d04               lea ebx, [ebp + 4]
// 00590567  56                   push esi
// 00590568  8bcb                 mov ecx, ebx
// 0059056a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0059056e  897500               mov dword ptr [ebp], esi
// 00590571  e8eafeffff           call 0x590460
// 00590576  85f6                 test esi, esi
// 00590578  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00590580  7453                 je 0x5905d5
// 00590582  57                   push edi
// 00590583  8dbea4000000         lea edi, [esi + 0xa4]
// 00590589  85ff                 test edi, edi
// 0059058b  7431                 je 0x5905be
// 0059058d  8937                 mov dword ptr [edi], esi
// 0059058f  8b33                 mov esi, dword ptr [ebx]
// 00590591  85f6                 test esi, esi
// 00590593  740c                 je 0x5905a1
// 00590595  8d4e08               lea ecx, [esi + 8]
// 00590598  ba01000000           mov edx, 1
// 0059059d  f00fc111             lock xadd dword ptr [ecx], edx
// 005905a1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005905a4  85c9                 test ecx, ecx
// 005905a6  7413                 je 0x5905bb
// 005905a8  8d4108               lea eax, [ecx + 8]
// 005905ab  83caff               or edx, 0xffffffff
// 005905ae  f00fc110             lock xadd dword ptr [eax], edx
// 005905b2  7507                 jne 0x5905bb
// 005905b4  8b01                 mov eax, dword ptr [ecx]
// 005905b6  8b5008               mov edx, dword ptr [eax + 8]
// 005905b9  ffd2                 call edx
// 005905bb  897704               mov dword ptr [edi + 4], esi
// 005905be  5f                   pop edi
// 005905bf  5e                   pop esi
// 005905c0  8bc5                 mov eax, ebp
// 005905c2  5d                   pop ebp
// 005905c3  5b                   pop ebx
// 005905c4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005905c8  64890d00000000       mov dword ptr fs:[0], ecx
// 005905cf  83c410               add esp, 0x10
// 005905d2  c20800               ret 8
// 005905d5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005905d9  5e                   pop esi
// 005905da  8bc5                 mov eax, ebp
// 005905dc  5d                   pop ebp
// 005905dd  5b                   pop ebx
// 005905de  64890d00000000       mov dword ptr fs:[0], ecx
// 005905e5  83c410               add esp, 0x10
// 005905e8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
