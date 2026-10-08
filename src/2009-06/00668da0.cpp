// roc 2009-06 00668da0  unit: RBX::VPartInstance::?$FilteredSelection  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00668da0
//
// 00668da0  6aff                 push -1
// 00668da2  6820c58600           push 0x86c520
// 00668da7  64a100000000         mov eax, dword ptr fs:[0]
// 00668dad  50                   push eax
// 00668dae  64892500000000       mov dword ptr fs:[0], esp
// 00668db5  51                   push ecx
// 00668db6  8b442434             mov eax, dword ptr [esp + 0x34]
// 00668dba  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00668dbe  56                   push esi
// 00668dbf  50                   push eax
// 00668dc0  8bf1                 mov esi, ecx
// 00668dc2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00668dc6  83ec0c               sub esp, 0xc
// 00668dc9  8bc4                 mov eax, esp
// 00668dcb  8908                 mov dword ptr [eax], ecx
// 00668dcd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00668dd1  895004               mov dword ptr [eax + 4], edx
// 00668dd4  8b542430             mov edx, dword ptr [esp + 0x30]
// 00668dd8  894808               mov dword ptr [eax + 8], ecx
// 00668ddb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00668ddf  83ec0c               sub esp, 0xc
// 00668de2  8bc4                 mov eax, esp
// 00668de4  8910                 mov dword ptr [eax], edx
// 00668de6  8b542444             mov edx, dword ptr [esp + 0x44]
// 00668dea  894804               mov dword ptr [eax + 4], ecx
// 00668ded  895008               mov dword ptr [eax + 8], edx
// 00668df0  8d442454             lea eax, [esp + 0x54]
// 00668df4  50                   push eax
// 00668df5  e846e9ffff           call 0x667740
// 00668dfa  8b08                 mov ecx, dword ptr [eax]
// 00668dfc  83c418               add esp, 0x18
// 00668dff  c70000000000         mov dword ptr [eax], 0
// 00668e05  8bc4                 mov eax, esp
// 00668e07  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00668e0f  8964240c             mov dword ptr [esp + 0xc], esp
// 00668e13  8908                 mov dword ptr [eax], ecx
// 00668e15  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00668e19  8b542420             mov edx, dword ptr [esp + 0x20]
// 00668e1d  51                   push ecx
// 00668e1e  52                   push edx
// 00668e1f  c644242001           mov byte ptr [esp + 0x20], 1
// 00668e24  e87738f8ff           call 0x5ec6a0
// 00668e29  50                   push eax
// 00668e2a  8bce                 mov ecx, esi
// 00668e2c  c644242400           mov byte ptr [esp + 0x24], 0
// 00668e31  e8ca72ddff           call 0x440100
// 00668e36  8b442438             mov eax, dword ptr [esp + 0x38]
// 00668e3a  50                   push eax
// 00668e3b  e8f2fb0a00           call 0x718a32
// 00668e40  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00668e44  83c404               add esp, 4
// 00668e47  c706542f8e00         mov dword ptr [esi], 0x8e2f54
// 00668e4d  8bc6                 mov eax, esi
// 00668e4f  64890d00000000       mov dword ptr fs:[0], ecx
// 00668e56  5e                   pop esi
// 00668e57  83c410               add esp, 0x10
// 00668e5a  c22400               ret 0x24
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$?0P8FlagStand@RBX@@BE?AVBrickColor@1@XZP801@AEXV21@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@QAE@PBD0P8FlagStand@2@BE?AVBrickColor@2@XZP832@AEXV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
