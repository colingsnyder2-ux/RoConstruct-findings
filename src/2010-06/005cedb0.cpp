// roc 2010-06 005cedb0  unit: RBX::SimpleThrottlingArbiter  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005cedb0
//
// 005cedb0  6aff                 push -1
// 005cedb2  680a679900           push 0x99670a
// 005cedb7  64a100000000         mov eax, dword ptr fs:[0]
// 005cedbd  50                   push eax
// 005cedbe  64892500000000       mov dword ptr fs:[0], esp
// 005cedc5  83ec24               sub esp, 0x24
// 005cedc8  56                   push esi
// 005cedc9  c744240400000000     mov dword ptr [esp + 4], 0
// 005cedd1  83ec1c               sub esp, 0x1c
// 005cedd4  8d44245c             lea eax, [esp + 0x5c]
// 005cedd8  89642424             mov dword ptr [esp + 0x24], esp
// 005ceddc  8bcc                 mov ecx, esp
// 005cedde  50                   push eax
// 005ceddf  c744245001000000     mov dword ptr [esp + 0x50], 1
// 005cede7  ff150ca49e00         call dword ptr [0x9ea40c]
// 005ceded  8d4c2428             lea ecx, [esp + 0x28]
// 005cedf1  e87ae1ffff           call 0x5ccf70
// 005cedf6  8b742438             mov esi, dword ptr [esp + 0x38]
// 005cedfa  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005cedfe  890e                 mov dword ptr [esi], ecx
// 005cee00  8d4e04               lea ecx, [esi + 4]
// 005cee03  50                   push eax
// 005cee04  c644243402           mov byte ptr [esp + 0x34], 2
// 005cee09  ff150ca49e00         call dword ptr [0x9ea40c]
// 005cee0f  8d4c240c             lea ecx, [esp + 0xc]
// 005cee13  c744240401000000     mov dword ptr [esp + 4], 1
// 005cee1b  c644243001           mov byte ptr [esp + 0x30], 1
// 005cee20  ff1500a49e00         call dword ptr [0x9ea400]
// 005cee26  8d4c2440             lea ecx, [esp + 0x40]
// 005cee2a  c644243000           mov byte ptr [esp + 0x30], 0
// 005cee2f  ff1500a49e00         call dword ptr [0x9ea400]
// 005cee35  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005cee39  8bc6                 mov eax, esi
// 005cee3b  64890d00000000       mov dword ptr fs:[0], ecx
// 005cee42  5e                   pop esi
// 005cee43  83c430               add esp, 0x30
// 005cee46  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??$bind@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@V12@@boost@@YA?AV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@0@P6A?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V34@@Z0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
