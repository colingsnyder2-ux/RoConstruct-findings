// from server: 100% by auto
// roc 2010-06 00781a80  unit: seg_00780000  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00781a80
//
// 00781a80  56                   push esi
// 00781a81  57                   push edi
// 00781a82  8bf0                 mov esi, eax
// 00781a84  e8d7feffff           call 0x781960
// 00781a89  8bf8                 mov edi, eax
// 00781a8b  8d4701               lea eax, [edi + 1]
// 00781a8e  3dffffff3f           cmp eax, 0x3fffffff
// 00781a93  7719                 ja 0x781aae
// 00781a95  8b16                 mov edx, dword ptr [esi]
// 00781a97  8d0cbd00000000       lea ecx, [edi*4]
// 00781a9e  51                   push ecx
// 00781a9f  6a00                 push 0
// 00781aa1  6a00                 push 0
// 00781aa3  52                   push edx
// 00781aa4  e857cfffff           call 0x77ea00
// 00781aa9  83c410               add esp, 0x10
// 00781aac  eb0b                 jmp 0x781ab9
// 00781aae  8b06                 mov eax, dword ptr [esi]
// 00781ab0  50                   push eax
// 00781ab1  e82acfffff           call 0x77e9e0
// 00781ab6  83c404               add esp, 4
// 00781ab9  8d0cbd00000000       lea ecx, [edi*4]
// 00781ac0  51                   push ecx
// 00781ac1  89430c               mov dword ptr [ebx + 0xc], eax
// 00781ac4  897b2c               mov dword ptr [ebx + 0x2c], edi
// 00781ac7  8b5604               mov edx, dword ptr [esi + 4]
// 00781aca  50                   push eax
// 00781acb  52                   push edx
// 00781acc  e81fc9ffff           call 0x77e3f0
// 00781ad1  83c40c               add esp, 0xc
// 00781ad4  85c0                 test eax, eax
// 00781ad6  7423                 je 0x781afb
// 00781ad8  8b460c               mov eax, dword ptr [esi + 0xc]
// 00781adb  8b0e                 mov ecx, dword ptr [esi]
// 00781add  68c032a500           push 0xa532c0
// 00781ae2  50                   push eax
// 00781ae3  68a432a500           push 0xa532a4
// 00781ae8  51                   push ecx
// 00781ae9  e8f212fbff           call 0x732de0
// 00781aee  8b16                 mov edx, dword ptr [esi]
// 00781af0  6a03                 push 3
// 00781af2  52                   push edx
// 00781af3  e8b8e5faff           call 0x7300b0
// 00781af8  83c418               add esp, 0x18
// 00781afb  5f                   pop edi
// 00781afc  5e                   pop esi
// 00781afd  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadCode)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
