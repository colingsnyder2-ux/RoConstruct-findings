// roc 2008-06 005eec20  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eec20
//
// 005eec20  64a100000000         mov eax, dword ptr fs:[0]
// 005eec26  6aff                 push -1
// 005eec28  6810717d00           push 0x7d7110
// 005eec2d  50                   push eax
// 005eec2e  64892500000000       mov dword ptr fs:[0], esp
// 005eec35  56                   push esi
// 005eec36  6a0c                 push 0xc
// 005eec38  8bf1                 mov esi, ecx
// 005eec3a  e8e11c0b00           call 0x6a0920
// 005eec3f  83c404               add esp, 4
// 005eec42  85c0                 test eax, eax
// 005eec44  7416                 je 0x5eec5c
// 005eec46  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005eec4a  8b542420             mov edx, dword ptr [esp + 0x20]
// 005eec4e  c70068fe8300         mov dword ptr [eax], 0x83fe68
// 005eec54  894804               mov dword ptr [eax + 4], ecx
// 005eec57  895008               mov dword ptr [eax + 8], edx
// 005eec5a  eb02                 jmp 0x5eec5e
// 005eec5c  33c0                 xor eax, eax
// 005eec5e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005eec62  51                   push ecx
// 005eec63  51                   push ecx
// 005eec64  8bcc                 mov ecx, esp
// 005eec66  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005eec6e  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005eec76  89642428             mov dword ptr [esp + 0x28], esp
// 005eec7a  8901                 mov dword ptr [ecx], eax
// 005eec7c  8b542420             mov edx, dword ptr [esp + 0x20]
// 005eec80  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005eec84  52                   push edx
// 005eec85  50                   push eax
// 005eec86  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005eec8b  e860dbfaff           call 0x59c7f0
// 005eec90  50                   push eax
// 005eec91  8bce                 mov ecx, esi
// 005eec93  c644242000           mov byte ptr [esp + 0x20], 0
// 005eec98  e87369e5ff           call 0x445610
// 005eec9d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005eeca1  c70640038400         mov dword ptr [esi], 0x840340
// 005eeca7  8bc6                 mov eax, esi
// 005eeca9  64890d00000000       mov dword ptr fs:[0], ecx
// 005eecb0  5e                   pop esi
// 005eecb1  83c40c               add esp, 0xc
// 005eecb4  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BEMXZP801@AEXM@Z@?$SurfacePropDescriptor@$00M@RBX@@QAE@PBD0P8Surface@1@BEMXZP821@AEXM@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
