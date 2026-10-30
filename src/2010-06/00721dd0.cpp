// roc 2010-06 00721dd0  unit: RBX::UniversalTool  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00721dd0
//
// 00721dd0  8b442408             mov eax, dword ptr [esp + 8]
// 00721dd4  53                   push ebx
// 00721dd5  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00721dd9  56                   push esi
// 00721dda  8b7310               mov esi, dword ptr [ebx + 0x10]
// 00721ddd  57                   push edi
// 00721dde  33ff                 xor edi, edi
// 00721de0  83f807               cmp eax, 7
// 00721de3  0f87b1000000         ja 0x721e9a
// 00721de9  ff2485a41e7200       jmp dword ptr [eax*4 + 0x721ea4]
// 00721df0  8bc7                 mov eax, edi
// 00721df2  5f                   pop edi
// 00721df3  c74640fdffffff       mov dword ptr [esi + 0x40], 0xfffffffd
// 00721dfa  5e                   pop esi
// 00721dfb  5b                   pop ebx
// 00721dfc  c3                   ret 
// 00721dfd  8b4644               mov eax, dword ptr [esi + 0x44]
// 00721e00  894640               mov dword ptr [esi + 0x40], eax
// 00721e03  8bc7                 mov eax, edi
// 00721e05  5f                   pop edi
// 00721e06  5e                   pop esi
// 00721e07  5b                   pop ebx
// 00721e08  c3                   ret 
// 00721e09  53                   push ebx
// 00721e0a  e8d1900500           call 0x77aee0
// 00721e0f  83c404               add esp, 4
// 00721e12  8bc7                 mov eax, edi
// 00721e14  5f                   pop edi
// 00721e15  5e                   pop esi
// 00721e16  5b                   pop ebx
// 00721e17  c3                   ret 
// 00721e18  8b7e44               mov edi, dword ptr [esi + 0x44]
// 00721e1b  c1ef0a               shr edi, 0xa
// 00721e1e  8bc7                 mov eax, edi
// 00721e20  5f                   pop edi
// 00721e21  5e                   pop esi
// 00721e22  5b                   pop ebx
// 00721e23  c3                   ret 
// 00721e24  8b7e44               mov edi, dword ptr [esi + 0x44]
// 00721e27  81e7ff030000         and edi, 0x3ff
// 00721e2d  8bc7                 mov eax, edi
// 00721e2f  5f                   pop edi
// 00721e30  5e                   pop esi
// 00721e31  5b                   pop ebx
// 00721e32  c3                   ret 
// 00721e33  8b442418             mov eax, dword ptr [esp + 0x18]
// 00721e37  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 00721e3a  c1e00a               shl eax, 0xa
// 00721e3d  3bc1                 cmp eax, ecx
// 00721e3f  7709                 ja 0x721e4a
// 00721e41  8bd1                 mov edx, ecx
// 00721e43  2bd0                 sub edx, eax
// 00721e45  895640               mov dword ptr [esi + 0x40], edx
// 00721e48  eb03                 jmp 0x721e4d
// 00721e4a  897e40               mov dword ptr [esi + 0x40], edi
// 00721e4d  394e40               cmp dword ptr [esi + 0x40], ecx
// 00721e50  774b                 ja 0x721e9d
// 00721e52  53                   push ebx
// 00721e53  e808900500           call 0x77ae60
// 00721e58  83c404               add esp, 4
// 00721e5b  807e1500             cmp byte ptr [esi + 0x15], 0
// 00721e5f  740e                 je 0x721e6f
// 00721e61  8b4640               mov eax, dword ptr [esi + 0x40]
// 00721e64  3b4644               cmp eax, dword ptr [esi + 0x44]
// 00721e67  76e9                 jbe 0x721e52
// 00721e69  8bc7                 mov eax, edi
// 00721e6b  5f                   pop edi
// 00721e6c  5e                   pop esi
// 00721e6d  5b                   pop ebx
// 00721e6e  c3                   ret 
// 00721e6f  bf01000000           mov edi, 1
// 00721e74  8bc7                 mov eax, edi
// 00721e76  5f                   pop edi
// 00721e77  5e                   pop esi
// 00721e78  5b                   pop ebx
// 00721e79  c3                   ret 
// 00721e7a  8b7e50               mov edi, dword ptr [esi + 0x50]
// 00721e7d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00721e81  8bc7                 mov eax, edi
// 00721e83  5f                   pop edi
// 00721e84  894e50               mov dword ptr [esi + 0x50], ecx
// 00721e87  5e                   pop esi
// 00721e88  5b                   pop ebx
// 00721e89  c3                   ret 
// 00721e8a  8b7e54               mov edi, dword ptr [esi + 0x54]
// 00721e8d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00721e91  8bc7                 mov eax, edi
// 00721e93  5f                   pop edi
// 00721e94  895654               mov dword ptr [esi + 0x54], edx
// 00721e97  5e                   pop esi
// 00721e98  5b                   pop ebx
// 00721e99  c3                   ret 
// 00721e9a  83cfff               or edi, 0xffffffff
// 00721e9d  8bc7                 mov eax, edi
// 00721e9f  5f                   pop edi
// 00721ea0  5e                   pop esi
// 00721ea1  5b                   pop ebx
// 00721ea2  c3                   ret 
// 00721ea3  90                   nop 
// library lua-5.1.4/lapi.c (function _lua_gc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
