// roc 2007-08 005b7c50  unit: RBX::Controller::W4InputType::?$EnumDesc  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b7c50
//
// 005b7c50  6aff                 push -1
// 005b7c52  68e0917500           push 0x7591e0
// 005b7c57  64a100000000         mov eax, dword ptr fs:[0]
// 005b7c5d  50                   push eax
// 005b7c5e  64892500000000       mov dword ptr fs:[0], esp
// 005b7c65  51                   push ecx
// 005b7c66  56                   push esi
// 005b7c67  6a0c                 push 0xc
// 005b7c69  8bf1                 mov esi, ecx
// 005b7c6b  e886820700           call 0x62fef6
// 005b7c70  83c404               add esp, 4
// 005b7c73  85c0                 test eax, eax
// 005b7c75  7416                 je 0x5b7c8d
// 005b7c77  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b7c7b  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b7c7f  c70014857b00         mov dword ptr [eax], 0x7b8514
// 005b7c85  894804               mov dword ptr [eax + 4], ecx
// 005b7c88  895008               mov dword ptr [eax + 8], edx
// 005b7c8b  eb02                 jmp 0x5b7c8f
// 005b7c8d  33c0                 xor eax, eax
// 005b7c8f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b7c93  51                   push ecx
// 005b7c94  51                   push ecx
// 005b7c95  8bcc                 mov ecx, esp
// 005b7c97  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005b7c9f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b7ca7  89642428             mov dword ptr [esp + 0x28], esp
// 005b7cab  8901                 mov dword ptr [ecx], eax
// 005b7cad  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b7cb1  8b442420             mov eax, dword ptr [esp + 0x20]
// 005b7cb5  52                   push edx
// 005b7cb6  50                   push eax
// 005b7cb7  c644242001           mov byte ptr [esp + 0x20], 1
// 005b7cbc  e83ff4fbff           call 0x577100
// 005b7cc1  50                   push eax
// 005b7cc2  8bce                 mov ecx, esi
// 005b7cc4  c644242400           mov byte ptr [esp + 0x24], 0
// 005b7cc9  e812d6e8ff           call 0x4452e0
// 005b7cce  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b7cd2  51                   push ecx
// 005b7cd3  e88a7f0700           call 0x62fc62
// 005b7cd8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b7cdc  83c404               add esp, 4
// 005b7cdf  c706fc857b00         mov dword ptr [esi], 0x7b85fc
// 005b7ce5  8bc6                 mov eax, esi
// 005b7ce7  64890d00000000       mov dword ptr fs:[0], ecx
// 005b7cee  5e                   pop esi
// 005b7cef  83c410               add esp, 0x10
// 005b7cf2  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BEMXZP801@AEXM@Z@?$SurfacePropDescriptor@$00M@RBX@@QAE@PBD0P8Surface@1@BEMXZP821@AEXM@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
