// from server: 100% by auto
// roc 2009-06 006c5f50  unit: lua_exception  size: 358 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c5f50
//
// 006c5f50  81ec18010000         sub esp, 0x118
// 006c5f56  53                   push ebx
// 006c5f57  55                   push ebp
// 006c5f58  56                   push esi
// 006c5f59  57                   push edi
// 006c5f5a  8bbc242c010000       mov edi, dword ptr [esp + 0x12c]
// 006c5f61  8d442414             lea eax, [esp + 0x14]
// 006c5f65  50                   push eax
// 006c5f66  68edd8ffff           push 0xffffd8ed
// 006c5f6b  57                   push edi
// 006c5f6c  e80f32ffff           call 0x6b9180
// 006c5f71  6a00                 push 0
// 006c5f73  68ecd8ffff           push 0xffffd8ec
// 006c5f78  57                   push edi
// 006c5f79  8bd8                 mov ebx, eax
// 006c5f7b  e80032ffff           call 0x6b9180
// 006c5f80  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006c5f84  03cb                 add ecx, ebx
// 006c5f86  68ebd8ffff           push 0xffffd8eb
// 006c5f8b  57                   push edi
// 006c5f8c  8be8                 mov ebp, eax
// 006c5f8e  897c2440             mov dword ptr [esp + 0x40], edi
// 006c5f92  895c2438             mov dword ptr [esp + 0x38], ebx
// 006c5f96  894c243c             mov dword ptr [esp + 0x3c], ecx
// 006c5f9a  e87131ffff           call 0x6b9110
// 006c5f9f  8bf0                 mov esi, eax
// 006c5fa1  03f3                 add esi, ebx
// 006c5fa3  83c420               add esp, 0x20
// 006c5fa6  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 006c5faa  772c                 ja 0x6c5fd8
// 006c5fac  8d642400             lea esp, [esp]
// 006c5fb0  55                   push ebp
// 006c5fb1  8d54241c             lea edx, [esp + 0x1c]
// 006c5fb5  56                   push esi
// 006c5fb6  52                   push edx
// 006c5fb7  c744243000000000     mov dword ptr [esp + 0x30], 0
// 006c5fbf  e86cf9ffff           call 0x6c5930
// 006c5fc4  8bc8                 mov ecx, eax
// 006c5fc6  83c40c               add esp, 0xc
// 006c5fc9  894c2410             mov dword ptr [esp + 0x10], ecx
// 006c5fcd  85c9                 test ecx, ecx
// 006c5fcf  7514                 jne 0x6c5fe5
// 006c5fd1  46                   inc esi
// 006c5fd2  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 006c5fd6  76d8                 jbe 0x6c5fb0
// 006c5fd8  5f                   pop edi
// 006c5fd9  5e                   pop esi
// 006c5fda  5d                   pop ebp
// 006c5fdb  33c0                 xor eax, eax
// 006c5fdd  5b                   pop ebx
// 006c5fde  81c418010000         add esp, 0x118
// 006c5fe4  c3                   ret 
// 006c5fe5  8bc1                 mov eax, ecx
// 006c5fe7  2bc3                 sub eax, ebx
// 006c5fe9  3bce                 cmp ecx, esi
// 006c5feb  7501                 jne 0x6c5fee
// 006c5fed  40                   inc eax
// 006c5fee  50                   push eax
// 006c5fef  57                   push edi
// 006c5ff0  e86b33ffff           call 0x6b9360
// 006c5ff5  68ebd8ffff           push 0xffffd8eb
// 006c5ffa  57                   push edi
// 006c5ffb  e8802effff           call 0x6b8e80
// 006c6000  8b442434             mov eax, dword ptr [esp + 0x34]
// 006c6004  83c410               add esp, 0x10
// 006c6007  85c0                 test eax, eax
// 006c6009  7507                 jne 0x6c6012
// 006c600b  8d6801               lea ebp, [eax + 1]
// 006c600e  85f6                 test esi, esi
// 006c6010  7502                 jne 0x6c6014
// 006c6012  8be8                 mov ebp, eax
// 006c6014  8b442420             mov eax, dword ptr [esp + 0x20]
// 006c6018  6810bc8e00           push 0x8ebc10
// 006c601d  55                   push ebp
// 006c601e  50                   push eax
// 006c601f  e8ac42ffff           call 0x6ba2d0
// 006c6024  83c40c               add esp, 0xc
// 006c6027  33ff                 xor edi, edi
// 006c6029  85ed                 test ebp, ebp
// 006c602b  7e5e                 jle 0x6c608b
// 006c602d  8d4900               lea ecx, [ecx]
// 006c6030  3b7c2424             cmp edi, dword ptr [esp + 0x24]
// 006c6034  7c22                 jl 0x6c6058
// 006c6036  85ff                 test edi, edi
// 006c6038  750a                 jne 0x6c6044
// 006c603a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006c603e  2bce                 sub ecx, esi
// 006c6040  51                   push ecx
// 006c6041  56                   push esi
// 006c6042  eb35                 jmp 0x6c6079
// 006c6044  8b442420             mov eax, dword ptr [esp + 0x20]
// 006c6048  6888bb8e00           push 0x8ebb88
// 006c604d  50                   push eax
// 006c604e  e8ed41ffff           call 0x6ba240
// 006c6053  83c408               add esp, 8
// 006c6056  eb2e                 jmp 0x6c6086
// 006c6058  8b5cfc2c             mov ebx, dword ptr [esp + edi*8 + 0x2c]
// 006c605c  83fbff               cmp ebx, -1
// 006c605f  7537                 jne 0x6c6098
// 006c6061  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006c6065  6848bc8e00           push 0x8ebc48
// 006c606a  51                   push ecx
// 006c606b  e8d041ffff           call 0x6ba240
// 006c6070  83c408               add esp, 8
// 006c6073  8b4cfc28             mov ecx, dword ptr [esp + edi*8 + 0x28]
// 006c6077  53                   push ebx
// 006c6078  51                   push ecx
// 006c6079  8b542428             mov edx, dword ptr [esp + 0x28]
// 006c607d  52                   push edx
// 006c607e  e8fd32ffff           call 0x6b9380
// 006c6083  83c40c               add esp, 0xc
// 006c6086  47                   inc edi
// 006c6087  3bfd                 cmp edi, ebp
// 006c6089  7ca5                 jl 0x6c6030
// 006c608b  5f                   pop edi
// 006c608c  5e                   pop esi
// 006c608d  8bc5                 mov eax, ebp
// 006c608f  5d                   pop ebp
// 006c6090  5b                   pop ebx
// 006c6091  81c418010000         add esp, 0x118
// 006c6097  c3                   ret 
// 006c6098  83fbfe               cmp ebx, -2
// 006c609b  75d6                 jne 0x6c6073
// 006c609d  8b54fc28             mov edx, dword ptr [esp + edi*8 + 0x28]
// 006c60a1  2b542418             sub edx, dword ptr [esp + 0x18]
// 006c60a5  8b442420             mov eax, dword ptr [esp + 0x20]
// 006c60a9  42                   inc edx
// 006c60aa  52                   push edx
// 006c60ab  50                   push eax
// 006c60ac  e8af32ffff           call 0x6b9360
// 006c60b1  83c408               add esp, 8
// 006c60b4  ebd0                 jmp 0x6c6086
// library lua-5.1.4/lstrlib.c (function _gmatch_aux)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
