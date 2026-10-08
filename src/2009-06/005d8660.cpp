// roc 2009-06 005d8660  unit: RBX::VTeam::?$FactoryProduct  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d8660
//
// 005d8660  6aff                 push -1
// 005d8662  6800928500           push 0x859200
// 005d8667  64a100000000         mov eax, dword ptr fs:[0]
// 005d866d  50                   push eax
// 005d866e  64892500000000       mov dword ptr fs:[0], esp
// 005d8675  51                   push ecx
// 005d8676  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005d867a  8b542424             mov edx, dword ptr [esp + 0x24]
// 005d867e  56                   push esi
// 005d867f  50                   push eax
// 005d8680  8b442428             mov eax, dword ptr [esp + 0x28]
// 005d8684  8bf1                 mov esi, ecx
// 005d8686  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005d868a  51                   push ecx
// 005d868b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005d868f  52                   push edx
// 005d8690  50                   push eax
// 005d8691  51                   push ecx
// 005d8692  8d542444             lea edx, [esp + 0x44]
// 005d8696  52                   push edx
// 005d8697  e814feffff           call 0x5d84b0
// 005d869c  8b08                 mov ecx, dword ptr [eax]
// 005d869e  83c410               add esp, 0x10
// 005d86a1  c70000000000         mov dword ptr [eax], 0
// 005d86a7  8bc4                 mov eax, esp
// 005d86a9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d86b1  8964240c             mov dword ptr [esp + 0xc], esp
// 005d86b5  8908                 mov dword ptr [eax], ecx
// 005d86b7  8b442424             mov eax, dword ptr [esp + 0x24]
// 005d86bb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005d86bf  50                   push eax
// 005d86c0  51                   push ecx
// 005d86c1  c644242001           mov byte ptr [esp + 0x20], 1
// 005d86c6  e825ffffff           call 0x5d85f0
// 005d86cb  50                   push eax
// 005d86cc  8bce                 mov ecx, esi
// 005d86ce  c644242400           mov byte ptr [esp + 0x24], 0
// 005d86d3  e81856e6ff           call 0x43dcf0
// 005d86d8  8b542430             mov edx, dword ptr [esp + 0x30]
// 005d86dc  52                   push edx
// 005d86dd  e850031400           call 0x718a32
// 005d86e2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d86e6  83c404               add esp, 4
// 005d86e9  c706ac558d00         mov dword ptr [esi], 0x8d55ac
// 005d86ef  8bc6                 mov eax, esi
// 005d86f1  64890d00000000       mov dword ptr fs:[0], ecx
// 005d86f8  5e                   pop esi
// 005d86f9  83c410               add esp, 0x10
// 005d86fc  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
