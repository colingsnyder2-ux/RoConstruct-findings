// roc 2008-06 005b1b00  unit: RBX::VHat::?$FactoryProduct  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b1b00
//
// 005b1b00  6aff                 push -1
// 005b1b02  68b0267d00           push 0x7d26b0
// 005b1b07  64a100000000         mov eax, dword ptr fs:[0]
// 005b1b0d  50                   push eax
// 005b1b0e  64892500000000       mov dword ptr fs:[0], esp
// 005b1b15  51                   push ecx
// 005b1b16  8b442434             mov eax, dword ptr [esp + 0x34]
// 005b1b1a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005b1b1e  56                   push esi
// 005b1b1f  50                   push eax
// 005b1b20  8bf1                 mov esi, ecx
// 005b1b22  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005b1b26  83ec0c               sub esp, 0xc
// 005b1b29  8bc4                 mov eax, esp
// 005b1b2b  8908                 mov dword ptr [eax], ecx
// 005b1b2d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005b1b31  895004               mov dword ptr [eax + 4], edx
// 005b1b34  8b542430             mov edx, dword ptr [esp + 0x30]
// 005b1b38  894808               mov dword ptr [eax + 8], ecx
// 005b1b3b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005b1b3f  83ec0c               sub esp, 0xc
// 005b1b42  8bc4                 mov eax, esp
// 005b1b44  8910                 mov dword ptr [eax], edx
// 005b1b46  8b542444             mov edx, dword ptr [esp + 0x44]
// 005b1b4a  894804               mov dword ptr [eax + 4], ecx
// 005b1b4d  895008               mov dword ptr [eax + 8], edx
// 005b1b50  8d442454             lea eax, [esp + 0x54]
// 005b1b54  50                   push eax
// 005b1b55  e816f8ffff           call 0x5b1370
// 005b1b5a  8b08                 mov ecx, dword ptr [eax]
// 005b1b5c  83c418               add esp, 0x18
// 005b1b5f  c70000000000         mov dword ptr [eax], 0
// 005b1b65  8bc4                 mov eax, esp
// 005b1b67  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b1b6f  8964240c             mov dword ptr [esp + 0xc], esp
// 005b1b73  8908                 mov dword ptr [eax], ecx
// 005b1b75  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005b1b79  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b1b7d  51                   push ecx
// 005b1b7e  52                   push edx
// 005b1b7f  c644242001           mov byte ptr [esp + 0x20], 1
// 005b1b84  e8c7fdffff           call 0x5b1950
// 005b1b89  50                   push eax
// 005b1b8a  8bce                 mov ecx, esi
// 005b1b8c  c644242400           mov byte ptr [esp + 0x24], 0
// 005b1b91  e81a89feff           call 0x59a4b0
// 005b1b96  8b442438             mov eax, dword ptr [esp + 0x38]
// 005b1b9a  85c0                 test eax, eax
// 005b1b9c  7409                 je 0x5b1ba7
// 005b1b9e  50                   push eax
// 005b1b9f  e8d6ea0e00           call 0x6a067a
// 005b1ba4  83c404               add esp, 4
// 005b1ba7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b1bab  c706884d8300         mov dword ptr [esi], 0x834d88
// 005b1bb1  8bc6                 mov eax, esi
// 005b1bb3  64890d00000000       mov dword ptr fs:[0], ecx
// 005b1bba  5e                   pop esi
// 005b1bbb  83c410               add esp, 0x10
// 005b1bbe  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
