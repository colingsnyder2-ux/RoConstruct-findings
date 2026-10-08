// roc 2008-06 005b1a30  unit: RBX::VHat::?$FactoryProduct  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b1a30
//
// 005b1a30  6aff                 push -1
// 005b1a32  68b0267d00           push 0x7d26b0
// 005b1a37  64a100000000         mov eax, dword ptr fs:[0]
// 005b1a3d  50                   push eax
// 005b1a3e  64892500000000       mov dword ptr fs:[0], esp
// 005b1a45  51                   push ecx
// 005b1a46  8b442434             mov eax, dword ptr [esp + 0x34]
// 005b1a4a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005b1a4e  56                   push esi
// 005b1a4f  50                   push eax
// 005b1a50  8bf1                 mov esi, ecx
// 005b1a52  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005b1a56  83ec0c               sub esp, 0xc
// 005b1a59  8bc4                 mov eax, esp
// 005b1a5b  8908                 mov dword ptr [eax], ecx
// 005b1a5d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005b1a61  895004               mov dword ptr [eax + 4], edx
// 005b1a64  8b542430             mov edx, dword ptr [esp + 0x30]
// 005b1a68  894808               mov dword ptr [eax + 8], ecx
// 005b1a6b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005b1a6f  83ec0c               sub esp, 0xc
// 005b1a72  8bc4                 mov eax, esp
// 005b1a74  8910                 mov dword ptr [eax], edx
// 005b1a76  8b542444             mov edx, dword ptr [esp + 0x44]
// 005b1a7a  894804               mov dword ptr [eax + 4], ecx
// 005b1a7d  895008               mov dword ptr [eax + 8], edx
// 005b1a80  8d442454             lea eax, [esp + 0x54]
// 005b1a84  50                   push eax
// 005b1a85  e886f8ffff           call 0x5b1310
// 005b1a8a  8b08                 mov ecx, dword ptr [eax]
// 005b1a8c  83c418               add esp, 0x18
// 005b1a8f  c70000000000         mov dword ptr [eax], 0
// 005b1a95  8bc4                 mov eax, esp
// 005b1a97  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b1a9f  8964240c             mov dword ptr [esp + 0xc], esp
// 005b1aa3  8908                 mov dword ptr [eax], ecx
// 005b1aa5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005b1aa9  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b1aad  51                   push ecx
// 005b1aae  52                   push edx
// 005b1aaf  c644242001           mov byte ptr [esp + 0x20], 1
// 005b1ab4  e897feffff           call 0x5b1950
// 005b1ab9  50                   push eax
// 005b1aba  8bce                 mov ecx, esi
// 005b1abc  c644242400           mov byte ptr [esp + 0x24], 0
// 005b1ac1  e87a29fdff           call 0x584440
// 005b1ac6  8b442438             mov eax, dword ptr [esp + 0x38]
// 005b1aca  85c0                 test eax, eax
// 005b1acc  7409                 je 0x5b1ad7
// 005b1ace  50                   push eax
// 005b1acf  e8a6eb0e00           call 0x6a067a
// 005b1ad4  83c404               add esp, 4
// 005b1ad7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b1adb  c706544d8300         mov dword ptr [esi], 0x834d54
// 005b1ae1  8bc6                 mov eax, esi
// 005b1ae3  64890d00000000       mov dword ptr fs:[0], ecx
// 005b1aea  5e                   pop esi
// 005b1aeb  83c410               add esp, 0x10
// 005b1aee  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
