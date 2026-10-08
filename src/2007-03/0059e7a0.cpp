// roc 2007-03 0059e7a0  unit: seg_00590000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059e7a0
//
// 0059e7a0  64a100000000         mov eax, dword ptr fs:[0]
// 0059e7a6  6aff                 push -1
// 0059e7a8  68208c7500           push 0x758c20
// 0059e7ad  50                   push eax
// 0059e7ae  64892500000000       mov dword ptr fs:[0], esp
// 0059e7b5  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059e7b9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0059e7bd  56                   push esi
// 0059e7be  50                   push eax
// 0059e7bf  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059e7c3  8bf1                 mov esi, ecx
// 0059e7c5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0059e7c9  51                   push ecx
// 0059e7ca  52                   push edx
// 0059e7cb  50                   push eax
// 0059e7cc  8d4c2438             lea ecx, [esp + 0x38]
// 0059e7d0  51                   push ecx
// 0059e7d1  e85aefffff           call 0x59d730
// 0059e7d6  8b10                 mov edx, dword ptr [eax]
// 0059e7d8  83c40c               add esp, 0xc
// 0059e7db  8bcc                 mov ecx, esp
// 0059e7dd  c70000000000         mov dword ptr [eax], 0
// 0059e7e3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0059e7eb  89642424             mov dword ptr [esp + 0x24], esp
// 0059e7ef  8911                 mov dword ptr [ecx], edx
// 0059e7f1  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059e7f5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059e7f9  50                   push eax
// 0059e7fa  51                   push ecx
// 0059e7fb  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0059e800  e8bbf9ffff           call 0x59e1c0
// 0059e805  50                   push eax
// 0059e806  8bce                 mov ecx, esi
// 0059e808  c644242000           mov byte ptr [esp + 0x20], 0
// 0059e80d  e80e41eaff           call 0x442920
// 0059e812  8b542428             mov edx, dword ptr [esp + 0x28]
// 0059e816  52                   push edx
// 0059e817  e8d4f80700           call 0x61e0f0
// 0059e81c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059e820  83c404               add esp, 4
// 0059e823  c706642c7b00         mov dword ptr [esi], 0x7b2c64
// 0059e829  8bc6                 mov eax, esi
// 0059e82b  64890d00000000       mov dword ptr fs:[0], ecx
// 0059e832  5e                   pop esi
// 0059e833  83c40c               add esp, 0xc
// 0059e836  c21800               ret 0x18
// library rbxgs/v8datamodel\Hopper.cpp (function ??$?0HP8HopperBin@RBX@@AEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@?$PropDescriptor@VHopperBin@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0HP8HopperBin@2@AEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
