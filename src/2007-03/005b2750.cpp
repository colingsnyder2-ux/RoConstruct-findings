// roc 2007-03 005b2750  unit: seg_005b0000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b2750
//
// 005b2750  6aff                 push -1
// 005b2752  68709e7500           push 0x759e70
// 005b2757  64a100000000         mov eax, dword ptr fs:[0]
// 005b275d  50                   push eax
// 005b275e  64892500000000       mov dword ptr fs:[0], esp
// 005b2765  51                   push ecx
// 005b2766  56                   push esi
// 005b2767  6a0c                 push 0xc
// 005b2769  8bf1                 mov esi, ecx
// 005b276b  e898b90600           call 0x61e108
// 005b2770  83c404               add esp, 4
// 005b2773  85c0                 test eax, eax
// 005b2775  7416                 je 0x5b278d
// 005b2777  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b277b  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b277f  c70054847b00         mov dword ptr [eax], 0x7b8454
// 005b2785  894804               mov dword ptr [eax + 4], ecx
// 005b2788  895008               mov dword ptr [eax + 8], edx
// 005b278b  eb02                 jmp 0x5b278f
// 005b278d  33c0                 xor eax, eax
// 005b278f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b2793  51                   push ecx
// 005b2794  51                   push ecx
// 005b2795  8bcc                 mov ecx, esp
// 005b2797  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005b279f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b27a7  89642428             mov dword ptr [esp + 0x28], esp
// 005b27ab  8901                 mov dword ptr [ecx], eax
// 005b27ad  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b27b1  8b442420             mov eax, dword ptr [esp + 0x20]
// 005b27b5  52                   push edx
// 005b27b6  50                   push eax
// 005b27b7  c644242001           mov byte ptr [esp + 0x20], 1
// 005b27bc  e83f31fcff           call 0x575900
// 005b27c1  50                   push eax
// 005b27c2  8bce                 mov ecx, esi
// 005b27c4  c644242400           mov byte ptr [esp + 0x24], 0
// 005b27c9  e8f220e9ff           call 0x4448c0
// 005b27ce  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b27d2  51                   push ecx
// 005b27d3  e818b90600           call 0x61e0f0
// 005b27d8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b27dc  83c404               add esp, 4
// 005b27df  c70654857b00         mov dword ptr [esi], 0x7b8554
// 005b27e5  8bc6                 mov eax, esi
// 005b27e7  64890d00000000       mov dword ptr fs:[0], ecx
// 005b27ee  5e                   pop esi
// 005b27ef  83c410               add esp, 0x10
// 005b27f2  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BEMXZP801@AEXM@Z@?$SurfacePropDescriptor@$00M@RBX@@QAE@PBD0P8Surface@1@BEMXZP821@AEXM@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
