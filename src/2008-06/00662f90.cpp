// from server: 100% by auto
// roc 2008-06 00662f90  unit: RBX::FilterStairs  size: 274 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00662f90
//
// 00662f90  83ec18               sub esp, 0x18
// 00662f93  53                   push ebx
// 00662f94  56                   push esi
// 00662f95  57                   push edi
// 00662f96  8bf0                 mov esi, eax
// 00662f98  33db                 xor ebx, ebx
// 00662f9a  55                   push ebp
// 00662f9b  eb03                 jmp 0x662fa0
// 00662f9d  8d4900               lea ecx, [ecx]
// 00662fa0  817e101d010000       cmp dword ptr [esi + 0x10], 0x11d
// 00662fa7  7424                 je 0x662fcd
// 00662fa9  681d010000           push 0x11d
// 00662fae  56                   push esi
// 00662faf  e85c110000           call 0x664110
// 00662fb4  50                   push eax
// 00662fb5  8b4634               mov eax, dword ptr [esi + 0x34]
// 00662fb8  68c0c48400           push 0x84c4c0
// 00662fbd  50                   push eax
// 00662fbe  e8fdfafbff           call 0x622ac0
// 00662fc3  50                   push eax
// 00662fc4  56                   push esi
// 00662fc5  e846120000           call 0x664210
// 00662fca  83c41c               add esp, 0x1c
// 00662fcd  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 00662fd0  56                   push esi
// 00662fd1  e82a260000           call 0x665600
// 00662fd6  8b7e30               mov edi, dword ptr [esi + 0x30]
// 00662fd9  0fb64f32             movzx ecx, byte ptr [edi + 0x32]
// 00662fdd  8d541901             lea edx, [ecx + ebx + 1]
// 00662fe1  83c404               add esp, 4
// 00662fe4  81fac8000000         cmp edx, 0xc8
// 00662fea  7e47                 jle 0x663033
// 00662fec  8b07                 mov eax, dword ptr [edi]
// 00662fee  8b403c               mov eax, dword ptr [eax + 0x3c]
// 00662ff1  6864c58400           push 0x84c564
// 00662ff6  68c8000000           push 0xc8
// 00662ffb  85c0                 test eax, eax
// 00662ffd  7513                 jne 0x663012
// 00662fff  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00663002  68f8c48400           push 0x84c4f8
// 00663007  51                   push ecx
// 00663008  e8b3fafbff           call 0x622ac0
// 0066300d  83c410               add esp, 0x10
// 00663010  eb12                 jmp 0x663024
// 00663012  8b5710               mov edx, dword ptr [edi + 0x10]
// 00663015  50                   push eax
// 00663016  68d0c48400           push 0x84c4d0
// 0066301b  52                   push edx
// 0066301c  e89ffafbff           call 0x622ac0
// 00663021  83c414               add esp, 0x14
// 00663024  6a00                 push 0
// 00663026  50                   push eax
// 00663027  8b470c               mov eax, dword ptr [edi + 0xc]
// 0066302a  50                   push eax
// 0066302b  e840110000           call 0x664170
// 00663030  83c40c               add esp, 0xc
// 00663033  55                   push ebp
// 00663034  56                   push esi
// 00663035  e8d6d8ffff           call 0x660910
// 0066303a  0fb64f32             movzx ecx, byte ptr [edi + 0x32]
// 0066303e  03cb                 add ecx, ebx
// 00663040  83c408               add esp, 8
// 00663043  6689844fac000000     mov word ptr [edi + ecx*2 + 0xac], ax
// 0066304b  43                   inc ebx
// 0066304c  837e102c             cmp dword ptr [esi + 0x10], 0x2c
// 00663050  750e                 jne 0x663060
// 00663052  56                   push esi
// 00663053  e8a8250000           call 0x665600
// 00663058  83c404               add esp, 4
// 0066305b  e940ffffff           jmp 0x662fa0
// 00663060  837e103d             cmp dword ptr [esi + 0x10], 0x3d
// 00663064  5d                   pop ebp
// 00663065  7514                 jne 0x66307b
// 00663067  56                   push esi
// 00663068  e893250000           call 0x665600
// 0066306d  83c404               add esp, 4
// 00663070  8d7c240c             lea edi, [esp + 0xc]
// 00663074  e807e7ffff           call 0x661780
// 00663079  eb06                 jmp 0x663081
// 0066307b  33c0                 xor eax, eax
// 0066307d  8944240c             mov dword ptr [esp + 0xc], eax
// 00663081  50                   push eax
// 00663082  8d4c2410             lea ecx, [esp + 0x10]
// 00663086  8bd3                 mov edx, ebx
// 00663088  8bc6                 mov eax, esi
// 0066308a  e821dcffff           call 0x660cb0
// 0066308f  83c404               add esp, 4
// 00663092  8bd3                 mov edx, ebx
// 00663094  8bc6                 mov eax, esi
// 00663096  e815d9ffff           call 0x6609b0
// 0066309b  5f                   pop edi
// 0066309c  5e                   pop esi
// 0066309d  5b                   pop ebx
// 0066309e  83c418               add esp, 0x18
// 006630a1  c3                   ret 
// library lua-5.1.4/lparser.c (function _localstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
