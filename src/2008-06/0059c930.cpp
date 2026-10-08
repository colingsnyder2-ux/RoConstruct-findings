// roc 2008-06 0059c930  unit: RBX::PartInstance  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059c930
//
// 0059c930  6aff                 push -1
// 0059c932  68b0267d00           push 0x7d26b0
// 0059c937  64a100000000         mov eax, dword ptr fs:[0]
// 0059c93d  50                   push eax
// 0059c93e  64892500000000       mov dword ptr fs:[0], esp
// 0059c945  51                   push ecx
// 0059c946  8b442434             mov eax, dword ptr [esp + 0x34]
// 0059c94a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0059c94e  56                   push esi
// 0059c94f  50                   push eax
// 0059c950  8bf1                 mov esi, ecx
// 0059c952  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059c956  83ec0c               sub esp, 0xc
// 0059c959  8bc4                 mov eax, esp
// 0059c95b  8908                 mov dword ptr [eax], ecx
// 0059c95d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0059c961  895004               mov dword ptr [eax + 4], edx
// 0059c964  8b542430             mov edx, dword ptr [esp + 0x30]
// 0059c968  894808               mov dword ptr [eax + 8], ecx
// 0059c96b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059c96f  83ec0c               sub esp, 0xc
// 0059c972  8bc4                 mov eax, esp
// 0059c974  8910                 mov dword ptr [eax], edx
// 0059c976  8b542444             mov edx, dword ptr [esp + 0x44]
// 0059c97a  894804               mov dword ptr [eax + 4], ecx
// 0059c97d  895008               mov dword ptr [eax + 8], edx
// 0059c980  8d442454             lea eax, [esp + 0x54]
// 0059c984  50                   push eax
// 0059c985  e8f6dbffff           call 0x59a580
// 0059c98a  8b08                 mov ecx, dword ptr [eax]
// 0059c98c  83c418               add esp, 0x18
// 0059c98f  c70000000000         mov dword ptr [eax], 0
// 0059c995  8bc4                 mov eax, esp
// 0059c997  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0059c99f  8964240c             mov dword ptr [esp + 0xc], esp
// 0059c9a3  8908                 mov dword ptr [eax], ecx
// 0059c9a5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059c9a9  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059c9ad  51                   push ecx
// 0059c9ae  52                   push edx
// 0059c9af  c644242001           mov byte ptr [esp + 0x20], 1
// 0059c9b4  e837feffff           call 0x59c7f0
// 0059c9b9  50                   push eax
// 0059c9ba  8bce                 mov ecx, esi
// 0059c9bc  c644242400           mov byte ptr [esp + 0x24], 0
// 0059c9c1  e8eadaffff           call 0x59a4b0
// 0059c9c6  8b442438             mov eax, dword ptr [esp + 0x38]
// 0059c9ca  85c0                 test eax, eax
// 0059c9cc  7409                 je 0x59c9d7
// 0059c9ce  50                   push eax
// 0059c9cf  e8a63c1000           call 0x6a067a
// 0059c9d4  83c404               add esp, 4
// 0059c9d7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059c9db  c706342e8300         mov dword ptr [esi], 0x832e34
// 0059c9e1  8bc6                 mov eax, esi
// 0059c9e3  64890d00000000       mov dword ptr fs:[0], ecx
// 0059c9ea  5e                   pop esi
// 0059c9eb  83c410               add esp, 0x10
// 0059c9ee  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
