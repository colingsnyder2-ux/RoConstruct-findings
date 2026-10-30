// from server: 100% by auto
// roc 2012-06 00857390  unit: lua_exception  size: 358 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00857390
//
// 00857390  81ec18010000         sub esp, 0x118
// 00857396  53                   push ebx
// 00857397  55                   push ebp
// 00857398  56                   push esi
// 00857399  57                   push edi
// 0085739a  8bbc242c010000       mov edi, dword ptr [esp + 0x12c]
// 008573a1  8d442414             lea eax, [esp + 0x14]
// 008573a5  50                   push eax
// 008573a6  68edd8ffff           push 0xffffd8ed
// 008573ab  57                   push edi
// 008573ac  e83fabfdff           call 0x831ef0
// 008573b1  6a00                 push 0
// 008573b3  68ecd8ffff           push 0xffffd8ec
// 008573b8  57                   push edi
// 008573b9  8bd8                 mov ebx, eax
// 008573bb  e830abfdff           call 0x831ef0
// 008573c0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008573c4  03cb                 add ecx, ebx
// 008573c6  68ebd8ffff           push 0xffffd8eb
// 008573cb  57                   push edi
// 008573cc  8be8                 mov ebp, eax
// 008573ce  897c2440             mov dword ptr [esp + 0x40], edi
// 008573d2  895c2438             mov dword ptr [esp + 0x38], ebx
// 008573d6  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008573da  e8a1aafdff           call 0x831e80
// 008573df  8bf0                 mov esi, eax
// 008573e1  03f3                 add esi, ebx
// 008573e3  83c420               add esp, 0x20
// 008573e6  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 008573ea  772c                 ja 0x857418
// 008573ec  8d642400             lea esp, [esp]
// 008573f0  55                   push ebp
// 008573f1  8d54241c             lea edx, [esp + 0x1c]
// 008573f5  56                   push esi
// 008573f6  52                   push edx
// 008573f7  c744243000000000     mov dword ptr [esp + 0x30], 0
// 008573ff  e84cf9ffff           call 0x856d50
// 00857404  8bc8                 mov ecx, eax
// 00857406  83c40c               add esp, 0xc
// 00857409  894c2410             mov dword ptr [esp + 0x10], ecx
// 0085740d  85c9                 test ecx, ecx
// 0085740f  7514                 jne 0x857425
// 00857411  46                   inc esi
// 00857412  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00857416  76d8                 jbe 0x8573f0
// 00857418  5f                   pop edi
// 00857419  5e                   pop esi
// 0085741a  5d                   pop ebp
// 0085741b  33c0                 xor eax, eax
// 0085741d  5b                   pop ebx
// 0085741e  81c418010000         add esp, 0x118
// 00857424  c3                   ret 
// 00857425  8bc1                 mov eax, ecx
// 00857427  2bc3                 sub eax, ebx
// 00857429  3bce                 cmp ecx, esi
// 0085742b  7501                 jne 0x85742e
// 0085742d  40                   inc eax
// 0085742e  50                   push eax
// 0085742f  57                   push edi
// 00857430  e89bacfdff           call 0x8320d0
// 00857435  68ebd8ffff           push 0xffffd8eb
// 0085743a  57                   push edi
// 0085743b  e8b0a7fdff           call 0x831bf0
// 00857440  8b442434             mov eax, dword ptr [esp + 0x34]
// 00857444  83c410               add esp, 0x10
// 00857447  85c0                 test eax, eax
// 00857449  7507                 jne 0x857452
// 0085744b  8d6801               lea ebp, [eax + 1]
// 0085744e  85f6                 test esi, esi
// 00857450  7502                 jne 0x857454
// 00857452  8be8                 mov ebp, eax
// 00857454  8b442420             mov eax, dword ptr [esp + 0x20]
// 00857458  68503ebd00           push 0xbd3e50
// 0085745d  55                   push ebp
// 0085745e  50                   push eax
// 0085745f  e8ccbafdff           call 0x832f30
// 00857464  83c40c               add esp, 0xc
// 00857467  33ff                 xor edi, edi
// 00857469  85ed                 test ebp, ebp
// 0085746b  7e5e                 jle 0x8574cb
// 0085746d  8d4900               lea ecx, [ecx]
// 00857470  3b7c2424             cmp edi, dword ptr [esp + 0x24]
// 00857474  7c22                 jl 0x857498
// 00857476  85ff                 test edi, edi
// 00857478  750a                 jne 0x857484
// 0085747a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085747e  2bce                 sub ecx, esi
// 00857480  51                   push ecx
// 00857481  56                   push esi
// 00857482  eb35                 jmp 0x8574b9
// 00857484  8b442420             mov eax, dword ptr [esp + 0x20]
// 00857488  68c83dbd00           push 0xbd3dc8
// 0085748d  50                   push eax
// 0085748e  e80dbafdff           call 0x832ea0
// 00857493  83c408               add esp, 8
// 00857496  eb2e                 jmp 0x8574c6
// 00857498  8b5cfc2c             mov ebx, dword ptr [esp + edi*8 + 0x2c]
// 0085749c  83fbff               cmp ebx, -1
// 0085749f  7537                 jne 0x8574d8
// 008574a1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008574a5  68883ebd00           push 0xbd3e88
// 008574aa  51                   push ecx
// 008574ab  e8f0b9fdff           call 0x832ea0
// 008574b0  83c408               add esp, 8
// 008574b3  8b4cfc28             mov ecx, dword ptr [esp + edi*8 + 0x28]
// 008574b7  53                   push ebx
// 008574b8  51                   push ecx
// 008574b9  8b542428             mov edx, dword ptr [esp + 0x28]
// 008574bd  52                   push edx
// 008574be  e82dacfdff           call 0x8320f0
// 008574c3  83c40c               add esp, 0xc
// 008574c6  47                   inc edi
// 008574c7  3bfd                 cmp edi, ebp
// 008574c9  7ca5                 jl 0x857470
// 008574cb  5f                   pop edi
// 008574cc  5e                   pop esi
// 008574cd  8bc5                 mov eax, ebp
// 008574cf  5d                   pop ebp
// 008574d0  5b                   pop ebx
// 008574d1  81c418010000         add esp, 0x118
// 008574d7  c3                   ret 
// 008574d8  83fbfe               cmp ebx, -2
// 008574db  75d6                 jne 0x8574b3
// 008574dd  8b54fc28             mov edx, dword ptr [esp + edi*8 + 0x28]
// 008574e1  2b542418             sub edx, dword ptr [esp + 0x18]
// 008574e5  8b442420             mov eax, dword ptr [esp + 0x20]
// 008574e9  42                   inc edx
// 008574ea  52                   push edx
// 008574eb  50                   push eax
// 008574ec  e8dfabfdff           call 0x8320d0
// 008574f1  83c408               add esp, 8
// 008574f4  ebd0                 jmp 0x8574c6
// library lua-5.1.4/lstrlib.c (function _gmatch_aux)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
