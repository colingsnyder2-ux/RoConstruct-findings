// roc 2012-06 006d4c90  unit: RBX::SimpleThrottlingArbiter  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006d4c90
//
// 006d4c90  6aff                 push -1
// 006d4c92  68caaeab00           push 0xabaeca
// 006d4c97  64a100000000         mov eax, dword ptr fs:[0]
// 006d4c9d  50                   push eax
// 006d4c9e  64892500000000       mov dword ptr fs:[0], esp
// 006d4ca5  83ec24               sub esp, 0x24
// 006d4ca8  56                   push esi
// 006d4ca9  c744240400000000     mov dword ptr [esp + 4], 0
// 006d4cb1  83ec1c               sub esp, 0x1c
// 006d4cb4  8d44245c             lea eax, [esp + 0x5c]
// 006d4cb8  89642424             mov dword ptr [esp + 0x24], esp
// 006d4cbc  8bcc                 mov ecx, esp
// 006d4cbe  50                   push eax
// 006d4cbf  c744245001000000     mov dword ptr [esp + 0x50], 1
// 006d4cc7  ff154426b200         call dword ptr [0xb22644]
// 006d4ccd  8d4c2428             lea ecx, [esp + 0x28]
// 006d4cd1  e89aceffff           call 0x6d1b70
// 006d4cd6  8b742438             mov esi, dword ptr [esp + 0x38]
// 006d4cda  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006d4cde  890e                 mov dword ptr [esi], ecx
// 006d4ce0  8d4e04               lea ecx, [esi + 4]
// 006d4ce3  50                   push eax
// 006d4ce4  c644243402           mov byte ptr [esp + 0x34], 2
// 006d4ce9  ff154426b200         call dword ptr [0xb22644]
// 006d4cef  8d4c240c             lea ecx, [esp + 0xc]
// 006d4cf3  c744240401000000     mov dword ptr [esp + 4], 1
// 006d4cfb  c644243001           mov byte ptr [esp + 0x30], 1
// 006d4d00  ff153c26b200         call dword ptr [0xb2263c]
// 006d4d06  8d4c2440             lea ecx, [esp + 0x40]
// 006d4d0a  c644243000           mov byte ptr [esp + 0x30], 0
// 006d4d0f  ff153c26b200         call dword ptr [0xb2263c]
// 006d4d15  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006d4d19  8bc6                 mov eax, esi
// 006d4d1b  64890d00000000       mov dword ptr fs:[0], ecx
// 006d4d22  5e                   pop esi
// 006d4d23  83c430               add esp, 0x30
// 006d4d26  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??$bind@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@V12@@boost@@YA?AV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@0@P6A?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V34@@Z0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
