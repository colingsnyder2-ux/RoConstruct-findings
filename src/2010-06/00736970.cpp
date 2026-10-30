// from server: 100% by auto
// roc 2010-06 00736970  unit: seg_00730000  size: 398 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00736970
//
// 00736970  81ec2c030000         sub esp, 0x32c
// 00736976  53                   push ebx
// 00736977  8b9c2434030000       mov ebx, dword ptr [esp + 0x334]
// 0073697e  55                   push ebp
// 0073697f  56                   push esi
// 00736980  57                   push edi
// 00736981  8d44241c             lea eax, [esp + 0x1c]
// 00736985  50                   push eax
// 00736986  6a01                 push 1
// 00736988  53                   push ebx
// 00736989  e892c5feff           call 0x722f20
// 0073698e  6a00                 push 0
// 00736990  6a02                 push 2
// 00736992  53                   push ebx
// 00736993  8bf0                 mov esi, eax
// 00736995  e886c5feff           call 0x722f20
// 0073699a  6a03                 push 3
// 0073699c  53                   push ebx
// 0073699d  8be8                 mov ebp, eax
// 0073699f  e89ca7feff           call 0x721140
// 007369a4  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007369a8  41                   inc ecx
// 007369a9  51                   push ecx
// 007369aa  6a04                 push 4
// 007369ac  53                   push ebx
// 007369ad  8bf8                 mov edi, eax
// 007369af  e81cc7feff           call 0x7230d0
// 007369b4  83c42c               add esp, 0x2c
// 007369b7  807d005e             cmp byte ptr [ebp], 0x5e
// 007369bb  89442418             mov dword ptr [esp + 0x18], eax
// 007369bf  750b                 jne 0x7369cc
// 007369c1  45                   inc ebp
// 007369c2  c744241401000000     mov dword ptr [esp + 0x14], 1
// 007369ca  eb08                 jmp 0x7369d4
// 007369cc  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007369d4  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007369dc  83ff03               cmp edi, 3
// 007369df  741f                 je 0x736a00
// 007369e1  83ff04               cmp edi, 4
// 007369e4  741a                 je 0x736a00
// 007369e6  83ff06               cmp edi, 6
// 007369e9  7415                 je 0x736a00
// 007369eb  83ff05               cmp edi, 5
// 007369ee  7410                 je 0x736a00
// 007369f0  683ce4a400           push 0xa4e43c
// 007369f5  6a03                 push 3
// 007369f7  53                   push ebx
// 007369f8  e833c3feff           call 0x722d30
// 007369fd  83c40c               add esp, 0xc
// 00736a00  8d942430010000       lea edx, [esp + 0x130]
// 00736a07  52                   push edx
// 00736a08  53                   push ebx
// 00736a09  e8d2befeff           call 0x7228e0
// 00736a0e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00736a12  03c6                 add eax, esi
// 00736a14  83c408               add esp, 8
// 00736a17  837c241800           cmp dword ptr [esp + 0x18], 0
// 00736a1c  895c2428             mov dword ptr [esp + 0x28], ebx
// 00736a20  89742420             mov dword ptr [esp + 0x20], esi
// 00736a24  89442424             mov dword ptr [esp + 0x24], eax
// 00736a28  0f8e94000000         jle 0x736ac2
// 00736a2e  8bff                 mov edi, edi
// 00736a30  55                   push ebp
// 00736a31  8d4c2424             lea ecx, [esp + 0x24]
// 00736a35  56                   push esi
// 00736a36  51                   push ecx
// 00736a37  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00736a3f  e85cf5ffff           call 0x735fa0
// 00736a44  8bf8                 mov edi, eax
// 00736a46  83c40c               add esp, 0xc
// 00736a49  85ff                 test edi, edi
// 00736a4b  7421                 je 0x736a6e
// 00736a4d  ff442410             inc dword ptr [esp + 0x10]
// 00736a51  8d942430010000       lea edx, [esp + 0x130]
// 00736a58  56                   push esi
// 00736a59  52                   push edx
// 00736a5a  8d4c2428             lea ecx, [esp + 0x28]
// 00736a5e  e80dfeffff           call 0x736870
// 00736a63  83c408               add esp, 8
// 00736a66  3bfe                 cmp edi, esi
// 00736a68  7604                 jbe 0x736a6e
// 00736a6a  8bf7                 mov esi, edi
// 00736a6c  eb3b                 jmp 0x736aa9
// 00736a6e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00736a72  3bf0                 cmp esi, eax
// 00736a74  734c                 jae 0x736ac2
// 00736a76  8d84243c030000       lea eax, [esp + 0x33c]
// 00736a7d  39842430010000       cmp dword ptr [esp + 0x130], eax
// 00736a84  7210                 jb 0x736a96
// 00736a86  8d8c2430010000       lea ecx, [esp + 0x130]
// 00736a8d  51                   push ecx
// 00736a8e  e8edbcfeff           call 0x722780
// 00736a93  83c404               add esp, 4
// 00736a96  8a16                 mov dl, byte ptr [esi]
// 00736a98  8b842430010000       mov eax, dword ptr [esp + 0x130]
// 00736a9f  8810                 mov byte ptr [eax], dl
// 00736aa1  ff842430010000       inc dword ptr [esp + 0x130]
// 00736aa8  46                   inc esi
// 00736aa9  837c241400           cmp dword ptr [esp + 0x14], 0
// 00736aae  750e                 jne 0x736abe
// 00736ab0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00736ab4  394c2410             cmp dword ptr [esp + 0x10], ecx
// 00736ab8  0f8c72ffffff         jl 0x736a30
// 00736abe  8b442424             mov eax, dword ptr [esp + 0x24]
// 00736ac2  2bc6                 sub eax, esi
// 00736ac4  50                   push eax
// 00736ac5  8d942434010000       lea edx, [esp + 0x134]
// 00736acc  56                   push esi
// 00736acd  52                   push edx
// 00736ace  e8edbcfeff           call 0x7227c0
// 00736ad3  8d84243c010000       lea eax, [esp + 0x13c]
// 00736ada  50                   push eax
// 00736adb  e840bdfeff           call 0x722820
// 00736ae0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00736ae4  51                   push ecx
// 00736ae5  53                   push ebx
// 00736ae6  e845aafeff           call 0x721530
// 00736aeb  83c418               add esp, 0x18
// 00736aee  5f                   pop edi
// 00736aef  5e                   pop esi
// 00736af0  5d                   pop ebp
// 00736af1  b802000000           mov eax, 2
// 00736af6  5b                   pop ebx
// 00736af7  81c42c030000         add esp, 0x32c
// 00736afd  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_gsub)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
