// roc 2007-08 0058f440  unit: RBX::VBodyForce::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058f440
//
// 0058f440  6aff                 push -1
// 0058f442  687b6b7500           push 0x756b7b
// 0058f447  64a100000000         mov eax, dword ptr fs:[0]
// 0058f44d  50                   push eax
// 0058f44e  64892500000000       mov dword ptr fs:[0], esp
// 0058f455  51                   push ecx
// 0058f456  8b442418             mov eax, dword ptr [esp + 0x18]
// 0058f45a  53                   push ebx
// 0058f45b  55                   push ebp
// 0058f45c  8be9                 mov ebp, ecx
// 0058f45e  56                   push esi
// 0058f45f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0058f463  50                   push eax
// 0058f464  8d5d04               lea ebx, [ebp + 4]
// 0058f467  56                   push esi
// 0058f468  8bcb                 mov ecx, ebx
// 0058f46a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0058f46e  897500               mov dword ptr [ebp], esi
// 0058f471  e83affffff           call 0x58f3b0
// 0058f476  85f6                 test esi, esi
// 0058f478  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0058f480  7453                 je 0x58f4d5
// 0058f482  57                   push edi
// 0058f483  8dbea4000000         lea edi, [esi + 0xa4]
// 0058f489  85ff                 test edi, edi
// 0058f48b  7431                 je 0x58f4be
// 0058f48d  8937                 mov dword ptr [edi], esi
// 0058f48f  8b33                 mov esi, dword ptr [ebx]
// 0058f491  85f6                 test esi, esi
// 0058f493  740c                 je 0x58f4a1
// 0058f495  8d4e08               lea ecx, [esi + 8]
// 0058f498  ba01000000           mov edx, 1
// 0058f49d  f00fc111             lock xadd dword ptr [ecx], edx
// 0058f4a1  8b4f04               mov ecx, dword ptr [edi + 4]
// 0058f4a4  85c9                 test ecx, ecx
// 0058f4a6  7413                 je 0x58f4bb
// 0058f4a8  8d4108               lea eax, [ecx + 8]
// 0058f4ab  83caff               or edx, 0xffffffff
// 0058f4ae  f00fc110             lock xadd dword ptr [eax], edx
// 0058f4b2  7507                 jne 0x58f4bb
// 0058f4b4  8b01                 mov eax, dword ptr [ecx]
// 0058f4b6  8b5008               mov edx, dword ptr [eax + 8]
// 0058f4b9  ffd2                 call edx
// 0058f4bb  897704               mov dword ptr [edi + 4], esi
// 0058f4be  5f                   pop edi
// 0058f4bf  5e                   pop esi
// 0058f4c0  8bc5                 mov eax, ebp
// 0058f4c2  5d                   pop ebp
// 0058f4c3  5b                   pop ebx
// 0058f4c4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0058f4c8  64890d00000000       mov dword ptr fs:[0], ecx
// 0058f4cf  83c410               add esp, 0x10
// 0058f4d2  c20800               ret 8
// 0058f4d5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058f4d9  5e                   pop esi
// 0058f4da  8bc5                 mov eax, ebp
// 0058f4dc  5d                   pop ebp
// 0058f4dd  5b                   pop ebx
// 0058f4de  64890d00000000       mov dword ptr fs:[0], ecx
// 0058f4e5  83c410               add esp, 0x10
// 0058f4e8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
