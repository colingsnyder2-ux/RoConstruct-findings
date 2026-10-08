// roc 2009-06 00668c20  unit: RBX::VPartInstance::?$FilteredSelection  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00668c20
//
// 00668c20  6aff                 push -1
// 00668c22  6820c58600           push 0x86c520
// 00668c27  64a100000000         mov eax, dword ptr fs:[0]
// 00668c2d  50                   push eax
// 00668c2e  64892500000000       mov dword ptr fs:[0], esp
// 00668c35  51                   push ecx
// 00668c36  8b442434             mov eax, dword ptr [esp + 0x34]
// 00668c3a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00668c3e  56                   push esi
// 00668c3f  50                   push eax
// 00668c40  8bf1                 mov esi, ecx
// 00668c42  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00668c46  83ec0c               sub esp, 0xc
// 00668c49  8bc4                 mov eax, esp
// 00668c4b  8908                 mov dword ptr [eax], ecx
// 00668c4d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00668c51  895004               mov dword ptr [eax + 4], edx
// 00668c54  8b542430             mov edx, dword ptr [esp + 0x30]
// 00668c58  894808               mov dword ptr [eax + 8], ecx
// 00668c5b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00668c5f  83ec0c               sub esp, 0xc
// 00668c62  8bc4                 mov eax, esp
// 00668c64  8910                 mov dword ptr [eax], edx
// 00668c66  8b542444             mov edx, dword ptr [esp + 0x44]
// 00668c6a  894804               mov dword ptr [eax + 4], ecx
// 00668c6d  895008               mov dword ptr [eax + 8], edx
// 00668c70  8d442454             lea eax, [esp + 0x54]
// 00668c74  50                   push eax
// 00668c75  e8e6e9ffff           call 0x667660
// 00668c7a  8b08                 mov ecx, dword ptr [eax]
// 00668c7c  83c418               add esp, 0x18
// 00668c7f  c70000000000         mov dword ptr [eax], 0
// 00668c85  8bc4                 mov eax, esp
// 00668c87  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00668c8f  8964240c             mov dword ptr [esp + 0xc], esp
// 00668c93  8908                 mov dword ptr [eax], ecx
// 00668c95  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00668c99  8b542420             mov edx, dword ptr [esp + 0x20]
// 00668c9d  51                   push ecx
// 00668c9e  52                   push edx
// 00668c9f  c644242001           mov byte ptr [esp + 0x20], 1
// 00668ca4  e8f739f8ff           call 0x5ec6a0
// 00668ca9  50                   push eax
// 00668caa  8bce                 mov ecx, esi
// 00668cac  c644242400           mov byte ptr [esp + 0x24], 0
// 00668cb1  e89ae7fbff           call 0x627450
// 00668cb6  8b442438             mov eax, dword ptr [esp + 0x38]
// 00668cba  50                   push eax
// 00668cbb  e872fd0a00           call 0x718a32
// 00668cc0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00668cc4  83c404               add esp, 4
// 00668cc7  c706202f8e00         mov dword ptr [esi], 0x8e2f20
// 00668ccd  8bc6                 mov eax, esi
// 00668ccf  64890d00000000       mov dword ptr fs:[0], ecx
// 00668cd6  5e                   pop esi
// 00668cd7  83c410               add esp, 0x10
// 00668cda  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
