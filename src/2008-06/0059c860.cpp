// roc 2008-06 0059c860  unit: RBX::PartInstance  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059c860
//
// 0059c860  6aff                 push -1
// 0059c862  68b0267d00           push 0x7d26b0
// 0059c867  64a100000000         mov eax, dword ptr fs:[0]
// 0059c86d  50                   push eax
// 0059c86e  64892500000000       mov dword ptr fs:[0], esp
// 0059c875  51                   push ecx
// 0059c876  8b442434             mov eax, dword ptr [esp + 0x34]
// 0059c87a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0059c87e  56                   push esi
// 0059c87f  50                   push eax
// 0059c880  8bf1                 mov esi, ecx
// 0059c882  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059c886  83ec0c               sub esp, 0xc
// 0059c889  8bc4                 mov eax, esp
// 0059c88b  8908                 mov dword ptr [eax], ecx
// 0059c88d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0059c891  895004               mov dword ptr [eax + 4], edx
// 0059c894  8b542430             mov edx, dword ptr [esp + 0x30]
// 0059c898  894808               mov dword ptr [eax + 8], ecx
// 0059c89b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059c89f  83ec0c               sub esp, 0xc
// 0059c8a2  8bc4                 mov eax, esp
// 0059c8a4  8910                 mov dword ptr [eax], edx
// 0059c8a6  8b542444             mov edx, dword ptr [esp + 0x44]
// 0059c8aa  894804               mov dword ptr [eax + 4], ecx
// 0059c8ad  895008               mov dword ptr [eax + 8], edx
// 0059c8b0  8d442454             lea eax, [esp + 0x54]
// 0059c8b4  50                   push eax
// 0059c8b5  e866dcffff           call 0x59a520
// 0059c8ba  8b08                 mov ecx, dword ptr [eax]
// 0059c8bc  83c418               add esp, 0x18
// 0059c8bf  c70000000000         mov dword ptr [eax], 0
// 0059c8c5  8bc4                 mov eax, esp
// 0059c8c7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0059c8cf  8964240c             mov dword ptr [esp + 0xc], esp
// 0059c8d3  8908                 mov dword ptr [eax], ecx
// 0059c8d5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059c8d9  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059c8dd  51                   push ecx
// 0059c8de  52                   push edx
// 0059c8df  c644242001           mov byte ptr [esp + 0x20], 1
// 0059c8e4  e807ffffff           call 0x59c7f0
// 0059c8e9  50                   push eax
// 0059c8ea  8bce                 mov ecx, esi
// 0059c8ec  c644242400           mov byte ptr [esp + 0x24], 0
// 0059c8f1  e84a7bfeff           call 0x584440
// 0059c8f6  8b442438             mov eax, dword ptr [esp + 0x38]
// 0059c8fa  85c0                 test eax, eax
// 0059c8fc  7409                 je 0x59c907
// 0059c8fe  50                   push eax
// 0059c8ff  e8763d1000           call 0x6a067a
// 0059c904  83c404               add esp, 4
// 0059c907  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059c90b  c706002e8300         mov dword ptr [esi], 0x832e00
// 0059c911  8bc6                 mov eax, esi
// 0059c913  64890d00000000       mov dword ptr fs:[0], ecx
// 0059c91a  5e                   pop esi
// 0059c91b  83c410               add esp, 0x10
// 0059c91e  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
