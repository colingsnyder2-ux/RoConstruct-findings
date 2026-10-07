// roc 2009-06 006c6300  unit: lua_exception  size: 398 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c6300
//
// 006c6300  81ec2c030000         sub esp, 0x32c
// 006c6306  53                   push ebx
// 006c6307  8b9c2434030000       mov ebx, dword ptr [esp + 0x334]
// 006c630e  55                   push ebp
// 006c630f  56                   push esi
// 006c6310  57                   push edi
// 006c6311  8d44241c             lea eax, [esp + 0x1c]
// 006c6315  50                   push eax
// 006c6316  6a01                 push 1
// 006c6318  53                   push ebx
// 006c6319  e8a249ffff           call 0x6bacc0
// 006c631e  6a00                 push 0
// 006c6320  6a02                 push 2
// 006c6322  53                   push ebx
// 006c6323  8bf0                 mov esi, eax
// 006c6325  e89649ffff           call 0x6bacc0
// 006c632a  6a03                 push 3
// 006c632c  53                   push ebx
// 006c632d  8be8                 mov ebp, eax
// 006c632f  e83c2cffff           call 0x6b8f70
// 006c6334  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006c6338  41                   inc ecx
// 006c6339  51                   push ecx
// 006c633a  6a04                 push 4
// 006c633c  53                   push ebx
// 006c633d  8bf8                 mov edi, eax
// 006c633f  e82c4bffff           call 0x6bae70
// 006c6344  83c42c               add esp, 0x2c
// 006c6347  807d005e             cmp byte ptr [ebp], 0x5e
// 006c634b  89442418             mov dword ptr [esp + 0x18], eax
// 006c634f  750b                 jne 0x6c635c
// 006c6351  45                   inc ebp
// 006c6352  c744241401000000     mov dword ptr [esp + 0x14], 1
// 006c635a  eb08                 jmp 0x6c6364
// 006c635c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006c6364  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006c636c  83ff03               cmp edi, 3
// 006c636f  741f                 je 0x6c6390
// 006c6371  83ff04               cmp edi, 4
// 006c6374  741a                 je 0x6c6390
// 006c6376  83ff06               cmp edi, 6
// 006c6379  7415                 je 0x6c6390
// 006c637b  83ff05               cmp edi, 5
// 006c637e  7410                 je 0x6c6390
// 006c6380  68bcbc8e00           push 0x8ebcbc
// 006c6385  6a03                 push 3
// 006c6387  53                   push ebx
// 006c6388  e84347ffff           call 0x6baad0
// 006c638d  83c40c               add esp, 0xc
// 006c6390  8d942430010000       lea edx, [esp + 0x130]
// 006c6397  52                   push edx
// 006c6398  53                   push ebx
// 006c6399  e8e242ffff           call 0x6ba680
// 006c639e  8b442424             mov eax, dword ptr [esp + 0x24]
// 006c63a2  03c6                 add eax, esi
// 006c63a4  83c408               add esp, 8
// 006c63a7  837c241800           cmp dword ptr [esp + 0x18], 0
// 006c63ac  895c2428             mov dword ptr [esp + 0x28], ebx
// 006c63b0  89742420             mov dword ptr [esp + 0x20], esi
// 006c63b4  89442424             mov dword ptr [esp + 0x24], eax
// 006c63b8  0f8e94000000         jle 0x6c6452
// 006c63be  8bff                 mov edi, edi
// 006c63c0  55                   push ebp
// 006c63c1  8d4c2424             lea ecx, [esp + 0x24]
// 006c63c5  56                   push esi
// 006c63c6  51                   push ecx
// 006c63c7  c744243800000000     mov dword ptr [esp + 0x38], 0
// 006c63cf  e85cf5ffff           call 0x6c5930
// 006c63d4  8bf8                 mov edi, eax
// 006c63d6  83c40c               add esp, 0xc
// 006c63d9  85ff                 test edi, edi
// 006c63db  7421                 je 0x6c63fe
// 006c63dd  ff442410             inc dword ptr [esp + 0x10]
// 006c63e1  8d942430010000       lea edx, [esp + 0x130]
// 006c63e8  56                   push esi
// 006c63e9  52                   push edx
// 006c63ea  8d4c2428             lea ecx, [esp + 0x28]
// 006c63ee  e80dfeffff           call 0x6c6200
// 006c63f3  83c408               add esp, 8
// 006c63f6  3bfe                 cmp edi, esi
// 006c63f8  7604                 jbe 0x6c63fe
// 006c63fa  8bf7                 mov esi, edi
// 006c63fc  eb3b                 jmp 0x6c6439
// 006c63fe  8b442424             mov eax, dword ptr [esp + 0x24]
// 006c6402  3bf0                 cmp esi, eax
// 006c6404  734c                 jae 0x6c6452
// 006c6406  8d84243c030000       lea eax, [esp + 0x33c]
// 006c640d  39842430010000       cmp dword ptr [esp + 0x130], eax
// 006c6414  7210                 jb 0x6c6426
// 006c6416  8d8c2430010000       lea ecx, [esp + 0x130]
// 006c641d  51                   push ecx
// 006c641e  e8fd40ffff           call 0x6ba520
// 006c6423  83c404               add esp, 4
// 006c6426  8a16                 mov dl, byte ptr [esi]
// 006c6428  8b842430010000       mov eax, dword ptr [esp + 0x130]
// 006c642f  8810                 mov byte ptr [eax], dl
// 006c6431  ff842430010000       inc dword ptr [esp + 0x130]
// 006c6438  46                   inc esi
// 006c6439  837c241400           cmp dword ptr [esp + 0x14], 0
// 006c643e  750e                 jne 0x6c644e
// 006c6440  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006c6444  394c2410             cmp dword ptr [esp + 0x10], ecx
// 006c6448  0f8c72ffffff         jl 0x6c63c0
// 006c644e  8b442424             mov eax, dword ptr [esp + 0x24]
// 006c6452  2bc6                 sub eax, esi
// 006c6454  50                   push eax
// 006c6455  8d942434010000       lea edx, [esp + 0x134]
// 006c645c  56                   push esi
// 006c645d  52                   push edx
// 006c645e  e8fd40ffff           call 0x6ba560
// 006c6463  8d84243c010000       lea eax, [esp + 0x13c]
// 006c646a  50                   push eax
// 006c646b  e85041ffff           call 0x6ba5c0
// 006c6470  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006c6474  51                   push ecx
// 006c6475  53                   push ebx
// 006c6476  e8e52effff           call 0x6b9360
// 006c647b  83c418               add esp, 0x18
// 006c647e  5f                   pop edi
// 006c647f  5e                   pop esi
// 006c6480  5d                   pop ebp
// 006c6481  b802000000           mov eax, 2
// 006c6486  5b                   pop ebx
// 006c6487  81c42c030000         add esp, 0x32c
// 006c648d  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_gsub)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
