// roc 2007-08 00559220  unit: RBX::DataModel  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00559220
//
// 00559220  6aff                 push -1
// 00559222  686c347500           push 0x75346c
// 00559227  64a100000000         mov eax, dword ptr fs:[0]
// 0055922d  50                   push eax
// 0055922e  64892500000000       mov dword ptr fs:[0], esp
// 00559235  83ec28               sub esp, 0x28
// 00559238  56                   push esi
// 00559239  8bf1                 mov esi, ecx
// 0055923b  83ec1c               sub esp, 0x1c
// 0055923e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00559246  8d461c               lea eax, [esi + 0x1c]
// 00559249  8bcc                 mov ecx, esp
// 0055924b  89642424             mov dword ptr [esp + 0x24], esp
// 0055924f  50                   push eax
// 00559250  ff159ce67700         call dword ptr [0x77e69c]
// 00559256  83ec1c               sub esp, 0x1c
// 00559259  8bcc                 mov ecx, esp
// 0055925b  89642444             mov dword ptr [esp + 0x44], esp
// 0055925f  56                   push esi
// 00559260  c744247001000000     mov dword ptr [esp + 0x70], 1
// 00559268  ff159ce67700         call dword ptr [0x77e69c]
// 0055926e  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00559272  8d4c2448             lea ecx, [esp + 0x48]
// 00559276  c644246c00           mov byte ptr [esp + 0x6c], 0
// 0055927b  8b02                 mov eax, dword ptr [edx]
// 0055927d  51                   push ecx
// 0055927e  ffd0                 call eax
// 00559280  83c43c               add esp, 0x3c
// 00559283  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00559287  50                   push eax
// 00559288  8bce                 mov ecx, esi
// 0055928a  c744243802000000     mov dword ptr [esp + 0x38], 2
// 00559292  ff159ce67700         call dword ptr [0x77e69c]
// 00559298  8d4c2410             lea ecx, [esp + 0x10]
// 0055929c  c744240401000000     mov dword ptr [esp + 4], 1
// 005592a4  c644243400           mov byte ptr [esp + 0x34], 0
// 005592a9  ff15ace67700         call dword ptr [0x77e6ac]
// 005592af  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005592b3  8bc6                 mov eax, esi
// 005592b5  64890d00000000       mov dword ptr fs:[0], ecx
// 005592bc  5e                   pop esi
// 005592bd  83c434               add esp, 0x34
// 005592c0  c21400               ret 0x14
// library rbxgs/v8datamodel\DataModel.cpp (function ??$?RV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV01@V01@0@ZVlist0@_bi@boost@@@?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$type@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@AAP6A?AV34@V34@1@ZAAVlist0@12@J@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
