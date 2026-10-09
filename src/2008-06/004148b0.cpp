// roc 2008-06 004148b0  unit: CopyVerb  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004148b0
//
// 004148b0  6aff                 push -1
// 004148b2  68abfd7b00           push 0x7bfdab
// 004148b7  64a100000000         mov eax, dword ptr fs:[0]
// 004148bd  50                   push eax
// 004148be  64892500000000       mov dword ptr fs:[0], esp
// 004148c5  51                   push ecx
// 004148c6  8b442418             mov eax, dword ptr [esp + 0x18]
// 004148ca  53                   push ebx
// 004148cb  55                   push ebp
// 004148cc  8be9                 mov ebp, ecx
// 004148ce  56                   push esi
// 004148cf  8b742420             mov esi, dword ptr [esp + 0x20]
// 004148d3  50                   push eax
// 004148d4  8d5d04               lea ebx, [ebp + 4]
// 004148d7  56                   push esi
// 004148d8  8bcb                 mov ecx, ebx
// 004148da  896c2414             mov dword ptr [esp + 0x14], ebp
// 004148de  897500               mov dword ptr [ebp], esi
// 004148e1  e83affffff           call 0x414820
// 004148e6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004148ee  85f6                 test esi, esi
// 004148f0  7453                 je 0x414945
// 004148f2  57                   push edi
// 004148f3  8dbee4000000         lea edi, [esi + 0xe4]
// 004148f9  85ff                 test edi, edi
// 004148fb  7431                 je 0x41492e
// 004148fd  8937                 mov dword ptr [edi], esi
// 004148ff  8b33                 mov esi, dword ptr [ebx]
// 00414901  85f6                 test esi, esi
// 00414903  740c                 je 0x414911
// 00414905  8d4e08               lea ecx, [esi + 8]
// 00414908  ba01000000           mov edx, 1
// 0041490d  f00fc111             lock xadd dword ptr [ecx], edx
// 00414911  8b4f04               mov ecx, dword ptr [edi + 4]
// 00414914  85c9                 test ecx, ecx
// 00414916  7413                 je 0x41492b
// 00414918  8d4108               lea eax, [ecx + 8]
// 0041491b  83caff               or edx, 0xffffffff
// 0041491e  f00fc110             lock xadd dword ptr [eax], edx
// 00414922  7507                 jne 0x41492b
// 00414924  8b01                 mov eax, dword ptr [ecx]
// 00414926  8b5008               mov edx, dword ptr [eax + 8]
// 00414929  ffd2                 call edx
// 0041492b  897704               mov dword ptr [edi + 4], esi
// 0041492e  5f                   pop edi
// 0041492f  5e                   pop esi
// 00414930  8bc5                 mov eax, ebp
// 00414932  5d                   pop ebp
// 00414933  5b                   pop ebx
// 00414934  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00414938  64890d00000000       mov dword ptr fs:[0], ecx
// 0041493f  83c410               add esp, 0x10
// 00414942  c20800               ret 8
// 00414945  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00414949  5e                   pop esi
// 0041494a  8bc5                 mov eax, ebp
// 0041494c  5d                   pop ebp
// 0041494d  5b                   pop ebx
// 0041494e  64890d00000000       mov dword ptr fs:[0], ecx
// 00414955  83c410               add esp, 0x10
// 00414958  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
