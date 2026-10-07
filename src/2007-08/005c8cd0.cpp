// roc 2007-08 005c8cd0  unit: lua_exception  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c8cd0
//
// 005c8cd0  55                   push ebp
// 005c8cd1  56                   push esi
// 005c8cd2  57                   push edi
// 005c8cd3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005c8cd7  6a05                 push 5
// 005c8cd9  6a01                 push 1
// 005c8cdb  57                   push edi
// 005c8cdc  e8ef65ffff           call 0x5bf2d0
// 005c8ce1  6a01                 push 1
// 005c8ce3  57                   push edi
// 005c8ce4  e8074dffff           call 0x5bd9f0
// 005c8ce9  8bf0                 mov esi, eax
// 005c8ceb  57                   push edi
// 005c8cec  83c601               add esi, 1
// 005c8cef  e88c48ffff           call 0x5bd580
// 005c8cf4  83c418               add esp, 0x18
// 005c8cf7  83e802               sub eax, 2
// 005c8cfa  7465                 je 0x5c8d61
// 005c8cfc  83e801               sub eax, 1
// 005c8cff  7412                 je 0x5c8d13
// 005c8d01  68249b7b00           push 0x7b9b24
// 005c8d06  57                   push edi
// 005c8d07  e8d45bffff           call 0x5be8e0
// 005c8d0c  83c408               add esp, 8
// 005c8d0f  5f                   pop edi
// 005c8d10  5e                   pop esi
// 005c8d11  5d                   pop ebp
// 005c8d12  c3                   ret 
// 005c8d13  6a02                 push 2
// 005c8d15  57                   push edi
// 005c8d16  e87567ffff           call 0x5bf490
// 005c8d1b  8be8                 mov ebp, eax
// 005c8d1d  83c408               add esp, 8
// 005c8d20  3bf5                 cmp esi, ebp
// 005c8d22  7d04                 jge 0x5c8d28
// 005c8d24  8bf5                 mov esi, ebp
// 005c8d26  3bf5                 cmp esi, ebp
// 005c8d28  7e39                 jle 0x5c8d63
// 005c8d2a  53                   push ebx
// 005c8d2b  eb03                 jmp 0x5c8d30
// 005c8d2d  8d4900               lea ecx, [ecx]
// 005c8d30  8d5eff               lea ebx, [esi - 1]
// 005c8d33  53                   push ebx
// 005c8d34  6a01                 push 1
// 005c8d36  57                   push edi
// 005c8d37  e86451ffff           call 0x5bdea0
// 005c8d3c  56                   push esi
// 005c8d3d  6a01                 push 1
// 005c8d3f  57                   push edi
// 005c8d40  e8ab53ffff           call 0x5be0f0
// 005c8d45  8bf3                 mov esi, ebx
// 005c8d47  83c418               add esp, 0x18
// 005c8d4a  3bf5                 cmp esi, ebp
// 005c8d4c  7fe2                 jg 0x5c8d30
// 005c8d4e  5b                   pop ebx
// 005c8d4f  55                   push ebp
// 005c8d50  6a01                 push 1
// 005c8d52  57                   push edi
// 005c8d53  e89853ffff           call 0x5be0f0
// 005c8d58  83c40c               add esp, 0xc
// 005c8d5b  5f                   pop edi
// 005c8d5c  5e                   pop esi
// 005c8d5d  33c0                 xor eax, eax
// 005c8d5f  5d                   pop ebp
// 005c8d60  c3                   ret 
// 005c8d61  8bee                 mov ebp, esi
// 005c8d63  55                   push ebp
// 005c8d64  6a01                 push 1
// 005c8d66  57                   push edi
// 005c8d67  e88453ffff           call 0x5be0f0
// 005c8d6c  83c40c               add esp, 0xc
// 005c8d6f  5f                   pop edi
// 005c8d70  5e                   pop esi
// 005c8d71  33c0                 xor eax, eax
// 005c8d73  5d                   pop ebp
// 005c8d74  c3                   ret 
// library lua-5.1.4/ltablib.c (function _tinsert)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
