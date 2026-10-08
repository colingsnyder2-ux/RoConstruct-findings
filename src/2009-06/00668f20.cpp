// roc 2009-06 00668f20  unit: RBX::VPartInstance::?$FilteredSelection  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00668f20
//
// 00668f20  6aff                 push -1
// 00668f22  6820c58600           push 0x86c520
// 00668f27  64a100000000         mov eax, dword ptr fs:[0]
// 00668f2d  50                   push eax
// 00668f2e  64892500000000       mov dword ptr fs:[0], esp
// 00668f35  51                   push ecx
// 00668f36  8b442434             mov eax, dword ptr [esp + 0x34]
// 00668f3a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00668f3e  56                   push esi
// 00668f3f  50                   push eax
// 00668f40  8bf1                 mov esi, ecx
// 00668f42  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00668f46  83ec0c               sub esp, 0xc
// 00668f49  8bc4                 mov eax, esp
// 00668f4b  8908                 mov dword ptr [eax], ecx
// 00668f4d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00668f51  895004               mov dword ptr [eax + 4], edx
// 00668f54  8b542430             mov edx, dword ptr [esp + 0x30]
// 00668f58  894808               mov dword ptr [eax + 8], ecx
// 00668f5b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00668f5f  83ec0c               sub esp, 0xc
// 00668f62  8bc4                 mov eax, esp
// 00668f64  8910                 mov dword ptr [eax], edx
// 00668f66  8b542444             mov edx, dword ptr [esp + 0x44]
// 00668f6a  894804               mov dword ptr [eax + 4], ecx
// 00668f6d  895008               mov dword ptr [eax + 8], edx
// 00668f70  8d442454             lea eax, [esp + 0x54]
// 00668f74  50                   push eax
// 00668f75  e8a6e8ffff           call 0x667820
// 00668f7a  8b08                 mov ecx, dword ptr [eax]
// 00668f7c  83c418               add esp, 0x18
// 00668f7f  c70000000000         mov dword ptr [eax], 0
// 00668f85  8bc4                 mov eax, esp
// 00668f87  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00668f8f  8964240c             mov dword ptr [esp + 0xc], esp
// 00668f93  8908                 mov dword ptr [eax], ecx
// 00668f95  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00668f99  8b542420             mov edx, dword ptr [esp + 0x20]
// 00668f9d  51                   push ecx
// 00668f9e  52                   push edx
// 00668f9f  c644242001           mov byte ptr [esp + 0x20], 1
// 00668fa4  e8f736f8ff           call 0x5ec6a0
// 00668fa9  50                   push eax
// 00668faa  8bce                 mov ecx, esi
// 00668fac  c644242400           mov byte ptr [esp + 0x24], 0
// 00668fb1  e84a71ddff           call 0x440100
// 00668fb6  8b442438             mov eax, dword ptr [esp + 0x38]
// 00668fba  50                   push eax
// 00668fbb  e872fa0a00           call 0x718a32
// 00668fc0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00668fc4  83c404               add esp, 4
// 00668fc7  c706542f8e00         mov dword ptr [esi], 0x8e2f54
// 00668fcd  8bc6                 mov eax, esi
// 00668fcf  64890d00000000       mov dword ptr fs:[0], ecx
// 00668fd6  5e                   pop esi
// 00668fd7  83c410               add esp, 0x10
// 00668fda  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
