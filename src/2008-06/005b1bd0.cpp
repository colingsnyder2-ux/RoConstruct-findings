// roc 2008-06 005b1bd0  unit: RBX::VHat::?$FactoryProduct  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b1bd0
//
// 005b1bd0  6aff                 push -1
// 005b1bd2  68b0267d00           push 0x7d26b0
// 005b1bd7  64a100000000         mov eax, dword ptr fs:[0]
// 005b1bdd  50                   push eax
// 005b1bde  64892500000000       mov dword ptr fs:[0], esp
// 005b1be5  51                   push ecx
// 005b1be6  8b442434             mov eax, dword ptr [esp + 0x34]
// 005b1bea  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005b1bee  56                   push esi
// 005b1bef  50                   push eax
// 005b1bf0  8bf1                 mov esi, ecx
// 005b1bf2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005b1bf6  83ec0c               sub esp, 0xc
// 005b1bf9  8bc4                 mov eax, esp
// 005b1bfb  8908                 mov dword ptr [eax], ecx
// 005b1bfd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005b1c01  895004               mov dword ptr [eax + 4], edx
// 005b1c04  8b542430             mov edx, dword ptr [esp + 0x30]
// 005b1c08  894808               mov dword ptr [eax + 8], ecx
// 005b1c0b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005b1c0f  83ec0c               sub esp, 0xc
// 005b1c12  8bc4                 mov eax, esp
// 005b1c14  8910                 mov dword ptr [eax], edx
// 005b1c16  8b542444             mov edx, dword ptr [esp + 0x44]
// 005b1c1a  894804               mov dword ptr [eax + 4], ecx
// 005b1c1d  895008               mov dword ptr [eax + 8], edx
// 005b1c20  8d442454             lea eax, [esp + 0x54]
// 005b1c24  50                   push eax
// 005b1c25  e8a6f7ffff           call 0x5b13d0
// 005b1c2a  8b08                 mov ecx, dword ptr [eax]
// 005b1c2c  83c418               add esp, 0x18
// 005b1c2f  c70000000000         mov dword ptr [eax], 0
// 005b1c35  8bc4                 mov eax, esp
// 005b1c37  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b1c3f  8964240c             mov dword ptr [esp + 0xc], esp
// 005b1c43  8908                 mov dword ptr [eax], ecx
// 005b1c45  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005b1c49  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b1c4d  51                   push ecx
// 005b1c4e  52                   push edx
// 005b1c4f  c644242001           mov byte ptr [esp + 0x20], 1
// 005b1c54  e8f7fcffff           call 0x5b1950
// 005b1c59  50                   push eax
// 005b1c5a  8bce                 mov ecx, esi
// 005b1c5c  c644242400           mov byte ptr [esp + 0x24], 0
// 005b1c61  e83a16e9ff           call 0x4432a0
// 005b1c66  8b442438             mov eax, dword ptr [esp + 0x38]
// 005b1c6a  85c0                 test eax, eax
// 005b1c6c  7409                 je 0x5b1c77
// 005b1c6e  50                   push eax
// 005b1c6f  e806ea0e00           call 0x6a067a
// 005b1c74  83c404               add esp, 4
// 005b1c77  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b1c7b  c706bc4d8300         mov dword ptr [esi], 0x834dbc
// 005b1c81  8bc6                 mov eax, esi
// 005b1c83  64890d00000000       mov dword ptr fs:[0], ecx
// 005b1c8a  5e                   pop esi
// 005b1c8b  83c410               add esp, 0x10
// 005b1c8e  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
