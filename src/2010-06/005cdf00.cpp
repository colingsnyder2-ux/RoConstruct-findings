// roc 2010-06 005cdf00  unit: RBX::DataModel::PAVGenericJob::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005cdf00
//
// 005cdf00  6aff                 push -1
// 005cdf02  68b8669900           push 0x9966b8
// 005cdf07  64a100000000         mov eax, dword ptr fs:[0]
// 005cdf0d  50                   push eax
// 005cdf0e  64892500000000       mov dword ptr fs:[0], esp
// 005cdf15  83ec08               sub esp, 8
// 005cdf18  56                   push esi
// 005cdf19  8bf1                 mov esi, ecx
// 005cdf1b  83ec1c               sub esp, 0x1c
// 005cdf1e  8d442454             lea eax, [esp + 0x54]
// 005cdf22  89642420             mov dword ptr [esp + 0x20], esp
// 005cdf26  8bcc                 mov ecx, esp
// 005cdf28  50                   push eax
// 005cdf29  c744243401000000     mov dword ptr [esp + 0x34], 1
// 005cdf31  ff150ca49e00         call dword ptr [0x9ea40c]
// 005cdf37  83ec1c               sub esp, 0x1c
// 005cdf3a  8d542454             lea edx, [esp + 0x54]
// 005cdf3e  89642440             mov dword ptr [esp + 0x40], esp
// 005cdf42  8bcc                 mov ecx, esp
// 005cdf44  52                   push edx
// 005cdf45  c644245002           mov byte ptr [esp + 0x50], 2
// 005cdf4a  ff150ca49e00         call dword ptr [0x9ea40c]
// 005cdf50  8bce                 mov ecx, esi
// 005cdf52  c644244c01           mov byte ptr [esp + 0x4c], 1
// 005cdf57  e8d430fdff           call 0x5a1030
// 005cdf5c  8d4c241c             lea ecx, [esp + 0x1c]
// 005cdf60  c644241400           mov byte ptr [esp + 0x14], 0
// 005cdf65  ff1500a49e00         call dword ptr [0x9ea400]
// 005cdf6b  8d4c2438             lea ecx, [esp + 0x38]
// 005cdf6f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005cdf77  ff1500a49e00         call dword ptr [0x9ea400]
// 005cdf7d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005cdf81  8bc6                 mov eax, esi
// 005cdf83  64890d00000000       mov dword ptr fs:[0], ecx
// 005cdf8a  5e                   pop esi
// 005cdf8b  83c414               add esp, 0x14
// 005cdf8e  c23800               ret 0x38
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
