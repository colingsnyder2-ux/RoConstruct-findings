// roc 2007-08 00590980  unit: RBX::VDebrisService::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00590980
//
// 00590980  6aff                 push -1
// 00590982  687b6b7500           push 0x756b7b
// 00590987  64a100000000         mov eax, dword ptr fs:[0]
// 0059098d  50                   push eax
// 0059098e  64892500000000       mov dword ptr fs:[0], esp
// 00590995  51                   push ecx
// 00590996  8b442418             mov eax, dword ptr [esp + 0x18]
// 0059099a  53                   push ebx
// 0059099b  55                   push ebp
// 0059099c  8be9                 mov ebp, ecx
// 0059099e  56                   push esi
// 0059099f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005909a3  50                   push eax
// 005909a4  8d5d04               lea ebx, [ebp + 4]
// 005909a7  56                   push esi
// 005909a8  8bcb                 mov ecx, ebx
// 005909aa  896c2414             mov dword ptr [esp + 0x14], ebp
// 005909ae  897500               mov dword ptr [ebp], esi
// 005909b1  e83affffff           call 0x5908f0
// 005909b6  85f6                 test esi, esi
// 005909b8  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005909c0  7453                 je 0x590a15
// 005909c2  57                   push edi
// 005909c3  8dbea4000000         lea edi, [esi + 0xa4]
// 005909c9  85ff                 test edi, edi
// 005909cb  7431                 je 0x5909fe
// 005909cd  8937                 mov dword ptr [edi], esi
// 005909cf  8b33                 mov esi, dword ptr [ebx]
// 005909d1  85f6                 test esi, esi
// 005909d3  740c                 je 0x5909e1
// 005909d5  8d4e08               lea ecx, [esi + 8]
// 005909d8  ba01000000           mov edx, 1
// 005909dd  f00fc111             lock xadd dword ptr [ecx], edx
// 005909e1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005909e4  85c9                 test ecx, ecx
// 005909e6  7413                 je 0x5909fb
// 005909e8  8d4108               lea eax, [ecx + 8]
// 005909eb  83caff               or edx, 0xffffffff
// 005909ee  f00fc110             lock xadd dword ptr [eax], edx
// 005909f2  7507                 jne 0x5909fb
// 005909f4  8b01                 mov eax, dword ptr [ecx]
// 005909f6  8b5008               mov edx, dword ptr [eax + 8]
// 005909f9  ffd2                 call edx
// 005909fb  897704               mov dword ptr [edi + 4], esi
// 005909fe  5f                   pop edi
// 005909ff  5e                   pop esi
// 00590a00  8bc5                 mov eax, ebp
// 00590a02  5d                   pop ebp
// 00590a03  5b                   pop ebx
// 00590a04  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00590a08  64890d00000000       mov dword ptr fs:[0], ecx
// 00590a0f  83c410               add esp, 0x10
// 00590a12  c20800               ret 8
// 00590a15  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00590a19  5e                   pop esi
// 00590a1a  8bc5                 mov eax, ebp
// 00590a1c  5d                   pop ebp
// 00590a1d  5b                   pop ebx
// 00590a1e  64890d00000000       mov dword ptr fs:[0], ecx
// 00590a25  83c410               add esp, 0x10
// 00590a28  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
