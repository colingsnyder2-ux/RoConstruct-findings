// roc 2009-06 00663090  unit: RBX::LegacyController::W4InputType::?$holder  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00663090
//
// 00663090  64a100000000         mov eax, dword ptr fs:[0]
// 00663096  6aff                 push -1
// 00663098  6840c38600           push 0x86c340
// 0066309d  50                   push eax
// 0066309e  64892500000000       mov dword ptr fs:[0], esp
// 006630a5  56                   push esi
// 006630a6  6a0c                 push 0xc
// 006630a8  8bf1                 mov esi, ecx
// 006630aa  e889590b00           call 0x718a38
// 006630af  83c404               add esp, 4
// 006630b2  85c0                 test eax, eax
// 006630b4  7416                 je 0x6630cc
// 006630b6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006630ba  8b542420             mov edx, dword ptr [esp + 0x20]
// 006630be  c700941a8e00         mov dword ptr [eax], 0x8e1a94
// 006630c4  894804               mov dword ptr [eax + 4], ecx
// 006630c7  895008               mov dword ptr [eax + 8], edx
// 006630ca  eb02                 jmp 0x6630ce
// 006630cc  33c0                 xor eax, eax
// 006630ce  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006630d2  51                   push ecx
// 006630d3  51                   push ecx
// 006630d4  8bcc                 mov ecx, esp
// 006630d6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006630de  c744242400000000     mov dword ptr [esp + 0x24], 0
// 006630e6  89642428             mov dword ptr [esp + 0x28], esp
// 006630ea  8901                 mov dword ptr [ecx], eax
// 006630ec  8b542420             mov edx, dword ptr [esp + 0x20]
// 006630f0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006630f4  52                   push edx
// 006630f5  50                   push eax
// 006630f6  c644241c01           mov byte ptr [esp + 0x1c], 1
// 006630fb  e87077f8ff           call 0x5ea870
// 00663100  50                   push eax
// 00663101  8bce                 mov ecx, esi
// 00663103  c644242000           mov byte ptr [esp + 0x20], 0
// 00663108  e8f3cfddff           call 0x440100
// 0066310d  6a00                 push 0
// 0066310f  e81e590b00           call 0x718a32
// 00663114  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00663118  83c404               add esp, 4
// 0066311b  c706041c8e00         mov dword ptr [esi], 0x8e1c04
// 00663121  8bc6                 mov eax, esi
// 00663123  64890d00000000       mov dword ptr fs:[0], ecx
// 0066312a  5e                   pop esi
// 0066312b  83c40c               add esp, 0xc
// 0066312e  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BEMXZP801@AEXM@Z@?$SurfacePropDescriptor@$00M@RBX@@QAE@PBD0P8Surface@1@BEMXZP821@AEXM@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
