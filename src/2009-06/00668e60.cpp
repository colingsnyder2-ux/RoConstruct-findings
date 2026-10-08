// roc 2009-06 00668e60  unit: RBX::VPartInstance::?$FilteredSelection  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00668e60
//
// 00668e60  6aff                 push -1
// 00668e62  6820c58600           push 0x86c520
// 00668e67  64a100000000         mov eax, dword ptr fs:[0]
// 00668e6d  50                   push eax
// 00668e6e  64892500000000       mov dword ptr fs:[0], esp
// 00668e75  51                   push ecx
// 00668e76  8b442434             mov eax, dword ptr [esp + 0x34]
// 00668e7a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00668e7e  56                   push esi
// 00668e7f  50                   push eax
// 00668e80  8bf1                 mov esi, ecx
// 00668e82  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00668e86  83ec0c               sub esp, 0xc
// 00668e89  8bc4                 mov eax, esp
// 00668e8b  8908                 mov dword ptr [eax], ecx
// 00668e8d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00668e91  895004               mov dword ptr [eax + 4], edx
// 00668e94  8b542430             mov edx, dword ptr [esp + 0x30]
// 00668e98  894808               mov dword ptr [eax + 8], ecx
// 00668e9b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00668e9f  83ec0c               sub esp, 0xc
// 00668ea2  8bc4                 mov eax, esp
// 00668ea4  8910                 mov dword ptr [eax], edx
// 00668ea6  8b542444             mov edx, dword ptr [esp + 0x44]
// 00668eaa  894804               mov dword ptr [eax + 4], ecx
// 00668ead  895008               mov dword ptr [eax + 8], edx
// 00668eb0  8d442454             lea eax, [esp + 0x54]
// 00668eb4  50                   push eax
// 00668eb5  e8f6e8ffff           call 0x6677b0
// 00668eba  8b08                 mov ecx, dword ptr [eax]
// 00668ebc  83c418               add esp, 0x18
// 00668ebf  c70000000000         mov dword ptr [eax], 0
// 00668ec5  8bc4                 mov eax, esp
// 00668ec7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00668ecf  8964240c             mov dword ptr [esp + 0xc], esp
// 00668ed3  8908                 mov dword ptr [eax], ecx
// 00668ed5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00668ed9  8b542420             mov edx, dword ptr [esp + 0x20]
// 00668edd  51                   push ecx
// 00668ede  52                   push edx
// 00668edf  c644242001           mov byte ptr [esp + 0x20], 1
// 00668ee4  e8b737f8ff           call 0x5ec6a0
// 00668ee9  50                   push eax
// 00668eea  8bce                 mov ecx, esi
// 00668eec  c644242400           mov byte ptr [esp + 0x24], 0
// 00668ef1  e84a08daff           call 0x409740
// 00668ef6  8b442438             mov eax, dword ptr [esp + 0x38]
// 00668efa  50                   push eax
// 00668efb  e832fb0a00           call 0x718a32
// 00668f00  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00668f04  83c404               add esp, 4
// 00668f07  c706882f8e00         mov dword ptr [esi], 0x8e2f88
// 00668f0d  8bc6                 mov eax, esi
// 00668f0f  64890d00000000       mov dword ptr fs:[0], ecx
// 00668f16  5e                   pop esi
// 00668f17  83c410               add esp, 0x10
// 00668f1a  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
