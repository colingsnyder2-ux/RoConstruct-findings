// roc 2007-08 005f1180  unit: RBX::Reflection::Metadata::VClass::?$BoundPropGetSet  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f1180
//
// 005f1180  6aff                 push -1
// 005f1182  687b6b7500           push 0x756b7b
// 005f1187  64a100000000         mov eax, dword ptr fs:[0]
// 005f118d  50                   push eax
// 005f118e  64892500000000       mov dword ptr fs:[0], esp
// 005f1195  51                   push ecx
// 005f1196  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f119a  53                   push ebx
// 005f119b  55                   push ebp
// 005f119c  8be9                 mov ebp, ecx
// 005f119e  56                   push esi
// 005f119f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005f11a3  50                   push eax
// 005f11a4  8d5d04               lea ebx, [ebp + 4]
// 005f11a7  56                   push esi
// 005f11a8  8bcb                 mov ecx, ebx
// 005f11aa  896c2414             mov dword ptr [esp + 0x14], ebp
// 005f11ae  897500               mov dword ptr [ebp], esi
// 005f11b1  e8eafaffff           call 0x5f0ca0
// 005f11b6  85f6                 test esi, esi
// 005f11b8  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005f11c0  7453                 je 0x5f1215
// 005f11c2  57                   push edi
// 005f11c3  8dbea4000000         lea edi, [esi + 0xa4]
// 005f11c9  85ff                 test edi, edi
// 005f11cb  7431                 je 0x5f11fe
// 005f11cd  8937                 mov dword ptr [edi], esi
// 005f11cf  8b33                 mov esi, dword ptr [ebx]
// 005f11d1  85f6                 test esi, esi
// 005f11d3  740c                 je 0x5f11e1
// 005f11d5  8d4e08               lea ecx, [esi + 8]
// 005f11d8  ba01000000           mov edx, 1
// 005f11dd  f00fc111             lock xadd dword ptr [ecx], edx
// 005f11e1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005f11e4  85c9                 test ecx, ecx
// 005f11e6  7413                 je 0x5f11fb
// 005f11e8  8d4108               lea eax, [ecx + 8]
// 005f11eb  83caff               or edx, 0xffffffff
// 005f11ee  f00fc110             lock xadd dword ptr [eax], edx
// 005f11f2  7507                 jne 0x5f11fb
// 005f11f4  8b01                 mov eax, dword ptr [ecx]
// 005f11f6  8b5008               mov edx, dword ptr [eax + 8]
// 005f11f9  ffd2                 call edx
// 005f11fb  897704               mov dword ptr [edi + 4], esi
// 005f11fe  5f                   pop edi
// 005f11ff  5e                   pop esi
// 005f1200  8bc5                 mov eax, ebp
// 005f1202  5d                   pop ebp
// 005f1203  5b                   pop ebx
// 005f1204  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f1208  64890d00000000       mov dword ptr fs:[0], ecx
// 005f120f  83c410               add esp, 0x10
// 005f1212  c20800               ret 8
// 005f1215  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f1219  5e                   pop esi
// 005f121a  8bc5                 mov eax, ebp
// 005f121c  5d                   pop ebp
// 005f121d  5b                   pop ebx
// 005f121e  64890d00000000       mov dword ptr fs:[0], ecx
// 005f1225  83c410               add esp, 0x10
// 005f1228  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
