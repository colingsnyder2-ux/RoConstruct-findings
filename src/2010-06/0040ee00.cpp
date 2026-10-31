// roc 2010-06 0040ee00  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 440 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040ee00
//
// 0040ee00  55                   push ebp
// 0040ee01  8bec                 mov ebp, esp
// 0040ee03  6aff                 push -1
// 0040ee05  6838e39700           push 0x97e338
// 0040ee0a  64a100000000         mov eax, dword ptr fs:[0]
// 0040ee10  50                   push eax
// 0040ee11  64892500000000       mov dword ptr fs:[0], esp
// 0040ee18  83ec10               sub esp, 0x10
// 0040ee1b  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0040ee1e  53                   push ebx
// 0040ee1f  56                   push esi
// 0040ee20  57                   push edi
// 0040ee21  33ff                 xor edi, edi
// 0040ee23  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040ee26  3bc7                 cmp eax, edi
// 0040ee28  750a                 jne 0x40ee34
// 0040ee2a  b803400080           mov eax, 0x80004003
// 0040ee2f  e96e010000           jmp 0x40efa2
// 0040ee34  6a1c                 push 0x1c
// 0040ee36  8938                 mov dword ptr [eax], edi
// 0040ee38  897dfc               mov dword ptr [ebp - 4], edi
// 0040ee3b  e8608b3900           call 0x7a79a0
// 0040ee40  8bf0                 mov esi, eax
// 0040ee42  83c404               add esp, 4
// 0040ee45  3bf7                 cmp esi, edi
// 0040ee47  7429                 je 0x40ee72
// 0040ee49  897e04               mov dword ptr [esi + 4], edi
// 0040ee4c  897e10               mov dword ptr [esi + 0x10], edi
// 0040ee4f  897e0c               mov dword ptr [esi + 0xc], edi
// 0040ee52  897e08               mov dword ptr [esi + 8], edi
// 0040ee55  897e14               mov dword ptr [esi + 0x14], edi
// 0040ee58  897e18               mov dword ptr [esi + 0x18], edi
// 0040ee5b  c706e022a000         mov dword ptr [esi], 0xa022e0
// 0040ee61  8b0db0fabf00         mov ecx, dword ptr [0xbffab0]
// 0040ee67  8b01                 mov eax, dword ptr [ecx]
// 0040ee69  8b5004               mov edx, dword ptr [eax + 4]
// 0040ee6c  ffd2                 call edx
// 0040ee6e  8bde                 mov ebx, esi
// 0040ee70  eb02                 jmp 0x40ee74
// 0040ee72  33db                 xor ebx, ebx
// 0040ee74  83ceff               or esi, 0xffffffff
// 0040ee77  8975fc               mov dword ptr [ebp - 4], esi
// 0040ee7a  3bdf                 cmp ebx, edi
// 0040ee7c  0f8489000000         je 0x40ef0b
// 0040ee82  f6054406c00001       test byte ptr [0xc00644], 1
// 0040ee89  7517                 jne 0x40eea2
// 0040ee8b  830d4406c00001       or dword ptr [0xc00644], 1
// 0040ee92  c7053c06c00004000000 mov dword ptr [0xc0063c], 4
// 0040ee9c  89354006c000         mov dword ptr [0xc00640], esi
// 0040eea2  bf3c06c000           mov edi, 0xc0063c
// 0040eea7  c745ec00000000       mov dword ptr [ebp - 0x14], 0
// 0040eeae  6a04                 push 4
// 0040eeb0  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0040eeb7  e8944cffff           call 0x403b50
// 0040eebc  83c404               add esp, 4
// 0040eebf  84c0                 test al, al
// 0040eec1  7422                 je 0x40eee5
// 0040eec3  b804000000           mov eax, 4
// 0040eec8  e8839c3900           call 0x7a8b50
// 0040eecd  8bcc                 mov ecx, esp
// 0040eecf  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040eed2  894de8               mov dword ptr [ebp - 0x18], ecx
// 0040eed5  eb1d                 jmp 0x40eef4
// 0040eed7  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 0040eeda  e89d8d3900           call 0x7a7c7c
// 0040eedf  b80bef4000           mov eax, 0x40ef0b
// 0040eee4  c3                   ret 
// 0040eee5  6a04                 push 4
// 0040eee7  8d4dec               lea ecx, [ebp - 0x14]
// 0040eeea  e80152ffff           call 0x4040f0
// 0040eeef  8945e8               mov dword ptr [ebp - 0x18], eax
// 0040eef2  8bc8                 mov ecx, eax
// 0040eef4  85c9                 test ecx, ecx
// 0040eef6  751d                 jne 0x40ef15
// 0040eef8  8b03                 mov eax, dword ptr [ebx]
// 0040eefa  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0040eefd  6a01                 push 1
// 0040eeff  8bcb                 mov ecx, ebx
// 0040ef01  ffd2                 call edx
// 0040ef03  8d4dec               lea ecx, [ebp - 0x14]
// 0040ef06  e8c549ffff           call 0x4038d0
// 0040ef0b  b80e000780           mov eax, 0x8007000e
// 0040ef10  e98d000000           jmp 0x40efa2
// 0040ef15  39353c06c000         cmp dword ptr [0xc0063c], esi
// 0040ef1b  742d                 je 0x40ef4a
// 0040ef1d  8bf1                 mov esi, ecx
// 0040ef1f  90                   nop 
// 0040ef20  8b07                 mov eax, dword ptr [edi]
// 0040ef22  83f8fe               cmp eax, -2
// 0040ef25  7511                 jne 0x40ef38
// 0040ef27  8b7f04               mov edi, dword ptr [edi + 4]
// 0040ef2a  6a00                 push 0
// 0040ef2c  ffd7                 call edi
// 0040ef2e  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0040ef31  83c404               add esp, 4
// 0040ef34  8bf8                 mov edi, eax
// 0040ef36  eb0d                 jmp 0x40ef45
// 0040ef38  8b5508               mov edx, dword ptr [ebp + 8]
// 0040ef3b  03c2                 add eax, edx
// 0040ef3d  8906                 mov dword ptr [esi], eax
// 0040ef3f  83c604               add esi, 4
// 0040ef42  83c704               add edi, 4
// 0040ef45  833fff               cmp dword ptr [edi], -1
// 0040ef48  75d6                 jne 0x40ef20
// 0040ef4a  8b4508               mov eax, dword ptr [ebp + 8]
// 0040ef4d  6a03                 push 3
// 0040ef4f  50                   push eax
// 0040ef50  8d5104               lea edx, [ecx + 4]
// 0040ef53  52                   push edx
// 0040ef54  51                   push ecx
// 0040ef55  8bcb                 mov ecx, ebx
// 0040ef57  e864f4ffff           call 0x40e3c0
// 0040ef5c  8bf8                 mov edi, eax
// 0040ef5e  8b03                 mov eax, dword ptr [ebx]
// 0040ef60  85ff                 test edi, edi
// 0040ef62  7d15                 jge 0x40ef79
// 0040ef64  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0040ef67  6a01                 push 1
// 0040ef69  8bcb                 mov ecx, ebx
// 0040ef6b  ffd2                 call edx
// 0040ef6d  8d4dec               lea ecx, [ebp - 0x14]
// 0040ef70  e85b49ffff           call 0x4038d0
// 0040ef75  8bc7                 mov eax, edi
// 0040ef77  eb29                 jmp 0x40efa2
// 0040ef79  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0040ef7c  8b10                 mov edx, dword ptr [eax]
// 0040ef7e  51                   push ecx
// 0040ef7f  681823a000           push 0xa02318
// 0040ef84  53                   push ebx
// 0040ef85  ffd2                 call edx
// 0040ef87  8bf0                 mov esi, eax
// 0040ef89  85f6                 test esi, esi
// 0040ef8b  7d0b                 jge 0x40ef98
// 0040ef8d  8b03                 mov eax, dword ptr [ebx]
// 0040ef8f  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0040ef92  6a01                 push 1
// 0040ef94  8bcb                 mov ecx, ebx
// 0040ef96  ffd2                 call edx
// 0040ef98  8d4dec               lea ecx, [ebp - 0x14]
// 0040ef9b  e83049ffff           call 0x4038d0
// 0040efa0  8bc6                 mov eax, esi
// 0040efa2  8d65d8               lea esp, [ebp - 0x28]
// 0040efa5  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040efa8  64890d00000000       mov dword ptr fs:[0], ecx
// 0040efaf  5f                   pop edi
// 0040efb0  5e                   pop esi
// 0040efb1  5b                   pop ebx
// 0040efb2  8be5                 mov esp, ebp
// 0040efb4  5d                   pop ebp
// 0040efb5  c20800               ret 8
// copied from an identical function in another client (function ?EnumConnectionPoints@?$IConnectionPointContainerImpl@VConnectionMapContext@@@ATL@@UAGJPAPAUIEnumConnectionPoints@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_native_connection_enum_f6f7621be8b6b8a3.cpp