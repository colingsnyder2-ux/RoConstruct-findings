// roc 2012-06 00a46d70  unit: CXTPDockingPaneContext  size: 315 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a46d70
//
// 00a46d70  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 00a46d76  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a46d7a  83ec10               sub esp, 0x10
// 00a46d7d  55                   push ebp
// 00a46d7e  56                   push esi
// 00a46d7f  8bb0c8000000         mov esi, dword ptr [eax + 0xc8]
// 00a46d85  57                   push edi
// 00a46d86  51                   push ecx
// 00a46d87  8d4c2410             lea ecx, [esp + 0x10]
// 00a46d8b  e8b0e3f8ff           call 0x9d5140
// 00a46d90  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00a46d94  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a46d98  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 00a46d9b  2bd6                 sub edx, esi
// 00a46d9d  3bea                 cmp ebp, edx
// 00a46d9f  0f8cfd000000         jl 0xa46ea2
// 00a46da5  8b4704               mov eax, dword ptr [edi + 4]
// 00a46da8  53                   push ebx
// 00a46da9  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00a46dad  8d0c33               lea ecx, [ebx + esi]
// 00a46db0  3bc1                 cmp eax, ecx
// 00a46db2  0f8fe9000000         jg 0xa46ea1
// 00a46db8  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a46dbc  8b4f08               mov ecx, dword ptr [edi + 8]
// 00a46dbf  2bd6                 sub edx, esi
// 00a46dc1  3bca                 cmp ecx, edx
// 00a46dc3  0f8cd8000000         jl 0xa46ea1
// 00a46dc9  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a46dcd  8b0f                 mov ecx, dword ptr [edi]
// 00a46dcf  03d6                 add edx, esi
// 00a46dd1  3bca                 cmp ecx, edx
// 00a46dd3  0f8fc8000000         jg 0xa46ea1
// 00a46dd9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a46ddd  2bc3                 sub eax, ebx
// 00a46ddf  99                   cdq 
// 00a46de0  33c2                 xor eax, edx
// 00a46de2  2bc2                 sub eax, edx
// 00a46de4  3bc6                 cmp eax, esi
// 00a46de6  7d12                 jge 0xa46dfa
// 00a46de8  83f903               cmp ecx, 3
// 00a46deb  740a                 je 0xa46df7
// 00a46ded  83f904               cmp ecx, 4
// 00a46df0  7405                 je 0xa46df7
// 00a46df2  83f905               cmp ecx, 5
// 00a46df5  7503                 jne 0xa46dfa
// 00a46df7  895f04               mov dword ptr [edi + 4], ebx
// 00a46dfa  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00a46dfe  8bc5                 mov eax, ebp
// 00a46e00  2bc3                 sub eax, ebx
// 00a46e02  99                   cdq 
// 00a46e03  33c2                 xor eax, edx
// 00a46e05  2bc2                 sub eax, edx
// 00a46e07  3bc6                 cmp eax, esi
// 00a46e09  7d12                 jge 0xa46e1d
// 00a46e0b  83f906               cmp ecx, 6
// 00a46e0e  740a                 je 0xa46e1a
// 00a46e10  83f907               cmp ecx, 7
// 00a46e13  7405                 je 0xa46e1a
// 00a46e15  83f908               cmp ecx, 8
// 00a46e18  7503                 jne 0xa46e1d
// 00a46e1a  895f0c               mov dword ptr [edi + 0xc], ebx
// 00a46e1d  8b07                 mov eax, dword ptr [edi]
// 00a46e1f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00a46e23  2bc3                 sub eax, ebx
// 00a46e25  99                   cdq 
// 00a46e26  33c2                 xor eax, edx
// 00a46e28  2bc2                 sub eax, edx
// 00a46e2a  3bc6                 cmp eax, esi
// 00a46e2c  7d11                 jge 0xa46e3f
// 00a46e2e  83f901               cmp ecx, 1
// 00a46e31  740a                 je 0xa46e3d
// 00a46e33  83f904               cmp ecx, 4
// 00a46e36  7405                 je 0xa46e3d
// 00a46e38  83f907               cmp ecx, 7
// 00a46e3b  7502                 jne 0xa46e3f
// 00a46e3d  891f                 mov dword ptr [edi], ebx
// 00a46e3f  8b07                 mov eax, dword ptr [edi]
// 00a46e41  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00a46e45  2bc5                 sub eax, ebp
// 00a46e47  99                   cdq 
// 00a46e48  33c2                 xor eax, edx
// 00a46e4a  2bc2                 sub eax, edx
// 00a46e4c  3bc6                 cmp eax, esi
// 00a46e4e  7d11                 jge 0xa46e61
// 00a46e50  83f901               cmp ecx, 1
// 00a46e53  740a                 je 0xa46e5f
// 00a46e55  83f904               cmp ecx, 4
// 00a46e58  7405                 je 0xa46e5f
// 00a46e5a  83f907               cmp ecx, 7
// 00a46e5d  7502                 jne 0xa46e61
// 00a46e5f  892f                 mov dword ptr [edi], ebp
// 00a46e61  8b4708               mov eax, dword ptr [edi + 8]
// 00a46e64  2bc3                 sub eax, ebx
// 00a46e66  99                   cdq 
// 00a46e67  33c2                 xor eax, edx
// 00a46e69  2bc2                 sub eax, edx
// 00a46e6b  3bc6                 cmp eax, esi
// 00a46e6d  7d12                 jge 0xa46e81
// 00a46e6f  83f902               cmp ecx, 2
// 00a46e72  740a                 je 0xa46e7e
// 00a46e74  83f905               cmp ecx, 5
// 00a46e77  7405                 je 0xa46e7e
// 00a46e79  83f908               cmp ecx, 8
// 00a46e7c  7503                 jne 0xa46e81
// 00a46e7e  895f08               mov dword ptr [edi + 8], ebx
// 00a46e81  8b4708               mov eax, dword ptr [edi + 8]
// 00a46e84  2bc5                 sub eax, ebp
// 00a46e86  99                   cdq 
// 00a46e87  33c2                 xor eax, edx
// 00a46e89  2bc2                 sub eax, edx
// 00a46e8b  3bc6                 cmp eax, esi
// 00a46e8d  7d12                 jge 0xa46ea1
// 00a46e8f  83f902               cmp ecx, 2
// 00a46e92  740a                 je 0xa46e9e
// 00a46e94  83f905               cmp ecx, 5
// 00a46e97  7405                 je 0xa46e9e
// 00a46e99  83f908               cmp ecx, 8
// 00a46e9c  7503                 jne 0xa46ea1
// 00a46e9e  896f08               mov dword ptr [edi + 8], ebp
// 00a46ea1  5b                   pop ebx
// 00a46ea2  5f                   pop edi
// 00a46ea3  5e                   pop esi
// 00a46ea4  5d                   pop ebp
// 00a46ea5  83c410               add esp, 0x10
// 00a46ea8  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?UpdateSizingStickyFrame@CXTPDockingPaneContext@@IAEXIAAVCRect@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
