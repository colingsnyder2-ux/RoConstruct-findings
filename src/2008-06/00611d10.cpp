// roc 2008-06 00611d10  unit: seg_00610000  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00611d10
//
// 00611d10  56                   push esi
// 00611d11  8b742408             mov esi, dword ptr [esp + 8]
// 00611d15  57                   push edi
// 00611d16  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00611d1a  81ffefd8ffff         cmp edi, 0xffffd8ef
// 00611d20  7516                 jne 0x611d38
// 00611d22  8b4614               mov eax, dword ptr [esi + 0x14]
// 00611d25  3b4628               cmp eax, dword ptr [esi + 0x28]
// 00611d28  750e                 jne 0x611d38
// 00611d2a  6880388400           push 0x843880
// 00611d2f  56                   push esi
// 00611d30  e89b1a0100           call 0x6237d0
// 00611d35  83c408               add esp, 8
// 00611d38  8bc7                 mov eax, edi
// 00611d3a  8bce                 mov ecx, esi
// 00611d3c  e84ffdffff           call 0x611a90
// 00611d41  81ffefd8ffff         cmp edi, 0xffffd8ef
// 00611d47  7529                 jne 0x611d72
// 00611d49  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00611d4c  8b5104               mov edx, dword ptr [ecx + 4]
// 00611d4f  8b4e08               mov ecx, dword ptr [esi + 8]
// 00611d52  8b02                 mov eax, dword ptr [edx]
// 00611d54  8b51f0               mov edx, dword ptr [ecx - 0x10]
// 00611d57  89500c               mov dword ptr [eax + 0xc], edx
// 00611d5a  8b4e08               mov ecx, dword ptr [esi + 8]
// 00611d5d  ba04000000           mov edx, 4
// 00611d62  3951f8               cmp dword ptr [ecx - 8], edx
// 00611d65  7c58                 jl 0x611dbf
// 00611d67  8b49f0               mov ecx, dword ptr [ecx - 0x10]
// 00611d6a  f6410503             test byte ptr [ecx + 5], 3
// 00611d6e  744f                 je 0x611dbf
// 00611d70  eb3d                 jmp 0x611daf
// 00611d72  8b4e08               mov ecx, dword ptr [esi + 8]
// 00611d75  8b51f0               mov edx, dword ptr [ecx - 0x10]
// 00611d78  83e910               sub ecx, 0x10
// 00611d7b  81ffeed8ffff         cmp edi, 0xffffd8ee
// 00611d81  8910                 mov dword ptr [eax], edx
// 00611d83  8b5104               mov edx, dword ptr [ecx + 4]
// 00611d86  895004               mov dword ptr [eax + 4], edx
// 00611d89  8b4908               mov ecx, dword ptr [ecx + 8]
// 00611d8c  894808               mov dword ptr [eax + 8], ecx
// 00611d8f  7d2e                 jge 0x611dbf
// 00611d91  8b4608               mov eax, dword ptr [esi + 8]
// 00611d94  ba04000000           mov edx, 4
// 00611d99  3950f8               cmp dword ptr [eax - 8], edx
// 00611d9c  7c21                 jl 0x611dbf
// 00611d9e  8b48f0               mov ecx, dword ptr [eax - 0x10]
// 00611da1  f6410503             test byte ptr [ecx + 5], 3
// 00611da5  7418                 je 0x611dbf
// 00611da7  8b4614               mov eax, dword ptr [esi + 0x14]
// 00611daa  8b4004               mov eax, dword ptr [eax + 4]
// 00611dad  8b00                 mov eax, dword ptr [eax]
// 00611daf  845005               test byte ptr [eax + 5], dl
// 00611db2  740b                 je 0x611dbf
// 00611db4  51                   push ecx
// 00611db5  50                   push eax
// 00611db6  56                   push esi
// 00611db7  e8c4a60400           call 0x65c480
// 00611dbc  83c40c               add esp, 0xc
// 00611dbf  834608f0             add dword ptr [esi + 8], -0x10
// 00611dc3  5f                   pop edi
// 00611dc4  5e                   pop esi
// 00611dc5  c3                   ret 
// library lua-5.1.4/lapi.c (function _lua_replace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
