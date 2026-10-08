// roc 2007-08 00561490  unit: RBX::VMotorFeature::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00561490
//
// 00561490  6aff                 push -1
// 00561492  687b6b7500           push 0x756b7b
// 00561497  64a100000000         mov eax, dword ptr fs:[0]
// 0056149d  50                   push eax
// 0056149e  64892500000000       mov dword ptr fs:[0], esp
// 005614a5  51                   push ecx
// 005614a6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005614aa  53                   push ebx
// 005614ab  55                   push ebp
// 005614ac  8be9                 mov ebp, ecx
// 005614ae  56                   push esi
// 005614af  8b742420             mov esi, dword ptr [esp + 0x20]
// 005614b3  50                   push eax
// 005614b4  8d5d04               lea ebx, [ebp + 4]
// 005614b7  56                   push esi
// 005614b8  8bcb                 mov ecx, ebx
// 005614ba  896c2414             mov dword ptr [esp + 0x14], ebp
// 005614be  897500               mov dword ptr [ebp], esi
// 005614c1  e83affffff           call 0x561400
// 005614c6  85f6                 test esi, esi
// 005614c8  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005614d0  7453                 je 0x561525
// 005614d2  57                   push edi
// 005614d3  8dbea4000000         lea edi, [esi + 0xa4]
// 005614d9  85ff                 test edi, edi
// 005614db  7431                 je 0x56150e
// 005614dd  8937                 mov dword ptr [edi], esi
// 005614df  8b33                 mov esi, dword ptr [ebx]
// 005614e1  85f6                 test esi, esi
// 005614e3  740c                 je 0x5614f1
// 005614e5  8d4e08               lea ecx, [esi + 8]
// 005614e8  ba01000000           mov edx, 1
// 005614ed  f00fc111             lock xadd dword ptr [ecx], edx
// 005614f1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005614f4  85c9                 test ecx, ecx
// 005614f6  7413                 je 0x56150b
// 005614f8  8d4108               lea eax, [ecx + 8]
// 005614fb  83caff               or edx, 0xffffffff
// 005614fe  f00fc110             lock xadd dword ptr [eax], edx
// 00561502  7507                 jne 0x56150b
// 00561504  8b01                 mov eax, dword ptr [ecx]
// 00561506  8b5008               mov edx, dword ptr [eax + 8]
// 00561509  ffd2                 call edx
// 0056150b  897704               mov dword ptr [edi + 4], esi
// 0056150e  5f                   pop edi
// 0056150f  5e                   pop esi
// 00561510  8bc5                 mov eax, ebp
// 00561512  5d                   pop ebp
// 00561513  5b                   pop ebx
// 00561514  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00561518  64890d00000000       mov dword ptr fs:[0], ecx
// 0056151f  83c410               add esp, 0x10
// 00561522  c20800               ret 8
// 00561525  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00561529  5e                   pop esi
// 0056152a  8bc5                 mov eax, ebp
// 0056152c  5d                   pop ebp
// 0056152d  5b                   pop ebx
// 0056152e  64890d00000000       mov dword ptr fs:[0], ecx
// 00561535  83c410               add esp, 0x10
// 00561538  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
