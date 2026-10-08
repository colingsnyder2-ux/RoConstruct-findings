// from server: 100% by auto
// roc 2010-06 0077f080  unit: seg_00770000  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077f080
//
// 0077f080  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0077f084  53                   push ebx
// 0077f085  55                   push ebp
// 0077f086  56                   push esi
// 0077f087  8b7130               mov esi, dword ptr [ecx + 0x30]
// 0077f08a  8b1e                 mov ebx, dword ptr [esi]
// 0077f08c  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0077f08f  8d6b34               lea ebp, [ebx + 0x34]
// 0077f092  57                   push edi
// 0077f093  8b7d00               mov edi, dword ptr [ebp]
// 0077f096  40                   inc eax
// 0077f097  3bc7                 cmp eax, edi
// 0077f099  7e24                 jle 0x77f0bf
// 0077f09b  8b5310               mov edx, dword ptr [ebx + 0x10]
// 0077f09e  8b4134               mov eax, dword ptr [ecx + 0x34]
// 0077f0a1  681c31a500           push 0xa5311c
// 0077f0a6  68ffff0300           push 0x3ffff
// 0077f0ab  6a04                 push 4
// 0077f0ad  55                   push ebp
// 0077f0ae  52                   push edx
// 0077f0af  50                   push eax
// 0077f0b0  e89bf9ffff           call 0x77ea50
// 0077f0b5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0077f0b9  83c418               add esp, 0x18
// 0077f0bc  894310               mov dword ptr [ebx + 0x10], eax
// 0077f0bf  3b7d00               cmp edi, dword ptr [ebp]
// 0077f0c2  7d10                 jge 0x77f0d4
// 0077f0c4  8b5310               mov edx, dword ptr [ebx + 0x10]
// 0077f0c7  c704ba00000000       mov dword ptr [edx + edi*4], 0
// 0077f0ce  47                   inc edi
// 0077f0cf  3b7d00               cmp edi, dword ptr [ebp]
// 0077f0d2  7cf0                 jl 0x77f0c4
// 0077f0d4  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0077f0d8  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0077f0db  8b5310               mov edx, dword ptr [ebx + 0x10]
// 0077f0de  8b7d00               mov edi, dword ptr [ebp]
// 0077f0e1  893c82               mov dword ptr [edx + eax*4], edi
// 0077f0e4  ff462c               inc dword ptr [esi + 0x2c]
// 0077f0e7  8b4500               mov eax, dword ptr [ebp]
// 0077f0ea  f6400503             test byte ptr [eax + 5], 3
// 0077f0ee  7414                 je 0x77f104
// 0077f0f0  f6430504             test byte ptr [ebx + 5], 4
// 0077f0f4  740e                 je 0x77f104
// 0077f0f6  50                   push eax
// 0077f0f7  8b4134               mov eax, dword ptr [ecx + 0x34]
// 0077f0fa  53                   push ebx
// 0077f0fb  50                   push eax
// 0077f0fc  e84fbeffff           call 0x77af50
// 0077f101  83c40c               add esp, 0xc
// 0077f104  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0077f107  49                   dec ecx
// 0077f108  51                   push ecx
// 0077f109  6a00                 push 0
// 0077f10b  6a24                 push 0x24
// 0077f10d  56                   push esi
// 0077f10e  e87d0a0100           call 0x78fb90
// 0077f113  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0077f117  83caff               or edx, 0xffffffff
// 0077f11a  895110               mov dword ptr [ecx + 0x10], edx
// 0077f11d  895114               mov dword ptr [ecx + 0x14], edx
// 0077f120  c7010b000000         mov dword ptr [ecx], 0xb
// 0077f126  894108               mov dword ptr [ecx + 8], eax
// 0077f129  8b5500               mov edx, dword ptr [ebp]
// 0077f12c  33db                 xor ebx, ebx
// 0077f12e  83c410               add esp, 0x10
// 0077f131  385a48               cmp byte ptr [edx + 0x48], bl
// 0077f134  7638                 jbe 0x77f16e
// 0077f136  8d7d33               lea edi, [ebp + 0x33]
// 0077f139  8da42400000000       lea esp, [esp]
// 0077f140  0fb64701             movzx eax, byte ptr [edi + 1]
// 0077f144  33c9                 xor ecx, ecx
// 0077f146  803f06               cmp byte ptr [edi], 6
// 0077f149  6a00                 push 0
// 0077f14b  0f94c1               sete cl
// 0077f14e  50                   push eax
// 0077f14f  6a00                 push 0
// 0077f151  49                   dec ecx
// 0077f152  83e104               and ecx, 4
// 0077f155  51                   push ecx
// 0077f156  56                   push esi
// 0077f157  e8040a0100           call 0x78fb60
// 0077f15c  8b5500               mov edx, dword ptr [ebp]
// 0077f15f  0fb64248             movzx eax, byte ptr [edx + 0x48]
// 0077f163  43                   inc ebx
// 0077f164  83c414               add esp, 0x14
// 0077f167  83c702               add edi, 2
// 0077f16a  3bd8                 cmp ebx, eax
// 0077f16c  7cd2                 jl 0x77f140
// 0077f16e  5f                   pop edi
// 0077f16f  5e                   pop esi
// 0077f170  5d                   pop ebp
// 0077f171  5b                   pop ebx
// 0077f172  c3                   ret 
// library lua-5.1.4/lparser.c (function _pushclosure)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
