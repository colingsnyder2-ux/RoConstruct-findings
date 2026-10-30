// from server: 100% by auto
// roc 2012-06 00831bf0  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00831bf0
//
// 00831bf0  56                   push esi
// 00831bf1  8b742408             mov esi, dword ptr [esp + 8]
// 00831bf5  57                   push edi
// 00831bf6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00831bfa  81ffefd8ffff         cmp edi, 0xffffd8ef
// 00831c00  7516                 jne 0x831c18
// 00831c02  8b4614               mov eax, dword ptr [esi + 0x14]
// 00831c05  3b4628               cmp eax, dword ptr [esi + 0x28]
// 00831c08  750e                 jne 0x831c18
// 00831c0a  68dc09bd00           push 0xbd09dc
// 00831c0f  56                   push esi
// 00831c10  e8fbf20100           call 0x850f10
// 00831c15  83c408               add esp, 8
// 00831c18  8bc7                 mov eax, edi
// 00831c1a  8bce                 mov ecx, esi
// 00831c1c  e81ffdffff           call 0x831940
// 00831c21  81ffefd8ffff         cmp edi, 0xffffd8ef
// 00831c27  7529                 jne 0x831c52
// 00831c29  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00831c2c  8b5104               mov edx, dword ptr [ecx + 4]
// 00831c2f  8b4e08               mov ecx, dword ptr [esi + 8]
// 00831c32  8b02                 mov eax, dword ptr [edx]
// 00831c34  8b51f0               mov edx, dword ptr [ecx - 0x10]
// 00831c37  89500c               mov dword ptr [eax + 0xc], edx
// 00831c3a  8b4e08               mov ecx, dword ptr [esi + 8]
// 00831c3d  ba04000000           mov edx, 4
// 00831c42  3951f8               cmp dword ptr [ecx - 8], edx
// 00831c45  7c58                 jl 0x831c9f
// 00831c47  8b49f0               mov ecx, dword ptr [ecx - 0x10]
// 00831c4a  f6410503             test byte ptr [ecx + 5], 3
// 00831c4e  744f                 je 0x831c9f
// 00831c50  eb3d                 jmp 0x831c8f
// 00831c52  8b4e08               mov ecx, dword ptr [esi + 8]
// 00831c55  8b51f0               mov edx, dword ptr [ecx - 0x10]
// 00831c58  83e910               sub ecx, 0x10
// 00831c5b  81ffeed8ffff         cmp edi, 0xffffd8ee
// 00831c61  8910                 mov dword ptr [eax], edx
// 00831c63  8b5104               mov edx, dword ptr [ecx + 4]
// 00831c66  895004               mov dword ptr [eax + 4], edx
// 00831c69  8b4908               mov ecx, dword ptr [ecx + 8]
// 00831c6c  894808               mov dword ptr [eax + 8], ecx
// 00831c6f  7d2e                 jge 0x831c9f
// 00831c71  8b4608               mov eax, dword ptr [esi + 8]
// 00831c74  ba04000000           mov edx, 4
// 00831c79  3950f8               cmp dword ptr [eax - 8], edx
// 00831c7c  7c21                 jl 0x831c9f
// 00831c7e  8b48f0               mov ecx, dword ptr [eax - 0x10]
// 00831c81  f6410503             test byte ptr [ecx + 5], 3
// 00831c85  7418                 je 0x831c9f
// 00831c87  8b4614               mov eax, dword ptr [esi + 0x14]
// 00831c8a  8b4004               mov eax, dword ptr [eax + 4]
// 00831c8d  8b00                 mov eax, dword ptr [eax]
// 00831c8f  845005               test byte ptr [eax + 5], dl
// 00831c92  740b                 je 0x831c9f
// 00831c94  51                   push ecx
// 00831c95  50                   push eax
// 00831c96  56                   push esi
// 00831c97  e804171000           call 0x9333a0
// 00831c9c  83c40c               add esp, 0xc
// 00831c9f  834608f0             add dword ptr [esi + 8], -0x10
// 00831ca3  5f                   pop edi
// 00831ca4  5e                   pop esi
// 00831ca5  c3                   ret 
// library lua-5.1.4/lapi.c (function _lua_replace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
