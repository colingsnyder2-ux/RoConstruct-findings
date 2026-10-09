// roc 2009-12 00667de0  unit: RBX::SimpleThrottlingArbiter  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00667de0
//
// 00667de0  6aff                 push -1
// 00667de2  68ea429400           push 0x9442ea
// 00667de7  64a100000000         mov eax, dword ptr fs:[0]
// 00667ded  50                   push eax
// 00667dee  64892500000000       mov dword ptr fs:[0], esp
// 00667df5  83ec24               sub esp, 0x24
// 00667df8  56                   push esi
// 00667df9  c744240400000000     mov dword ptr [esp + 4], 0
// 00667e01  83ec1c               sub esp, 0x1c
// 00667e04  8d44245c             lea eax, [esp + 0x5c]
// 00667e08  89642424             mov dword ptr [esp + 0x24], esp
// 00667e0c  8bcc                 mov ecx, esp
// 00667e0e  50                   push eax
// 00667e0f  c744245001000000     mov dword ptr [esp + 0x50], 1
// 00667e17  ff15f0b69800         call dword ptr [0x98b6f0]
// 00667e1d  8d4c2428             lea ecx, [esp + 0x28]
// 00667e21  e85ae6ffff           call 0x666480
// 00667e26  8b742438             mov esi, dword ptr [esp + 0x38]
// 00667e2a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00667e2e  890e                 mov dword ptr [esi], ecx
// 00667e30  8d4e04               lea ecx, [esi + 4]
// 00667e33  50                   push eax
// 00667e34  c644243402           mov byte ptr [esp + 0x34], 2
// 00667e39  ff15f0b69800         call dword ptr [0x98b6f0]
// 00667e3f  8d4c240c             lea ecx, [esp + 0xc]
// 00667e43  c744240401000000     mov dword ptr [esp + 4], 1
// 00667e4b  c644243001           mov byte ptr [esp + 0x30], 1
// 00667e50  ff15e4b69800         call dword ptr [0x98b6e4]
// 00667e56  8d4c2440             lea ecx, [esp + 0x40]
// 00667e5a  c644243000           mov byte ptr [esp + 0x30], 0
// 00667e5f  ff15e4b69800         call dword ptr [0x98b6e4]
// 00667e65  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00667e69  8bc6                 mov eax, esi
// 00667e6b  64890d00000000       mov dword ptr fs:[0], ecx
// 00667e72  5e                   pop esi
// 00667e73  83c430               add esp, 0x30
// 00667e76  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??$bind@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@V12@@boost@@YA?AV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@0@P6A?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V34@@Z0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
