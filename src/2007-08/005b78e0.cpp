// roc 2007-08 005b78e0  unit: RBX::Controller::W4InputType::?$EnumDesc  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b78e0
//
// 005b78e0  6aff                 push -1
// 005b78e2  68e0917500           push 0x7591e0
// 005b78e7  64a100000000         mov eax, dword ptr fs:[0]
// 005b78ed  50                   push eax
// 005b78ee  64892500000000       mov dword ptr fs:[0], esp
// 005b78f5  51                   push ecx
// 005b78f6  56                   push esi
// 005b78f7  6a0c                 push 0xc
// 005b78f9  8bf1                 mov esi, ecx
// 005b78fb  e8f6850700           call 0x62fef6
// 005b7900  83c404               add esp, 4
// 005b7903  85c0                 test eax, eax
// 005b7905  7416                 je 0x5b791d
// 005b7907  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b790b  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b790f  c70024847b00         mov dword ptr [eax], 0x7b8424
// 005b7915  894804               mov dword ptr [eax + 4], ecx
// 005b7918  895008               mov dword ptr [eax + 8], edx
// 005b791b  eb02                 jmp 0x5b791f
// 005b791d  33c0                 xor eax, eax
// 005b791f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b7923  51                   push ecx
// 005b7924  51                   push ecx
// 005b7925  8bcc                 mov ecx, esp
// 005b7927  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005b792f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b7937  89642428             mov dword ptr [esp + 0x28], esp
// 005b793b  8901                 mov dword ptr [ecx], eax
// 005b793d  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b7941  8b442420             mov eax, dword ptr [esp + 0x20]
// 005b7945  52                   push edx
// 005b7946  50                   push eax
// 005b7947  c644242001           mov byte ptr [esp + 0x20], 1
// 005b794c  e8aff7fbff           call 0x577100
// 005b7951  50                   push eax
// 005b7952  8bce                 mov ecx, esi
// 005b7954  c644242400           mov byte ptr [esp + 0x24], 0
// 005b7959  e882d9e8ff           call 0x4452e0
// 005b795e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b7962  51                   push ecx
// 005b7963  e8fa820700           call 0x62fc62
// 005b7968  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b796c  83c404               add esp, 4
// 005b796f  c70634857b00         mov dword ptr [esi], 0x7b8534
// 005b7975  8bc6                 mov eax, esi
// 005b7977  64890d00000000       mov dword ptr fs:[0], ecx
// 005b797e  5e                   pop esi
// 005b797f  83c410               add esp, 0x10
// 005b7982  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BEMXZP801@AEXM@Z@?$SurfacePropDescriptor@$00M@RBX@@QAE@PBD0P8Surface@1@BEMXZP821@AEXM@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
