// from server: 100% by auto
// roc 2010-06 007365c0  unit: seg_00730000  size: 358 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007365c0
//
// 007365c0  81ec18010000         sub esp, 0x118
// 007365c6  53                   push ebx
// 007365c7  55                   push ebp
// 007365c8  56                   push esi
// 007365c9  57                   push edi
// 007365ca  8bbc242c010000       mov edi, dword ptr [esp + 0x12c]
// 007365d1  8d442414             lea eax, [esp + 0x14]
// 007365d5  50                   push eax
// 007365d6  68edd8ffff           push 0xffffd8ed
// 007365db  57                   push edi
// 007365dc  e86fadfeff           call 0x721350
// 007365e1  6a00                 push 0
// 007365e3  68ecd8ffff           push 0xffffd8ec
// 007365e8  57                   push edi
// 007365e9  8bd8                 mov ebx, eax
// 007365eb  e860adfeff           call 0x721350
// 007365f0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007365f4  03cb                 add ecx, ebx
// 007365f6  68ebd8ffff           push 0xffffd8eb
// 007365fb  57                   push edi
// 007365fc  8be8                 mov ebp, eax
// 007365fe  897c2440             mov dword ptr [esp + 0x40], edi
// 00736602  895c2438             mov dword ptr [esp + 0x38], ebx
// 00736606  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0073660a  e8d1acfeff           call 0x7212e0
// 0073660f  8bf0                 mov esi, eax
// 00736611  03f3                 add esi, ebx
// 00736613  83c420               add esp, 0x20
// 00736616  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 0073661a  772c                 ja 0x736648
// 0073661c  8d642400             lea esp, [esp]
// 00736620  55                   push ebp
// 00736621  8d54241c             lea edx, [esp + 0x1c]
// 00736625  56                   push esi
// 00736626  52                   push edx
// 00736627  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0073662f  e86cf9ffff           call 0x735fa0
// 00736634  8bc8                 mov ecx, eax
// 00736636  83c40c               add esp, 0xc
// 00736639  894c2410             mov dword ptr [esp + 0x10], ecx
// 0073663d  85c9                 test ecx, ecx
// 0073663f  7514                 jne 0x736655
// 00736641  46                   inc esi
// 00736642  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00736646  76d8                 jbe 0x736620
// 00736648  5f                   pop edi
// 00736649  5e                   pop esi
// 0073664a  5d                   pop ebp
// 0073664b  33c0                 xor eax, eax
// 0073664d  5b                   pop ebx
// 0073664e  81c418010000         add esp, 0x118
// 00736654  c3                   ret 
// 00736655  8bc1                 mov eax, ecx
// 00736657  2bc3                 sub eax, ebx
// 00736659  3bce                 cmp ecx, esi
// 0073665b  7501                 jne 0x73665e
// 0073665d  40                   inc eax
// 0073665e  50                   push eax
// 0073665f  57                   push edi
// 00736660  e8cbaefeff           call 0x721530
// 00736665  68ebd8ffff           push 0xffffd8eb
// 0073666a  57                   push edi
// 0073666b  e8e0a9feff           call 0x721050
// 00736670  8b442434             mov eax, dword ptr [esp + 0x34]
// 00736674  83c410               add esp, 0x10
// 00736677  85c0                 test eax, eax
// 00736679  7507                 jne 0x736682
// 0073667b  8d6801               lea ebp, [eax + 1]
// 0073667e  85f6                 test esi, esi
// 00736680  7502                 jne 0x736684
// 00736682  8be8                 mov ebp, eax
// 00736684  8b442420             mov eax, dword ptr [esp + 0x20]
// 00736688  6890e3a400           push 0xa4e390
// 0073668d  55                   push ebp
// 0073668e  50                   push eax
// 0073668f  e89cbefeff           call 0x722530
// 00736694  83c40c               add esp, 0xc
// 00736697  33ff                 xor edi, edi
// 00736699  85ed                 test ebp, ebp
// 0073669b  7e5e                 jle 0x7366fb
// 0073669d  8d4900               lea ecx, [ecx]
// 007366a0  3b7c2424             cmp edi, dword ptr [esp + 0x24]
// 007366a4  7c22                 jl 0x7366c8
// 007366a6  85ff                 test edi, edi
// 007366a8  750a                 jne 0x7366b4
// 007366aa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007366ae  2bce                 sub ecx, esi
// 007366b0  51                   push ecx
// 007366b1  56                   push esi
// 007366b2  eb35                 jmp 0x7366e9
// 007366b4  8b442420             mov eax, dword ptr [esp + 0x20]
// 007366b8  6808e3a400           push 0xa4e308
// 007366bd  50                   push eax
// 007366be  e8ddbdfeff           call 0x7224a0
// 007366c3  83c408               add esp, 8
// 007366c6  eb2e                 jmp 0x7366f6
// 007366c8  8b5cfc2c             mov ebx, dword ptr [esp + edi*8 + 0x2c]
// 007366cc  83fbff               cmp ebx, -1
// 007366cf  7537                 jne 0x736708
// 007366d1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007366d5  68c8e3a400           push 0xa4e3c8
// 007366da  51                   push ecx
// 007366db  e8c0bdfeff           call 0x7224a0
// 007366e0  83c408               add esp, 8
// 007366e3  8b4cfc28             mov ecx, dword ptr [esp + edi*8 + 0x28]
// 007366e7  53                   push ebx
// 007366e8  51                   push ecx
// 007366e9  8b542428             mov edx, dword ptr [esp + 0x28]
// 007366ed  52                   push edx
// 007366ee  e85daefeff           call 0x721550
// 007366f3  83c40c               add esp, 0xc
// 007366f6  47                   inc edi
// 007366f7  3bfd                 cmp edi, ebp
// 007366f9  7ca5                 jl 0x7366a0
// 007366fb  5f                   pop edi
// 007366fc  5e                   pop esi
// 007366fd  8bc5                 mov eax, ebp
// 007366ff  5d                   pop ebp
// 00736700  5b                   pop ebx
// 00736701  81c418010000         add esp, 0x118
// 00736707  c3                   ret 
// 00736708  83fbfe               cmp ebx, -2
// 0073670b  75d6                 jne 0x7366e3
// 0073670d  8b54fc28             mov edx, dword ptr [esp + edi*8 + 0x28]
// 00736711  2b542418             sub edx, dword ptr [esp + 0x18]
// 00736715  8b442420             mov eax, dword ptr [esp + 0x20]
// 00736719  42                   inc edx
// 0073671a  52                   push edx
// 0073671b  50                   push eax
// 0073671c  e80faefeff           call 0x721530
// 00736721  83c408               add esp, 8
// 00736724  ebd0                 jmp 0x7366f6
// library lua-5.1.4/lstrlib.c (function _gmatch_aux)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
