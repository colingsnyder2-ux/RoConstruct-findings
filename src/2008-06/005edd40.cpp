// roc 2008-06 005edd40  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005edd40
//
// 005edd40  64a100000000         mov eax, dword ptr fs:[0]
// 005edd46  6aff                 push -1
// 005edd48  6810717d00           push 0x7d7110
// 005edd4d  50                   push eax
// 005edd4e  64892500000000       mov dword ptr fs:[0], esp
// 005edd55  56                   push esi
// 005edd56  6a0c                 push 0xc
// 005edd58  8bf1                 mov esi, ecx
// 005edd5a  e8c12b0b00           call 0x6a0920
// 005edd5f  83c404               add esp, 4
// 005edd62  85c0                 test eax, eax
// 005edd64  7416                 je 0x5edd7c
// 005edd66  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005edd6a  8b542420             mov edx, dword ptr [esp + 0x20]
// 005edd6e  c7003cfd8300         mov dword ptr [eax], 0x83fd3c
// 005edd74  894804               mov dword ptr [eax + 4], ecx
// 005edd77  895008               mov dword ptr [eax + 8], edx
// 005edd7a  eb02                 jmp 0x5edd7e
// 005edd7c  33c0                 xor eax, eax
// 005edd7e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005edd82  51                   push ecx
// 005edd83  51                   push ecx
// 005edd84  8bcc                 mov ecx, esp
// 005edd86  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005edd8e  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005edd96  89642428             mov dword ptr [esp + 0x28], esp
// 005edd9a  8901                 mov dword ptr [ecx], eax
// 005edd9c  8b542420             mov edx, dword ptr [esp + 0x20]
// 005edda0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005edda4  52                   push edx
// 005edda5  50                   push eax
// 005edda6  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005eddab  e840eafaff           call 0x59c7f0
// 005eddb0  50                   push eax
// 005eddb1  8bce                 mov ecx, esi
// 005eddb3  c644242000           mov byte ptr [esp + 0x20], 0
// 005eddb8  e85378e5ff           call 0x445610
// 005eddbd  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005eddc1  c70630ff8300         mov dword ptr [esi], 0x83ff30
// 005eddc7  8bc6                 mov eax, esi
// 005eddc9  64890d00000000       mov dword ptr fs:[0], ecx
// 005eddd0  5e                   pop esi
// 005eddd1  83c40c               add esp, 0xc
// 005eddd4  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??$?0P8Surface@RBX@@BEMXZP801@AEXM@Z@?$SurfacePropDescriptor@$00M@RBX@@QAE@PBD0P8Surface@1@BEMXZP821@AEXM@ZW4Functionality@PropertyDescriptor@Reflection@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
