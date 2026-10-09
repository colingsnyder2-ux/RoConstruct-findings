// roc 2008-06 005ee080  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ee080
//
// 005ee080  64a100000000         mov eax, dword ptr fs:[0]
// 005ee086  6aff                 push -1
// 005ee088  6810717d00           push 0x7d7110
// 005ee08d  50                   push eax
// 005ee08e  64892500000000       mov dword ptr fs:[0], esp
// 005ee095  56                   push esi
// 005ee096  6a0c                 push 0xc
// 005ee098  8bf1                 mov esi, ecx
// 005ee09a  e881280b00           call 0x6a0920
// 005ee09f  83c404               add esp, 4
// 005ee0a2  85c0                 test eax, eax
// 005ee0a4  7416                 je 0x5ee0bc
// 005ee0a6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005ee0aa  8b542420             mov edx, dword ptr [esp + 0x20]
// 005ee0ae  c70078fd8300         mov dword ptr [eax], 0x83fd78
// 005ee0b4  894804               mov dword ptr [eax + 4], ecx
// 005ee0b7  895008               mov dword ptr [eax + 8], edx
// 005ee0ba  eb02                 jmp 0x5ee0be
// 005ee0bc  33c0                 xor eax, eax
// 005ee0be  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005ee0c2  51                   push ecx
// 005ee0c3  51                   push ecx
// 005ee0c4  8bcc                 mov ecx, esp
// 005ee0c6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005ee0ce  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005ee0d6  89642428             mov dword ptr [esp + 0x28], esp
// 005ee0da  8901                 mov dword ptr [ecx], eax
// 005ee0dc  8b542420             mov edx, dword ptr [esp + 0x20]
// 005ee0e0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005ee0e4  52                   push edx
// 005ee0e5  50                   push eax
// 005ee0e6  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005ee0eb  e800e7faff           call 0x59c7f0
// 005ee0f0  50                   push eax
// 005ee0f1  8bce                 mov ecx, esi
// 005ee0f3  c644242000           mov byte ptr [esp + 0x20], 0
// 005ee0f8  e81375e5ff           call 0x445610
// 005ee0fd  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ee101  c70600008400         mov dword ptr [esi], 0x840000
// 005ee107  8bc6                 mov eax, esi
// 005ee109  64890d00000000       mov dword ptr fs:[0], ecx
// 005ee110  5e                   pop esi
// 005ee111  83c40c               add esp, 0xc
// 005ee114  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BEMXZP801@AEXM@Z@?$SurfacePropDescriptor@$00M@RBX@@QAE@PBD0P8Surface@1@BEMXZP821@AEXM@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
