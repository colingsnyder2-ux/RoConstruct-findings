// roc 2007-03 005b6860  unit: seg_005b0000  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b6860
//
// 005b6860  64a100000000         mov eax, dword ptr fs:[0]
// 005b6866  6aff                 push -1
// 005b6868  68a0a07500           push 0x75a0a0
// 005b686d  50                   push eax
// 005b686e  64892500000000       mov dword ptr fs:[0], esp
// 005b6875  8b442428             mov eax, dword ptr [esp + 0x28]
// 005b6879  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b687d  56                   push esi
// 005b687e  50                   push eax
// 005b687f  83ec0c               sub esp, 0xc
// 005b6882  8bc4                 mov eax, esp
// 005b6884  8bf1                 mov esi, ecx
// 005b6886  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005b688a  8908                 mov dword ptr [eax], ecx
// 005b688c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005b6890  895004               mov dword ptr [eax + 4], edx
// 005b6893  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005b6897  894808               mov dword ptr [eax + 8], ecx
// 005b689a  52                   push edx
// 005b689b  8d442440             lea eax, [esp + 0x40]
// 005b689f  50                   push eax
// 005b68a0  e81bf9ffff           call 0x5b61c0
// 005b68a5  8b10                 mov edx, dword ptr [eax]
// 005b68a7  83c410               add esp, 0x10
// 005b68aa  8bcc                 mov ecx, esp
// 005b68ac  c70000000000         mov dword ptr [eax], 0
// 005b68b2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005b68ba  89642424             mov dword ptr [esp + 0x24], esp
// 005b68be  8911                 mov dword ptr [ecx], edx
// 005b68c0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b68c4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005b68c8  52                   push edx
// 005b68c9  50                   push eax
// 005b68ca  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005b68cf  e8acedf7ff           call 0x535680
// 005b68d4  50                   push eax
// 005b68d5  8bce                 mov ecx, esi
// 005b68d7  c644242000           mov byte ptr [esp + 0x20], 0
// 005b68dc  e80fe3f7ff           call 0x534bf0
// 005b68e1  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b68e5  51                   push ecx
// 005b68e6  e805780600           call 0x61e0f0
// 005b68eb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b68ef  83c404               add esp, 4
// 005b68f2  c706a88e7b00         mov dword ptr [esi], 0x7b8ea8
// 005b68f8  8bc6                 mov eax, esi
// 005b68fa  64890d00000000       mov dword ptr fs:[0], ecx
// 005b6901  5e                   pop esi
// 005b6902  83c40c               add esp, 0xc
// 005b6905  c21c00               ret 0x1c
// library rbxgs/v8datamodel\PVInstance.cpp (function ??$?0HP8PVInstance@RBX@@AEXABVCoordinateFrame@G3D@@@Z@?$PropDescriptor@VPVInstance@RBX@@VCoordinateFrame@G3D@@@Reflection@RBX@@QAE@PBD0HP8PVInstance@2@AEXABVCoordinateFrame@G3D@@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp
