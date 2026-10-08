// roc 2008-06 0059cd40  unit: RBX::PartInstance  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059cd40
//
// 0059cd40  6aff                 push -1
// 0059cd42  68b0267d00           push 0x7d26b0
// 0059cd47  64a100000000         mov eax, dword ptr fs:[0]
// 0059cd4d  50                   push eax
// 0059cd4e  64892500000000       mov dword ptr fs:[0], esp
// 0059cd55  51                   push ecx
// 0059cd56  8b442434             mov eax, dword ptr [esp + 0x34]
// 0059cd5a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0059cd5e  56                   push esi
// 0059cd5f  50                   push eax
// 0059cd60  8bf1                 mov esi, ecx
// 0059cd62  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059cd66  83ec0c               sub esp, 0xc
// 0059cd69  8bc4                 mov eax, esp
// 0059cd6b  8908                 mov dword ptr [eax], ecx
// 0059cd6d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0059cd71  895004               mov dword ptr [eax + 4], edx
// 0059cd74  8b542430             mov edx, dword ptr [esp + 0x30]
// 0059cd78  894808               mov dword ptr [eax + 8], ecx
// 0059cd7b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059cd7f  83ec0c               sub esp, 0xc
// 0059cd82  8bc4                 mov eax, esp
// 0059cd84  8910                 mov dword ptr [eax], edx
// 0059cd86  8b542444             mov edx, dword ptr [esp + 0x44]
// 0059cd8a  894804               mov dword ptr [eax + 4], ecx
// 0059cd8d  895008               mov dword ptr [eax + 8], edx
// 0059cd90  8d442454             lea eax, [esp + 0x54]
// 0059cd94  50                   push eax
// 0059cd95  e826daffff           call 0x59a7c0
// 0059cd9a  8b08                 mov ecx, dword ptr [eax]
// 0059cd9c  83c418               add esp, 0x18
// 0059cd9f  c70000000000         mov dword ptr [eax], 0
// 0059cda5  8bc4                 mov eax, esp
// 0059cda7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0059cdaf  8964240c             mov dword ptr [esp + 0xc], esp
// 0059cdb3  8908                 mov dword ptr [eax], ecx
// 0059cdb5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059cdb9  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059cdbd  51                   push ecx
// 0059cdbe  52                   push edx
// 0059cdbf  c644242001           mov byte ptr [esp + 0x20], 1
// 0059cdc4  e827faffff           call 0x59c7f0
// 0059cdc9  50                   push eax
// 0059cdca  8bce                 mov ecx, esi
// 0059cdcc  c644242400           mov byte ptr [esp + 0x24], 0
// 0059cdd1  e8dad6ffff           call 0x59a4b0
// 0059cdd6  8b442438             mov eax, dword ptr [esp + 0x38]
// 0059cdda  85c0                 test eax, eax
// 0059cddc  7409                 je 0x59cde7
// 0059cdde  50                   push eax
// 0059cddf  e896381000           call 0x6a067a
// 0059cde4  83c404               add esp, 4
// 0059cde7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059cdeb  c706342e8300         mov dword ptr [esi], 0x832e34
// 0059cdf1  8bc6                 mov eax, esi
// 0059cdf3  64890d00000000       mov dword ptr fs:[0], ecx
// 0059cdfa  5e                   pop esi
// 0059cdfb  83c410               add esp, 0x10
// 0059cdfe  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
