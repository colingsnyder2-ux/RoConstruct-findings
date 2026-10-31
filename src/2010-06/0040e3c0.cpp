// roc 2010-06 0040e3c0  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040e3c0
//
// 0040e3c0  55                   push ebp
// 0040e3c1  8bec                 mov ebp, esp
// 0040e3c3  6aff                 push -1
// 0040e3c5  68c0e29700           push 0x97e2c0
// 0040e3ca  64a100000000         mov eax, dword ptr fs:[0]
// 0040e3d0  50                   push eax
// 0040e3d1  64892500000000       mov dword ptr fs:[0], esp
// 0040e3d8  83ec0c               sub esp, 0xc
// 0040e3db  837d1403             cmp dword ptr [ebp + 0x14], 3
// 0040e3df  53                   push ebx
// 0040e3e0  56                   push esi
// 0040e3e1  57                   push edi
// 0040e3e2  8bf1                 mov esi, ecx
// 0040e3e4  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040e3e7  8975ec               mov dword ptr [ebp - 0x14], esi
// 0040e3ea  0f85c3000000         jne 0x40e4b3
// 0040e3f0  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0040e3f3  8bc3                 mov eax, ebx
// 0040e3f5  2b4508               sub eax, dword ptr [ebp + 8]
// 0040e3f8  33c9                 xor ecx, ecx
// 0040e3fa  c1f802               sar eax, 2
// 0040e3fd  ba04000000           mov edx, 4
// 0040e402  f7e2                 mul edx
// 0040e404  0f90c1               seto cl
// 0040e407  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0040e40e  f7d9                 neg ecx
// 0040e410  0bc8                 or ecx, eax
// 0040e412  51                   push ecx
// 0040e413  e86a983900           call 0x7a7c82
// 0040e418  83c404               add esp, 4
// 0040e41b  894608               mov dword ptr [esi + 8], eax
// 0040e41e  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040e425  eb1b                 jmp 0x40e442
// 0040e427  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0040e42a  e84d983900           call 0x7a7c7c
// 0040e42f  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040e436  b83ce44000           mov eax, 0x40e43c
// 0040e43b  c3                   ret 
// 0040e43c  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0040e43f  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0040e442  8b4608               mov eax, dword ptr [esi + 8]
// 0040e445  894610               mov dword ptr [esi + 0x10], eax
// 0040e448  85c0                 test eax, eax
// 0040e44a  7518                 jne 0x40e464
// 0040e44c  b80e000780           mov eax, 0x8007000e
// 0040e451  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040e454  64890d00000000       mov dword ptr fs:[0], ecx
// 0040e45b  5f                   pop edi
// 0040e45c  5e                   pop esi
// 0040e45d  5b                   pop ebx
// 0040e45e  8be5                 mov esp, ebp
// 0040e460  5d                   pop ebp
// 0040e461  c21000               ret 0x10
// 0040e464  8b7d08               mov edi, dword ptr [ebp + 8]
// 0040e467  3bfb                 cmp edi, ebx
// 0040e469  742e                 je 0x40e499
// 0040e46b  eb03                 jmp 0x40e470
// 0040e46d  8d4900               lea ecx, [ecx]
// 0040e470  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0040e473  85c9                 test ecx, ecx
// 0040e475  7432                 je 0x40e4a9
// 0040e477  85ff                 test edi, edi
// 0040e479  742e                 je 0x40e4a9
// 0040e47b  8b07                 mov eax, dword ptr [edi]
// 0040e47d  8901                 mov dword ptr [ecx], eax
// 0040e47f  85c0                 test eax, eax
// 0040e481  7408                 je 0x40e48b
// 0040e483  8b08                 mov ecx, dword ptr [eax]
// 0040e485  8b5104               mov edx, dword ptr [ecx + 4]
// 0040e488  50                   push eax
// 0040e489  ffd2                 call edx
// 0040e48b  83461004             add dword ptr [esi + 0x10], 4
// 0040e48f  83c704               add edi, 4
// 0040e492  3bfb                 cmp edi, ebx
// 0040e494  75da                 jne 0x40e470
// 0040e496  8b7d08               mov edi, dword ptr [ebp + 8]
// 0040e499  8b4608               mov eax, dword ptr [esi + 8]
// 0040e49c  2bdf                 sub ebx, edi
// 0040e49e  c1fb02               sar ebx, 2
// 0040e4a1  8d0c98               lea ecx, [eax + ebx*4]
// 0040e4a4  894e0c               mov dword ptr [esi + 0xc], ecx
// 0040e4a7  eb16                 jmp 0x40e4bf
// 0040e4a9  6805400080           push 0x80004005
// 0040e4ae  e81d47ffff           call 0x402bd0
// 0040e4b3  8b5508               mov edx, dword ptr [ebp + 8]
// 0040e4b6  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0040e4b9  895608               mov dword ptr [esi + 8], edx
// 0040e4bc  89460c               mov dword ptr [esi + 0xc], eax
// 0040e4bf  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 0040e4c2  397e04               cmp dword ptr [esi + 4], edi
// 0040e4c5  741e                 je 0x40e4e5
// 0040e4c7  85ff                 test edi, edi
// 0040e4c9  7408                 je 0x40e4d3
// 0040e4cb  8b0f                 mov ecx, dword ptr [edi]
// 0040e4cd  8b5104               mov edx, dword ptr [ecx + 4]
// 0040e4d0  57                   push edi
// 0040e4d1  ffd2                 call edx
// 0040e4d3  8b4604               mov eax, dword ptr [esi + 4]
// 0040e4d6  85c0                 test eax, eax
// 0040e4d8  7408                 je 0x40e4e2
// 0040e4da  8b08                 mov ecx, dword ptr [eax]
// 0040e4dc  8b5108               mov edx, dword ptr [ecx + 8]
// 0040e4df  50                   push eax
// 0040e4e0  ffd2                 call edx
// 0040e4e2  897e04               mov dword ptr [esi + 4], edi
// 0040e4e5  8b4608               mov eax, dword ptr [esi + 8]
// 0040e4e8  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 0040e4eb  894610               mov dword ptr [esi + 0x10], eax
// 0040e4ee  894e14               mov dword ptr [esi + 0x14], ecx
// 0040e4f1  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040e4f4  5f                   pop edi
// 0040e4f5  5e                   pop esi
// 0040e4f6  33c0                 xor eax, eax
// 0040e4f8  64890d00000000       mov dword ptr fs:[0], ecx
// 0040e4ff  5b                   pop ebx
// 0040e500  8be5                 mov esp, ebp
// 0040e502  5d                   pop ebp
// 0040e503  c21000               ret 0x10
// copied from an identical function in another client (function ?Init@?$CComEnumImpl@UIEnumConnectionPoints@@$1?_GUID_b196b285_bab4_101a_b69c_00aa00341d07@@3U__s_GUID@@BPAUIConnectionPoint@@V?$_CopyInterface@UIConnectionPoint@@@ATL@@@ATL@@QAEJPAPAUIConnectionPoint@@0PAUIUnknown@@W4CComEnumFlags@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp