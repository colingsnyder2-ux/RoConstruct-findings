// roc 2009-06 0063d5c0  unit: RBX::VHat::?$FactoryProduct  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0063d5c0
//
// 0063d5c0  6aff                 push -1
// 0063d5c2  6820c58600           push 0x86c520
// 0063d5c7  64a100000000         mov eax, dword ptr fs:[0]
// 0063d5cd  50                   push eax
// 0063d5ce  64892500000000       mov dword ptr fs:[0], esp
// 0063d5d5  51                   push ecx
// 0063d5d6  8b442434             mov eax, dword ptr [esp + 0x34]
// 0063d5da  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0063d5de  56                   push esi
// 0063d5df  50                   push eax
// 0063d5e0  8bf1                 mov esi, ecx
// 0063d5e2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0063d5e6  83ec0c               sub esp, 0xc
// 0063d5e9  8bc4                 mov eax, esp
// 0063d5eb  8908                 mov dword ptr [eax], ecx
// 0063d5ed  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0063d5f1  895004               mov dword ptr [eax + 4], edx
// 0063d5f4  8b542430             mov edx, dword ptr [esp + 0x30]
// 0063d5f8  894808               mov dword ptr [eax + 8], ecx
// 0063d5fb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0063d5ff  83ec0c               sub esp, 0xc
// 0063d602  8bc4                 mov eax, esp
// 0063d604  8910                 mov dword ptr [eax], edx
// 0063d606  8b542444             mov edx, dword ptr [esp + 0x44]
// 0063d60a  894804               mov dword ptr [eax + 4], ecx
// 0063d60d  895008               mov dword ptr [eax + 8], edx
// 0063d610  8d442454             lea eax, [esp + 0x54]
// 0063d614  50                   push eax
// 0063d615  e856f9ffff           call 0x63cf70
// 0063d61a  8b08                 mov ecx, dword ptr [eax]
// 0063d61c  83c418               add esp, 0x18
// 0063d61f  c70000000000         mov dword ptr [eax], 0
// 0063d625  8bc4                 mov eax, esp
// 0063d627  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0063d62f  8964240c             mov dword ptr [esp + 0xc], esp
// 0063d633  8908                 mov dword ptr [eax], ecx
// 0063d635  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0063d639  8b542420             mov edx, dword ptr [esp + 0x20]
// 0063d63d  51                   push ecx
// 0063d63e  52                   push edx
// 0063d63f  c644242001           mov byte ptr [esp + 0x20], 1
// 0063d644  e857cdfaff           call 0x5ea3a0
// 0063d649  50                   push eax
// 0063d64a  8bce                 mov ecx, esi
// 0063d64c  c644242400           mov byte ptr [esp + 0x24], 0
// 0063d651  e8da3efdff           call 0x611530
// 0063d656  8b442438             mov eax, dword ptr [esp + 0x38]
// 0063d65a  50                   push eax
// 0063d65b  e8d2b30d00           call 0x718a32
// 0063d660  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063d664  83c404               add esp, 4
// 0063d667  c70630bb8d00         mov dword ptr [esi], 0x8dbb30
// 0063d66d  8bc6                 mov eax, esi
// 0063d66f  64890d00000000       mov dword ptr fs:[0], ecx
// 0063d676  5e                   pop esi
// 0063d677  83c410               add esp, 0x10
// 0063d67a  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
