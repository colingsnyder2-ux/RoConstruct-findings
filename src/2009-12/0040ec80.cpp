// roc 2009-12 0040ec80  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 436 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040ec80
//
// 0040ec80  55                   push ebp
// 0040ec81  8bec                 mov ebp, esp
// 0040ec83  6aff                 push -1
// 0040ec85  68607a9200           push 0x927a60
// 0040ec8a  64a100000000         mov eax, dword ptr fs:[0]
// 0040ec90  50                   push eax
// 0040ec91  64892500000000       mov dword ptr fs:[0], esp
// 0040ec98  83ec10               sub esp, 0x10
// 0040ec9b  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0040ec9e  53                   push ebx
// 0040ec9f  56                   push esi
// 0040eca0  57                   push edi
// 0040eca1  33ff                 xor edi, edi
// 0040eca3  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040eca6  3bc7                 cmp eax, edi
// 0040eca8  7518                 jne 0x40ecc2
// 0040ecaa  b803400080           mov eax, 0x80004003
// 0040ecaf  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040ecb2  64890d00000000       mov dword ptr fs:[0], ecx
// 0040ecb9  5f                   pop edi
// 0040ecba  5e                   pop esi
// 0040ecbb  5b                   pop ebx
// 0040ecbc  8be5                 mov esp, ebp
// 0040ecbe  5d                   pop ebp
// 0040ecbf  c20800               ret 8
// 0040ecc2  6a1c                 push 0x1c
// 0040ecc4  8938                 mov dword ptr [eax], edi
// 0040ecc6  897dfc               mov dword ptr [ebp - 4], edi
// 0040ecc9  e8924b3e00           call 0x7f3860
// 0040ecce  8bf0                 mov esi, eax
// 0040ecd0  83c404               add esp, 4
// 0040ecd3  3bf7                 cmp esi, edi
// 0040ecd5  742c                 je 0x40ed03
// 0040ecd7  897e04               mov dword ptr [esi + 4], edi
// 0040ecda  897e10               mov dword ptr [esi + 0x10], edi
// 0040ecdd  897e0c               mov dword ptr [esi + 0xc], edi
// 0040ece0  897e08               mov dword ptr [esi + 8], edi
// 0040ece3  897e14               mov dword ptr [esi + 0x14], edi
// 0040ece6  897e18               mov dword ptr [esi + 0x18], edi
// 0040ece9  c706bc169a00         mov dword ptr [esi], 0x9a16bc
// 0040ecef  8b0d0095b700         mov ecx, dword ptr [0xb79500]
// 0040ecf5  8b01                 mov eax, dword ptr [ecx]
// 0040ecf7  8b5004               mov edx, dword ptr [eax + 4]
// 0040ecfa  ffd2                 call edx
// 0040ecfc  8bde                 mov ebx, esi
// 0040ecfe  895dec               mov dword ptr [ebp - 0x14], ebx
// 0040ed01  eb05                 jmp 0x40ed08
// 0040ed03  897dec               mov dword ptr [ebp - 0x14], edi
// 0040ed06  8bdf                 mov ebx, edi
// 0040ed08  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040ed0f  3bdf                 cmp ebx, edi
// 0040ed11  0f8405010000         je 0x40ee1c
// 0040ed17  8b7508               mov esi, dword ptr [ebp + 8]
// 0040ed1a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040ed1d  8b4608               mov eax, dword ptr [esi + 8]
// 0040ed20  8d0481               lea eax, [ecx + eax*4]
// 0040ed23  83c604               add esi, 4
// 0040ed26  2bc1                 sub eax, ecx
// 0040ed28  33c9                 xor ecx, ecx
// 0040ed2a  c1f802               sar eax, 2
// 0040ed2d  ba08000000           mov edx, 8
// 0040ed32  f7e2                 mul edx
// 0040ed34  0f90c1               seto cl
// 0040ed37  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0040ed3e  f7d9                 neg ecx
// 0040ed40  0bc8                 or ecx, eax
// 0040ed42  51                   push ecx
// 0040ed43  e8fa4d3e00           call 0x7f3b42
// 0040ed48  83c404               add esp, 4
// 0040ed4b  894508               mov dword ptr [ebp + 8], eax
// 0040ed4e  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040ed55  3bc7                 cmp eax, edi
// 0040ed57  0f84b4000000         je 0x40ee11
// 0040ed5d  8b3e                 mov edi, dword ptr [esi]
// 0040ed5f  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040ed62  8bd7                 mov edx, edi
// 0040ed64  8d0c8a               lea ecx, [edx + ecx*4]
// 0040ed67  8bd8                 mov ebx, eax
// 0040ed69  3bf9                 cmp edi, ecx
// 0040ed6b  7334                 jae 0x40eda1
// 0040ed6d  8d4900               lea ecx, [ecx]
// 0040ed70  8b0f                 mov ecx, dword ptr [edi]
// 0040ed72  85c9                 test ecx, ecx
// 0040ed74  741c                 je 0x40ed92
// 0040ed76  8b11                 mov edx, dword ptr [ecx]
// 0040ed78  8b4204               mov eax, dword ptr [edx + 4]
// 0040ed7b  51                   push ecx
// 0040ed7c  ffd0                 call eax
// 0040ed7e  8b0f                 mov ecx, dword ptr [edi]
// 0040ed80  57                   push edi
// 0040ed81  56                   push esi
// 0040ed82  890b                 mov dword ptr [ebx], ecx
// 0040ed84  e8f7e9ffff           call 0x40d780
// 0040ed89  894304               mov dword ptr [ebx + 4], eax
// 0040ed8c  8b4508               mov eax, dword ptr [ebp + 8]
// 0040ed8f  83c308               add ebx, 8
// 0040ed92  8b5604               mov edx, dword ptr [esi + 4]
// 0040ed95  8b0e                 mov ecx, dword ptr [esi]
// 0040ed97  83c704               add edi, 4
// 0040ed9a  8d1491               lea edx, [ecx + edx*4]
// 0040ed9d  3bfa                 cmp edi, edx
// 0040ed9f  72cf                 jb 0x40ed70
// 0040eda1  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 0040eda4  6a02                 push 2
// 0040eda6  6a00                 push 0
// 0040eda8  53                   push ebx
// 0040eda9  50                   push eax
// 0040edaa  8bcf                 mov ecx, edi
// 0040edac  e80fecffff           call 0x40d9c0
// 0040edb1  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0040edb4  50                   push eax
// 0040edb5  68dc0c9a00           push 0x9a0cdc
// 0040edba  68c40c9a00           push 0x9a0cc4
// 0040edbf  57                   push edi
// 0040edc0  e89b67ffff           call 0x405560
// 0040edc5  8bf0                 mov esi, eax
// 0040edc7  85f6                 test esi, esi
// 0040edc9  7d0b                 jge 0x40edd6
// 0040edcb  8b17                 mov edx, dword ptr [edi]
// 0040edcd  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0040edd0  6a01                 push 1
// 0040edd2  8bcf                 mov ecx, edi
// 0040edd4  ffd0                 call eax
// 0040edd6  8bc6                 mov eax, esi
// 0040edd8  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040eddb  64890d00000000       mov dword ptr fs:[0], ecx
// 0040ede2  5f                   pop edi
// 0040ede3  5e                   pop esi
// 0040ede4  5b                   pop ebx
// 0040ede5  8be5                 mov esp, ebp
// 0040ede7  5d                   pop ebp
// 0040ede8  c20800               ret 8
// 0040edeb  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0040edee  e8494d3e00           call 0x7f3b3c
// 0040edf3  b81cee4000           mov eax, 0x40ee1c
// 0040edf8  c3                   ret 
// 0040edf9  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 0040edfc  e83b4d3e00           call 0x7f3b3c
// 0040ee01  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040ee08  b80eee4000           mov eax, 0x40ee0e
// 0040ee0d  c3                   ret 
// 0040ee0e  8b5dec               mov ebx, dword ptr [ebp - 0x14]
// 0040ee11  8b03                 mov eax, dword ptr [ebx]
// 0040ee13  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0040ee16  6a01                 push 1
// 0040ee18  8bcb                 mov ecx, ebx
// 0040ee1a  ffd2                 call edx
// 0040ee1c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040ee1f  5f                   pop edi
// 0040ee20  5e                   pop esi
// 0040ee21  b80e000780           mov eax, 0x8007000e
// 0040ee26  64890d00000000       mov dword ptr fs:[0], ecx
// 0040ee2d  5b                   pop ebx
// 0040ee2e  8be5                 mov esp, ebp
// 0040ee30  5d                   pop ebp
// 0040ee31  c20800               ret 8
// copied from an identical function in another client (function ?EnumConnections@?$IConnectionPointImpl@VRocCpObj@@$1?IID_IDispatch@@3U_GUID@@BVCComDynamicUnkArray@ATL@@@ATL@@UAGJPAPAUIEnumConnections@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_b32a63565f36d548.cpp