// roc 2009-12 00667830  unit: VThreadLogManager::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00667830
//
// 00667830  6aff                 push -1
// 00667832  68ac429400           push 0x9442ac
// 00667837  64a100000000         mov eax, dword ptr fs:[0]
// 0066783d  50                   push eax
// 0066783e  64892500000000       mov dword ptr fs:[0], esp
// 00667845  83ec28               sub esp, 0x28
// 00667848  56                   push esi
// 00667849  8bf1                 mov esi, ecx
// 0066784b  83ec1c               sub esp, 0x1c
// 0066784e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00667856  8d461c               lea eax, [esi + 0x1c]
// 00667859  8bcc                 mov ecx, esp
// 0066785b  89642424             mov dword ptr [esp + 0x24], esp
// 0066785f  50                   push eax
// 00667860  ff15f0b69800         call dword ptr [0x98b6f0]
// 00667866  83ec1c               sub esp, 0x1c
// 00667869  8bcc                 mov ecx, esp
// 0066786b  89642444             mov dword ptr [esp + 0x44], esp
// 0066786f  56                   push esi
// 00667870  c744247001000000     mov dword ptr [esp + 0x70], 1
// 00667878  ff15f0b69800         call dword ptr [0x98b6f0]
// 0066787e  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00667882  8d4c2448             lea ecx, [esp + 0x48]
// 00667886  c644246c00           mov byte ptr [esp + 0x6c], 0
// 0066788b  8b02                 mov eax, dword ptr [edx]
// 0066788d  51                   push ecx
// 0066788e  ffd0                 call eax
// 00667890  83c43c               add esp, 0x3c
// 00667893  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00667897  50                   push eax
// 00667898  8bce                 mov ecx, esi
// 0066789a  c744243802000000     mov dword ptr [esp + 0x38], 2
// 006678a2  ff15f0b69800         call dword ptr [0x98b6f0]
// 006678a8  8d4c2410             lea ecx, [esp + 0x10]
// 006678ac  c744240401000000     mov dword ptr [esp + 4], 1
// 006678b4  c644243400           mov byte ptr [esp + 0x34], 0
// 006678b9  ff15e4b69800         call dword ptr [0x98b6e4]
// 006678bf  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006678c3  8bc6                 mov eax, esi
// 006678c5  64890d00000000       mov dword ptr fs:[0], ecx
// 006678cc  5e                   pop esi
// 006678cd  83c434               add esp, 0x34
// 006678d0  c21400               ret 0x14
// library rbxgs/v8datamodel\DataModel.cpp (function ??$?RV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV01@V01@0@ZVlist0@_bi@boost@@@?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$type@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@AAP6A?AV34@V34@1@ZAAVlist0@12@J@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
