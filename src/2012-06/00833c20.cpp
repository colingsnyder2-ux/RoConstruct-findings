// roc 2012-06 00833c20  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00833c20
//
// 00833c20  53                   push ebx
// 00833c21  55                   push ebp
// 00833c22  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00833c26  56                   push esi
// 00833c27  8b742418             mov esi, dword ptr [esp + 0x18]
// 00833c2b  57                   push edi
// 00833c2c  85f6                 test esi, esi
// 00833c2e  741b                 je 0x833c4b
// 00833c30  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00833c34  57                   push edi
// 00833c35  55                   push ebp
// 00833c36  e8a5e0ffff           call 0x831ce0
// 00833c3b  83c408               add esp, 8
// 00833c3e  85c0                 test eax, eax
// 00833c40  7f04                 jg 0x833c46
// 00833c42  8bc6                 mov eax, esi
// 00833c44  eb15                 jmp 0x833c5b
// 00833c46  6a00                 push 0
// 00833c48  57                   push edi
// 00833c49  eb07                 jmp 0x833c52
// 00833c4b  8b442418             mov eax, dword ptr [esp + 0x18]
// 00833c4f  6a00                 push 0
// 00833c51  50                   push eax
// 00833c52  55                   push ebp
// 00833c53  e8c8fcffff           call 0x833920
// 00833c58  83c40c               add esp, 0xc
// 00833c5b  8b742420             mov esi, dword ptr [esp + 0x20]
// 00833c5f  8b0e                 mov ecx, dword ptr [esi]
// 00833c61  33ff                 xor edi, edi
// 00833c63  85c9                 test ecx, ecx
// 00833c65  743b                 je 0x833ca2
// 00833c67  8bd0                 mov edx, eax
// 00833c69  8da42400000000       lea esp, [esp]
// 00833c70  8a19                 mov bl, byte ptr [ecx]
// 00833c72  3a1a                 cmp bl, byte ptr [edx]
// 00833c74  751a                 jne 0x833c90
// 00833c76  84db                 test bl, bl
// 00833c78  7412                 je 0x833c8c
// 00833c7a  8a5901               mov bl, byte ptr [ecx + 1]
// 00833c7d  3a5a01               cmp bl, byte ptr [edx + 1]
// 00833c80  750e                 jne 0x833c90
// 00833c82  83c102               add ecx, 2
// 00833c85  83c202               add edx, 2
// 00833c88  84db                 test bl, bl
// 00833c8a  75e4                 jne 0x833c70
// 00833c8c  33c9                 xor ecx, ecx
// 00833c8e  eb05                 jmp 0x833c95
// 00833c90  1bc9                 sbb ecx, ecx
// 00833c92  83d9ff               sbb ecx, -1
// 00833c95  85c9                 test ecx, ecx
// 00833c97  7429                 je 0x833cc2
// 00833c99  8b4cbe04             mov ecx, dword ptr [esi + edi*4 + 4]
// 00833c9d  47                   inc edi
// 00833c9e  85c9                 test ecx, ecx
// 00833ca0  75c5                 jne 0x833c67
// 00833ca2  50                   push eax
// 00833ca3  68200bbd00           push 0xbd0b20
// 00833ca8  55                   push ebp
// 00833ca9  e822e5ffff           call 0x8321d0
// 00833cae  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00833cb2  50                   push eax
// 00833cb3  51                   push ecx
// 00833cb4  55                   push ebp
// 00833cb5  e876faffff           call 0x833730
// 00833cba  83c418               add esp, 0x18
// 00833cbd  5f                   pop edi
// 00833cbe  5e                   pop esi
// 00833cbf  5d                   pop ebp
// 00833cc0  5b                   pop ebx
// 00833cc1  c3                   ret 
// 00833cc2  8bc7                 mov eax, edi
// 00833cc4  5f                   pop edi
// 00833cc5  5e                   pop esi
// 00833cc6  5d                   pop ebp
// 00833cc7  5b                   pop ebx
// 00833cc8  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkoption)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
