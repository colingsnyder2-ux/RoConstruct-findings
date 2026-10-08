// roc 2008-06 0059cc70  unit: RBX::PartInstance  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059cc70
//
// 0059cc70  6aff                 push -1
// 0059cc72  68b0267d00           push 0x7d26b0
// 0059cc77  64a100000000         mov eax, dword ptr fs:[0]
// 0059cc7d  50                   push eax
// 0059cc7e  64892500000000       mov dword ptr fs:[0], esp
// 0059cc85  51                   push ecx
// 0059cc86  8b442434             mov eax, dword ptr [esp + 0x34]
// 0059cc8a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0059cc8e  56                   push esi
// 0059cc8f  50                   push eax
// 0059cc90  8bf1                 mov esi, ecx
// 0059cc92  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059cc96  83ec0c               sub esp, 0xc
// 0059cc99  8bc4                 mov eax, esp
// 0059cc9b  8908                 mov dword ptr [eax], ecx
// 0059cc9d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0059cca1  895004               mov dword ptr [eax + 4], edx
// 0059cca4  8b542430             mov edx, dword ptr [esp + 0x30]
// 0059cca8  894808               mov dword ptr [eax + 8], ecx
// 0059ccab  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059ccaf  83ec0c               sub esp, 0xc
// 0059ccb2  8bc4                 mov eax, esp
// 0059ccb4  8910                 mov dword ptr [eax], edx
// 0059ccb6  8b542444             mov edx, dword ptr [esp + 0x44]
// 0059ccba  894804               mov dword ptr [eax + 4], ecx
// 0059ccbd  895008               mov dword ptr [eax + 8], edx
// 0059ccc0  8d442454             lea eax, [esp + 0x54]
// 0059ccc4  50                   push eax
// 0059ccc5  e896daffff           call 0x59a760
// 0059ccca  8b08                 mov ecx, dword ptr [eax]
// 0059cccc  83c418               add esp, 0x18
// 0059cccf  c70000000000         mov dword ptr [eax], 0
// 0059ccd5  8bc4                 mov eax, esp
// 0059ccd7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0059ccdf  8964240c             mov dword ptr [esp + 0xc], esp
// 0059cce3  8908                 mov dword ptr [eax], ecx
// 0059cce5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059cce9  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059cced  51                   push ecx
// 0059ccee  52                   push edx
// 0059ccef  c644242001           mov byte ptr [esp + 0x20], 1
// 0059ccf4  e8f7faffff           call 0x59c7f0
// 0059ccf9  50                   push eax
// 0059ccfa  8bce                 mov ecx, esi
// 0059ccfc  c644242400           mov byte ptr [esp + 0x24], 0
// 0059cd01  e88ad5e6ff           call 0x40a290
// 0059cd06  8b442438             mov eax, dword ptr [esp + 0x38]
// 0059cd0a  85c0                 test eax, eax
// 0059cd0c  7409                 je 0x59cd17
// 0059cd0e  50                   push eax
// 0059cd0f  e866391000           call 0x6a067a
// 0059cd14  83c404               add esp, 4
// 0059cd17  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059cd1b  c706042f8300         mov dword ptr [esi], 0x832f04
// 0059cd21  8bc6                 mov eax, esi
// 0059cd23  64890d00000000       mov dword ptr fs:[0], ecx
// 0059cd2a  5e                   pop esi
// 0059cd2b  83c410               add esp, 0x10
// 0059cd2e  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
