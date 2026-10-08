// roc 2007-08 0059e250  unit: RBX::VHopperBin::?$EnumPropDescriptor  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059e250
//
// 0059e250  64a100000000         mov eax, dword ptr fs:[0]
// 0059e256  6aff                 push -1
// 0059e258  68007b7500           push 0x757b00
// 0059e25d  50                   push eax
// 0059e25e  64892500000000       mov dword ptr fs:[0], esp
// 0059e265  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059e269  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0059e26d  56                   push esi
// 0059e26e  50                   push eax
// 0059e26f  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059e273  8bf1                 mov esi, ecx
// 0059e275  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0059e279  51                   push ecx
// 0059e27a  52                   push edx
// 0059e27b  50                   push eax
// 0059e27c  8d4c2438             lea ecx, [esp + 0x38]
// 0059e280  51                   push ecx
// 0059e281  e8caf0ffff           call 0x59d350
// 0059e286  8b10                 mov edx, dword ptr [eax]
// 0059e288  83c40c               add esp, 0xc
// 0059e28b  8bcc                 mov ecx, esp
// 0059e28d  c70000000000         mov dword ptr [eax], 0
// 0059e293  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0059e29b  89642424             mov dword ptr [esp + 0x24], esp
// 0059e29f  8911                 mov dword ptr [ecx], edx
// 0059e2a1  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059e2a5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059e2a9  50                   push eax
// 0059e2aa  51                   push ecx
// 0059e2ab  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0059e2b0  e8bbf9ffff           call 0x59dc70
// 0059e2b5  50                   push eax
// 0059e2b6  8bce                 mov ecx, esi
// 0059e2b8  c644242000           mov byte ptr [esp + 0x20], 0
// 0059e2bd  e81e4beaff           call 0x442de0
// 0059e2c2  8b542428             mov edx, dword ptr [esp + 0x28]
// 0059e2c6  52                   push edx
// 0059e2c7  e896190900           call 0x62fc62
// 0059e2cc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059e2d0  83c404               add esp, 4
// 0059e2d3  c7067c257b00         mov dword ptr [esi], 0x7b257c
// 0059e2d9  8bc6                 mov eax, esi
// 0059e2db  64890d00000000       mov dword ptr fs:[0], ecx
// 0059e2e2  5e                   pop esi
// 0059e2e3  83c40c               add esp, 0xc
// 0059e2e6  c21800               ret 0x18
// library rbxgs/v8datamodel\Hopper.cpp (function ??$?0HP8HopperBin@RBX@@AEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@?$PropDescriptor@VHopperBin@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0HP8HopperBin@2@AEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
