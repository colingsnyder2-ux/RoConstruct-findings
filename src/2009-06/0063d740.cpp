// roc 2009-06 0063d740  unit: RBX::VHat::?$FactoryProduct  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0063d740
//
// 0063d740  6aff                 push -1
// 0063d742  6820c58600           push 0x86c520
// 0063d747  64a100000000         mov eax, dword ptr fs:[0]
// 0063d74d  50                   push eax
// 0063d74e  64892500000000       mov dword ptr fs:[0], esp
// 0063d755  51                   push ecx
// 0063d756  8b442434             mov eax, dword ptr [esp + 0x34]
// 0063d75a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0063d75e  56                   push esi
// 0063d75f  50                   push eax
// 0063d760  8bf1                 mov esi, ecx
// 0063d762  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0063d766  83ec0c               sub esp, 0xc
// 0063d769  8bc4                 mov eax, esp
// 0063d76b  8908                 mov dword ptr [eax], ecx
// 0063d76d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0063d771  895004               mov dword ptr [eax + 4], edx
// 0063d774  8b542430             mov edx, dword ptr [esp + 0x30]
// 0063d778  894808               mov dword ptr [eax + 8], ecx
// 0063d77b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0063d77f  83ec0c               sub esp, 0xc
// 0063d782  8bc4                 mov eax, esp
// 0063d784  8910                 mov dword ptr [eax], edx
// 0063d786  8b542444             mov edx, dword ptr [esp + 0x44]
// 0063d78a  894804               mov dword ptr [eax + 4], ecx
// 0063d78d  895008               mov dword ptr [eax + 8], edx
// 0063d790  8d442454             lea eax, [esp + 0x54]
// 0063d794  50                   push eax
// 0063d795  e8b6f8ffff           call 0x63d050
// 0063d79a  8b08                 mov ecx, dword ptr [eax]
// 0063d79c  83c418               add esp, 0x18
// 0063d79f  c70000000000         mov dword ptr [eax], 0
// 0063d7a5  8bc4                 mov eax, esp
// 0063d7a7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0063d7af  8964240c             mov dword ptr [esp + 0xc], esp
// 0063d7b3  8908                 mov dword ptr [eax], ecx
// 0063d7b5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0063d7b9  8b542420             mov edx, dword ptr [esp + 0x20]
// 0063d7bd  51                   push ecx
// 0063d7be  52                   push edx
// 0063d7bf  c644242001           mov byte ptr [esp + 0x20], 1
// 0063d7c4  e8d7cbfaff           call 0x5ea3a0
// 0063d7c9  50                   push eax
// 0063d7ca  8bce                 mov ecx, esi
// 0063d7cc  c644242400           mov byte ptr [esp + 0x24], 0
// 0063d7d1  e81a05e0ff           call 0x43dcf0
// 0063d7d6  8b442438             mov eax, dword ptr [esp + 0x38]
// 0063d7da  50                   push eax
// 0063d7db  e852b20d00           call 0x718a32
// 0063d7e0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063d7e4  83c404               add esp, 4
// 0063d7e7  c70698bb8d00         mov dword ptr [esi], 0x8dbb98
// 0063d7ed  8bc6                 mov eax, esi
// 0063d7ef  64890d00000000       mov dword ptr fs:[0], ecx
// 0063d7f6  5e                   pop esi
// 0063d7f7  83c410               add esp, 0x10
// 0063d7fa  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
