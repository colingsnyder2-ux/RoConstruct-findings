// roc 2009-06 005fc6c0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$sp_counted_impl_p  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fc6c0
//
// 005fc6c0  6aff                 push -1
// 005fc6c2  689c668600           push 0x86669c
// 005fc6c7  64a100000000         mov eax, dword ptr fs:[0]
// 005fc6cd  50                   push eax
// 005fc6ce  64892500000000       mov dword ptr fs:[0], esp
// 005fc6d5  83ec28               sub esp, 0x28
// 005fc6d8  56                   push esi
// 005fc6d9  8bf1                 mov esi, ecx
// 005fc6db  83ec1c               sub esp, 0x1c
// 005fc6de  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005fc6e6  8d461c               lea eax, [esi + 0x1c]
// 005fc6e9  8bcc                 mov ecx, esp
// 005fc6eb  89642424             mov dword ptr [esp + 0x24], esp
// 005fc6ef  50                   push eax
// 005fc6f0  ff15b8e48900         call dword ptr [0x89e4b8]
// 005fc6f6  83ec1c               sub esp, 0x1c
// 005fc6f9  8bcc                 mov ecx, esp
// 005fc6fb  89642444             mov dword ptr [esp + 0x44], esp
// 005fc6ff  56                   push esi
// 005fc700  c744247001000000     mov dword ptr [esp + 0x70], 1
// 005fc708  ff15b8e48900         call dword ptr [0x89e4b8]
// 005fc70e  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 005fc712  8d4c2448             lea ecx, [esp + 0x48]
// 005fc716  c644246c00           mov byte ptr [esp + 0x6c], 0
// 005fc71b  8b02                 mov eax, dword ptr [edx]
// 005fc71d  51                   push ecx
// 005fc71e  ffd0                 call eax
// 005fc720  83c43c               add esp, 0x3c
// 005fc723  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 005fc727  50                   push eax
// 005fc728  8bce                 mov ecx, esi
// 005fc72a  c744243802000000     mov dword ptr [esp + 0x38], 2
// 005fc732  ff15b8e48900         call dword ptr [0x89e4b8]
// 005fc738  8d4c2410             lea ecx, [esp + 0x10]
// 005fc73c  c744240401000000     mov dword ptr [esp + 4], 1
// 005fc744  c644243400           mov byte ptr [esp + 0x34], 0
// 005fc749  ff15c4e48900         call dword ptr [0x89e4c4]
// 005fc74f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005fc753  8bc6                 mov eax, esi
// 005fc755  64890d00000000       mov dword ptr fs:[0], ecx
// 005fc75c  5e                   pop esi
// 005fc75d  83c434               add esp, 0x34
// 005fc760  c21400               ret 0x14
// library rbxgs/v8datamodel\DataModel.cpp (function ??$?RV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV01@V01@0@ZVlist0@_bi@boost@@@?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$type@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@AAP6A?AV34@V34@1@ZAAVlist0@12@J@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
