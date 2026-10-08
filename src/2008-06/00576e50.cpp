// roc 2008-06 00576e50  unit: RBX::DataModel  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00576e50
//
// 00576e50  6aff                 push -1
// 00576e52  68dc067d00           push 0x7d06dc
// 00576e57  64a100000000         mov eax, dword ptr fs:[0]
// 00576e5d  50                   push eax
// 00576e5e  64892500000000       mov dword ptr fs:[0], esp
// 00576e65  83ec28               sub esp, 0x28
// 00576e68  56                   push esi
// 00576e69  8bf1                 mov esi, ecx
// 00576e6b  83ec1c               sub esp, 0x1c
// 00576e6e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00576e76  8d461c               lea eax, [esi + 0x1c]
// 00576e79  8bcc                 mov ecx, esp
// 00576e7b  89642424             mov dword ptr [esp + 0x24], esp
// 00576e7f  50                   push eax
// 00576e80  ff155c248000         call dword ptr [0x80245c]
// 00576e86  83ec1c               sub esp, 0x1c
// 00576e89  8bcc                 mov ecx, esp
// 00576e8b  89642444             mov dword ptr [esp + 0x44], esp
// 00576e8f  56                   push esi
// 00576e90  c744247001000000     mov dword ptr [esp + 0x70], 1
// 00576e98  ff155c248000         call dword ptr [0x80245c]
// 00576e9e  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00576ea2  8d4c2448             lea ecx, [esp + 0x48]
// 00576ea6  c644246c00           mov byte ptr [esp + 0x6c], 0
// 00576eab  8b02                 mov eax, dword ptr [edx]
// 00576ead  51                   push ecx
// 00576eae  ffd0                 call eax
// 00576eb0  83c43c               add esp, 0x3c
// 00576eb3  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00576eb7  50                   push eax
// 00576eb8  8bce                 mov ecx, esi
// 00576eba  c744243802000000     mov dword ptr [esp + 0x38], 2
// 00576ec2  ff155c248000         call dword ptr [0x80245c]
// 00576ec8  8d4c2410             lea ecx, [esp + 0x10]
// 00576ecc  c744240401000000     mov dword ptr [esp + 4], 1
// 00576ed4  c644243400           mov byte ptr [esp + 0x34], 0
// 00576ed9  ff1568248000         call dword ptr [0x802468]
// 00576edf  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00576ee3  8bc6                 mov eax, esi
// 00576ee5  64890d00000000       mov dword ptr fs:[0], ecx
// 00576eec  5e                   pop esi
// 00576eed  83c434               add esp, 0x34
// 00576ef0  c21400               ret 0x14
// library rbxgs/v8datamodel\DataModel.cpp (function ??$?RV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV01@V01@0@ZVlist0@_bi@boost@@@?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$type@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@AAP6A?AV34@V34@1@ZAAVlist0@12@J@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
