// roc 2009-06 006c7970  unit: seg_006c0000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7970
//
// 006c7970  56                   push esi
// 006c7971  57                   push edi
// 006c7972  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006c7976  68edd8ffff           push 0xffffd8ed
// 006c797b  57                   push edi
// 006c797c  e80f19ffff           call 0x6b9290
// 006c7981  57                   push edi
// 006c7982  8bf0                 mov esi, eax
// 006c7984  e8f713ffff           call 0x6b8d80
// 006c7989  83c40c               add esp, 0xc
// 006c798c  8bce                 mov ecx, esi
// 006c798e  e89dfeffff           call 0x6c7830
// 006c7993  8bf0                 mov esi, eax
// 006c7995  85f6                 test esi, esi
// 006c7997  7d35                 jge 0x6c79ce
// 006c7999  6aff                 push -1
// 006c799b  57                   push edi
// 006c799c  e87f16ffff           call 0x6b9020
// 006c79a1  83c408               add esp, 8
// 006c79a4  85c0                 test eax, eax
// 006c79a6  741b                 je 0x6c79c3
// 006c79a8  6a01                 push 1
// 006c79aa  57                   push edi
// 006c79ab  e82028ffff           call 0x6ba1d0
// 006c79b0  6afe                 push -2
// 006c79b2  57                   push edi
// 006c79b3  e87814ffff           call 0x6b8e30
// 006c79b8  6a02                 push 2
// 006c79ba  57                   push edi
// 006c79bb  e89023ffff           call 0x6b9d50
// 006c79c0  83c418               add esp, 0x18
// 006c79c3  57                   push edi
// 006c79c4  e83723ffff           call 0x6b9d00
// 006c79c9  83c404               add esp, 4
// 006c79cc  8bc6                 mov eax, esi
// 006c79ce  5f                   pop edi
// 006c79cf  5e                   pop esi
// 006c79d0  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_auxwrap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
