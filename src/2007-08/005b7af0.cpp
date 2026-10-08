// roc 2007-08 005b7af0  unit: RBX::Controller::W4InputType::?$EnumDesc  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b7af0
//
// 005b7af0  6aff                 push -1
// 005b7af2  68e0917500           push 0x7591e0
// 005b7af7  64a100000000         mov eax, dword ptr fs:[0]
// 005b7afd  50                   push eax
// 005b7afe  64892500000000       mov dword ptr fs:[0], esp
// 005b7b05  51                   push ecx
// 005b7b06  56                   push esi
// 005b7b07  6a0c                 push 0xc
// 005b7b09  8bf1                 mov esi, ecx
// 005b7b0b  e8e6830700           call 0x62fef6
// 005b7b10  83c404               add esp, 4
// 005b7b13  85c0                 test eax, eax
// 005b7b15  7416                 je 0x5b7b2d
// 005b7b17  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b7b1b  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b7b1f  c700b4847b00         mov dword ptr [eax], 0x7b84b4
// 005b7b25  894804               mov dword ptr [eax + 4], ecx
// 005b7b28  895008               mov dword ptr [eax + 8], edx
// 005b7b2b  eb02                 jmp 0x5b7b2f
// 005b7b2d  33c0                 xor eax, eax
// 005b7b2f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b7b33  51                   push ecx
// 005b7b34  51                   push ecx
// 005b7b35  8bcc                 mov ecx, esp
// 005b7b37  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005b7b3f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b7b47  89642428             mov dword ptr [esp + 0x28], esp
// 005b7b4b  8901                 mov dword ptr [ecx], eax
// 005b7b4d  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b7b51  8b442420             mov eax, dword ptr [esp + 0x20]
// 005b7b55  52                   push edx
// 005b7b56  50                   push eax
// 005b7b57  c644242001           mov byte ptr [esp + 0x20], 1
// 005b7b5c  e89ff5fbff           call 0x577100
// 005b7b61  50                   push eax
// 005b7b62  8bce                 mov ecx, esi
// 005b7b64  c644242400           mov byte ptr [esp + 0x24], 0
// 005b7b69  e872d7e8ff           call 0x4452e0
// 005b7b6e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b7b72  51                   push ecx
// 005b7b73  e8ea800700           call 0x62fc62
// 005b7b78  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b7b7c  83c404               add esp, 4
// 005b7b7f  c706ac857b00         mov dword ptr [esi], 0x7b85ac
// 005b7b85  8bc6                 mov eax, esi
// 005b7b87  64890d00000000       mov dword ptr fs:[0], ecx
// 005b7b8e  5e                   pop esi
// 005b7b8f  83c410               add esp, 0x10
// 005b7b92  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BEMXZP801@AEXM@Z@?$SurfacePropDescriptor@$00M@RBX@@QAE@PBD0P8Surface@1@BEMXZP821@AEXM@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
