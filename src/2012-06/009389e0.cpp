// roc 2012-06 009389e0  unit: seg_00930000  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009389e0
//
// 009389e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009389e4  53                   push ebx
// 009389e5  55                   push ebp
// 009389e6  56                   push esi
// 009389e7  8b7130               mov esi, dword ptr [ecx + 0x30]
// 009389ea  8b1e                 mov ebx, dword ptr [esi]
// 009389ec  8b462c               mov eax, dword ptr [esi + 0x2c]
// 009389ef  8d6b34               lea ebp, [ebx + 0x34]
// 009389f2  57                   push edi
// 009389f3  8b7d00               mov edi, dword ptr [ebp]
// 009389f6  40                   inc eax
// 009389f7  3bc7                 cmp eax, edi
// 009389f9  7e24                 jle 0x938a1f
// 009389fb  8b5310               mov edx, dword ptr [ebx + 0x10]
// 009389fe  8b4134               mov eax, dword ptr [ecx + 0x34]
// 00938a01  6810fcbf00           push 0xbffc10
// 00938a06  68ffff0300           push 0x3ffff
// 00938a0b  6a04                 push 4
// 00938a0d  55                   push ebp
// 00938a0e  52                   push edx
// 00938a0f  50                   push eax
// 00938a10  e89be5ffff           call 0x936fb0
// 00938a15  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00938a19  83c418               add esp, 0x18
// 00938a1c  894310               mov dword ptr [ebx + 0x10], eax
// 00938a1f  3b7d00               cmp edi, dword ptr [ebp]
// 00938a22  7d10                 jge 0x938a34
// 00938a24  8b5310               mov edx, dword ptr [ebx + 0x10]
// 00938a27  c704ba00000000       mov dword ptr [edx + edi*4], 0
// 00938a2e  47                   inc edi
// 00938a2f  3b7d00               cmp edi, dword ptr [ebp]
// 00938a32  7cf0                 jl 0x938a24
// 00938a34  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00938a38  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00938a3b  8b5310               mov edx, dword ptr [ebx + 0x10]
// 00938a3e  8b7d00               mov edi, dword ptr [ebp]
// 00938a41  893c82               mov dword ptr [edx + eax*4], edi
// 00938a44  ff462c               inc dword ptr [esi + 0x2c]
// 00938a47  8b4500               mov eax, dword ptr [ebp]
// 00938a4a  f6400503             test byte ptr [eax + 5], 3
// 00938a4e  7414                 je 0x938a64
// 00938a50  f6430504             test byte ptr [ebx + 5], 4
// 00938a54  740e                 je 0x938a64
// 00938a56  50                   push eax
// 00938a57  8b4134               mov eax, dword ptr [ecx + 0x34]
// 00938a5a  53                   push ebx
// 00938a5b  50                   push eax
// 00938a5c  e83fa9ffff           call 0x9333a0
// 00938a61  83c40c               add esp, 0xc
// 00938a64  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00938a67  49                   dec ecx
// 00938a68  51                   push ecx
// 00938a69  6a00                 push 0
// 00938a6b  6a24                 push 0x24
// 00938a6d  56                   push esi
// 00938a6e  e80ded0200           call 0x967780
// 00938a73  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00938a77  83caff               or edx, 0xffffffff
// 00938a7a  895110               mov dword ptr [ecx + 0x10], edx
// 00938a7d  895114               mov dword ptr [ecx + 0x14], edx
// 00938a80  c7010b000000         mov dword ptr [ecx], 0xb
// 00938a86  894108               mov dword ptr [ecx + 8], eax
// 00938a89  8b5500               mov edx, dword ptr [ebp]
// 00938a8c  33db                 xor ebx, ebx
// 00938a8e  83c410               add esp, 0x10
// 00938a91  385a48               cmp byte ptr [edx + 0x48], bl
// 00938a94  7638                 jbe 0x938ace
// 00938a96  8d7d33               lea edi, [ebp + 0x33]
// 00938a99  8da42400000000       lea esp, [esp]
// 00938aa0  0fb64701             movzx eax, byte ptr [edi + 1]
// 00938aa4  33c9                 xor ecx, ecx
// 00938aa6  803f06               cmp byte ptr [edi], 6
// 00938aa9  6a00                 push 0
// 00938aab  0f94c1               sete cl
// 00938aae  50                   push eax
// 00938aaf  6a00                 push 0
// 00938ab1  49                   dec ecx
// 00938ab2  83e104               and ecx, 4
// 00938ab5  51                   push ecx
// 00938ab6  56                   push esi
// 00938ab7  e894ec0200           call 0x967750
// 00938abc  8b5500               mov edx, dword ptr [ebp]
// 00938abf  0fb64248             movzx eax, byte ptr [edx + 0x48]
// 00938ac3  43                   inc ebx
// 00938ac4  83c414               add esp, 0x14
// 00938ac7  83c702               add edi, 2
// 00938aca  3bd8                 cmp ebx, eax
// 00938acc  7cd2                 jl 0x938aa0
// 00938ace  5f                   pop edi
// 00938acf  5e                   pop esi
// 00938ad0  5d                   pop ebp
// 00938ad1  5b                   pop ebx
// 00938ad2  c3                   ret 
// library lua-5.1.4/lparser.c (function _pushclosure)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
