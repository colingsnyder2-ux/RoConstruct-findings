// roc 2009-06 0063d680  unit: RBX::VHat::?$FactoryProduct  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0063d680
//
// 0063d680  6aff                 push -1
// 0063d682  6820c58600           push 0x86c520
// 0063d687  64a100000000         mov eax, dword ptr fs:[0]
// 0063d68d  50                   push eax
// 0063d68e  64892500000000       mov dword ptr fs:[0], esp
// 0063d695  51                   push ecx
// 0063d696  8b442434             mov eax, dword ptr [esp + 0x34]
// 0063d69a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0063d69e  56                   push esi
// 0063d69f  50                   push eax
// 0063d6a0  8bf1                 mov esi, ecx
// 0063d6a2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0063d6a6  83ec0c               sub esp, 0xc
// 0063d6a9  8bc4                 mov eax, esp
// 0063d6ab  8908                 mov dword ptr [eax], ecx
// 0063d6ad  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0063d6b1  895004               mov dword ptr [eax + 4], edx
// 0063d6b4  8b542430             mov edx, dword ptr [esp + 0x30]
// 0063d6b8  894808               mov dword ptr [eax + 8], ecx
// 0063d6bb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0063d6bf  83ec0c               sub esp, 0xc
// 0063d6c2  8bc4                 mov eax, esp
// 0063d6c4  8910                 mov dword ptr [eax], edx
// 0063d6c6  8b542444             mov edx, dword ptr [esp + 0x44]
// 0063d6ca  894804               mov dword ptr [eax + 4], ecx
// 0063d6cd  895008               mov dword ptr [eax + 8], edx
// 0063d6d0  8d442454             lea eax, [esp + 0x54]
// 0063d6d4  50                   push eax
// 0063d6d5  e806f9ffff           call 0x63cfe0
// 0063d6da  8b08                 mov ecx, dword ptr [eax]
// 0063d6dc  83c418               add esp, 0x18
// 0063d6df  c70000000000         mov dword ptr [eax], 0
// 0063d6e5  8bc4                 mov eax, esp
// 0063d6e7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0063d6ef  8964240c             mov dword ptr [esp + 0xc], esp
// 0063d6f3  8908                 mov dword ptr [eax], ecx
// 0063d6f5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0063d6f9  8b542420             mov edx, dword ptr [esp + 0x20]
// 0063d6fd  51                   push ecx
// 0063d6fe  52                   push edx
// 0063d6ff  c644242001           mov byte ptr [esp + 0x20], 1
// 0063d704  e897ccfaff           call 0x5ea3a0
// 0063d709  50                   push eax
// 0063d70a  8bce                 mov ecx, esi
// 0063d70c  c644242400           mov byte ptr [esp + 0x24], 0
// 0063d711  e83a9dfeff           call 0x627450
// 0063d716  8b442438             mov eax, dword ptr [esp + 0x38]
// 0063d71a  50                   push eax
// 0063d71b  e812b30d00           call 0x718a32
// 0063d720  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063d724  83c404               add esp, 4
// 0063d727  c70664bb8d00         mov dword ptr [esi], 0x8dbb64
// 0063d72d  8bc6                 mov eax, esi
// 0063d72f  64890d00000000       mov dword ptr fs:[0], ecx
// 0063d736  5e                   pop esi
// 0063d737  83c410               add esp, 0x10
// 0063d73a  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
