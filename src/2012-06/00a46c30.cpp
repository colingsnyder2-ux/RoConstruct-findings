// roc 2012-06 00a46c30  unit: CXTPDockingPaneContext  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a46c30
//
// 00a46c30  83ec14               sub esp, 0x14
// 00a46c33  53                   push ebx
// 00a46c34  55                   push ebp
// 00a46c35  56                   push esi
// 00a46c36  57                   push edi
// 00a46c37  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00a46c3b  8d442414             lea eax, [esp + 0x14]
// 00a46c3f  8bf1                 mov esi, ecx
// 00a46c41  57                   push edi
// 00a46c42  50                   push eax
// 00a46c43  89742418             mov dword ptr [esp + 0x18], esi
// 00a46c47  e88439f8ff           call 0x9ca5d0
// 00a46c4c  8bc8                 mov ecx, eax
// 00a46c4e  e8dd34f8ff           call 0x9ca130
// 00a46c53  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 00a46c59  8bb1c8000000         mov esi, dword ptr [ecx + 0xc8]
// 00a46c5f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a46c63  2b4f04               sub ecx, dword ptr [edi + 4]
// 00a46c66  8b2df43ab200         mov ebp, dword ptr [0xb23af4]
// 00a46c6c  8bc1                 mov eax, ecx
// 00a46c6e  99                   cdq 
// 00a46c6f  33c2                 xor eax, edx
// 00a46c71  2bc2                 sub eax, edx
// 00a46c73  3bc6                 cmp eax, esi
// 00a46c75  7d06                 jge 0xa46c7d
// 00a46c77  51                   push ecx
// 00a46c78  6a00                 push 0
// 00a46c7a  57                   push edi
// 00a46c7b  ffd5                 call ebp
// 00a46c7d  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 00a46c80  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a46c84  8bc3                 mov eax, ebx
// 00a46c86  2bc1                 sub eax, ecx
// 00a46c88  99                   cdq 
// 00a46c89  33c2                 xor eax, edx
// 00a46c8b  2bc2                 sub eax, edx
// 00a46c8d  3bc6                 cmp eax, esi
// 00a46c8f  7d08                 jge 0xa46c99
// 00a46c91  2bcb                 sub ecx, ebx
// 00a46c93  51                   push ecx
// 00a46c94  6a00                 push 0
// 00a46c96  57                   push edi
// 00a46c97  ffd5                 call ebp
// 00a46c99  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a46c9d  2b4f08               sub ecx, dword ptr [edi + 8]
// 00a46ca0  8bc1                 mov eax, ecx
// 00a46ca2  99                   cdq 
// 00a46ca3  33c2                 xor eax, edx
// 00a46ca5  2bc2                 sub eax, edx
// 00a46ca7  3bc6                 cmp eax, esi
// 00a46ca9  7d06                 jge 0xa46cb1
// 00a46cab  6a00                 push 0
// 00a46cad  51                   push ecx
// 00a46cae  57                   push edi
// 00a46caf  ffd5                 call ebp
// 00a46cb1  8b1f                 mov ebx, dword ptr [edi]
// 00a46cb3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a46cb7  8bc3                 mov eax, ebx
// 00a46cb9  2bc1                 sub eax, ecx
// 00a46cbb  99                   cdq 
// 00a46cbc  33c2                 xor eax, edx
// 00a46cbe  2bc2                 sub eax, edx
// 00a46cc0  3bc6                 cmp eax, esi
// 00a46cc2  7d08                 jge 0xa46ccc
// 00a46cc4  6a00                 push 0
// 00a46cc6  2bcb                 sub ecx, ebx
// 00a46cc8  51                   push ecx
// 00a46cc9  57                   push edi
// 00a46cca  ffd5                 call ebp
// 00a46ccc  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00a46cd0  8b951c010000         mov edx, dword ptr [ebp + 0x11c]
// 00a46cd6  8b8acc000000         mov ecx, dword ptr [edx + 0xcc]
// 00a46cdc  e8f1280500           call 0xa995d2
// 00a46ce1  a900000021           test eax, 0x21000000
// 00a46ce6  7515                 jne 0xa46cfd
// 00a46ce8  8b851c010000         mov eax, dword ptr [ebp + 0x11c]
// 00a46cee  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 00a46cf4  51                   push ecx
// 00a46cf5  57                   push edi
// 00a46cf6  8bcd                 mov ecx, ebp
// 00a46cf8  e8c3fdffff           call 0xa46ac0
// 00a46cfd  8b8d1c010000         mov ecx, dword ptr [ebp + 0x11c]
// 00a46d03  e858f8f7ff           call 0x9c6560
// 00a46d08  8b5804               mov ebx, dword ptr [eax + 4]
// 00a46d0b  85db                 test ebx, ebx
// 00a46d0d  7448                 je 0xa46d57
// 00a46d0f  90                   nop 
// 00a46d10  8bc3                 mov eax, ebx
// 00a46d12  8b4008               mov eax, dword ptr [eax + 8]
// 00a46d15  83781803             cmp dword ptr [eax + 0x18], 3
// 00a46d19  8b1b                 mov ebx, dword ptr [ebx]
// 00a46d1b  7536                 jne 0xa46d53
// 00a46d1d  8db008ffffff         lea esi, [eax - 0xf8]
// 00a46d23  85f6                 test esi, esi
// 00a46d25  742c                 je 0xa46d53
// 00a46d27  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a46d2a  85c0                 test eax, eax
// 00a46d2c  7425                 je 0xa46d53
// 00a46d2e  50                   push eax
// 00a46d2f  ff153c3bb200         call dword ptr [0xb23b3c]
// 00a46d35  85c0                 test eax, eax
// 00a46d37  741a                 je 0xa46d53
// 00a46d39  8b8d20010000         mov ecx, dword ptr [ebp + 0x120]
// 00a46d3f  8b11                 mov edx, dword ptr [ecx]
// 00a46d41  8b4218               mov eax, dword ptr [edx + 0x18]
// 00a46d44  ffd0                 call eax
// 00a46d46  3bc6                 cmp eax, esi
// 00a46d48  7409                 je 0xa46d53
// 00a46d4a  56                   push esi
// 00a46d4b  57                   push edi
// 00a46d4c  8bcd                 mov ecx, ebp
// 00a46d4e  e86dfdffff           call 0xa46ac0
// 00a46d53  85db                 test ebx, ebx
// 00a46d55  75b9                 jne 0xa46d10
// 00a46d57  5f                   pop edi
// 00a46d58  5e                   pop esi
// 00a46d59  5d                   pop ebp
// 00a46d5a  5b                   pop ebx
// 00a46d5b  83c414               add esp, 0x14
// 00a46d5e  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?UpdateStickyFrame@CXTPDockingPaneContext@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
