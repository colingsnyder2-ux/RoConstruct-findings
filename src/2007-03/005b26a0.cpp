// roc 2007-03 005b26a0  unit: seg_005b0000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b26a0
//
// 005b26a0  6aff                 push -1
// 005b26a2  68709e7500           push 0x759e70
// 005b26a7  64a100000000         mov eax, dword ptr fs:[0]
// 005b26ad  50                   push eax
// 005b26ae  64892500000000       mov dword ptr fs:[0], esp
// 005b26b5  51                   push ecx
// 005b26b6  56                   push esi
// 005b26b7  6a0c                 push 0xc
// 005b26b9  8bf1                 mov esi, ecx
// 005b26bb  e848ba0600           call 0x61e108
// 005b26c0  83c404               add esp, 4
// 005b26c3  85c0                 test eax, eax
// 005b26c5  7416                 je 0x5b26dd
// 005b26c7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b26cb  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b26cf  c70024847b00         mov dword ptr [eax], 0x7b8424
// 005b26d5  894804               mov dword ptr [eax + 4], ecx
// 005b26d8  895008               mov dword ptr [eax + 8], edx
// 005b26db  eb02                 jmp 0x5b26df
// 005b26dd  33c0                 xor eax, eax
// 005b26df  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b26e3  51                   push ecx
// 005b26e4  51                   push ecx
// 005b26e5  8bcc                 mov ecx, esp
// 005b26e7  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005b26ef  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b26f7  89642428             mov dword ptr [esp + 0x28], esp
// 005b26fb  8901                 mov dword ptr [ecx], eax
// 005b26fd  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b2701  8b442420             mov eax, dword ptr [esp + 0x20]
// 005b2705  52                   push edx
// 005b2706  50                   push eax
// 005b2707  c644242001           mov byte ptr [esp + 0x20], 1
// 005b270c  e8ef31fcff           call 0x575900
// 005b2711  50                   push eax
// 005b2712  8bce                 mov ecx, esi
// 005b2714  c644242400           mov byte ptr [esp + 0x24], 0
// 005b2719  e8a221e9ff           call 0x4448c0
// 005b271e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b2722  51                   push ecx
// 005b2723  e8c8b90600           call 0x61e0f0
// 005b2728  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b272c  83c404               add esp, 4
// 005b272f  c7062c857b00         mov dword ptr [esi], 0x7b852c
// 005b2735  8bc6                 mov eax, esi
// 005b2737  64890d00000000       mov dword ptr fs:[0], ecx
// 005b273e  5e                   pop esi
// 005b273f  83c410               add esp, 0x10
// 005b2742  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BEMXZP801@AEXM@Z@?$SurfacePropDescriptor@$00M@RBX@@QAE@PBD0P8Surface@1@BEMXZP821@AEXM@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
