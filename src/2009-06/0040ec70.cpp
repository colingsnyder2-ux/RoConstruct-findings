// roc 2009-06 0040ec70  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 440 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040ec70
//
// 0040ec70  55                   push ebp
// 0040ec71  8bec                 mov ebp, esp
// 0040ec73  6aff                 push -1
// 0040ec75  68e8d48400           push 0x84d4e8
// 0040ec7a  64a100000000         mov eax, dword ptr fs:[0]
// 0040ec80  50                   push eax
// 0040ec81  64892500000000       mov dword ptr fs:[0], esp
// 0040ec88  83ec10               sub esp, 0x10
// 0040ec8b  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0040ec8e  53                   push ebx
// 0040ec8f  56                   push esi
// 0040ec90  57                   push edi
// 0040ec91  33ff                 xor edi, edi
// 0040ec93  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040ec96  3bc7                 cmp eax, edi
// 0040ec98  750a                 jne 0x40eca4
// 0040ec9a  b803400080           mov eax, 0x80004003
// 0040ec9f  e96e010000           jmp 0x40ee12
// 0040eca4  6a1c                 push 0x1c
// 0040eca6  8938                 mov dword ptr [eax], edi
// 0040eca8  897dfc               mov dword ptr [ebp - 4], edi
// 0040ecab  e8889d3000           call 0x718a38
// 0040ecb0  8bf0                 mov esi, eax
// 0040ecb2  83c404               add esp, 4
// 0040ecb5  3bf7                 cmp esi, edi
// 0040ecb7  7429                 je 0x40ece2
// 0040ecb9  897e04               mov dword ptr [esi + 4], edi
// 0040ecbc  897e10               mov dword ptr [esi + 0x10], edi
// 0040ecbf  897e0c               mov dword ptr [esi + 0xc], edi
// 0040ecc2  897e08               mov dword ptr [esi + 8], edi
// 0040ecc5  897e14               mov dword ptr [esi + 0x14], edi
// 0040ecc8  897e18               mov dword ptr [esi + 0x18], edi
// 0040eccb  c706a0ea8a00         mov dword ptr [esi], 0x8aeaa0
// 0040ecd1  8b0d1897a300         mov ecx, dword ptr [0xa39718]
// 0040ecd7  8b01                 mov eax, dword ptr [ecx]
// 0040ecd9  8b5004               mov edx, dword ptr [eax + 4]
// 0040ecdc  ffd2                 call edx
// 0040ecde  8bde                 mov ebx, esi
// 0040ece0  eb02                 jmp 0x40ece4
// 0040ece2  33db                 xor ebx, ebx
// 0040ece4  83ceff               or esi, 0xffffffff
// 0040ece7  8975fc               mov dword ptr [ebp - 4], esi
// 0040ecea  3bdf                 cmp ebx, edi
// 0040ecec  0f8489000000         je 0x40ed7b
// 0040ecf2  f6056ca0a30001       test byte ptr [0xa3a06c], 1
// 0040ecf9  7517                 jne 0x40ed12
// 0040ecfb  830d6ca0a30001       or dword ptr [0xa3a06c], 1
// 0040ed02  c70564a0a30004000000 mov dword ptr [0xa3a064], 4
// 0040ed0c  893568a0a300         mov dword ptr [0xa3a068], esi
// 0040ed12  bf64a0a300           mov edi, 0xa3a064
// 0040ed17  c745ec00000000       mov dword ptr [ebp - 0x14], 0
// 0040ed1e  6a04                 push 4
// 0040ed20  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0040ed27  e80451ffff           call 0x403e30
// 0040ed2c  83c404               add esp, 4
// 0040ed2f  84c0                 test al, al
// 0040ed31  7422                 je 0x40ed55
// 0040ed33  b804000000           mov eax, 4
// 0040ed38  e8a3ae3000           call 0x719be0
// 0040ed3d  8bcc                 mov ecx, esp
// 0040ed3f  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040ed42  894de8               mov dword ptr [ebp - 0x18], ecx
// 0040ed45  eb1d                 jmp 0x40ed64
// 0040ed47  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 0040ed4a  e8c59f3000           call 0x718d14
// 0040ed4f  b87bed4000           mov eax, 0x40ed7b
// 0040ed54  c3                   ret 
// 0040ed55  6a04                 push 4
// 0040ed57  8d4dec               lea ecx, [ebp - 0x14]
// 0040ed5a  e87156ffff           call 0x4043d0
// 0040ed5f  8945e8               mov dword ptr [ebp - 0x18], eax
// 0040ed62  8bc8                 mov ecx, eax
// 0040ed64  85c9                 test ecx, ecx
// 0040ed66  751d                 jne 0x40ed85
// 0040ed68  8b03                 mov eax, dword ptr [ebx]
// 0040ed6a  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0040ed6d  6a01                 push 1
// 0040ed6f  8bcb                 mov ecx, ebx
// 0040ed71  ffd2                 call edx
// 0040ed73  8d4dec               lea ecx, [ebp - 0x14]
// 0040ed76  e8354effff           call 0x403bb0
// 0040ed7b  b80e000780           mov eax, 0x8007000e
// 0040ed80  e98d000000           jmp 0x40ee12
// 0040ed85  393564a0a300         cmp dword ptr [0xa3a064], esi
// 0040ed8b  742d                 je 0x40edba
// 0040ed8d  8bf1                 mov esi, ecx
// 0040ed8f  90                   nop 
// 0040ed90  8b07                 mov eax, dword ptr [edi]
// 0040ed92  83f8fe               cmp eax, -2
// 0040ed95  7511                 jne 0x40eda8
// 0040ed97  8b7f04               mov edi, dword ptr [edi + 4]
// 0040ed9a  6a00                 push 0
// 0040ed9c  ffd7                 call edi
// 0040ed9e  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0040eda1  83c404               add esp, 4
// 0040eda4  8bf8                 mov edi, eax
// 0040eda6  eb0d                 jmp 0x40edb5
// 0040eda8  8b5508               mov edx, dword ptr [ebp + 8]
// 0040edab  03c2                 add eax, edx
// 0040edad  8906                 mov dword ptr [esi], eax
// 0040edaf  83c604               add esi, 4
// 0040edb2  83c704               add edi, 4
// 0040edb5  833fff               cmp dword ptr [edi], -1
// 0040edb8  75d6                 jne 0x40ed90
// 0040edba  8b4508               mov eax, dword ptr [ebp + 8]
// 0040edbd  6a03                 push 3
// 0040edbf  50                   push eax
// 0040edc0  8d5104               lea edx, [ecx + 4]
// 0040edc3  52                   push edx
// 0040edc4  51                   push ecx
// 0040edc5  8bcb                 mov ecx, ebx
// 0040edc7  e864f4ffff           call 0x40e230
// 0040edcc  8bf8                 mov edi, eax
// 0040edce  8b03                 mov eax, dword ptr [ebx]
// 0040edd0  85ff                 test edi, edi
// 0040edd2  7d15                 jge 0x40ede9
// 0040edd4  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0040edd7  6a01                 push 1
// 0040edd9  8bcb                 mov ecx, ebx
// 0040eddb  ffd2                 call edx
// 0040eddd  8d4dec               lea ecx, [ebp - 0x14]
// 0040ede0  e8cb4dffff           call 0x403bb0
// 0040ede5  8bc7                 mov eax, edi
// 0040ede7  eb29                 jmp 0x40ee12
// 0040ede9  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0040edec  8b10                 mov edx, dword ptr [eax]
// 0040edee  51                   push ecx
// 0040edef  68d8ea8a00           push 0x8aead8
// 0040edf4  53                   push ebx
// 0040edf5  ffd2                 call edx
// 0040edf7  8bf0                 mov esi, eax
// 0040edf9  85f6                 test esi, esi
// 0040edfb  7d0b                 jge 0x40ee08
// 0040edfd  8b03                 mov eax, dword ptr [ebx]
// 0040edff  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0040ee02  6a01                 push 1
// 0040ee04  8bcb                 mov ecx, ebx
// 0040ee06  ffd2                 call edx
// 0040ee08  8d4dec               lea ecx, [ebp - 0x14]
// 0040ee0b  e8a04dffff           call 0x403bb0
// 0040ee10  8bc6                 mov eax, esi
// 0040ee12  8d65d8               lea esp, [ebp - 0x28]
// 0040ee15  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040ee18  64890d00000000       mov dword ptr fs:[0], ecx
// 0040ee1f  5f                   pop edi
// 0040ee20  5e                   pop esi
// 0040ee21  5b                   pop ebx
// 0040ee22  8be5                 mov esp, ebp
// 0040ee24  5d                   pop ebp
// 0040ee25  c20800               ret 8
// copied from an identical function in another client (function ?EnumConnectionPoints@?$IConnectionPointContainerImpl@VConnectionMapContext@@@ATL@@UAGJPAPAUIEnumConnectionPoints@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_native_connection_enum_f6f7621be8b6b8a3.cpp