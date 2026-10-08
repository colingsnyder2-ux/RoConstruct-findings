// from server: 100% by auto
// roc 2008-06 00660d70  unit: RBX::FilterStairs  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00660d70
//
// 00660d70  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00660d74  53                   push ebx
// 00660d75  55                   push ebp
// 00660d76  56                   push esi
// 00660d77  8b7130               mov esi, dword ptr [ecx + 0x30]
// 00660d7a  8b1e                 mov ebx, dword ptr [esi]
// 00660d7c  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00660d7f  8d6b34               lea ebp, [ebx + 0x34]
// 00660d82  57                   push edi
// 00660d83  8b7d00               mov edi, dword ptr [ebp]
// 00660d86  40                   inc eax
// 00660d87  3bc7                 cmp eax, edi
// 00660d89  7e24                 jle 0x660daf
// 00660d8b  8b5310               mov edx, dword ptr [ebx + 0x10]
// 00660d8e  8b4134               mov eax, dword ptr [ecx + 0x34]
// 00660d91  68a4c58400           push 0x84c5a4
// 00660d96  68ffff0300           push 0x3ffff
// 00660d9b  6a04                 push 4
// 00660d9d  55                   push ebp
// 00660d9e  52                   push edx
// 00660d9f  50                   push eax
// 00660da0  e89bf9ffff           call 0x660740
// 00660da5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00660da9  83c418               add esp, 0x18
// 00660dac  894310               mov dword ptr [ebx + 0x10], eax
// 00660daf  3b7d00               cmp edi, dword ptr [ebp]
// 00660db2  7d10                 jge 0x660dc4
// 00660db4  8b5310               mov edx, dword ptr [ebx + 0x10]
// 00660db7  c704ba00000000       mov dword ptr [edx + edi*4], 0
// 00660dbe  47                   inc edi
// 00660dbf  3b7d00               cmp edi, dword ptr [ebp]
// 00660dc2  7cf0                 jl 0x660db4
// 00660dc4  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00660dc8  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00660dcb  8b5310               mov edx, dword ptr [ebx + 0x10]
// 00660dce  8b7d00               mov edi, dword ptr [ebp]
// 00660dd1  893c82               mov dword ptr [edx + eax*4], edi
// 00660dd4  ff462c               inc dword ptr [esi + 0x2c]
// 00660dd7  8b4500               mov eax, dword ptr [ebp]
// 00660dda  f6400503             test byte ptr [eax + 5], 3
// 00660dde  7414                 je 0x660df4
// 00660de0  f6430504             test byte ptr [ebx + 5], 4
// 00660de4  740e                 je 0x660df4
// 00660de6  50                   push eax
// 00660de7  8b4134               mov eax, dword ptr [ecx + 0x34]
// 00660dea  53                   push ebx
// 00660deb  50                   push eax
// 00660dec  e88fb6ffff           call 0x65c480
// 00660df1  83c40c               add esp, 0xc
// 00660df4  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00660df7  49                   dec ecx
// 00660df8  51                   push ecx
// 00660df9  6a00                 push 0
// 00660dfb  6a24                 push 0x24
// 00660dfd  56                   push esi
// 00660dfe  e85da40000           call 0x66b260
// 00660e03  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00660e07  83caff               or edx, 0xffffffff
// 00660e0a  895110               mov dword ptr [ecx + 0x10], edx
// 00660e0d  895114               mov dword ptr [ecx + 0x14], edx
// 00660e10  c7010b000000         mov dword ptr [ecx], 0xb
// 00660e16  894108               mov dword ptr [ecx + 8], eax
// 00660e19  8b5500               mov edx, dword ptr [ebp]
// 00660e1c  33db                 xor ebx, ebx
// 00660e1e  83c410               add esp, 0x10
// 00660e21  385a48               cmp byte ptr [edx + 0x48], bl
// 00660e24  7638                 jbe 0x660e5e
// 00660e26  8d7d33               lea edi, [ebp + 0x33]
// 00660e29  8da42400000000       lea esp, [esp]
// 00660e30  0fb64701             movzx eax, byte ptr [edi + 1]
// 00660e34  33c9                 xor ecx, ecx
// 00660e36  803f06               cmp byte ptr [edi], 6
// 00660e39  6a00                 push 0
// 00660e3b  0f94c1               sete cl
// 00660e3e  50                   push eax
// 00660e3f  6a00                 push 0
// 00660e41  49                   dec ecx
// 00660e42  83e104               and ecx, 4
// 00660e45  51                   push ecx
// 00660e46  56                   push esi
// 00660e47  e8e4a30000           call 0x66b230
// 00660e4c  8b5500               mov edx, dword ptr [ebp]
// 00660e4f  0fb64248             movzx eax, byte ptr [edx + 0x48]
// 00660e53  43                   inc ebx
// 00660e54  83c414               add esp, 0x14
// 00660e57  83c702               add edi, 2
// 00660e5a  3bd8                 cmp ebx, eax
// 00660e5c  7cd2                 jl 0x660e30
// 00660e5e  5f                   pop edi
// 00660e5f  5e                   pop esi
// 00660e60  5d                   pop ebp
// 00660e61  5b                   pop ebx
// 00660e62  c3                   ret 
// library lua-5.1.4/lparser.c (function _pushclosure)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
