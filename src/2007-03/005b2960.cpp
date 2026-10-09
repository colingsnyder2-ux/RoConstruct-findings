// roc 2007-03 005b2960  unit: seg_005b0000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b2960
//
// 005b2960  6aff                 push -1
// 005b2962  68709e7500           push 0x759e70
// 005b2967  64a100000000         mov eax, dword ptr fs:[0]
// 005b296d  50                   push eax
// 005b296e  64892500000000       mov dword ptr fs:[0], esp
// 005b2975  51                   push ecx
// 005b2976  56                   push esi
// 005b2977  6a0c                 push 0xc
// 005b2979  8bf1                 mov esi, ecx
// 005b297b  e888b70600           call 0x61e108
// 005b2980  83c404               add esp, 4
// 005b2983  85c0                 test eax, eax
// 005b2985  7416                 je 0x5b299d
// 005b2987  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b298b  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b298f  c700e4847b00         mov dword ptr [eax], 0x7b84e4
// 005b2995  894804               mov dword ptr [eax + 4], ecx
// 005b2998  895008               mov dword ptr [eax + 8], edx
// 005b299b  eb02                 jmp 0x5b299f
// 005b299d  33c0                 xor eax, eax
// 005b299f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b29a3  51                   push ecx
// 005b29a4  51                   push ecx
// 005b29a5  8bcc                 mov ecx, esp
// 005b29a7  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005b29af  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b29b7  89642428             mov dword ptr [esp + 0x28], esp
// 005b29bb  8901                 mov dword ptr [ecx], eax
// 005b29bd  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b29c1  8b442420             mov eax, dword ptr [esp + 0x20]
// 005b29c5  52                   push edx
// 005b29c6  50                   push eax
// 005b29c7  c644242001           mov byte ptr [esp + 0x20], 1
// 005b29cc  e82f2ffcff           call 0x575900
// 005b29d1  50                   push eax
// 005b29d2  8bce                 mov ecx, esi
// 005b29d4  c644242400           mov byte ptr [esp + 0x24], 0
// 005b29d9  e8e21ee9ff           call 0x4448c0
// 005b29de  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b29e2  51                   push ecx
// 005b29e3  e808b70600           call 0x61e0f0
// 005b29e8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b29ec  83c404               add esp, 4
// 005b29ef  c706cc857b00         mov dword ptr [esi], 0x7b85cc
// 005b29f5  8bc6                 mov eax, esi
// 005b29f7  64890d00000000       mov dword ptr fs:[0], ecx
// 005b29fe  5e                   pop esi
// 005b29ff  83c410               add esp, 0x10
// 005b2a02  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BEMXZP801@AEXM@Z@?$SurfacePropDescriptor@$00M@RBX@@QAE@PBD0P8Surface@1@BEMXZP821@AEXM@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
