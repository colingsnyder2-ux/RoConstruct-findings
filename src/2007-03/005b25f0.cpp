// roc 2007-03 005b25f0  unit: seg_005b0000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b25f0
//
// 005b25f0  6aff                 push -1
// 005b25f2  68709e7500           push 0x759e70
// 005b25f7  64a100000000         mov eax, dword ptr fs:[0]
// 005b25fd  50                   push eax
// 005b25fe  64892500000000       mov dword ptr fs:[0], esp
// 005b2605  51                   push ecx
// 005b2606  56                   push esi
// 005b2607  6a0c                 push 0xc
// 005b2609  8bf1                 mov esi, ecx
// 005b260b  e8f8ba0600           call 0x61e108
// 005b2610  83c404               add esp, 4
// 005b2613  85c0                 test eax, eax
// 005b2615  7416                 je 0x5b262d
// 005b2617  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b261b  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b261f  c700f4837b00         mov dword ptr [eax], 0x7b83f4
// 005b2625  894804               mov dword ptr [eax + 4], ecx
// 005b2628  895008               mov dword ptr [eax + 8], edx
// 005b262b  eb02                 jmp 0x5b262f
// 005b262d  33c0                 xor eax, eax
// 005b262f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b2633  51                   push ecx
// 005b2634  51                   push ecx
// 005b2635  8bcc                 mov ecx, esp
// 005b2637  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005b263f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b2647  89642428             mov dword ptr [esp + 0x28], esp
// 005b264b  8901                 mov dword ptr [ecx], eax
// 005b264d  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b2651  8b442420             mov eax, dword ptr [esp + 0x20]
// 005b2655  52                   push edx
// 005b2656  50                   push eax
// 005b2657  c644242001           mov byte ptr [esp + 0x20], 1
// 005b265c  e89f32fcff           call 0x575900
// 005b2661  50                   push eax
// 005b2662  8bce                 mov ecx, esi
// 005b2664  c644242400           mov byte ptr [esp + 0x24], 0
// 005b2669  e85222e9ff           call 0x4448c0
// 005b266e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b2672  51                   push ecx
// 005b2673  e878ba0600           call 0x61e0f0
// 005b2678  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b267c  83c404               add esp, 4
// 005b267f  c70604857b00         mov dword ptr [esi], 0x7b8504
// 005b2685  8bc6                 mov eax, esi
// 005b2687  64890d00000000       mov dword ptr fs:[0], ecx
// 005b268e  5e                   pop esi
// 005b268f  83c410               add esp, 0x10
// 005b2692  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BEMXZP801@AEXM@Z@?$SurfacePropDescriptor@$00M@RBX@@QAE@PBD0P8Surface@1@BEMXZP821@AEXM@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
