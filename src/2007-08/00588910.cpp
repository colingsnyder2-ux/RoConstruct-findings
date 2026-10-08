// roc 2007-08 00588910  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00588910
//
// 00588910  6aff                 push -1
// 00588912  687b6b7500           push 0x756b7b
// 00588917  64a100000000         mov eax, dword ptr fs:[0]
// 0058891d  50                   push eax
// 0058891e  64892500000000       mov dword ptr fs:[0], esp
// 00588925  51                   push ecx
// 00588926  8b442418             mov eax, dword ptr [esp + 0x18]
// 0058892a  53                   push ebx
// 0058892b  55                   push ebp
// 0058892c  8be9                 mov ebp, ecx
// 0058892e  56                   push esi
// 0058892f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00588933  50                   push eax
// 00588934  8d5d04               lea ebx, [ebp + 4]
// 00588937  56                   push esi
// 00588938  8bcb                 mov ecx, ebx
// 0058893a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0058893e  897500               mov dword ptr [ebp], esi
// 00588941  e8caf8ffff           call 0x588210
// 00588946  85f6                 test esi, esi
// 00588948  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00588950  7453                 je 0x5889a5
// 00588952  57                   push edi
// 00588953  8dbea4000000         lea edi, [esi + 0xa4]
// 00588959  85ff                 test edi, edi
// 0058895b  7431                 je 0x58898e
// 0058895d  8937                 mov dword ptr [edi], esi
// 0058895f  8b33                 mov esi, dword ptr [ebx]
// 00588961  85f6                 test esi, esi
// 00588963  740c                 je 0x588971
// 00588965  8d4e08               lea ecx, [esi + 8]
// 00588968  ba01000000           mov edx, 1
// 0058896d  f00fc111             lock xadd dword ptr [ecx], edx
// 00588971  8b4f04               mov ecx, dword ptr [edi + 4]
// 00588974  85c9                 test ecx, ecx
// 00588976  7413                 je 0x58898b
// 00588978  8d4108               lea eax, [ecx + 8]
// 0058897b  83caff               or edx, 0xffffffff
// 0058897e  f00fc110             lock xadd dword ptr [eax], edx
// 00588982  7507                 jne 0x58898b
// 00588984  8b01                 mov eax, dword ptr [ecx]
// 00588986  8b5008               mov edx, dword ptr [eax + 8]
// 00588989  ffd2                 call edx
// 0058898b  897704               mov dword ptr [edi + 4], esi
// 0058898e  5f                   pop edi
// 0058898f  5e                   pop esi
// 00588990  8bc5                 mov eax, ebp
// 00588992  5d                   pop ebp
// 00588993  5b                   pop ebx
// 00588994  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00588998  64890d00000000       mov dword ptr fs:[0], ecx
// 0058899f  83c410               add esp, 0x10
// 005889a2  c20800               ret 8
// 005889a5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005889a9  5e                   pop esi
// 005889aa  8bc5                 mov eax, ebp
// 005889ac  5d                   pop ebp
// 005889ad  5b                   pop ebx
// 005889ae  64890d00000000       mov dword ptr fs:[0], ecx
// 005889b5  83c410               add esp, 0x10
// 005889b8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
