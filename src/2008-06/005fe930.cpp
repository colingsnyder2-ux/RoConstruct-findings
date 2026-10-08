// roc 2008-06 005fe930  unit: RBX::Tool  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fe930
//
// 005fe930  6aff                 push -1
// 005fe932  68b0267d00           push 0x7d26b0
// 005fe937  64a100000000         mov eax, dword ptr fs:[0]
// 005fe93d  50                   push eax
// 005fe93e  64892500000000       mov dword ptr fs:[0], esp
// 005fe945  51                   push ecx
// 005fe946  8b442434             mov eax, dword ptr [esp + 0x34]
// 005fe94a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005fe94e  56                   push esi
// 005fe94f  50                   push eax
// 005fe950  8bf1                 mov esi, ecx
// 005fe952  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005fe956  83ec0c               sub esp, 0xc
// 005fe959  8bc4                 mov eax, esp
// 005fe95b  8908                 mov dword ptr [eax], ecx
// 005fe95d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005fe961  895004               mov dword ptr [eax + 4], edx
// 005fe964  8b542430             mov edx, dword ptr [esp + 0x30]
// 005fe968  894808               mov dword ptr [eax + 8], ecx
// 005fe96b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005fe96f  83ec0c               sub esp, 0xc
// 005fe972  8bc4                 mov eax, esp
// 005fe974  8910                 mov dword ptr [eax], edx
// 005fe976  8b542444             mov edx, dword ptr [esp + 0x44]
// 005fe97a  894804               mov dword ptr [eax + 4], ecx
// 005fe97d  895008               mov dword ptr [eax + 8], edx
// 005fe980  8d442454             lea eax, [esp + 0x54]
// 005fe984  50                   push eax
// 005fe985  e8c6f3ffff           call 0x5fdd50
// 005fe98a  8b08                 mov ecx, dword ptr [eax]
// 005fe98c  83c418               add esp, 0x18
// 005fe98f  c70000000000         mov dword ptr [eax], 0
// 005fe995  8bc4                 mov eax, esp
// 005fe997  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005fe99f  8964240c             mov dword ptr [esp + 0xc], esp
// 005fe9a3  8908                 mov dword ptr [eax], ecx
// 005fe9a5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005fe9a9  8b542420             mov edx, dword ptr [esp + 0x20]
// 005fe9ad  51                   push ecx
// 005fe9ae  52                   push edx
// 005fe9af  c644242001           mov byte ptr [esp + 0x20], 1
// 005fe9b4  e8574efcff           call 0x5c3810
// 005fe9b9  50                   push eax
// 005fe9ba  8bce                 mov ecx, esi
// 005fe9bc  c644242400           mov byte ptr [esp + 0x24], 0
// 005fe9c1  e8eabaf9ff           call 0x59a4b0
// 005fe9c6  8b442438             mov eax, dword ptr [esp + 0x38]
// 005fe9ca  85c0                 test eax, eax
// 005fe9cc  7409                 je 0x5fe9d7
// 005fe9ce  50                   push eax
// 005fe9cf  e8a61c0a00           call 0x6a067a
// 005fe9d4  83c404               add esp, 4
// 005fe9d7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fe9db  c706181b8400         mov dword ptr [esi], 0x841b18
// 005fe9e1  8bc6                 mov eax, esi
// 005fe9e3  64890d00000000       mov dword ptr fs:[0], ecx
// 005fe9ea  5e                   pop esi
// 005fe9eb  83c410               add esp, 0x10
// 005fe9ee  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
