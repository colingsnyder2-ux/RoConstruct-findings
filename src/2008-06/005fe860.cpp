// roc 2008-06 005fe860  unit: RBX::Tool  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fe860
//
// 005fe860  6aff                 push -1
// 005fe862  68b0267d00           push 0x7d26b0
// 005fe867  64a100000000         mov eax, dword ptr fs:[0]
// 005fe86d  50                   push eax
// 005fe86e  64892500000000       mov dword ptr fs:[0], esp
// 005fe875  51                   push ecx
// 005fe876  8b442434             mov eax, dword ptr [esp + 0x34]
// 005fe87a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005fe87e  56                   push esi
// 005fe87f  50                   push eax
// 005fe880  8bf1                 mov esi, ecx
// 005fe882  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005fe886  83ec0c               sub esp, 0xc
// 005fe889  8bc4                 mov eax, esp
// 005fe88b  8908                 mov dword ptr [eax], ecx
// 005fe88d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005fe891  895004               mov dword ptr [eax + 4], edx
// 005fe894  8b542430             mov edx, dword ptr [esp + 0x30]
// 005fe898  894808               mov dword ptr [eax + 8], ecx
// 005fe89b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005fe89f  83ec0c               sub esp, 0xc
// 005fe8a2  8bc4                 mov eax, esp
// 005fe8a4  8910                 mov dword ptr [eax], edx
// 005fe8a6  8b542444             mov edx, dword ptr [esp + 0x44]
// 005fe8aa  894804               mov dword ptr [eax + 4], ecx
// 005fe8ad  895008               mov dword ptr [eax + 8], edx
// 005fe8b0  8d442454             lea eax, [esp + 0x54]
// 005fe8b4  50                   push eax
// 005fe8b5  e836f4ffff           call 0x5fdcf0
// 005fe8ba  8b08                 mov ecx, dword ptr [eax]
// 005fe8bc  83c418               add esp, 0x18
// 005fe8bf  c70000000000         mov dword ptr [eax], 0
// 005fe8c5  8bc4                 mov eax, esp
// 005fe8c7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005fe8cf  8964240c             mov dword ptr [esp + 0xc], esp
// 005fe8d3  8908                 mov dword ptr [eax], ecx
// 005fe8d5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005fe8d9  8b542420             mov edx, dword ptr [esp + 0x20]
// 005fe8dd  51                   push ecx
// 005fe8de  52                   push edx
// 005fe8df  c644242001           mov byte ptr [esp + 0x20], 1
// 005fe8e4  e8274ffcff           call 0x5c3810
// 005fe8e9  50                   push eax
// 005fe8ea  8bce                 mov ecx, esi
// 005fe8ec  c644242400           mov byte ptr [esp + 0x24], 0
// 005fe8f1  e84a5bf8ff           call 0x584440
// 005fe8f6  8b442438             mov eax, dword ptr [esp + 0x38]
// 005fe8fa  85c0                 test eax, eax
// 005fe8fc  7409                 je 0x5fe907
// 005fe8fe  50                   push eax
// 005fe8ff  e8761d0a00           call 0x6a067a
// 005fe904  83c404               add esp, 4
// 005fe907  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fe90b  c706e41a8400         mov dword ptr [esi], 0x841ae4
// 005fe911  8bc6                 mov eax, esi
// 005fe913  64890d00000000       mov dword ptr fs:[0], ecx
// 005fe91a  5e                   pop esi
// 005fe91b  83c410               add esp, 0x10
// 005fe91e  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
