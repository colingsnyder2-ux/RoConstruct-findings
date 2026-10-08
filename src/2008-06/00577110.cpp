// roc 2008-06 00577110  unit: RBX::DataModel  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577110
//
// 00577110  6aff                 push -1
// 00577112  681a077d00           push 0x7d071a
// 00577117  64a100000000         mov eax, dword ptr fs:[0]
// 0057711d  50                   push eax
// 0057711e  64892500000000       mov dword ptr fs:[0], esp
// 00577125  83ec24               sub esp, 0x24
// 00577128  56                   push esi
// 00577129  c744240400000000     mov dword ptr [esp + 4], 0
// 00577131  83ec1c               sub esp, 0x1c
// 00577134  8d44245c             lea eax, [esp + 0x5c]
// 00577138  89642424             mov dword ptr [esp + 0x24], esp
// 0057713c  8bcc                 mov ecx, esp
// 0057713e  50                   push eax
// 0057713f  c744245001000000     mov dword ptr [esp + 0x50], 1
// 00577147  ff155c248000         call dword ptr [0x80245c]
// 0057714d  8d4c2428             lea ecx, [esp + 0x28]
// 00577151  e8ba02ebff           call 0x427410
// 00577156  8b742438             mov esi, dword ptr [esp + 0x38]
// 0057715a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0057715e  890e                 mov dword ptr [esi], ecx
// 00577160  8d4e04               lea ecx, [esi + 4]
// 00577163  50                   push eax
// 00577164  c644243402           mov byte ptr [esp + 0x34], 2
// 00577169  ff155c248000         call dword ptr [0x80245c]
// 0057716f  8d4c240c             lea ecx, [esp + 0xc]
// 00577173  c744240401000000     mov dword ptr [esp + 4], 1
// 0057717b  c644243001           mov byte ptr [esp + 0x30], 1
// 00577180  ff1568248000         call dword ptr [0x802468]
// 00577186  8d4c2440             lea ecx, [esp + 0x40]
// 0057718a  c644243000           mov byte ptr [esp + 0x30], 0
// 0057718f  ff1568248000         call dword ptr [0x802468]
// 00577195  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00577199  8bc6                 mov eax, esi
// 0057719b  64890d00000000       mov dword ptr fs:[0], ecx
// 005771a2  5e                   pop esi
// 005771a3  83c430               add esp, 0x30
// 005771a6  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??$bind@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@V12@@boost@@YA?AV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@0@P6A?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V34@@Z0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
