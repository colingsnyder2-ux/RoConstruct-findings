// roc 2008-06 006094c0  unit: RBX::Controller::W4ControllerType::?$EnumDesc  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006094c0
//
// 006094c0  6aff                 push -1
// 006094c2  68b0267d00           push 0x7d26b0
// 006094c7  64a100000000         mov eax, dword ptr fs:[0]
// 006094cd  50                   push eax
// 006094ce  64892500000000       mov dword ptr fs:[0], esp
// 006094d5  51                   push ecx
// 006094d6  8b442434             mov eax, dword ptr [esp + 0x34]
// 006094da  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006094de  56                   push esi
// 006094df  50                   push eax
// 006094e0  8bf1                 mov esi, ecx
// 006094e2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006094e6  83ec0c               sub esp, 0xc
// 006094e9  8bc4                 mov eax, esp
// 006094eb  8908                 mov dword ptr [eax], ecx
// 006094ed  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006094f1  895004               mov dword ptr [eax + 4], edx
// 006094f4  8b542430             mov edx, dword ptr [esp + 0x30]
// 006094f8  894808               mov dword ptr [eax + 8], ecx
// 006094fb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006094ff  83ec0c               sub esp, 0xc
// 00609502  8bc4                 mov eax, esp
// 00609504  8910                 mov dword ptr [eax], edx
// 00609506  8b542444             mov edx, dword ptr [esp + 0x44]
// 0060950a  894804               mov dword ptr [eax + 4], ecx
// 0060950d  895008               mov dword ptr [eax + 8], edx
// 00609510  8d442454             lea eax, [esp + 0x54]
// 00609514  50                   push eax
// 00609515  e8c6f9ffff           call 0x608ee0
// 0060951a  8b08                 mov ecx, dword ptr [eax]
// 0060951c  83c418               add esp, 0x18
// 0060951f  c70000000000         mov dword ptr [eax], 0
// 00609525  8bc4                 mov eax, esp
// 00609527  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0060952f  8964240c             mov dword ptr [esp + 0xc], esp
// 00609533  8908                 mov dword ptr [eax], ecx
// 00609535  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00609539  8b542420             mov edx, dword ptr [esp + 0x20]
// 0060953d  51                   push ecx
// 0060953e  52                   push edx
// 0060953f  c644242001           mov byte ptr [esp + 0x20], 1
// 00609544  e847bbf7ff           call 0x585090
// 00609549  50                   push eax
// 0060954a  8bce                 mov ecx, esi
// 0060954c  c644242400           mov byte ptr [esp + 0x24], 0
// 00609551  e83a0de0ff           call 0x40a290
// 00609556  8b442438             mov eax, dword ptr [esp + 0x38]
// 0060955a  85c0                 test eax, eax
// 0060955c  7409                 je 0x609567
// 0060955e  50                   push eax
// 0060955f  e816710900           call 0x6a067a
// 00609564  83c404               add esp, 4
// 00609567  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060956b  c706ec288400         mov dword ptr [esi], 0x8428ec
// 00609571  8bc6                 mov eax, esi
// 00609573  64890d00000000       mov dword ptr fs:[0], ecx
// 0060957a  5e                   pop esi
// 0060957b  83c410               add esp, 0x10
// 0060957e  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
