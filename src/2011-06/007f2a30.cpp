// roc 2011-06 007f2a30  unit: RBX::AdvLuaDragTool  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f2a30
//
// 007f2a30  57                   push edi
// 007f2a31  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007f2a35  8b07                 mov eax, dword ptr [edi]
// 007f2a37  83c0fa               add eax, -6
// 007f2a3a  83f808               cmp eax, 8
// 007f2a3d  0f87c6000000         ja 0x7f2b09
// 007f2a43  56                   push esi
// 007f2a44  ff24850c2b7f00       jmp dword ptr [eax*4 + 0x7f2b0c]
// 007f2a4b  5e                   pop esi
// 007f2a4c  c7070c000000         mov dword ptr [edi], 0xc
// 007f2a52  5f                   pop edi
// 007f2a53  c3                   ret 
// 007f2a54  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007f2a58  8b4708               mov eax, dword ptr [edi + 8]
// 007f2a5b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007f2a5e  8b5108               mov edx, dword ptr [ecx + 8]
// 007f2a61  c1e017               shl eax, 0x17
// 007f2a64  52                   push edx
// 007f2a65  83c804               or eax, 4
// 007f2a68  50                   push eax
// 007f2a69  e8a2fcffff           call 0x7f2710
// 007f2a6e  83c408               add esp, 8
// 007f2a71  5e                   pop esi
// 007f2a72  894708               mov dword ptr [edi + 8], eax
// 007f2a75  c7070b000000         mov dword ptr [edi], 0xb
// 007f2a7b  5f                   pop edi
// 007f2a7c  c3                   ret 
// 007f2a7d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007f2a81  8b4708               mov eax, dword ptr [edi + 8]
// 007f2a84  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007f2a87  8b5108               mov edx, dword ptr [ecx + 8]
// 007f2a8a  c1e00e               shl eax, 0xe
// 007f2a8d  52                   push edx
// 007f2a8e  83c805               or eax, 5
// 007f2a91  50                   push eax
// 007f2a92  e879fcffff           call 0x7f2710
// 007f2a97  83c408               add esp, 8
// 007f2a9a  5e                   pop esi
// 007f2a9b  894708               mov dword ptr [edi + 8], eax
// 007f2a9e  c7070b000000         mov dword ptr [edi], 0xb
// 007f2aa4  5f                   pop edi
// 007f2aa5  c3                   ret 
// 007f2aa6  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 007f2aa9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f2aad  83caff               or edx, 0xffffffff
// 007f2ab0  f7c100010000         test ecx, 0x100
// 007f2ab6  750b                 jne 0x7f2ac3
// 007f2ab8  0fb67032             movzx esi, byte ptr [eax + 0x32]
// 007f2abc  3bce                 cmp ecx, esi
// 007f2abe  7c03                 jl 0x7f2ac3
// 007f2ac0  015024               add dword ptr [eax + 0x24], edx
// 007f2ac3  8b4f08               mov ecx, dword ptr [edi + 8]
// 007f2ac6  f7c100010000         test ecx, 0x100
// 007f2acc  750b                 jne 0x7f2ad9
// 007f2ace  0fb67032             movzx esi, byte ptr [eax + 0x32]
// 007f2ad2  3bce                 cmp ecx, esi
// 007f2ad4  7c03                 jl 0x7f2ad9
// 007f2ad6  015024               add dword ptr [eax + 0x24], edx
// 007f2ad9  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 007f2adc  8b5708               mov edx, dword ptr [edi + 8]
// 007f2adf  51                   push ecx
// 007f2ae0  52                   push edx
// 007f2ae1  6a00                 push 0
// 007f2ae3  6a06                 push 6
// 007f2ae5  50                   push eax
// 007f2ae6  e8c5fcffff           call 0x7f27b0
// 007f2aeb  83c414               add esp, 0x14
// 007f2aee  5e                   pop esi
// 007f2aef  894708               mov dword ptr [edi + 8], eax
// 007f2af2  c7070b000000         mov dword ptr [edi], 0xb
// 007f2af8  5f                   pop edi
// 007f2af9  c3                   ret 
// 007f2afa  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f2afe  57                   push edi
// 007f2aff  50                   push eax
// 007f2b00  e83bfaffff           call 0x7f2540
// 007f2b05  83c408               add esp, 8
// 007f2b08  5e                   pop esi
// 007f2b09  5f                   pop edi
// 007f2b0a  c3                   ret 
// 007f2b0b  90                   nop 
// 007f2b0c  4b                   dec ebx
// 007f2b0d  2a7f00               sub bh, byte ptr [edi]
// 007f2b10  54                   push esp
// 007f2b11  2a7f00               sub bh, byte ptr [edi]
// 007f2b14  7d2a                 jge 0x7f2b40
// 007f2b16  7f00                 jg 0x7f2b18
// 007f2b18  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 007f2b19  2a7f00               sub bh, byte ptr [edi]
// 007f2b1c  082b                 or byte ptr [ebx], ch
// 007f2b1e  7f00                 jg 0x7f2b20
// 007f2b20  082b                 or byte ptr [ebx], ch
// 007f2b22  7f00                 jg 0x7f2b24
// 007f2b24  082b                 or byte ptr [ebx], ch
// 007f2b26  7f00                 jg 0x7f2b28
// 007f2b28  fa                   cli 
// 007f2b29  2a7f00               sub bh, byte ptr [edi]
// 007f2b2c  fa                   cli 
// 007f2b2d  2a7f00               sub bh, byte ptr [edi]
// library lua-5.1.4/lcode.c (function _luaK_dischargevars)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
