// roc 2009-06 00817cb0  unit: CXTPDialogBar  size: 404 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00817cb0
//
// 00817cb0  83ec10               sub esp, 0x10
// 00817cb3  53                   push ebx
// 00817cb4  8bd9                 mov ebx, ecx
// 00817cb6  83bbb801000000       cmp dword ptr [ebx + 0x1b8], 0
// 00817cbd  7518                 jne 0x817cd7
// 00817cbf  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00817cc3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00817cc7  50                   push eax
// 00817cc8  51                   push ecx
// 00817cc9  8bcb                 mov ecx, ebx
// 00817ccb  e8d096f1ff           call 0x7313a0
// 00817cd0  5b                   pop ebx
// 00817cd1  83c410               add esp, 0x10
// 00817cd4  c20800               ret 8
// 00817cd7  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00817cda  55                   push ebp
// 00817cdb  56                   push esi
// 00817cdc  57                   push edi
// 00817cdd  8d542410             lea edx, [esp + 0x10]
// 00817ce1  52                   push edx
// 00817ce2  50                   push eax
// 00817ce3  ff15f4ed8900         call dword ptr [0x89edf4]
// 00817ce9  6afd                 push -3
// 00817ceb  6afd                 push -3
// 00817ced  8d4c2418             lea ecx, [esp + 0x18]
// 00817cf1  51                   push ecx
// 00817cf2  ff15bced8900         call dword ptr [0x89edbc]
// 00817cf8  8bbb00010000         mov edi, dword ptr [ebx + 0x100]
// 00817cfe  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00817d02  83ff04               cmp edi, 4
// 00817d05  0f8493000000         je 0x817d9e
// 00817d0b  83ff01               cmp edi, 1
// 00817d0e  7515                 jne 0x817d25
// 00817d10  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 00817d14  7f33                 jg 0x817d49
// 00817d16  5f                   pop edi
// 00817d17  5e                   pop esi
// 00817d18  5d                   pop ebp
// 00817d19  b80c000000           mov eax, 0xc
// 00817d1e  5b                   pop ebx
// 00817d1f  83c410               add esp, 0x10
// 00817d22  c20800               ret 8
// 00817d25  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 00817d29  7c1e                 jl 0x817d49
// 00817d2b  f683ec00000040       test byte ptr [ebx + 0xec], 0x40
// 00817d32  0f84da000000         je 0x817e12
// 00817d38  57                   push edi
// 00817d39  e852f4c0ff           call 0x427190
// 00817d3e  83c404               add esp, 4
// 00817d41  85c0                 test eax, eax
// 00817d43  0f84c9000000         je 0x817e12
// 00817d49  8b742424             mov esi, dword ptr [esp + 0x24]
// 00817d4d  83ff03               cmp edi, 3
// 00817d50  7519                 jne 0x817d6b
// 00817d52  3b742410             cmp esi, dword ptr [esp + 0x10]
// 00817d56  0f8fd5000000         jg 0x817e31
// 00817d5c  5f                   pop edi
// 00817d5d  5e                   pop esi
// 00817d5e  5d                   pop ebp
// 00817d5f  b80a000000           mov eax, 0xa
// 00817d64  5b                   pop ebx
// 00817d65  83c410               add esp, 0x10
// 00817d68  c20800               ret 8
// 00817d6b  3b742418             cmp esi, dword ptr [esp + 0x18]
// 00817d6f  0f8cbc000000         jl 0x817e31
// 00817d75  f683ec00000040       test byte ptr [ebx + 0xec], 0x40
// 00817d7c  7411                 je 0x817d8f
// 00817d7e  57                   push edi
// 00817d7f  e80cf4c0ff           call 0x427190
// 00817d84  83c404               add esp, 4
// 00817d87  85c0                 test eax, eax
// 00817d89  0f84a2000000         je 0x817e31
// 00817d8f  5f                   pop edi
// 00817d90  5e                   pop esi
// 00817d91  5d                   pop ebp
// 00817d92  b80b000000           mov eax, 0xb
// 00817d97  5b                   pop ebx
// 00817d98  83c410               add esp, 0x10
// 00817d9b  c20800               ret 8
// 00817d9e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00817da2  3be8                 cmp ebp, eax
// 00817da4  8b742424             mov esi, dword ptr [esp + 0x24]
// 00817da8  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00817dac  8b542410             mov edx, dword ptr [esp + 0x10]
// 00817db0  7d26                 jge 0x817dd8
// 00817db2  3bf2                 cmp esi, edx
// 00817db4  7d0f                 jge 0x817dc5
// 00817db6  5f                   pop edi
// 00817db7  5e                   pop esi
// 00817db8  5d                   pop ebp
// 00817db9  b80d000000           mov eax, 0xd
// 00817dbe  5b                   pop ebx
// 00817dbf  83c410               add esp, 0x10
// 00817dc2  c20800               ret 8
// 00817dc5  3bf7                 cmp esi, edi
// 00817dc7  7c0f                 jl 0x817dd8
// 00817dc9  5f                   pop edi
// 00817dca  5e                   pop esi
// 00817dcb  5d                   pop ebp
// 00817dcc  b80e000000           mov eax, 0xe
// 00817dd1  5b                   pop ebx
// 00817dd2  83c410               add esp, 0x10
// 00817dd5  c20800               ret 8
// 00817dd8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00817ddc  3be9                 cmp ebp, ecx
// 00817dde  7c26                 jl 0x817e06
// 00817de0  3bf2                 cmp esi, edx
// 00817de2  7d0f                 jge 0x817df3
// 00817de4  5f                   pop edi
// 00817de5  5e                   pop esi
// 00817de6  5d                   pop ebp
// 00817de7  b810000000           mov eax, 0x10
// 00817dec  5b                   pop ebx
// 00817ded  83c410               add esp, 0x10
// 00817df0  c20800               ret 8
// 00817df3  3bf7                 cmp esi, edi
// 00817df5  7c0f                 jl 0x817e06
// 00817df7  5f                   pop edi
// 00817df8  5e                   pop esi
// 00817df9  5d                   pop ebp
// 00817dfa  b811000000           mov eax, 0x11
// 00817dff  5b                   pop ebx
// 00817e00  83c410               add esp, 0x10
// 00817e03  c20800               ret 8
// 00817e06  3be8                 cmp ebp, eax
// 00817e08  0f8c08ffffff         jl 0x817d16
// 00817e0e  3be9                 cmp ebp, ecx
// 00817e10  7c0f                 jl 0x817e21
// 00817e12  5f                   pop edi
// 00817e13  5e                   pop esi
// 00817e14  5d                   pop ebp
// 00817e15  b80f000000           mov eax, 0xf
// 00817e1a  5b                   pop ebx
// 00817e1b  83c410               add esp, 0x10
// 00817e1e  c20800               ret 8
// 00817e21  3bf2                 cmp esi, edx
// 00817e23  0f8c33ffffff         jl 0x817d5c
// 00817e29  3bf7                 cmp esi, edi
// 00817e2b  0f8d5effffff         jge 0x817d8f
// 00817e31  55                   push ebp
// 00817e32  56                   push esi
// 00817e33  8bcb                 mov ecx, ebx
// 00817e35  e86695f1ff           call 0x7313a0
// 00817e3a  5f                   pop edi
// 00817e3b  5e                   pop esi
// 00817e3c  5d                   pop ebp
// 00817e3d  5b                   pop ebx
// 00817e3e  83c410               add esp, 0x10
// 00817e41  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?OnNcHitTest@CXTPDialogBar@@IAEJVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
