// roc 2008-06 00635b70  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00635b70
//
// 00635b70  6aff                 push -1
// 00635b72  68abfd7b00           push 0x7bfdab
// 00635b77  64a100000000         mov eax, dword ptr fs:[0]
// 00635b7d  50                   push eax
// 00635b7e  64892500000000       mov dword ptr fs:[0], esp
// 00635b85  51                   push ecx
// 00635b86  8b442418             mov eax, dword ptr [esp + 0x18]
// 00635b8a  53                   push ebx
// 00635b8b  55                   push ebp
// 00635b8c  8be9                 mov ebp, ecx
// 00635b8e  56                   push esi
// 00635b8f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00635b93  50                   push eax
// 00635b94  8d5d04               lea ebx, [ebp + 4]
// 00635b97  56                   push esi
// 00635b98  8bcb                 mov ecx, ebx
// 00635b9a  896c2414             mov dword ptr [esp + 0x14], ebp
// 00635b9e  897500               mov dword ptr [ebp], esi
// 00635ba1  e83affffff           call 0x635ae0
// 00635ba6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00635bae  85f6                 test esi, esi
// 00635bb0  7453                 je 0x635c05
// 00635bb2  57                   push edi
// 00635bb3  8dbee4000000         lea edi, [esi + 0xe4]
// 00635bb9  85ff                 test edi, edi
// 00635bbb  7431                 je 0x635bee
// 00635bbd  8937                 mov dword ptr [edi], esi
// 00635bbf  8b33                 mov esi, dword ptr [ebx]
// 00635bc1  85f6                 test esi, esi
// 00635bc3  740c                 je 0x635bd1
// 00635bc5  8d4e08               lea ecx, [esi + 8]
// 00635bc8  ba01000000           mov edx, 1
// 00635bcd  f00fc111             lock xadd dword ptr [ecx], edx
// 00635bd1  8b4f04               mov ecx, dword ptr [edi + 4]
// 00635bd4  85c9                 test ecx, ecx
// 00635bd6  7413                 je 0x635beb
// 00635bd8  8d4108               lea eax, [ecx + 8]
// 00635bdb  83caff               or edx, 0xffffffff
// 00635bde  f00fc110             lock xadd dword ptr [eax], edx
// 00635be2  7507                 jne 0x635beb
// 00635be4  8b01                 mov eax, dword ptr [ecx]
// 00635be6  8b5008               mov edx, dword ptr [eax + 8]
// 00635be9  ffd2                 call edx
// 00635beb  897704               mov dword ptr [edi + 4], esi
// 00635bee  5f                   pop edi
// 00635bef  5e                   pop esi
// 00635bf0  8bc5                 mov eax, ebp
// 00635bf2  5d                   pop ebp
// 00635bf3  5b                   pop ebx
// 00635bf4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00635bf8  64890d00000000       mov dword ptr fs:[0], ecx
// 00635bff  83c410               add esp, 0x10
// 00635c02  c20800               ret 8
// 00635c05  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00635c09  5e                   pop esi
// 00635c0a  8bc5                 mov eax, ebp
// 00635c0c  5d                   pop ebp
// 00635c0d  5b                   pop ebx
// 00635c0e  64890d00000000       mov dword ptr fs:[0], ecx
// 00635c15  83c410               add esp, 0x10
// 00635c18  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
