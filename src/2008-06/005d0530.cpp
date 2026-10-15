// roc 2008-06 005d0530  unit: RBX::HopperBin::W4BinType::?$EnumDesc  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d0530
//
// 005d0530  64a100000000         mov eax, dword ptr fs:[0]
// 005d0536  6aff                 push -1
// 005d0538  6860567d00           push 0x7d5660
// 005d053d  50                   push eax
// 005d053e  64892500000000       mov dword ptr fs:[0], esp
// 005d0545  8b442424             mov eax, dword ptr [esp + 0x24]
// 005d0549  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005d054d  56                   push esi
// 005d054e  50                   push eax
// 005d054f  8b442420             mov eax, dword ptr [esp + 0x20]
// 005d0553  8bf1                 mov esi, ecx
// 005d0555  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005d0559  51                   push ecx
// 005d055a  52                   push edx
// 005d055b  50                   push eax
// 005d055c  8d4c2438             lea ecx, [esp + 0x38]
// 005d0560  51                   push ecx
// 005d0561  e88af5ffff           call 0x5cfaf0
// 005d0566  8b08                 mov ecx, dword ptr [eax]
// 005d0568  83c40c               add esp, 0xc
// 005d056b  c70000000000         mov dword ptr [eax], 0
// 005d0571  8bc4                 mov eax, esp
// 005d0573  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005d057b  89642424             mov dword ptr [esp + 0x24], esp
// 005d057f  8908                 mov dword ptr [eax], ecx
// 005d0581  8b542420             mov edx, dword ptr [esp + 0x20]
// 005d0585  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005d0589  52                   push edx
// 005d058a  50                   push eax
// 005d058b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005d0590  e88bfeffff           call 0x5d0420
// 005d0595  50                   push eax
// 005d0596  8bce                 mov ecx, esi
// 005d0598  c644242000           mov byte ptr [esp + 0x20], 0
// 005d059d  e88e2ce7ff           call 0x443230
// 005d05a2  8b442428             mov eax, dword ptr [esp + 0x28]
// 005d05a6  85c0                 test eax, eax
// 005d05a8  7409                 je 0x5d05b3
// 005d05aa  50                   push eax
// 005d05ab  e8ca000d00           call 0x6a067a
// 005d05b0  83c404               add esp, 4
// 005d05b3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d05b7  c7063cb08300         mov dword ptr [esi], 0x83b03c
// 005d05bd  8bc6                 mov eax, esi
// 005d05bf  64890d00000000       mov dword ptr fs:[0], ecx
// 005d05c6  5e                   pop esi
// 005d05c7  83c40c               add esp, 0xc
// 005d05ca  c21800               ret 0x18
// library rbxgs/roc_unit_22a40a9b8ba2a9ec.cpp (function ??$?0HP8HopperBin@RBX@@AEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@?$PropDescriptor@VHopperBin@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0HP8HopperBin@2@AEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_22a40a9b8ba2a9ec.cpp
