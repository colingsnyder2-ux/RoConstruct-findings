// roc 2008-06 006191c0  unit: RBX::Flag  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006191c0
//
// 006191c0  6aff                 push -1
// 006191c2  68b0267d00           push 0x7d26b0
// 006191c7  64a100000000         mov eax, dword ptr fs:[0]
// 006191cd  50                   push eax
// 006191ce  64892500000000       mov dword ptr fs:[0], esp
// 006191d5  51                   push ecx
// 006191d6  8b442434             mov eax, dword ptr [esp + 0x34]
// 006191da  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006191de  56                   push esi
// 006191df  50                   push eax
// 006191e0  8bf1                 mov esi, ecx
// 006191e2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006191e6  83ec0c               sub esp, 0xc
// 006191e9  8bc4                 mov eax, esp
// 006191eb  8908                 mov dword ptr [eax], ecx
// 006191ed  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006191f1  895004               mov dword ptr [eax + 4], edx
// 006191f4  8b542430             mov edx, dword ptr [esp + 0x30]
// 006191f8  894808               mov dword ptr [eax + 8], ecx
// 006191fb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006191ff  83ec0c               sub esp, 0xc
// 00619202  8bc4                 mov eax, esp
// 00619204  8910                 mov dword ptr [eax], edx
// 00619206  8b542444             mov edx, dword ptr [esp + 0x44]
// 0061920a  894804               mov dword ptr [eax + 4], ecx
// 0061920d  895008               mov dword ptr [eax + 8], edx
// 00619210  8d442454             lea eax, [esp + 0x54]
// 00619214  50                   push eax
// 00619215  e8c6f6ffff           call 0x6188e0
// 0061921a  8b08                 mov ecx, dword ptr [eax]
// 0061921c  83c418               add esp, 0x18
// 0061921f  c70000000000         mov dword ptr [eax], 0
// 00619225  8bc4                 mov eax, esp
// 00619227  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0061922f  8964240c             mov dword ptr [esp + 0xc], esp
// 00619233  8908                 mov dword ptr [eax], ecx
// 00619235  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00619239  8b542420             mov edx, dword ptr [esp + 0x20]
// 0061923d  51                   push ecx
// 0061923e  52                   push edx
// 0061923f  c644242001           mov byte ptr [esp + 0x20], 1
// 00619244  e837a6faff           call 0x5c3880
// 00619249  50                   push eax
// 0061924a  8bce                 mov ecx, esi
// 0061924c  c644242400           mov byte ptr [esp + 0x24], 0
// 00619251  e82a1fe7ff           call 0x48b180
// 00619256  8b442438             mov eax, dword ptr [esp + 0x38]
// 0061925a  85c0                 test eax, eax
// 0061925c  7409                 je 0x619267
// 0061925e  50                   push eax
// 0061925f  e816740800           call 0x6a067a
// 00619264  83c404               add esp, 4
// 00619267  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061926b  c7065c3f8400         mov dword ptr [esi], 0x843f5c
// 00619271  8bc6                 mov eax, esi
// 00619273  64890d00000000       mov dword ptr fs:[0], ecx
// 0061927a  5e                   pop esi
// 0061927b  83c410               add esp, 0x10
// 0061927e  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
