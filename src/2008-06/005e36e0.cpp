// roc 2008-06 005e36e0  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e36e0
//
// 005e36e0  6aff                 push -1
// 005e36e2  6840137d00           push 0x7d1340
// 005e36e7  64a100000000         mov eax, dword ptr fs:[0]
// 005e36ed  50                   push eax
// 005e36ee  64892500000000       mov dword ptr fs:[0], esp
// 005e36f5  51                   push ecx
// 005e36f6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e36fa  8b542424             mov edx, dword ptr [esp + 0x24]
// 005e36fe  56                   push esi
// 005e36ff  50                   push eax
// 005e3700  8b442428             mov eax, dword ptr [esp + 0x28]
// 005e3704  8bf1                 mov esi, ecx
// 005e3706  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005e370a  51                   push ecx
// 005e370b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e370f  52                   push edx
// 005e3710  50                   push eax
// 005e3711  51                   push ecx
// 005e3712  8d542444             lea edx, [esp + 0x44]
// 005e3716  52                   push edx
// 005e3717  e8a4f2ffff           call 0x5e29c0
// 005e371c  8b08                 mov ecx, dword ptr [eax]
// 005e371e  83c410               add esp, 0x10
// 005e3721  c70000000000         mov dword ptr [eax], 0
// 005e3727  8bc4                 mov eax, esp
// 005e3729  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005e3731  8964240c             mov dword ptr [esp + 0xc], esp
// 005e3735  8908                 mov dword ptr [eax], ecx
// 005e3737  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e373b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e373f  50                   push eax
// 005e3740  51                   push ecx
// 005e3741  c644242001           mov byte ptr [esp + 0x20], 1
// 005e3746  e875fffdff           call 0x5c36c0
// 005e374b  50                   push eax
// 005e374c  8bce                 mov ecx, esi
// 005e374e  c644242400           mov byte ptr [esp + 0x24], 0
// 005e3753  e8b81ee6ff           call 0x445610
// 005e3758  8b442430             mov eax, dword ptr [esp + 0x30]
// 005e375c  85c0                 test eax, eax
// 005e375e  7409                 je 0x5e3769
// 005e3760  50                   push eax
// 005e3761  e814cf0b00           call 0x6a067a
// 005e3766  83c404               add esp, 4
// 005e3769  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e376d  c706f8e98300         mov dword ptr [esi], 0x83e9f8
// 005e3773  8bc6                 mov eax, esi
// 005e3775  64890d00000000       mov dword ptr fs:[0], ecx
// 005e377c  5e                   pop esi
// 005e377d  83c410               add esp, 0x10
// 005e3780  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
