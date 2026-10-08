// roc 2009-06 004bb2f0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bb2f0
//
// 004bb2f0  6aff                 push -1
// 004bb2f2  6800928500           push 0x859200
// 004bb2f7  64a100000000         mov eax, dword ptr fs:[0]
// 004bb2fd  50                   push eax
// 004bb2fe  64892500000000       mov dword ptr fs:[0], esp
// 004bb305  51                   push ecx
// 004bb306  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004bb30a  8b542424             mov edx, dword ptr [esp + 0x24]
// 004bb30e  56                   push esi
// 004bb30f  50                   push eax
// 004bb310  8b442428             mov eax, dword ptr [esp + 0x28]
// 004bb314  8bf1                 mov esi, ecx
// 004bb316  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004bb31a  51                   push ecx
// 004bb31b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004bb31f  52                   push edx
// 004bb320  50                   push eax
// 004bb321  51                   push ecx
// 004bb322  8d542444             lea edx, [esp + 0x44]
// 004bb326  52                   push edx
// 004bb327  e864a6ffff           call 0x4b5990
// 004bb32c  8b08                 mov ecx, dword ptr [eax]
// 004bb32e  83c410               add esp, 0x10
// 004bb331  c70000000000         mov dword ptr [eax], 0
// 004bb337  8bc4                 mov eax, esp
// 004bb339  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004bb341  8964240c             mov dword ptr [esp + 0xc], esp
// 004bb345  8908                 mov dword ptr [eax], ecx
// 004bb347  8b442424             mov eax, dword ptr [esp + 0x24]
// 004bb34b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004bb34f  50                   push eax
// 004bb350  51                   push ecx
// 004bb351  c644242001           mov byte ptr [esp + 0x20], 1
// 004bb356  e885f8ffff           call 0x4babe0
// 004bb35b  50                   push eax
// 004bb35c  8bce                 mov ecx, esi
// 004bb35e  c644242400           mov byte ptr [esp + 0x24], 0
// 004bb363  e8589effff           call 0x4b51c0
// 004bb368  8b542430             mov edx, dword ptr [esp + 0x30]
// 004bb36c  52                   push edx
// 004bb36d  e8c0d62500           call 0x718a32
// 004bb372  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004bb376  83c404               add esp, 4
// 004bb379  c706e0468c00         mov dword ptr [esi], 0x8c46e0
// 004bb37f  8bc6                 mov eax, esi
// 004bb381  64890d00000000       mov dword ptr fs:[0], ecx
// 004bb388  5e                   pop esi
// 004bb389  83c410               add esp, 0x10
// 004bb38c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
