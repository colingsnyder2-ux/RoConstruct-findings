// from server: 100% by auto
// roc 2009-06 006b8e80  unit: RBX::UniversalTool  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b8e80
//
// 006b8e80  56                   push esi
// 006b8e81  8b742408             mov esi, dword ptr [esp + 8]
// 006b8e85  57                   push edi
// 006b8e86  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006b8e8a  81ffefd8ffff         cmp edi, 0xffffd8ef
// 006b8e90  7516                 jne 0x6b8ea8
// 006b8e92  8b4614               mov eax, dword ptr [esi + 0x14]
// 006b8e95  3b4628               cmp eax, dword ptr [esi + 0x28]
// 006b8e98  750e                 jne 0x6b8ea8
// 006b8e9a  6898ae8e00           push 0x8eae98
// 006b8e9f  56                   push esi
// 006b8ea0  e89bf90000           call 0x6c8840
// 006b8ea5  83c408               add esp, 8
// 006b8ea8  8bc7                 mov eax, edi
// 006b8eaa  8bce                 mov ecx, esi
// 006b8eac  e81ffdffff           call 0x6b8bd0
// 006b8eb1  81ffefd8ffff         cmp edi, 0xffffd8ef
// 006b8eb7  7529                 jne 0x6b8ee2
// 006b8eb9  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006b8ebc  8b5104               mov edx, dword ptr [ecx + 4]
// 006b8ebf  8b4e08               mov ecx, dword ptr [esi + 8]
// 006b8ec2  8b02                 mov eax, dword ptr [edx]
// 006b8ec4  8b51f0               mov edx, dword ptr [ecx - 0x10]
// 006b8ec7  89500c               mov dword ptr [eax + 0xc], edx
// 006b8eca  8b4e08               mov ecx, dword ptr [esi + 8]
// 006b8ecd  ba04000000           mov edx, 4
// 006b8ed2  3951f8               cmp dword ptr [ecx - 8], edx
// 006b8ed5  7c58                 jl 0x6b8f2f
// 006b8ed7  8b49f0               mov ecx, dword ptr [ecx - 0x10]
// 006b8eda  f6410503             test byte ptr [ecx + 5], 3
// 006b8ede  744f                 je 0x6b8f2f
// 006b8ee0  eb3d                 jmp 0x6b8f1f
// 006b8ee2  8b4e08               mov ecx, dword ptr [esi + 8]
// 006b8ee5  8b51f0               mov edx, dword ptr [ecx - 0x10]
// 006b8ee8  83e910               sub ecx, 0x10
// 006b8eeb  81ffeed8ffff         cmp edi, 0xffffd8ee
// 006b8ef1  8910                 mov dword ptr [eax], edx
// 006b8ef3  8b5104               mov edx, dword ptr [ecx + 4]
// 006b8ef6  895004               mov dword ptr [eax + 4], edx
// 006b8ef9  8b4908               mov ecx, dword ptr [ecx + 8]
// 006b8efc  894808               mov dword ptr [eax + 8], ecx
// 006b8eff  7d2e                 jge 0x6b8f2f
// 006b8f01  8b4608               mov eax, dword ptr [esi + 8]
// 006b8f04  ba04000000           mov edx, 4
// 006b8f09  3950f8               cmp dword ptr [eax - 8], edx
// 006b8f0c  7c21                 jl 0x6b8f2f
// 006b8f0e  8b48f0               mov ecx, dword ptr [eax - 0x10]
// 006b8f11  f6410503             test byte ptr [ecx + 5], 3
// 006b8f15  7418                 je 0x6b8f2f
// 006b8f17  8b4614               mov eax, dword ptr [esi + 0x14]
// 006b8f1a  8b4004               mov eax, dword ptr [eax + 4]
// 006b8f1d  8b00                 mov eax, dword ptr [eax]
// 006b8f1f  845005               test byte ptr [eax + 5], dl
// 006b8f22  740b                 je 0x6b8f2f
// 006b8f24  51                   push ecx
// 006b8f25  50                   push eax
// 006b8f26  56                   push esi
// 006b8f27  e8840d0300           call 0x6e9cb0
// 006b8f2c  83c40c               add esp, 0xc
// 006b8f2f  834608f0             add dword ptr [esi + 8], -0x10
// 006b8f33  5f                   pop edi
// 006b8f34  5e                   pop esi
// 006b8f35  c3                   ret 
// library lua-5.1.4/lapi.c (function _lua_replace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
