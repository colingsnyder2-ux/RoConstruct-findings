// from server: 100% by auto
// roc 2010-06 00737bb0  unit: seg_00730000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00737bb0
//
// 00737bb0  56                   push esi
// 00737bb1  8b742408             mov esi, dword ptr [esp + 8]
// 00737bb5  6a02                 push 2
// 00737bb7  56                   push esi
// 00737bb8  e833b3feff           call 0x722ef0
// 00737bbd  6a02                 push 2
// 00737bbf  56                   push esi
// 00737bc0  e89b93feff           call 0x720f60
// 00737bc5  6a01                 push 1
// 00737bc7  56                   push esi
// 00737bc8  e83394feff           call 0x721000
// 00737bcd  6a01                 push 1
// 00737bcf  6aff                 push -1
// 00737bd1  6a00                 push 0
// 00737bd3  56                   push esi
// 00737bd4  e8f7a0feff           call 0x721cd0
// 00737bd9  33c9                 xor ecx, ecx
// 00737bdb  85c0                 test eax, eax
// 00737bdd  0f94c1               sete cl
// 00737be0  51                   push ecx
// 00737be1  56                   push esi
// 00737be2  e8199bfeff           call 0x721700
// 00737be7  6a01                 push 1
// 00737be9  56                   push esi
// 00737bea  e86194feff           call 0x721050
// 00737bef  56                   push esi
// 00737bf0  e85b93feff           call 0x720f50
// 00737bf5  83c43c               add esp, 0x3c
// 00737bf8  5e                   pop esi
// 00737bf9  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_xpcall)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
