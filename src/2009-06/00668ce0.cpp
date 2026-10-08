// roc 2009-06 00668ce0  unit: RBX::VPartInstance::?$FilteredSelection  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00668ce0
//
// 00668ce0  6aff                 push -1
// 00668ce2  6820c58600           push 0x86c520
// 00668ce7  64a100000000         mov eax, dword ptr fs:[0]
// 00668ced  50                   push eax
// 00668cee  64892500000000       mov dword ptr fs:[0], esp
// 00668cf5  51                   push ecx
// 00668cf6  8b442434             mov eax, dword ptr [esp + 0x34]
// 00668cfa  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00668cfe  56                   push esi
// 00668cff  50                   push eax
// 00668d00  8bf1                 mov esi, ecx
// 00668d02  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00668d06  83ec0c               sub esp, 0xc
// 00668d09  8bc4                 mov eax, esp
// 00668d0b  8908                 mov dword ptr [eax], ecx
// 00668d0d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00668d11  895004               mov dword ptr [eax + 4], edx
// 00668d14  8b542430             mov edx, dword ptr [esp + 0x30]
// 00668d18  894808               mov dword ptr [eax + 8], ecx
// 00668d1b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00668d1f  83ec0c               sub esp, 0xc
// 00668d22  8bc4                 mov eax, esp
// 00668d24  8910                 mov dword ptr [eax], edx
// 00668d26  8b542444             mov edx, dword ptr [esp + 0x44]
// 00668d2a  894804               mov dword ptr [eax + 4], ecx
// 00668d2d  895008               mov dword ptr [eax + 8], edx
// 00668d30  8d442454             lea eax, [esp + 0x54]
// 00668d34  50                   push eax
// 00668d35  e896e9ffff           call 0x6676d0
// 00668d3a  8b08                 mov ecx, dword ptr [eax]
// 00668d3c  83c418               add esp, 0x18
// 00668d3f  c70000000000         mov dword ptr [eax], 0
// 00668d45  8bc4                 mov eax, esp
// 00668d47  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00668d4f  8964240c             mov dword ptr [esp + 0xc], esp
// 00668d53  8908                 mov dword ptr [eax], ecx
// 00668d55  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00668d59  8b542420             mov edx, dword ptr [esp + 0x20]
// 00668d5d  51                   push ecx
// 00668d5e  52                   push edx
// 00668d5f  c644242001           mov byte ptr [esp + 0x20], 1
// 00668d64  e83739f8ff           call 0x5ec6a0
// 00668d69  50                   push eax
// 00668d6a  8bce                 mov ecx, esi
// 00668d6c  c644242400           mov byte ptr [esp + 0x24], 0
// 00668d71  e8dae6fbff           call 0x627450
// 00668d76  8b442438             mov eax, dword ptr [esp + 0x38]
// 00668d7a  50                   push eax
// 00668d7b  e8b2fc0a00           call 0x718a32
// 00668d80  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00668d84  83c404               add esp, 4
// 00668d87  c706202f8e00         mov dword ptr [esi], 0x8e2f20
// 00668d8d  8bc6                 mov eax, esi
// 00668d8f  64890d00000000       mov dword ptr fs:[0], ecx
// 00668d96  5e                   pop esi
// 00668d97  83c410               add esp, 0x10
// 00668d9a  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
