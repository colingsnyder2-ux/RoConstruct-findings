// roc 2008-06 0059cad0  unit: RBX::PartInstance  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059cad0
//
// 0059cad0  6aff                 push -1
// 0059cad2  68b0267d00           push 0x7d26b0
// 0059cad7  64a100000000         mov eax, dword ptr fs:[0]
// 0059cadd  50                   push eax
// 0059cade  64892500000000       mov dword ptr fs:[0], esp
// 0059cae5  51                   push ecx
// 0059cae6  8b442434             mov eax, dword ptr [esp + 0x34]
// 0059caea  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0059caee  56                   push esi
// 0059caef  50                   push eax
// 0059caf0  8bf1                 mov esi, ecx
// 0059caf2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059caf6  83ec0c               sub esp, 0xc
// 0059caf9  8bc4                 mov eax, esp
// 0059cafb  8908                 mov dword ptr [eax], ecx
// 0059cafd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0059cb01  895004               mov dword ptr [eax + 4], edx
// 0059cb04  8b542430             mov edx, dword ptr [esp + 0x30]
// 0059cb08  894808               mov dword ptr [eax + 8], ecx
// 0059cb0b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059cb0f  83ec0c               sub esp, 0xc
// 0059cb12  8bc4                 mov eax, esp
// 0059cb14  8910                 mov dword ptr [eax], edx
// 0059cb16  8b542444             mov edx, dword ptr [esp + 0x44]
// 0059cb1a  894804               mov dword ptr [eax + 4], ecx
// 0059cb1d  895008               mov dword ptr [eax + 8], edx
// 0059cb20  8d442454             lea eax, [esp + 0x54]
// 0059cb24  50                   push eax
// 0059cb25  e876dbffff           call 0x59a6a0
// 0059cb2a  8b08                 mov ecx, dword ptr [eax]
// 0059cb2c  83c418               add esp, 0x18
// 0059cb2f  c70000000000         mov dword ptr [eax], 0
// 0059cb35  8bc4                 mov eax, esp
// 0059cb37  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0059cb3f  8964240c             mov dword ptr [esp + 0xc], esp
// 0059cb43  8908                 mov dword ptr [eax], ecx
// 0059cb45  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059cb49  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059cb4d  51                   push ecx
// 0059cb4e  52                   push edx
// 0059cb4f  c644242001           mov byte ptr [esp + 0x20], 1
// 0059cb54  e897fcffff           call 0x59c7f0
// 0059cb59  50                   push eax
// 0059cb5a  8bce                 mov ecx, esi
// 0059cb5c  c644242400           mov byte ptr [esp + 0x24], 0
// 0059cb61  e81ae6eeff           call 0x48b180
// 0059cb66  8b442438             mov eax, dword ptr [esp + 0x38]
// 0059cb6a  85c0                 test eax, eax
// 0059cb6c  7409                 je 0x59cb77
// 0059cb6e  50                   push eax
// 0059cb6f  e8063b1000           call 0x6a067a
// 0059cb74  83c404               add esp, 4
// 0059cb77  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059cb7b  c7069c2e8300         mov dword ptr [esi], 0x832e9c
// 0059cb81  8bc6                 mov eax, esi
// 0059cb83  64890d00000000       mov dword ptr fs:[0], ecx
// 0059cb8a  5e                   pop esi
// 0059cb8b  83c410               add esp, 0x10
// 0059cb8e  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
