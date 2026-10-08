// roc 2007-08 005b7ba0  unit: RBX::Controller::W4InputType::?$EnumDesc  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b7ba0
//
// 005b7ba0  6aff                 push -1
// 005b7ba2  68e0917500           push 0x7591e0
// 005b7ba7  64a100000000         mov eax, dword ptr fs:[0]
// 005b7bad  50                   push eax
// 005b7bae  64892500000000       mov dword ptr fs:[0], esp
// 005b7bb5  51                   push ecx
// 005b7bb6  56                   push esi
// 005b7bb7  6a0c                 push 0xc
// 005b7bb9  8bf1                 mov esi, ecx
// 005b7bbb  e836830700           call 0x62fef6
// 005b7bc0  83c404               add esp, 4
// 005b7bc3  85c0                 test eax, eax
// 005b7bc5  7416                 je 0x5b7bdd
// 005b7bc7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b7bcb  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b7bcf  c700e4847b00         mov dword ptr [eax], 0x7b84e4
// 005b7bd5  894804               mov dword ptr [eax + 4], ecx
// 005b7bd8  895008               mov dword ptr [eax + 8], edx
// 005b7bdb  eb02                 jmp 0x5b7bdf
// 005b7bdd  33c0                 xor eax, eax
// 005b7bdf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b7be3  51                   push ecx
// 005b7be4  51                   push ecx
// 005b7be5  8bcc                 mov ecx, esp
// 005b7be7  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005b7bef  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b7bf7  89642428             mov dword ptr [esp + 0x28], esp
// 005b7bfb  8901                 mov dword ptr [ecx], eax
// 005b7bfd  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b7c01  8b442420             mov eax, dword ptr [esp + 0x20]
// 005b7c05  52                   push edx
// 005b7c06  50                   push eax
// 005b7c07  c644242001           mov byte ptr [esp + 0x20], 1
// 005b7c0c  e8eff4fbff           call 0x577100
// 005b7c11  50                   push eax
// 005b7c12  8bce                 mov ecx, esi
// 005b7c14  c644242400           mov byte ptr [esp + 0x24], 0
// 005b7c19  e8c2d6e8ff           call 0x4452e0
// 005b7c1e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b7c22  51                   push ecx
// 005b7c23  e83a800700           call 0x62fc62
// 005b7c28  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b7c2c  83c404               add esp, 4
// 005b7c2f  c706d4857b00         mov dword ptr [esi], 0x7b85d4
// 005b7c35  8bc6                 mov eax, esi
// 005b7c37  64890d00000000       mov dword ptr fs:[0], ecx
// 005b7c3e  5e                   pop esi
// 005b7c3f  83c410               add esp, 0x10
// 005b7c42  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BEMXZP801@AEXM@Z@?$SurfacePropDescriptor@$00M@RBX@@QAE@PBD0P8Surface@1@BEMXZP821@AEXM@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
