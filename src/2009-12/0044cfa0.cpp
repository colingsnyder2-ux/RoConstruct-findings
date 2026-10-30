// roc 2009-12 0044cfa0  unit: CRbxPlayDocTemplate  size: 757 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044cfa0
//
// 0044cfa0  55                   push ebp
// 0044cfa1  8bec                 mov ebp, esp
// 0044cfa3  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0044cfa6  81ec1c010000         sub esp, 0x11c
// 0044cfac  53                   push ebx
// 0044cfad  56                   push esi
// 0044cfae  57                   push edi
// 0044cfaf  85c9                 test ecx, ecx
// 0044cfb1  0f84ca020000         je 0x44d281
// 0044cfb7  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0044cfba  85c0                 test eax, eax
// 0044cfbc  0f84bf020000         je 0x44d281
// 0044cfc2  c70100000000         mov dword ptr [ecx], 0
// 0044cfc8  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0044cfcb  c70000000000         mov dword ptr [eax], 0
// 0044cfd1  6804010000           push 0x104
// 0044cfd6  8d85e4feffff         lea eax, [ebp - 0x11c]
// 0044cfdc  50                   push eax
// 0044cfdd  51                   push ecx
// 0044cfde  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0044cfe5  ff15fcb19800         call dword ptr [0x98b1fc]
// 0044cfeb  8bf8                 mov edi, eax
// 0044cfed  85ff                 test edi, edi
// 0044cfef  7520                 jne 0x44d011
// 0044cff1  e86a5cfbff           call 0x402c60
// 0044cff6  8d4dfc               lea ecx, [ebp - 4]
// 0044cff9  8bf0                 mov esi, eax
// 0044cffb  e88068fbff           call 0x403880
// 0044d000  8bc6                 mov eax, esi
// 0044d002  8da5d8feffff         lea esp, [ebp - 0x128]
// 0044d008  5f                   pop edi
// 0044d009  5e                   pop esi
// 0044d00a  5b                   pop ebx
// 0044d00b  8be5                 mov esp, ebp
// 0044d00d  5d                   pop ebp
// 0044d00e  c21000               ret 0x10
// 0044d011  81ff04010000         cmp edi, 0x104
// 0044d017  751c                 jne 0x44d035
// 0044d019  8d4dfc               lea ecx, [ebp - 4]
// 0044d01c  e85f68fbff           call 0x403880
// 0044d021  b87a000780           mov eax, 0x8007007a
// 0044d026  8da5d8feffff         lea esp, [ebp - 0x128]
// 0044d02c  5f                   pop edi
// 0044d02d  5e                   pop esi
// 0044d02e  5b                   pop ebx
// 0044d02f  8be5                 mov esp, ebp
// 0044d031  5d                   pop ebp
// 0044d032  c21000               ret 0x10
// 0044d035  8d85e4feffff         lea eax, [ebp - 0x11c]
// 0044d03b  e890e0ffff           call 0x44b0d0
// 0044d040  8b750c               mov esi, dword ptr [ebp + 0xc]
// 0044d043  8bd8                 mov ebx, eax
// 0044d045  895df4               mov dword ptr [ebp - 0xc], ebx
// 0044d048  85f6                 test esi, esi
// 0044d04a  0f84ac000000         je 0x44d0fc
// 0044d050  56                   push esi
// 0044d051  ff1538b29800         call dword ptr [0x98b238]
// 0044d057  40                   inc eax
// 0044d058  6a02                 push 2
// 0044d05a  50                   push eax
// 0044d05b  8d5508               lea edx, [ebp + 8]
// 0044d05e  52                   push edx
// 0044d05f  894508               mov dword ptr [ebp + 8], eax
// 0044d062  e8195afbff           call 0x402a80
// 0044d067  83c40c               add esp, 0xc
// 0044d06a  85c0                 test eax, eax
// 0044d06c  7c3c                 jl 0x44d0aa
// 0044d06e  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0044d071  81fb00040000         cmp ebx, 0x400
// 0044d077  7f18                 jg 0x44d091
// 0044d079  53                   push ebx
// 0044d07a  e8716afbff           call 0x403af0
// 0044d07f  83c404               add esp, 4
// 0044d082  84c0                 test al, al
// 0044d084  740b                 je 0x44d091
// 0044d086  8bc3                 mov eax, ebx
// 0044d088  e8b3793a00           call 0x7f4a40
// 0044d08d  8bc4                 mov eax, esp
// 0044d08f  eb09                 jmp 0x44d09a
// 0044d091  53                   push ebx
// 0044d092  8d4dfc               lea ecx, [ebp - 4]
// 0044d095  e8f66ffbff           call 0x404090
// 0044d09a  6a03                 push 3
// 0044d09c  53                   push ebx
// 0044d09d  56                   push esi
// 0044d09e  50                   push eax
// 0044d09f  e86c5afbff           call 0x402b10
// 0044d0a4  8bf0                 mov esi, eax
// 0044d0a6  85f6                 test esi, esi
// 0044d0a8  751c                 jne 0x44d0c6
// 0044d0aa  8d4dfc               lea ecx, [ebp - 4]
// 0044d0ad  e8ce67fbff           call 0x403880
// 0044d0b2  b80e000780           mov eax, 0x8007000e
// 0044d0b7  8da5d8feffff         lea esp, [ebp - 0x128]
// 0044d0bd  5f                   pop edi
// 0044d0be  5e                   pop esi
// 0044d0bf  5b                   pop ebx
// 0044d0c0  8be5                 mov esp, ebp
// 0044d0c2  5d                   pop ebp
// 0044d0c3  c21000               ret 0x10
// 0044d0c6  56                   push esi
// 0044d0c7  ff1518b29800         call dword ptr [0x98b218]
// 0044d0cd  8d0c38               lea ecx, [eax + edi]
// 0044d0d0  3bcf                 cmp ecx, edi
// 0044d0d2  726f                 jb 0x44d143
// 0044d0d4  3bc8                 cmp ecx, eax
// 0044d0d6  726b                 jb 0x44d143
// 0044d0d8  81f90e010000         cmp ecx, 0x10e
// 0044d0de  7363                 jae 0x44d143
// 0044d0e0  b80e010000           mov eax, 0x10e
// 0044d0e5  56                   push esi
// 0044d0e6  2bc7                 sub eax, edi
// 0044d0e8  50                   push eax
// 0044d0e9  8d8c3de4feffff       lea ecx, [ebp + edi - 0x11c]
// 0044d0f0  51                   push ecx
// 0044d0f1  e85addffff           call 0x44ae50
// 0044d0f6  8b5df4               mov ebx, dword ptr [ebp - 0xc]
// 0044d0f9  83c40c               add esp, 0xc
// 0044d0fc  8d95e4feffff         lea edx, [ebp - 0x11c]
// 0044d102  52                   push edx
// 0044d103  ff1518b29800         call dword ptr [0x98b218]
// 0044d109  40                   inc eax
// 0044d10a  6a02                 push 2
// 0044d10c  50                   push eax
// 0044d10d  894508               mov dword ptr [ebp + 8], eax
// 0044d110  8d4508               lea eax, [ebp + 8]
// 0044d113  50                   push eax
// 0044d114  e86759fbff           call 0x402a80
// 0044d119  83c40c               add esp, 0xc
// 0044d11c  85c0                 test eax, eax
// 0044d11e  7c8a                 jl 0x44d0aa
// 0044d120  8b7508               mov esi, dword ptr [ebp + 8]
// 0044d123  81fe00040000         cmp esi, 0x400
// 0044d129  7f34                 jg 0x44d15f
// 0044d12b  56                   push esi
// 0044d12c  e8bf69fbff           call 0x403af0
// 0044d131  83c404               add esp, 4
// 0044d134  84c0                 test al, al
// 0044d136  7427                 je 0x44d15f
// 0044d138  8bc6                 mov eax, esi
// 0044d13a  e801793a00           call 0x7f4a40
// 0044d13f  8bc4                 mov eax, esp
// 0044d141  eb25                 jmp 0x44d168
// 0044d143  8d4dfc               lea ecx, [ebp - 4]
// 0044d146  e83567fbff           call 0x403880
// 0044d14b  b805400080           mov eax, 0x80004005
// 0044d150  8da5d8feffff         lea esp, [ebp - 0x128]
// 0044d156  5f                   pop edi
// 0044d157  5e                   pop esi
// 0044d158  5b                   pop ebx
// 0044d159  8be5                 mov esp, ebp
// 0044d15b  5d                   pop ebp
// 0044d15c  c21000               ret 0x10
// 0044d15f  56                   push esi
// 0044d160  8d4dfc               lea ecx, [ebp - 4]
// 0044d163  e8286ffbff           call 0x404090
// 0044d168  6a03                 push 3
// 0044d16a  d1ee                 shr esi, 1
// 0044d16c  56                   push esi
// 0044d16d  8d8de4feffff         lea ecx, [ebp - 0x11c]
// 0044d173  51                   push ecx
// 0044d174  50                   push eax
// 0044d175  e85659fbff           call 0x402ad0
// 0044d17a  8bf0                 mov esi, eax
// 0044d17c  85f6                 test esi, esi
// 0044d17e  0f8426ffffff         je 0x44d0aa
// 0044d184  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0044d187  52                   push edx
// 0044d188  56                   push esi
// 0044d189  ff1528ba9800         call dword ptr [0x98ba28]
// 0044d18f  8bf8                 mov edi, eax
// 0044d191  85ff                 test edi, edi
// 0044d193  0f8dba000000         jge 0x44d253
// 0044d199  a1ccb39a00           mov eax, dword ptr [0x9ab3cc]
// 0044d19e  8a0dd0b39a00         mov cl, byte ptr [0x9ab3d0]
// 0044d1a4  8945f4               mov dword ptr [ebp - 0xc], eax
// 0044d1a7  8bd3                 mov edx, ebx
// 0044d1a9  8d85e4feffff         lea eax, [ebp - 0x11c]
// 0044d1af  2bd0                 sub edx, eax
// 0044d1b1  83c205               add edx, 5
// 0044d1b4  884df8               mov byte ptr [ebp - 8], cl
// 0044d1b7  81fa04010000         cmp edx, 0x104
// 0044d1bd  7784                 ja 0x44d143
// 0044d1bf  8d4df4               lea ecx, [ebp - 0xc]
// 0044d1c2  51                   push ecx
// 0044d1c3  8d55f2               lea edx, [ebp - 0xe]
// 0044d1c6  2bd3                 sub edx, ebx
// 0044d1c8  52                   push edx
// 0044d1c9  53                   push ebx
// 0044d1ca  e881dcffff           call 0x44ae50
// 0044d1cf  83c40c               add esp, 0xc
// 0044d1d2  8d85e4feffff         lea eax, [ebp - 0x11c]
// 0044d1d8  50                   push eax
// 0044d1d9  ff1518b29800         call dword ptr [0x98b218]
// 0044d1df  40                   inc eax
// 0044d1e0  6a02                 push 2
// 0044d1e2  50                   push eax
// 0044d1e3  8d4d08               lea ecx, [ebp + 8]
// 0044d1e6  51                   push ecx
// 0044d1e7  894508               mov dword ptr [ebp + 8], eax
// 0044d1ea  e89158fbff           call 0x402a80
// 0044d1ef  83c40c               add esp, 0xc
// 0044d1f2  85c0                 test eax, eax
// 0044d1f4  0f8cb0feffff         jl 0x44d0aa
// 0044d1fa  8b7508               mov esi, dword ptr [ebp + 8]
// 0044d1fd  81fe00040000         cmp esi, 0x400
// 0044d203  7f18                 jg 0x44d21d
// 0044d205  56                   push esi
// 0044d206  e8e568fbff           call 0x403af0
// 0044d20b  83c404               add esp, 4
// 0044d20e  84c0                 test al, al
// 0044d210  740b                 je 0x44d21d
// 0044d212  8bc6                 mov eax, esi
// 0044d214  e827783a00           call 0x7f4a40
// 0044d219  8bc4                 mov eax, esp
// 0044d21b  eb09                 jmp 0x44d226
// 0044d21d  56                   push esi
// 0044d21e  8d4dfc               lea ecx, [ebp - 4]
// 0044d221  e86a6efbff           call 0x404090
// 0044d226  6a03                 push 3
// 0044d228  d1ee                 shr esi, 1
// 0044d22a  56                   push esi
// 0044d22b  8d95e4feffff         lea edx, [ebp - 0x11c]
// 0044d231  52                   push edx
// 0044d232  50                   push eax
// 0044d233  e89858fbff           call 0x402ad0
// 0044d238  8bf0                 mov esi, eax
// 0044d23a  85f6                 test esi, esi
// 0044d23c  0f8468feffff         je 0x44d0aa
// 0044d242  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0044d245  50                   push eax
// 0044d246  56                   push esi
// 0044d247  ff1528ba9800         call dword ptr [0x98ba28]
// 0044d24d  8bf8                 mov edi, eax
// 0044d24f  85ff                 test edi, edi
// 0044d251  7c15                 jl 0x44d268
// 0044d253  56                   push esi
// 0044d254  ff1550ba9800         call dword ptr [0x98ba50]
// 0044d25a  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0044d25d  8901                 mov dword ptr [ecx], eax
// 0044d25f  85c0                 test eax, eax
// 0044d261  7505                 jne 0x44d268
// 0044d263  bf0e000780           mov edi, 0x8007000e
// 0044d268  8d4dfc               lea ecx, [ebp - 4]
// 0044d26b  e81066fbff           call 0x403880
// 0044d270  8bc7                 mov eax, edi
// 0044d272  8da5d8feffff         lea esp, [ebp - 0x128]
// 0044d278  5f                   pop edi
// 0044d279  5e                   pop esi
// 0044d27a  5b                   pop ebx
// 0044d27b  8be5                 mov esp, ebp
// 0044d27d  5d                   pop ebp
// 0044d27e  c21000               ret 0x10
// 0044d281  b803400080           mov eax, 0x80004003
// 0044d286  8da5d8feffff         lea esp, [ebp - 0x128]
// 0044d28c  5f                   pop edi
// 0044d28d  5e                   pop esi
// 0044d28e  5b                   pop ebx
// 0044d28f  8be5                 mov esp, ebp
// 0044d291  5d                   pop ebp
// 0044d292  c21000               ret 0x10
// copied from an identical function in another client (function _AtlLoadTypeLib@16)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GF /Gy /GS- /MD
// roc-lib: atl-9.0-dll regobj.cpp