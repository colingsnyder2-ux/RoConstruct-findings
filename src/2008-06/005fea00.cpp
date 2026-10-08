// roc 2008-06 005fea00  unit: RBX::Tool  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fea00
//
// 005fea00  6aff                 push -1
// 005fea02  68b0267d00           push 0x7d26b0
// 005fea07  64a100000000         mov eax, dword ptr fs:[0]
// 005fea0d  50                   push eax
// 005fea0e  64892500000000       mov dword ptr fs:[0], esp
// 005fea15  51                   push ecx
// 005fea16  8b442434             mov eax, dword ptr [esp + 0x34]
// 005fea1a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005fea1e  56                   push esi
// 005fea1f  50                   push eax
// 005fea20  8bf1                 mov esi, ecx
// 005fea22  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005fea26  83ec0c               sub esp, 0xc
// 005fea29  8bc4                 mov eax, esp
// 005fea2b  8908                 mov dword ptr [eax], ecx
// 005fea2d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005fea31  895004               mov dword ptr [eax + 4], edx
// 005fea34  8b542430             mov edx, dword ptr [esp + 0x30]
// 005fea38  894808               mov dword ptr [eax + 8], ecx
// 005fea3b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005fea3f  83ec0c               sub esp, 0xc
// 005fea42  8bc4                 mov eax, esp
// 005fea44  8910                 mov dword ptr [eax], edx
// 005fea46  8b542444             mov edx, dword ptr [esp + 0x44]
// 005fea4a  894804               mov dword ptr [eax + 4], ecx
// 005fea4d  895008               mov dword ptr [eax + 8], edx
// 005fea50  8d442454             lea eax, [esp + 0x54]
// 005fea54  50                   push eax
// 005fea55  e856f3ffff           call 0x5fddb0
// 005fea5a  8b08                 mov ecx, dword ptr [eax]
// 005fea5c  83c418               add esp, 0x18
// 005fea5f  c70000000000         mov dword ptr [eax], 0
// 005fea65  8bc4                 mov eax, esp
// 005fea67  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005fea6f  8964240c             mov dword ptr [esp + 0xc], esp
// 005fea73  8908                 mov dword ptr [eax], ecx
// 005fea75  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005fea79  8b542420             mov edx, dword ptr [esp + 0x20]
// 005fea7d  51                   push ecx
// 005fea7e  52                   push edx
// 005fea7f  c644242001           mov byte ptr [esp + 0x20], 1
// 005fea84  e8874dfcff           call 0x5c3810
// 005fea89  50                   push eax
// 005fea8a  8bce                 mov ecx, esi
// 005fea8c  c644242400           mov byte ptr [esp + 0x24], 0
// 005fea91  e80a48e4ff           call 0x4432a0
// 005fea96  8b442438             mov eax, dword ptr [esp + 0x38]
// 005fea9a  85c0                 test eax, eax
// 005fea9c  7409                 je 0x5feaa7
// 005fea9e  50                   push eax
// 005fea9f  e8d61b0a00           call 0x6a067a
// 005feaa4  83c404               add esp, 4
// 005feaa7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005feaab  c7064c1b8400         mov dword ptr [esi], 0x841b4c
// 005feab1  8bc6                 mov eax, esi
// 005feab3  64890d00000000       mov dword ptr fs:[0], ecx
// 005feaba  5e                   pop esi
// 005feabb  83c410               add esp, 0x10
// 005feabe  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
