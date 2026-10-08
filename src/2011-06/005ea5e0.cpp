// roc 2011-06 005ea5e0  unit: RBX::SimpleThrottlingArbiter  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005ea5e0
//
// 005ea5e0  6aff                 push -1
// 005ea5e2  68da659e00           push 0x9e65da
// 005ea5e7  64a100000000         mov eax, dword ptr fs:[0]
// 005ea5ed  50                   push eax
// 005ea5ee  64892500000000       mov dword ptr fs:[0], esp
// 005ea5f5  83ec24               sub esp, 0x24
// 005ea5f8  56                   push esi
// 005ea5f9  c744240400000000     mov dword ptr [esp + 4], 0
// 005ea601  83ec1c               sub esp, 0x1c
// 005ea604  8d44245c             lea eax, [esp + 0x5c]
// 005ea608  89642424             mov dword ptr [esp + 0x24], esp
// 005ea60c  8bcc                 mov ecx, esp
// 005ea60e  50                   push eax
// 005ea60f  c744245001000000     mov dword ptr [esp + 0x50], 1
// 005ea617  ff15c804a400         call dword ptr [0xa404c8]
// 005ea61d  8d4c2428             lea ecx, [esp + 0x28]
// 005ea621  e8ead6ffff           call 0x5e7d10
// 005ea626  8b742438             mov esi, dword ptr [esp + 0x38]
// 005ea62a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005ea62e  890e                 mov dword ptr [esi], ecx
// 005ea630  8d4e04               lea ecx, [esi + 4]
// 005ea633  50                   push eax
// 005ea634  c644243402           mov byte ptr [esp + 0x34], 2
// 005ea639  ff15c804a400         call dword ptr [0xa404c8]
// 005ea63f  8d4c240c             lea ecx, [esp + 0xc]
// 005ea643  c744240401000000     mov dword ptr [esp + 4], 1
// 005ea64b  c644243001           mov byte ptr [esp + 0x30], 1
// 005ea650  ff15d004a400         call dword ptr [0xa404d0]
// 005ea656  8d4c2440             lea ecx, [esp + 0x40]
// 005ea65a  c644243000           mov byte ptr [esp + 0x30], 0
// 005ea65f  ff15d004a400         call dword ptr [0xa404d0]
// 005ea665  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ea669  8bc6                 mov eax, esi
// 005ea66b  64890d00000000       mov dword ptr fs:[0], ecx
// 005ea672  5e                   pop esi
// 005ea673  83c430               add esp, 0x30
// 005ea676  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??$bind@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@V12@@boost@@YA?AV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@0@P6A?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V34@@Z0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
