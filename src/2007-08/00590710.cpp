// roc 2007-08 00590710  unit: RBX::VObjectValue::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00590710
//
// 00590710  6aff                 push -1
// 00590712  687b6b7500           push 0x756b7b
// 00590717  64a100000000         mov eax, dword ptr fs:[0]
// 0059071d  50                   push eax
// 0059071e  64892500000000       mov dword ptr fs:[0], esp
// 00590725  51                   push ecx
// 00590726  8b442418             mov eax, dword ptr [esp + 0x18]
// 0059072a  53                   push ebx
// 0059072b  55                   push ebp
// 0059072c  8be9                 mov ebp, ecx
// 0059072e  56                   push esi
// 0059072f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00590733  50                   push eax
// 00590734  8d5d04               lea ebx, [ebp + 4]
// 00590737  56                   push esi
// 00590738  8bcb                 mov ecx, ebx
// 0059073a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0059073e  897500               mov dword ptr [ebp], esi
// 00590741  e83affffff           call 0x590680
// 00590746  85f6                 test esi, esi
// 00590748  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00590750  7453                 je 0x5907a5
// 00590752  57                   push edi
// 00590753  8dbea4000000         lea edi, [esi + 0xa4]
// 00590759  85ff                 test edi, edi
// 0059075b  7431                 je 0x59078e
// 0059075d  8937                 mov dword ptr [edi], esi
// 0059075f  8b33                 mov esi, dword ptr [ebx]
// 00590761  85f6                 test esi, esi
// 00590763  740c                 je 0x590771
// 00590765  8d4e08               lea ecx, [esi + 8]
// 00590768  ba01000000           mov edx, 1
// 0059076d  f00fc111             lock xadd dword ptr [ecx], edx
// 00590771  8b4f04               mov ecx, dword ptr [edi + 4]
// 00590774  85c9                 test ecx, ecx
// 00590776  7413                 je 0x59078b
// 00590778  8d4108               lea eax, [ecx + 8]
// 0059077b  83caff               or edx, 0xffffffff
// 0059077e  f00fc110             lock xadd dword ptr [eax], edx
// 00590782  7507                 jne 0x59078b
// 00590784  8b01                 mov eax, dword ptr [ecx]
// 00590786  8b5008               mov edx, dword ptr [eax + 8]
// 00590789  ffd2                 call edx
// 0059078b  897704               mov dword ptr [edi + 4], esi
// 0059078e  5f                   pop edi
// 0059078f  5e                   pop esi
// 00590790  8bc5                 mov eax, ebp
// 00590792  5d                   pop ebp
// 00590793  5b                   pop ebx
// 00590794  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00590798  64890d00000000       mov dword ptr fs:[0], ecx
// 0059079f  83c410               add esp, 0x10
// 005907a2  c20800               ret 8
// 005907a5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005907a9  5e                   pop esi
// 005907aa  8bc5                 mov eax, ebp
// 005907ac  5d                   pop ebp
// 005907ad  5b                   pop ebx
// 005907ae  64890d00000000       mov dword ptr fs:[0], ecx
// 005907b5  83c410               add esp, 0x10
// 005907b8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
