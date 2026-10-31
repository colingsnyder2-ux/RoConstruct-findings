// roc 2009-12 0040e9d0  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 440 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040e9d0
//
// 0040e9d0  55                   push ebp
// 0040e9d1  8bec                 mov ebp, esp
// 0040e9d3  6aff                 push -1
// 0040e9d5  68487a9200           push 0x927a48
// 0040e9da  64a100000000         mov eax, dword ptr fs:[0]
// 0040e9e0  50                   push eax
// 0040e9e1  64892500000000       mov dword ptr fs:[0], esp
// 0040e9e8  83ec10               sub esp, 0x10
// 0040e9eb  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0040e9ee  53                   push ebx
// 0040e9ef  56                   push esi
// 0040e9f0  57                   push edi
// 0040e9f1  33ff                 xor edi, edi
// 0040e9f3  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040e9f6  3bc7                 cmp eax, edi
// 0040e9f8  750a                 jne 0x40ea04
// 0040e9fa  b803400080           mov eax, 0x80004003
// 0040e9ff  e96e010000           jmp 0x40eb72
// 0040ea04  6a1c                 push 0x1c
// 0040ea06  8938                 mov dword ptr [eax], edi
// 0040ea08  897dfc               mov dword ptr [ebp - 4], edi
// 0040ea0b  e8504e3e00           call 0x7f3860
// 0040ea10  8bf0                 mov esi, eax
// 0040ea12  83c404               add esp, 4
// 0040ea15  3bf7                 cmp esi, edi
// 0040ea17  7429                 je 0x40ea42
// 0040ea19  897e04               mov dword ptr [esi + 4], edi
// 0040ea1c  897e10               mov dword ptr [esi + 0x10], edi
// 0040ea1f  897e0c               mov dword ptr [esi + 0xc], edi
// 0040ea22  897e08               mov dword ptr [esi + 8], edi
// 0040ea25  897e14               mov dword ptr [esi + 0x14], edi
// 0040ea28  897e18               mov dword ptr [esi + 0x18], edi
// 0040ea2b  c70670169a00         mov dword ptr [esi], 0x9a1670
// 0040ea31  8b0d0095b700         mov ecx, dword ptr [0xb79500]
// 0040ea37  8b01                 mov eax, dword ptr [ecx]
// 0040ea39  8b5004               mov edx, dword ptr [eax + 4]
// 0040ea3c  ffd2                 call edx
// 0040ea3e  8bde                 mov ebx, esi
// 0040ea40  eb02                 jmp 0x40ea44
// 0040ea42  33db                 xor ebx, ebx
// 0040ea44  83ceff               or esi, 0xffffffff
// 0040ea47  8975fc               mov dword ptr [ebp - 4], esi
// 0040ea4a  3bdf                 cmp ebx, edi
// 0040ea4c  0f8489000000         je 0x40eadb
// 0040ea52  f60594a0b70001       test byte ptr [0xb7a094], 1
// 0040ea59  7517                 jne 0x40ea72
// 0040ea5b  830d94a0b70001       or dword ptr [0xb7a094], 1
// 0040ea62  c7058ca0b70004000000 mov dword ptr [0xb7a08c], 4
// 0040ea6c  893590a0b700         mov dword ptr [0xb7a090], esi
// 0040ea72  bf8ca0b700           mov edi, 0xb7a08c
// 0040ea77  c745ec00000000       mov dword ptr [ebp - 0x14], 0
// 0040ea7e  6a04                 push 4
// 0040ea80  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0040ea87  e86450ffff           call 0x403af0
// 0040ea8c  83c404               add esp, 4
// 0040ea8f  84c0                 test al, al
// 0040ea91  7422                 je 0x40eab5
// 0040ea93  b804000000           mov eax, 4
// 0040ea98  e8735f3e00           call 0x7f4a10
// 0040ea9d  8bcc                 mov ecx, esp
// 0040ea9f  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040eaa2  894de8               mov dword ptr [ebp - 0x18], ecx
// 0040eaa5  eb1d                 jmp 0x40eac4
// 0040eaa7  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 0040eaaa  e88d503e00           call 0x7f3b3c
// 0040eaaf  b8dbea4000           mov eax, 0x40eadb
// 0040eab4  c3                   ret 
// 0040eab5  6a04                 push 4
// 0040eab7  8d4dec               lea ecx, [ebp - 0x14]
// 0040eaba  e8d155ffff           call 0x404090
// 0040eabf  8945e8               mov dword ptr [ebp - 0x18], eax
// 0040eac2  8bc8                 mov ecx, eax
// 0040eac4  85c9                 test ecx, ecx
// 0040eac6  751d                 jne 0x40eae5
// 0040eac8  8b03                 mov eax, dword ptr [ebx]
// 0040eaca  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0040eacd  6a01                 push 1
// 0040eacf  8bcb                 mov ecx, ebx
// 0040ead1  ffd2                 call edx
// 0040ead3  8d4dec               lea ecx, [ebp - 0x14]
// 0040ead6  e8a54dffff           call 0x403880
// 0040eadb  b80e000780           mov eax, 0x8007000e
// 0040eae0  e98d000000           jmp 0x40eb72
// 0040eae5  39358ca0b700         cmp dword ptr [0xb7a08c], esi
// 0040eaeb  742d                 je 0x40eb1a
// 0040eaed  8bf1                 mov esi, ecx
// 0040eaef  90                   nop 
// 0040eaf0  8b07                 mov eax, dword ptr [edi]
// 0040eaf2  83f8fe               cmp eax, -2
// 0040eaf5  7511                 jne 0x40eb08
// 0040eaf7  8b7f04               mov edi, dword ptr [edi + 4]
// 0040eafa  6a00                 push 0
// 0040eafc  ffd7                 call edi
// 0040eafe  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0040eb01  83c404               add esp, 4
// 0040eb04  8bf8                 mov edi, eax
// 0040eb06  eb0d                 jmp 0x40eb15
// 0040eb08  8b5508               mov edx, dword ptr [ebp + 8]
// 0040eb0b  03c2                 add eax, edx
// 0040eb0d  8906                 mov dword ptr [esi], eax
// 0040eb0f  83c604               add esi, 4
// 0040eb12  83c704               add edi, 4
// 0040eb15  833fff               cmp dword ptr [edi], -1
// 0040eb18  75d6                 jne 0x40eaf0
// 0040eb1a  8b4508               mov eax, dword ptr [ebp + 8]
// 0040eb1d  6a03                 push 3
// 0040eb1f  50                   push eax
// 0040eb20  8d5104               lea edx, [ecx + 4]
// 0040eb23  52                   push edx
// 0040eb24  51                   push ecx
// 0040eb25  8bcb                 mov ecx, ebx
// 0040eb27  e854f4ffff           call 0x40df80
// 0040eb2c  8bf8                 mov edi, eax
// 0040eb2e  8b03                 mov eax, dword ptr [ebx]
// 0040eb30  85ff                 test edi, edi
// 0040eb32  7d15                 jge 0x40eb49
// 0040eb34  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0040eb37  6a01                 push 1
// 0040eb39  8bcb                 mov ecx, ebx
// 0040eb3b  ffd2                 call edx
// 0040eb3d  8d4dec               lea ecx, [ebp - 0x14]
// 0040eb40  e83b4dffff           call 0x403880
// 0040eb45  8bc7                 mov eax, edi
// 0040eb47  eb29                 jmp 0x40eb72
// 0040eb49  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0040eb4c  8b10                 mov edx, dword ptr [eax]
// 0040eb4e  51                   push ecx
// 0040eb4f  68a8169a00           push 0x9a16a8
// 0040eb54  53                   push ebx
// 0040eb55  ffd2                 call edx
// 0040eb57  8bf0                 mov esi, eax
// 0040eb59  85f6                 test esi, esi
// 0040eb5b  7d0b                 jge 0x40eb68
// 0040eb5d  8b03                 mov eax, dword ptr [ebx]
// 0040eb5f  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0040eb62  6a01                 push 1
// 0040eb64  8bcb                 mov ecx, ebx
// 0040eb66  ffd2                 call edx
// 0040eb68  8d4dec               lea ecx, [ebp - 0x14]
// 0040eb6b  e8104dffff           call 0x403880
// 0040eb70  8bc6                 mov eax, esi
// 0040eb72  8d65d8               lea esp, [ebp - 0x28]
// 0040eb75  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040eb78  64890d00000000       mov dword ptr fs:[0], ecx
// 0040eb7f  5f                   pop edi
// 0040eb80  5e                   pop esi
// 0040eb81  5b                   pop ebx
// 0040eb82  8be5                 mov esp, ebp
// 0040eb84  5d                   pop ebp
// 0040eb85  c20800               ret 8
// copied from an identical function in another client (function ?EnumConnectionPoints@?$IConnectionPointContainerImpl@VConnectionMapContext@@@ATL@@UAGJPAPAUIEnumConnectionPoints@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_native_connection_enum_f6f7621be8b6b8a3.cpp