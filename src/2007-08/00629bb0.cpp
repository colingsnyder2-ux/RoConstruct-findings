// roc 2007-08 00629bb0  unit: RBX::AssemblyStage  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00629bb0
//
// 00629bb0  8b442408             mov eax, dword ptr [esp + 8]
// 00629bb4  83e806               sub eax, 6
// 00629bb7  744b                 je 0x629c04
// 00629bb9  83e807               sub eax, 7
// 00629bbc  7433                 je 0x629bf1
// 00629bbe  83e801               sub eax, 1
// 00629bc1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00629bc5  7421                 je 0x629be8
// 00629bc7  833805               cmp dword ptr [eax], 5
// 00629bca  750d                 jne 0x629bd9
// 00629bcc  83c9ff               or ecx, 0xffffffff
// 00629bcf  394810               cmp dword ptr [eax + 0x10], ecx
// 00629bd2  7505                 jne 0x629bd9
// 00629bd4  394814               cmp dword ptr [eax + 0x14], ecx
// 00629bd7  743d                 je 0x629c16
// 00629bd9  50                   push eax
// 00629bda  8b442408             mov eax, dword ptr [esp + 8]
// 00629bde  50                   push eax
// 00629bdf  e89cf8ffff           call 0x629480
// 00629be4  83c408               add esp, 8
// 00629be7  c3                   ret 
// 00629be8  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00629bec  e95ffcffff           jmp 0x629850
// 00629bf1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00629bf5  8b542404             mov edx, dword ptr [esp + 4]
// 00629bf9  51                   push ecx
// 00629bfa  52                   push edx
// 00629bfb  e8b0fbffff           call 0x6297b0
// 00629c00  83c408               add esp, 8
// 00629c03  c3                   ret 
// 00629c04  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00629c08  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00629c0c  50                   push eax
// 00629c0d  51                   push ecx
// 00629c0e  e87df7ffff           call 0x629390
// 00629c13  83c408               add esp, 8
// 00629c16  c3                   ret 
// library lua-5.1.1/lcode.c (function _luaK_infix)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.1 lcode.c
