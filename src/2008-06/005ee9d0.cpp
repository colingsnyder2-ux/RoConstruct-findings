// roc 2008-06 005ee9d0  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ee9d0
//
// 005ee9d0  64a100000000         mov eax, dword ptr fs:[0]
// 005ee9d6  6aff                 push -1
// 005ee9d8  6810717d00           push 0x7d7110
// 005ee9dd  50                   push eax
// 005ee9de  64892500000000       mov dword ptr fs:[0], esp
// 005ee9e5  56                   push esi
// 005ee9e6  6a0c                 push 0xc
// 005ee9e8  8bf1                 mov esi, ecx
// 005ee9ea  e8311f0b00           call 0x6a0920
// 005ee9ef  83c404               add esp, 4
// 005ee9f2  85c0                 test eax, eax
// 005ee9f4  7416                 je 0x5eea0c
// 005ee9f6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005ee9fa  8b542420             mov edx, dword ptr [esp + 0x20]
// 005ee9fe  c7002cfe8300         mov dword ptr [eax], 0x83fe2c
// 005eea04  894804               mov dword ptr [eax + 4], ecx
// 005eea07  895008               mov dword ptr [eax + 8], edx
// 005eea0a  eb02                 jmp 0x5eea0e
// 005eea0c  33c0                 xor eax, eax
// 005eea0e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005eea12  51                   push ecx
// 005eea13  51                   push ecx
// 005eea14  8bcc                 mov ecx, esp
// 005eea16  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005eea1e  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005eea26  89642428             mov dword ptr [esp + 0x28], esp
// 005eea2a  8901                 mov dword ptr [ecx], eax
// 005eea2c  8b542420             mov edx, dword ptr [esp + 0x20]
// 005eea30  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005eea34  52                   push edx
// 005eea35  50                   push eax
// 005eea36  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005eea3b  e8b0ddfaff           call 0x59c7f0
// 005eea40  50                   push eax
// 005eea41  8bce                 mov ecx, esi
// 005eea43  c644242000           mov byte ptr [esp + 0x20], 0
// 005eea48  e8c36be5ff           call 0x445610
// 005eea4d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005eea51  c70670028400         mov dword ptr [esi], 0x840270
// 005eea57  8bc6                 mov eax, esi
// 005eea59  64890d00000000       mov dword ptr fs:[0], ecx
// 005eea60  5e                   pop esi
// 005eea61  83c40c               add esp, 0xc
// 005eea64  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BEMXZP801@AEXM@Z@?$SurfacePropDescriptor@$00M@RBX@@QAE@PBD0P8Surface@1@BEMXZP821@AEXM@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
