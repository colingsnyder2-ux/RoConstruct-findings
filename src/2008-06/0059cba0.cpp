// roc 2008-06 0059cba0  unit: RBX::PartInstance  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059cba0
//
// 0059cba0  6aff                 push -1
// 0059cba2  68b0267d00           push 0x7d26b0
// 0059cba7  64a100000000         mov eax, dword ptr fs:[0]
// 0059cbad  50                   push eax
// 0059cbae  64892500000000       mov dword ptr fs:[0], esp
// 0059cbb5  51                   push ecx
// 0059cbb6  8b442434             mov eax, dword ptr [esp + 0x34]
// 0059cbba  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0059cbbe  56                   push esi
// 0059cbbf  50                   push eax
// 0059cbc0  8bf1                 mov esi, ecx
// 0059cbc2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059cbc6  83ec0c               sub esp, 0xc
// 0059cbc9  8bc4                 mov eax, esp
// 0059cbcb  8908                 mov dword ptr [eax], ecx
// 0059cbcd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0059cbd1  895004               mov dword ptr [eax + 4], edx
// 0059cbd4  8b542430             mov edx, dword ptr [esp + 0x30]
// 0059cbd8  894808               mov dword ptr [eax + 8], ecx
// 0059cbdb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059cbdf  83ec0c               sub esp, 0xc
// 0059cbe2  8bc4                 mov eax, esp
// 0059cbe4  8910                 mov dword ptr [eax], edx
// 0059cbe6  8b542444             mov edx, dword ptr [esp + 0x44]
// 0059cbea  894804               mov dword ptr [eax + 4], ecx
// 0059cbed  895008               mov dword ptr [eax + 8], edx
// 0059cbf0  8d442454             lea eax, [esp + 0x54]
// 0059cbf4  50                   push eax
// 0059cbf5  e806dbffff           call 0x59a700
// 0059cbfa  8b08                 mov ecx, dword ptr [eax]
// 0059cbfc  83c418               add esp, 0x18
// 0059cbff  c70000000000         mov dword ptr [eax], 0
// 0059cc05  8bc4                 mov eax, esp
// 0059cc07  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0059cc0f  8964240c             mov dword ptr [esp + 0xc], esp
// 0059cc13  8908                 mov dword ptr [eax], ecx
// 0059cc15  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059cc19  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059cc1d  51                   push ecx
// 0059cc1e  52                   push edx
// 0059cc1f  c644242001           mov byte ptr [esp + 0x20], 1
// 0059cc24  e8c7fbffff           call 0x59c7f0
// 0059cc29  50                   push eax
// 0059cc2a  8bce                 mov ecx, esi
// 0059cc2c  c644242400           mov byte ptr [esp + 0x24], 0
// 0059cc31  e8da89eaff           call 0x445610
// 0059cc36  8b442438             mov eax, dword ptr [esp + 0x38]
// 0059cc3a  85c0                 test eax, eax
// 0059cc3c  7409                 je 0x59cc47
// 0059cc3e  50                   push eax
// 0059cc3f  e8363a1000           call 0x6a067a
// 0059cc44  83c404               add esp, 4
// 0059cc47  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059cc4b  c706d02e8300         mov dword ptr [esi], 0x832ed0
// 0059cc51  8bc6                 mov eax, esi
// 0059cc53  64890d00000000       mov dword ptr fs:[0], ecx
// 0059cc5a  5e                   pop esi
// 0059cc5b  83c410               add esp, 0x10
// 0059cc5e  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
