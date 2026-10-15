// roc 2008-06 00597110  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00597110
//
// 00597110  6aff                 push -1
// 00597112  6869707c00           push 0x7c7069
// 00597117  64a100000000         mov eax, dword ptr fs:[0]
// 0059711d  50                   push eax
// 0059711e  64892500000000       mov dword ptr fs:[0], esp
// 00597125  51                   push ecx
// 00597126  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059712a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0059712e  56                   push esi
// 0059712f  6a00                 push 0
// 00597131  83ec50               sub esp, 0x50
// 00597134  8bf4                 mov esi, esp
// 00597136  c744245800000000     mov dword ptr [esp + 0x58], 0
// 0059713e  89642458             mov dword ptr [esp + 0x58], esp
// 00597142  50                   push eax
// 00597143  83ec1c               sub esp, 0x1c
// 00597146  8bcc                 mov ecx, esp
// 00597148  89a42498000000       mov dword ptr [esp + 0x98], esp
// 0059714f  52                   push edx
// 00597150  ff1558248000         call dword ptr [0x802458]
// 00597156  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 0059715d  83ec20               sub esp, 0x20
// 00597160  8bc4                 mov eax, esp
// 00597162  c70000000000         mov dword ptr [eax], 0
// 00597168  8b0a                 mov ecx, dword ptr [edx]
// 0059716a  c78424a400000000000000 mov dword ptr [esp + 0xa4], 0
// 00597175  89a42498000000       mov dword ptr [esp + 0x98], esp
// 0059717c  85c9                 test ecx, ecx
// 0059717e  7415                 je 0x597195
// 00597180  8908                 mov dword ptr [eax], ecx
// 00597182  8b0a                 mov ecx, dword ptr [edx]
// 00597184  6a00                 push 0
// 00597186  83c008               add eax, 8
// 00597189  83c208               add edx, 8
// 0059718c  50                   push eax
// 0059718d  52                   push edx
// 0059718e  8b11                 mov edx, dword ptr [ecx]
// 00597190  ffd2                 call edx
// 00597192  83c40c               add esp, 0xc
// 00597195  68a06e5900           push 0x596ea0
// 0059719a  56                   push esi
// 0059719b  c78424ac000000ffffffff mov dword ptr [esp + 0xac], 0xffffffff
// 005971a6  e825f7ffff           call 0x5968d0
// 005971ab  8bb424b4000000       mov esi, dword ptr [esp + 0xb4]
// 005971b2  83c448               add esp, 0x48
// 005971b5  8bce                 mov ecx, esi
// 005971b7  e8c4feffff           call 0x597080
// 005971bc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005971c0  8bc6                 mov eax, esi
// 005971c2  64890d00000000       mov dword ptr fs:[0], ecx
// 005971c9  5e                   pop esi
// 005971ca  83c410               add esp, 0x10
// 005971cd  c3                   ret 
// library rbxgs/roc_http_priority_default_0_e42c37ffc0bf2a22.cpp (function ?background_function@RBX@@YA?AV?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@ABV23@PBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_http_priority_default_0_e42c37ffc0bf2a22.cpp
