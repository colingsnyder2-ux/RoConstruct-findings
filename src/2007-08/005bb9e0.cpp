// roc 2007-08 005bb9e0  unit: RBX::Controller::W4ControllerType::?$EnumDesc  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bb9e0
//
// 005bb9e0  64a100000000         mov eax, dword ptr fs:[0]
// 005bb9e6  6aff                 push -1
// 005bb9e8  68f0937500           push 0x7593f0
// 005bb9ed  50                   push eax
// 005bb9ee  64892500000000       mov dword ptr fs:[0], esp
// 005bb9f5  8b442428             mov eax, dword ptr [esp + 0x28]
// 005bb9f9  8b542420             mov edx, dword ptr [esp + 0x20]
// 005bb9fd  56                   push esi
// 005bb9fe  50                   push eax
// 005bb9ff  83ec0c               sub esp, 0xc
// 005bba02  8bc4                 mov eax, esp
// 005bba04  8bf1                 mov esi, ecx
// 005bba06  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005bba0a  8908                 mov dword ptr [eax], ecx
// 005bba0c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005bba10  895004               mov dword ptr [eax + 4], edx
// 005bba13  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005bba17  894808               mov dword ptr [eax + 8], ecx
// 005bba1a  52                   push edx
// 005bba1b  8d442440             lea eax, [esp + 0x40]
// 005bba1f  50                   push eax
// 005bba20  e82bf9ffff           call 0x5bb350
// 005bba25  8b10                 mov edx, dword ptr [eax]
// 005bba27  83c410               add esp, 0x10
// 005bba2a  8bcc                 mov ecx, esp
// 005bba2c  c70000000000         mov dword ptr [eax], 0
// 005bba32  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005bba3a  89642424             mov dword ptr [esp + 0x24], esp
// 005bba3e  8911                 mov dword ptr [ecx], edx
// 005bba40  8b542420             mov edx, dword ptr [esp + 0x20]
// 005bba44  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005bba48  52                   push edx
// 005bba49  50                   push eax
// 005bba4a  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005bba4f  e8dc5bf7ff           call 0x531630
// 005bba54  50                   push eax
// 005bba55  8bce                 mov ecx, esi
// 005bba57  c644242000           mov byte ptr [esp + 0x20], 0
// 005bba5c  e86f54f7ff           call 0x530ed0
// 005bba61  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005bba65  51                   push ecx
// 005bba66  e8f7410700           call 0x62fc62
// 005bba6b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bba6f  83c404               add esp, 4
// 005bba72  c706cc8e7b00         mov dword ptr [esi], 0x7b8ecc
// 005bba78  8bc6                 mov eax, esi
// 005bba7a  64890d00000000       mov dword ptr fs:[0], ecx
// 005bba81  5e                   pop esi
// 005bba82  83c40c               add esp, 0xc
// 005bba85  c21c00               ret 0x1c
// library rbxgs/v8datamodel\PVInstance.cpp (function ??$?0HP8PVInstance@RBX@@AEXABVCoordinateFrame@G3D@@@Z@?$PropDescriptor@VPVInstance@RBX@@VCoordinateFrame@G3D@@@Reflection@RBX@@QAE@PBD0HP8PVInstance@2@AEXABVCoordinateFrame@G3D@@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp
