// roc 2011-06 005e9200  unit: boost::io::Vbad_format_string::?$error_info_injector  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e9200
//
// 005e9200  6aff                 push -1
// 005e9202  6868659e00           push 0x9e6568
// 005e9207  64a100000000         mov eax, dword ptr fs:[0]
// 005e920d  50                   push eax
// 005e920e  64892500000000       mov dword ptr fs:[0], esp
// 005e9215  83ec08               sub esp, 8
// 005e9218  56                   push esi
// 005e9219  8bf1                 mov esi, ecx
// 005e921b  83ec1c               sub esp, 0x1c
// 005e921e  8d442454             lea eax, [esp + 0x54]
// 005e9222  89642420             mov dword ptr [esp + 0x20], esp
// 005e9226  8bcc                 mov ecx, esp
// 005e9228  50                   push eax
// 005e9229  c744243401000000     mov dword ptr [esp + 0x34], 1
// 005e9231  ff15c804a400         call dword ptr [0xa404c8]
// 005e9237  83ec1c               sub esp, 0x1c
// 005e923a  8d542454             lea edx, [esp + 0x54]
// 005e923e  89642440             mov dword ptr [esp + 0x40], esp
// 005e9242  8bcc                 mov ecx, esp
// 005e9244  52                   push edx
// 005e9245  c644245002           mov byte ptr [esp + 0x50], 2
// 005e924a  ff15c804a400         call dword ptr [0xa404c8]
// 005e9250  8bce                 mov ecx, esi
// 005e9252  c644244c01           mov byte ptr [esp + 0x4c], 1
// 005e9257  e8e494fcff           call 0x5b2740
// 005e925c  8d4c241c             lea ecx, [esp + 0x1c]
// 005e9260  c644241400           mov byte ptr [esp + 0x14], 0
// 005e9265  ff15d004a400         call dword ptr [0xa404d0]
// 005e926b  8d4c2438             lea ecx, [esp + 0x38]
// 005e926f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005e9277  ff15d004a400         call dword ptr [0xa404d0]
// 005e927d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e9281  8bc6                 mov eax, esi
// 005e9283  64890d00000000       mov dword ptr fs:[0], ecx
// 005e928a  5e                   pop esi
// 005e928b  83c414               add esp, 0x14
// 005e928e  c23800               ret 0x38
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@QAE@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
