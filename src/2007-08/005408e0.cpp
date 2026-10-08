// roc 2007-08 005408e0  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005408e0
//
// 005408e0  64a100000000         mov eax, dword ptr fs:[0]
// 005408e6  6aff                 push -1
// 005408e8  6890117500           push 0x751190
// 005408ed  50                   push eax
// 005408ee  64892500000000       mov dword ptr fs:[0], esp
// 005408f5  8b442428             mov eax, dword ptr [esp + 0x28]
// 005408f9  8b542420             mov edx, dword ptr [esp + 0x20]
// 005408fd  56                   push esi
// 005408fe  50                   push eax
// 005408ff  8b442424             mov eax, dword ptr [esp + 0x24]
// 00540903  8bf1                 mov esi, ecx
// 00540905  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00540909  51                   push ecx
// 0054090a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054090e  52                   push edx
// 0054090f  50                   push eax
// 00540910  51                   push ecx
// 00540911  8d542440             lea edx, [esp + 0x40]
// 00540915  52                   push edx
// 00540916  e895e5ffff           call 0x53eeb0
// 0054091b  8b10                 mov edx, dword ptr [eax]
// 0054091d  83c410               add esp, 0x10
// 00540920  8bcc                 mov ecx, esp
// 00540922  c70000000000         mov dword ptr [eax], 0
// 00540928  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00540930  8964242c             mov dword ptr [esp + 0x2c], esp
// 00540934  8911                 mov dword ptr [ecx], edx
// 00540936  8b542420             mov edx, dword ptr [esp + 0x20]
// 0054093a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054093e  52                   push edx
// 0054093f  50                   push eax
// 00540940  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00540945  e8467dedff           call 0x418690
// 0054094a  50                   push eax
// 0054094b  8bce                 mov ecx, esi
// 0054094d  c644242000           mov byte ptr [esp + 0x20], 0
// 00540952  e88924f0ff           call 0x442de0
// 00540957  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0054095b  51                   push ecx
// 0054095c  e801f30e00           call 0x62fc62
// 00540961  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00540965  83c404               add esp, 4
// 00540968  c706f4657a00         mov dword ptr [esi], 0x7a65f4
// 0054096e  8bc6                 mov eax, esi
// 00540970  64890d00000000       mov dword ptr fs:[0], ecx
// 00540977  5e                   pop esi
// 00540978  83c40c               add esp, 0xc
// 0054097b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
