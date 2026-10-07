// roc 2009-06 006f0030  unit: seg_006f0000  size: 274 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f0030
//
// 006f0030  83ec18               sub esp, 0x18
// 006f0033  53                   push ebx
// 006f0034  56                   push esi
// 006f0035  57                   push edi
// 006f0036  8bf0                 mov esi, eax
// 006f0038  33db                 xor ebx, ebx
// 006f003a  55                   push ebp
// 006f003b  eb03                 jmp 0x6f0040
// 006f003d  8d4900               lea ecx, [ecx]
// 006f0040  817e101d010000       cmp dword ptr [esi + 0x10], 0x11d
// 006f0047  7424                 je 0x6f006d
// 006f0049  681d010000           push 0x11d
// 006f004e  56                   push esi
// 006f004f  e89c110000           call 0x6f11f0
// 006f0054  50                   push eax
// 006f0055  8b4634               mov eax, dword ptr [esi + 0x34]
// 006f0058  68b8dd8e00           push 0x8eddb8
// 006f005d  50                   push eax
// 006f005e  e83d90fdff           call 0x6c90a0
// 006f0063  50                   push eax
// 006f0064  56                   push esi
// 006f0065  e886120000           call 0x6f12f0
// 006f006a  83c41c               add esp, 0x1c
// 006f006d  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 006f0070  56                   push esi
// 006f0071  e86a260000           call 0x6f26e0
// 006f0076  8b7e30               mov edi, dword ptr [esi + 0x30]
// 006f0079  0fb64f32             movzx ecx, byte ptr [edi + 0x32]
// 006f007d  8d541901             lea edx, [ecx + ebx + 1]
// 006f0081  83c404               add esp, 4
// 006f0084  81fac8000000         cmp edx, 0xc8
// 006f008a  7e47                 jle 0x6f00d3
// 006f008c  8b07                 mov eax, dword ptr [edi]
// 006f008e  8b403c               mov eax, dword ptr [eax + 0x3c]
// 006f0091  685cde8e00           push 0x8ede5c
// 006f0096  68c8000000           push 0xc8
// 006f009b  85c0                 test eax, eax
// 006f009d  7513                 jne 0x6f00b2
// 006f009f  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 006f00a2  68f0dd8e00           push 0x8eddf0
// 006f00a7  51                   push ecx
// 006f00a8  e8f38ffdff           call 0x6c90a0
// 006f00ad  83c410               add esp, 0x10
// 006f00b0  eb12                 jmp 0x6f00c4
// 006f00b2  8b5710               mov edx, dword ptr [edi + 0x10]
// 006f00b5  50                   push eax
// 006f00b6  68c8dd8e00           push 0x8eddc8
// 006f00bb  52                   push edx
// 006f00bc  e8df8ffdff           call 0x6c90a0
// 006f00c1  83c414               add esp, 0x14
// 006f00c4  6a00                 push 0
// 006f00c6  50                   push eax
// 006f00c7  8b470c               mov eax, dword ptr [edi + 0xc]
// 006f00ca  50                   push eax
// 006f00cb  e880110000           call 0x6f1250
// 006f00d0  83c40c               add esp, 0xc
// 006f00d3  55                   push ebp
// 006f00d4  56                   push esi
// 006f00d5  e8a6d8ffff           call 0x6ed980
// 006f00da  0fb64f32             movzx ecx, byte ptr [edi + 0x32]
// 006f00de  03cb                 add ecx, ebx
// 006f00e0  83c408               add esp, 8
// 006f00e3  6689844fac000000     mov word ptr [edi + ecx*2 + 0xac], ax
// 006f00eb  43                   inc ebx
// 006f00ec  837e102c             cmp dword ptr [esi + 0x10], 0x2c
// 006f00f0  750e                 jne 0x6f0100
// 006f00f2  56                   push esi
// 006f00f3  e8e8250000           call 0x6f26e0
// 006f00f8  83c404               add esp, 4
// 006f00fb  e940ffffff           jmp 0x6f0040
// 006f0100  837e103d             cmp dword ptr [esi + 0x10], 0x3d
// 006f0104  5d                   pop ebp
// 006f0105  7514                 jne 0x6f011b
// 006f0107  56                   push esi
// 006f0108  e8d3250000           call 0x6f26e0
// 006f010d  83c404               add esp, 4
// 006f0110  8d7c240c             lea edi, [esp + 0xc]
// 006f0114  e8d7e6ffff           call 0x6ee7f0
// 006f0119  eb06                 jmp 0x6f0121
// 006f011b  33c0                 xor eax, eax
// 006f011d  8944240c             mov dword ptr [esp + 0xc], eax
// 006f0121  50                   push eax
// 006f0122  8d4c2410             lea ecx, [esp + 0x10]
// 006f0126  8bd3                 mov edx, ebx
// 006f0128  8bc6                 mov eax, esi
// 006f012a  e8f1dbffff           call 0x6edd20
// 006f012f  83c404               add esp, 4
// 006f0132  8bd3                 mov edx, ebx
// 006f0134  8bc6                 mov eax, esi
// 006f0136  e8e5d8ffff           call 0x6eda20
// 006f013b  5f                   pop edi
// 006f013c  5e                   pop esi
// 006f013d  5b                   pop ebx
// 006f013e  83c418               add esp, 0x18
// 006f0141  c3                   ret 
// library lua-5.1.4/lparser.c (function _localstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
