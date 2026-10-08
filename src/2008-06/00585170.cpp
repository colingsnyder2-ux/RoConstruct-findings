// roc 2008-06 00585170  unit: RBX::ModelInstance  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00585170
//
// 00585170  6aff                 push -1
// 00585172  68b0267d00           push 0x7d26b0
// 00585177  64a100000000         mov eax, dword ptr fs:[0]
// 0058517d  50                   push eax
// 0058517e  64892500000000       mov dword ptr fs:[0], esp
// 00585185  51                   push ecx
// 00585186  8b442434             mov eax, dword ptr [esp + 0x34]
// 0058518a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0058518e  56                   push esi
// 0058518f  50                   push eax
// 00585190  8bf1                 mov esi, ecx
// 00585192  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00585196  83ec0c               sub esp, 0xc
// 00585199  8bc4                 mov eax, esp
// 0058519b  8908                 mov dword ptr [eax], ecx
// 0058519d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005851a1  895004               mov dword ptr [eax + 4], edx
// 005851a4  8b542430             mov edx, dword ptr [esp + 0x30]
// 005851a8  894808               mov dword ptr [eax + 8], ecx
// 005851ab  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005851af  83ec0c               sub esp, 0xc
// 005851b2  8bc4                 mov eax, esp
// 005851b4  8910                 mov dword ptr [eax], edx
// 005851b6  8b542444             mov edx, dword ptr [esp + 0x44]
// 005851ba  894804               mov dword ptr [eax + 4], ecx
// 005851bd  895008               mov dword ptr [eax + 8], edx
// 005851c0  8d442454             lea eax, [esp + 0x54]
// 005851c4  50                   push eax
// 005851c5  e806f3ffff           call 0x5844d0
// 005851ca  8b08                 mov ecx, dword ptr [eax]
// 005851cc  83c418               add esp, 0x18
// 005851cf  c70000000000         mov dword ptr [eax], 0
// 005851d5  8bc4                 mov eax, esp
// 005851d7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005851df  8964240c             mov dword ptr [esp + 0xc], esp
// 005851e3  8908                 mov dword ptr [eax], ecx
// 005851e5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005851e9  8b542420             mov edx, dword ptr [esp + 0x20]
// 005851ed  51                   push ecx
// 005851ee  52                   push edx
// 005851ef  c644242001           mov byte ptr [esp + 0x20], 1
// 005851f4  e807ffffff           call 0x585100
// 005851f9  50                   push eax
// 005851fa  8bce                 mov ecx, esi
// 005851fc  c644242400           mov byte ptr [esp + 0x24], 0
// 00585201  e83af2ffff           call 0x584440
// 00585206  8b442438             mov eax, dword ptr [esp + 0x38]
// 0058520a  85c0                 test eax, eax
// 0058520c  7409                 je 0x585217
// 0058520e  50                   push eax
// 0058520f  e866b41100           call 0x6a067a
// 00585214  83c404               add esp, 4
// 00585217  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058521b  c706300e8300         mov dword ptr [esi], 0x830e30
// 00585221  8bc6                 mov eax, esi
// 00585223  64890d00000000       mov dword ptr fs:[0], ecx
// 0058522a  5e                   pop esi
// 0058522b  83c410               add esp, 0x10
// 0058522e  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
