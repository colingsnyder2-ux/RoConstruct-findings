// roc 2007-03 005b28b0  unit: seg_005b0000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b28b0
//
// 005b28b0  6aff                 push -1
// 005b28b2  68709e7500           push 0x759e70
// 005b28b7  64a100000000         mov eax, dword ptr fs:[0]
// 005b28bd  50                   push eax
// 005b28be  64892500000000       mov dword ptr fs:[0], esp
// 005b28c5  51                   push ecx
// 005b28c6  56                   push esi
// 005b28c7  6a0c                 push 0xc
// 005b28c9  8bf1                 mov esi, ecx
// 005b28cb  e838b80600           call 0x61e108
// 005b28d0  83c404               add esp, 4
// 005b28d3  85c0                 test eax, eax
// 005b28d5  7416                 je 0x5b28ed
// 005b28d7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b28db  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b28df  c700b4847b00         mov dword ptr [eax], 0x7b84b4
// 005b28e5  894804               mov dword ptr [eax + 4], ecx
// 005b28e8  895008               mov dword ptr [eax + 8], edx
// 005b28eb  eb02                 jmp 0x5b28ef
// 005b28ed  33c0                 xor eax, eax
// 005b28ef  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b28f3  51                   push ecx
// 005b28f4  51                   push ecx
// 005b28f5  8bcc                 mov ecx, esp
// 005b28f7  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005b28ff  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b2907  89642428             mov dword ptr [esp + 0x28], esp
// 005b290b  8901                 mov dword ptr [ecx], eax
// 005b290d  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b2911  8b442420             mov eax, dword ptr [esp + 0x20]
// 005b2915  52                   push edx
// 005b2916  50                   push eax
// 005b2917  c644242001           mov byte ptr [esp + 0x20], 1
// 005b291c  e8df2ffcff           call 0x575900
// 005b2921  50                   push eax
// 005b2922  8bce                 mov ecx, esi
// 005b2924  c644242400           mov byte ptr [esp + 0x24], 0
// 005b2929  e8921fe9ff           call 0x4448c0
// 005b292e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b2932  51                   push ecx
// 005b2933  e8b8b70600           call 0x61e0f0
// 005b2938  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b293c  83c404               add esp, 4
// 005b293f  c706a4857b00         mov dword ptr [esi], 0x7b85a4
// 005b2945  8bc6                 mov eax, esi
// 005b2947  64890d00000000       mov dword ptr fs:[0], ecx
// 005b294e  5e                   pop esi
// 005b294f  83c410               add esp, 0x10
// 005b2952  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BEMXZP801@AEXM@Z@?$SurfacePropDescriptor@$00M@RBX@@QAE@PBD0P8Surface@1@BEMXZP821@AEXM@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
