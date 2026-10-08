// roc 2007-08 0053d8e0  unit: RBX::VLocalScript::?$FactoryProduct  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053d8e0
//
// 0053d8e0  64a100000000         mov eax, dword ptr fs:[0]
// 0053d8e6  6aff                 push -1
// 0053d8e8  6890117500           push 0x751190
// 0053d8ed  50                   push eax
// 0053d8ee  64892500000000       mov dword ptr fs:[0], esp
// 0053d8f5  8b442428             mov eax, dword ptr [esp + 0x28]
// 0053d8f9  8b542420             mov edx, dword ptr [esp + 0x20]
// 0053d8fd  56                   push esi
// 0053d8fe  50                   push eax
// 0053d8ff  8b442424             mov eax, dword ptr [esp + 0x24]
// 0053d903  8bf1                 mov esi, ecx
// 0053d905  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0053d909  51                   push ecx
// 0053d90a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0053d90e  52                   push edx
// 0053d90f  50                   push eax
// 0053d910  51                   push ecx
// 0053d911  8d542440             lea edx, [esp + 0x40]
// 0053d915  52                   push edx
// 0053d916  e825fdffff           call 0x53d640
// 0053d91b  8b10                 mov edx, dword ptr [eax]
// 0053d91d  83c410               add esp, 0x10
// 0053d920  8bcc                 mov ecx, esp
// 0053d922  c70000000000         mov dword ptr [eax], 0
// 0053d928  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0053d930  8964242c             mov dword ptr [esp + 0x2c], esp
// 0053d934  8911                 mov dword ptr [ecx], edx
// 0053d936  8b542420             mov edx, dword ptr [esp + 0x20]
// 0053d93a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0053d93e  52                   push edx
// 0053d93f  50                   push eax
// 0053d940  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0053d945  e826ffffff           call 0x53d870
// 0053d94a  50                   push eax
// 0053d94b  8bce                 mov ecx, esi
// 0053d94d  c644242000           mov byte ptr [esp + 0x20], 0
// 0053d952  e88954f0ff           call 0x442de0
// 0053d957  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0053d95b  51                   push ecx
// 0053d95c  e801230f00           call 0x62fc62
// 0053d961  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053d965  83c404               add esp, 4
// 0053d968  c70634607a00         mov dword ptr [esi], 0x7a6034
// 0053d96e  8bc6                 mov eax, esi
// 0053d970  64890d00000000       mov dword ptr fs:[0], ecx
// 0053d977  5e                   pop esi
// 0053d978  83c40c               add esp, 0xc
// 0053d97b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
