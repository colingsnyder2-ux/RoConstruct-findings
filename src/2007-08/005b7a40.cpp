// roc 2007-08 005b7a40  unit: RBX::Controller::W4InputType::?$EnumDesc  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b7a40
//
// 005b7a40  6aff                 push -1
// 005b7a42  68e0917500           push 0x7591e0
// 005b7a47  64a100000000         mov eax, dword ptr fs:[0]
// 005b7a4d  50                   push eax
// 005b7a4e  64892500000000       mov dword ptr fs:[0], esp
// 005b7a55  51                   push ecx
// 005b7a56  56                   push esi
// 005b7a57  6a0c                 push 0xc
// 005b7a59  8bf1                 mov esi, ecx
// 005b7a5b  e896840700           call 0x62fef6
// 005b7a60  83c404               add esp, 4
// 005b7a63  85c0                 test eax, eax
// 005b7a65  7416                 je 0x5b7a7d
// 005b7a67  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b7a6b  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b7a6f  c70084847b00         mov dword ptr [eax], 0x7b8484
// 005b7a75  894804               mov dword ptr [eax + 4], ecx
// 005b7a78  895008               mov dword ptr [eax + 8], edx
// 005b7a7b  eb02                 jmp 0x5b7a7f
// 005b7a7d  33c0                 xor eax, eax
// 005b7a7f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b7a83  51                   push ecx
// 005b7a84  51                   push ecx
// 005b7a85  8bcc                 mov ecx, esp
// 005b7a87  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005b7a8f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b7a97  89642428             mov dword ptr [esp + 0x28], esp
// 005b7a9b  8901                 mov dword ptr [ecx], eax
// 005b7a9d  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b7aa1  8b442420             mov eax, dword ptr [esp + 0x20]
// 005b7aa5  52                   push edx
// 005b7aa6  50                   push eax
// 005b7aa7  c644242001           mov byte ptr [esp + 0x20], 1
// 005b7aac  e84ff6fbff           call 0x577100
// 005b7ab1  50                   push eax
// 005b7ab2  8bce                 mov ecx, esi
// 005b7ab4  c644242400           mov byte ptr [esp + 0x24], 0
// 005b7ab9  e822d8e8ff           call 0x4452e0
// 005b7abe  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b7ac2  51                   push ecx
// 005b7ac3  e89a810700           call 0x62fc62
// 005b7ac8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b7acc  83c404               add esp, 4
// 005b7acf  c70684857b00         mov dword ptr [esi], 0x7b8584
// 005b7ad5  8bc6                 mov eax, esi
// 005b7ad7  64890d00000000       mov dword ptr fs:[0], ecx
// 005b7ade  5e                   pop esi
// 005b7adf  83c410               add esp, 0x10
// 005b7ae2  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BEMXZP801@AEXM@Z@?$SurfacePropDescriptor@$00M@RBX@@QAE@PBD0P8Surface@1@BEMXZP821@AEXM@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
