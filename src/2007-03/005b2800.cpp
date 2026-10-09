// roc 2007-03 005b2800  unit: seg_005b0000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b2800
//
// 005b2800  6aff                 push -1
// 005b2802  68709e7500           push 0x759e70
// 005b2807  64a100000000         mov eax, dword ptr fs:[0]
// 005b280d  50                   push eax
// 005b280e  64892500000000       mov dword ptr fs:[0], esp
// 005b2815  51                   push ecx
// 005b2816  56                   push esi
// 005b2817  6a0c                 push 0xc
// 005b2819  8bf1                 mov esi, ecx
// 005b281b  e8e8b80600           call 0x61e108
// 005b2820  83c404               add esp, 4
// 005b2823  85c0                 test eax, eax
// 005b2825  7416                 je 0x5b283d
// 005b2827  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b282b  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b282f  c70084847b00         mov dword ptr [eax], 0x7b8484
// 005b2835  894804               mov dword ptr [eax + 4], ecx
// 005b2838  895008               mov dword ptr [eax + 8], edx
// 005b283b  eb02                 jmp 0x5b283f
// 005b283d  33c0                 xor eax, eax
// 005b283f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b2843  51                   push ecx
// 005b2844  51                   push ecx
// 005b2845  8bcc                 mov ecx, esp
// 005b2847  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005b284f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b2857  89642428             mov dword ptr [esp + 0x28], esp
// 005b285b  8901                 mov dword ptr [ecx], eax
// 005b285d  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b2861  8b442420             mov eax, dword ptr [esp + 0x20]
// 005b2865  52                   push edx
// 005b2866  50                   push eax
// 005b2867  c644242001           mov byte ptr [esp + 0x20], 1
// 005b286c  e88f30fcff           call 0x575900
// 005b2871  50                   push eax
// 005b2872  8bce                 mov ecx, esi
// 005b2874  c644242400           mov byte ptr [esp + 0x24], 0
// 005b2879  e84220e9ff           call 0x4448c0
// 005b287e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b2882  51                   push ecx
// 005b2883  e868b80600           call 0x61e0f0
// 005b2888  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b288c  83c404               add esp, 4
// 005b288f  c7067c857b00         mov dword ptr [esi], 0x7b857c
// 005b2895  8bc6                 mov eax, esi
// 005b2897  64890d00000000       mov dword ptr fs:[0], ecx
// 005b289e  5e                   pop esi
// 005b289f  83c410               add esp, 0x10
// 005b28a2  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BEMXZP801@AEXM@Z@?$SurfacePropDescriptor@$00M@RBX@@QAE@PBD0P8Surface@1@BEMXZP821@AEXM@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
