// roc 2010-06 005ccf70  unit: RBX::DataModel::PAVGenericJob::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ccf70
//
// 005ccf70  6aff                 push -1
// 005ccf72  6888b69900           push 0x99b688
// 005ccf77  64a100000000         mov eax, dword ptr fs:[0]
// 005ccf7d  50                   push eax
// 005ccf7e  64892500000000       mov dword ptr fs:[0], esp
// 005ccf85  51                   push ecx
// 005ccf86  56                   push esi
// 005ccf87  8bf1                 mov esi, ecx
// 005ccf89  83ec1c               sub esp, 0x1c
// 005ccf8c  8d442434             lea eax, [esp + 0x34]
// 005ccf90  89642420             mov dword ptr [esp + 0x20], esp
// 005ccf94  8bcc                 mov ecx, esp
// 005ccf96  50                   push eax
// 005ccf97  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005ccf9f  ff150ca49e00         call dword ptr [0x9ea40c]
// 005ccfa5  8bce                 mov ecx, esi
// 005ccfa7  e8c460e5ff           call 0x423070
// 005ccfac  8d4c2418             lea ecx, [esp + 0x18]
// 005ccfb0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005ccfb8  ff1500a49e00         call dword ptr [0x9ea400]
// 005ccfbe  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ccfc2  8bc6                 mov eax, esi
// 005ccfc4  64890d00000000       mov dword ptr fs:[0], ecx
// 005ccfcb  5e                   pop esi
// 005ccfcc  83c410               add esp, 0x10
// 005ccfcf  c21c00               ret 0x1c
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
