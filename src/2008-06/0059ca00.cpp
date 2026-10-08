// roc 2008-06 0059ca00  unit: RBX::PartInstance  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059ca00
//
// 0059ca00  6aff                 push -1
// 0059ca02  68b0267d00           push 0x7d26b0
// 0059ca07  64a100000000         mov eax, dword ptr fs:[0]
// 0059ca0d  50                   push eax
// 0059ca0e  64892500000000       mov dword ptr fs:[0], esp
// 0059ca15  51                   push ecx
// 0059ca16  8b442434             mov eax, dword ptr [esp + 0x34]
// 0059ca1a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0059ca1e  56                   push esi
// 0059ca1f  50                   push eax
// 0059ca20  8bf1                 mov esi, ecx
// 0059ca22  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059ca26  83ec0c               sub esp, 0xc
// 0059ca29  8bc4                 mov eax, esp
// 0059ca2b  8908                 mov dword ptr [eax], ecx
// 0059ca2d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0059ca31  895004               mov dword ptr [eax + 4], edx
// 0059ca34  8b542430             mov edx, dword ptr [esp + 0x30]
// 0059ca38  894808               mov dword ptr [eax + 8], ecx
// 0059ca3b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059ca3f  83ec0c               sub esp, 0xc
// 0059ca42  8bc4                 mov eax, esp
// 0059ca44  8910                 mov dword ptr [eax], edx
// 0059ca46  8b542444             mov edx, dword ptr [esp + 0x44]
// 0059ca4a  894804               mov dword ptr [eax + 4], ecx
// 0059ca4d  895008               mov dword ptr [eax + 8], edx
// 0059ca50  8d442454             lea eax, [esp + 0x54]
// 0059ca54  50                   push eax
// 0059ca55  e8e6dbffff           call 0x59a640
// 0059ca5a  8b08                 mov ecx, dword ptr [eax]
// 0059ca5c  83c418               add esp, 0x18
// 0059ca5f  c70000000000         mov dword ptr [eax], 0
// 0059ca65  8bc4                 mov eax, esp
// 0059ca67  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0059ca6f  8964240c             mov dword ptr [esp + 0xc], esp
// 0059ca73  8908                 mov dword ptr [eax], ecx
// 0059ca75  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059ca79  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059ca7d  51                   push ecx
// 0059ca7e  52                   push edx
// 0059ca7f  c644242001           mov byte ptr [esp + 0x20], 1
// 0059ca84  e867fdffff           call 0x59c7f0
// 0059ca89  50                   push eax
// 0059ca8a  8bce                 mov ecx, esi
// 0059ca8c  c644242400           mov byte ptr [esp + 0x24], 0
// 0059ca91  e87ad9ffff           call 0x59a410
// 0059ca96  8b442438             mov eax, dword ptr [esp + 0x38]
// 0059ca9a  85c0                 test eax, eax
// 0059ca9c  7409                 je 0x59caa7
// 0059ca9e  50                   push eax
// 0059ca9f  e8d63b1000           call 0x6a067a
// 0059caa4  83c404               add esp, 4
// 0059caa7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059caab  c706682e8300         mov dword ptr [esi], 0x832e68
// 0059cab1  8bc6                 mov eax, esi
// 0059cab3  64890d00000000       mov dword ptr fs:[0], ecx
// 0059caba  5e                   pop esi
// 0059cabb  83c410               add esp, 0x10
// 0059cabe  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
