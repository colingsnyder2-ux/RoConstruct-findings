// from server: 100% by auto
// roc 2008-06 00624a30  unit: lua_exception  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00624a30
//
// 00624a30  56                   push esi
// 00624a31  8b742408             mov esi, dword ptr [esp + 8]
// 00624a35  57                   push edi
// 00624a36  6a01                 push 1
// 00624a38  68efd8ffff           push 0xffffd8ef
// 00624a3d  56                   push esi
// 00624a3e  e8eddafeff           call 0x612530
// 00624a43  6aff                 push -1
// 00624a45  56                   push esi
// 00624a46  e8d5d6feff           call 0x612120
// 00624a4b  8b38                 mov edi, dword ptr [eax]
// 00624a4d  83c414               add esp, 0x14
// 00624a50  85ff                 test edi, edi
// 00624a52  7514                 jne 0x624a68
// 00624a54  a1104b8400           mov eax, dword ptr [0x844b10]
// 00624a59  50                   push eax
// 00624a5a  68284c8400           push 0x844c28
// 00624a5f  56                   push esi
// 00624a60  e8fbc1feff           call 0x610c60
// 00624a65  83c40c               add esp, 0xc
// 00624a68  6a01                 push 1
// 00624a6a  8bc7                 mov eax, edi
// 00624a6c  e81ffeffff           call 0x624890
// 00624a71  83c404               add esp, 4
// 00624a74  5f                   pop edi
// 00624a75  5e                   pop esi
// 00624a76  c3                   ret 
// library lua-5.1.4/liolib.c (function _io_read)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 liolib.c
