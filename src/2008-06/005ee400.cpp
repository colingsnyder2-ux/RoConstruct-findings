// roc 2008-06 005ee400  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ee400
//
// 005ee400  64a100000000         mov eax, dword ptr fs:[0]
// 005ee406  6aff                 push -1
// 005ee408  6810717d00           push 0x7d7110
// 005ee40d  50                   push eax
// 005ee40e  64892500000000       mov dword ptr fs:[0], esp
// 005ee415  56                   push esi
// 005ee416  6a0c                 push 0xc
// 005ee418  8bf1                 mov esi, ecx
// 005ee41a  e801250b00           call 0x6a0920
// 005ee41f  83c404               add esp, 4
// 005ee422  85c0                 test eax, eax
// 005ee424  7416                 je 0x5ee43c
// 005ee426  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005ee42a  8b542420             mov edx, dword ptr [esp + 0x20]
// 005ee42e  c700b4fd8300         mov dword ptr [eax], 0x83fdb4
// 005ee434  894804               mov dword ptr [eax + 4], ecx
// 005ee437  895008               mov dword ptr [eax + 8], edx
// 005ee43a  eb02                 jmp 0x5ee43e
// 005ee43c  33c0                 xor eax, eax
// 005ee43e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005ee442  51                   push ecx
// 005ee443  51                   push ecx
// 005ee444  8bcc                 mov ecx, esp
// 005ee446  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005ee44e  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005ee456  89642428             mov dword ptr [esp + 0x28], esp
// 005ee45a  8901                 mov dword ptr [ecx], eax
// 005ee45c  8b542420             mov edx, dword ptr [esp + 0x20]
// 005ee460  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005ee464  52                   push edx
// 005ee465  50                   push eax
// 005ee466  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005ee46b  e880e3faff           call 0x59c7f0
// 005ee470  50                   push eax
// 005ee471  8bce                 mov ecx, esi
// 005ee473  c644242000           mov byte ptr [esp + 0x20], 0
// 005ee478  e89371e5ff           call 0x445610
// 005ee47d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ee481  c706d0008400         mov dword ptr [esi], 0x8400d0
// 005ee487  8bc6                 mov eax, esi
// 005ee489  64890d00000000       mov dword ptr fs:[0], ecx
// 005ee490  5e                   pop esi
// 005ee491  83c40c               add esp, 0xc
// 005ee494  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BEMXZP801@AEXM@Z@?$SurfacePropDescriptor@$00M@RBX@@QAE@PBD0P8Surface@1@BEMXZP821@AEXM@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
