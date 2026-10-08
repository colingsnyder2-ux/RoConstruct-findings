// roc 2007-03 005568c0  unit: seg_00550000  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005568c0
//
// 005568c0  6aff                 push -1
// 005568c2  686c417500           push 0x75416c
// 005568c7  64a100000000         mov eax, dword ptr fs:[0]
// 005568cd  50                   push eax
// 005568ce  64892500000000       mov dword ptr fs:[0], esp
// 005568d5  83ec28               sub esp, 0x28
// 005568d8  56                   push esi
// 005568d9  8bf1                 mov esi, ecx
// 005568db  83ec1c               sub esp, 0x1c
// 005568de  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005568e6  8d461c               lea eax, [esi + 0x1c]
// 005568e9  8bcc                 mov ecx, esp
// 005568eb  89642424             mov dword ptr [esp + 0x24], esp
// 005568ef  50                   push eax
// 005568f0  ff157ce77700         call dword ptr [0x77e77c]
// 005568f6  83ec1c               sub esp, 0x1c
// 005568f9  8bcc                 mov ecx, esp
// 005568fb  89642444             mov dword ptr [esp + 0x44], esp
// 005568ff  56                   push esi
// 00556900  c744247001000000     mov dword ptr [esp + 0x70], 1
// 00556908  ff157ce77700         call dword ptr [0x77e77c]
// 0055690e  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00556912  8d4c2448             lea ecx, [esp + 0x48]
// 00556916  c644246c00           mov byte ptr [esp + 0x6c], 0
// 0055691b  8b02                 mov eax, dword ptr [edx]
// 0055691d  51                   push ecx
// 0055691e  ffd0                 call eax
// 00556920  83c43c               add esp, 0x3c
// 00556923  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00556927  50                   push eax
// 00556928  8bce                 mov ecx, esi
// 0055692a  c744243802000000     mov dword ptr [esp + 0x38], 2
// 00556932  ff157ce77700         call dword ptr [0x77e77c]
// 00556938  8d4c2410             lea ecx, [esp + 0x10]
// 0055693c  c744240401000000     mov dword ptr [esp + 4], 1
// 00556944  c644243400           mov byte ptr [esp + 0x34], 0
// 00556949  ff158ce77700         call dword ptr [0x77e78c]
// 0055694f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00556953  8bc6                 mov eax, esi
// 00556955  64890d00000000       mov dword ptr fs:[0], ecx
// 0055695c  5e                   pop esi
// 0055695d  83c434               add esp, 0x34
// 00556960  c21400               ret 0x14
// library rbxgs/v8datamodel\DataModel.cpp (function ??$?RV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV01@V01@0@ZVlist0@_bi@boost@@@?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$type@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@AAP6A?AV34@V34@1@ZAAVlist0@12@J@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
