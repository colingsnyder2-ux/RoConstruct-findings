// from server: 100% by auto
// roc 2009-06 006c7eb0  unit: seg_006c0000  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7eb0
//
// 006c7eb0  51                   push ecx
// 006c7eb1  56                   push esi
// 006c7eb2  33f6                 xor esi, esi
// 006c7eb4  3bde                 cmp ebx, esi
// 006c7eb6  745f                 je 0x6c7f17
// 006c7eb8  807b0600             cmp byte ptr [ebx + 6], 0
// 006c7ebc  7559                 jne 0x6c7f17
// 006c7ebe  55                   push ebp
// 006c7ebf  56                   push esi
// 006c7ec0  56                   push esi
// 006c7ec1  57                   push edi
// 006c7ec2  e889420200           call 0x6ec150
// 006c7ec7  8be8                 mov ebp, eax
// 006c7ec9  8b4310               mov eax, dword ptr [ebx + 0x10]
// 006c7ecc  8b4814               mov ecx, dword ptr [eax + 0x14]
// 006c7ecf  83c40c               add esp, 0xc
// 006c7ed2  397030               cmp dword ptr [eax + 0x30], esi
// 006c7ed5  894c2408             mov dword ptr [esp + 8], ecx
// 006c7ed9  7e2d                 jle 0x6c7f08
// 006c7edb  eb03                 jmp 0x6c7ee0
// 006c7edd  8d4900               lea ecx, [ecx]
// 006c7ee0  8b542408             mov edx, dword ptr [esp + 8]
// 006c7ee4  8b04b2               mov eax, dword ptr [edx + esi*4]
// 006c7ee7  50                   push eax
// 006c7ee8  55                   push ebp
// 006c7ee9  57                   push edi
// 006c7eea  e811450200           call 0x6ec400
// 006c7eef  c70001000000         mov dword ptr [eax], 1
// 006c7ef5  c7400801000000       mov dword ptr [eax + 8], 1
// 006c7efc  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 006c7eff  46                   inc esi
// 006c7f00  83c40c               add esp, 0xc
// 006c7f03  3b7130               cmp esi, dword ptr [ecx + 0x30]
// 006c7f06  7cd8                 jl 0x6c7ee0
// 006c7f08  8b4708               mov eax, dword ptr [edi + 8]
// 006c7f0b  8928                 mov dword ptr [eax], ebp
// 006c7f0d  c7400805000000       mov dword ptr [eax + 8], 5
// 006c7f14  5d                   pop ebp
// 006c7f15  eb06                 jmp 0x6c7f1d
// 006c7f17  8b5708               mov edx, dword ptr [edi + 8]
// 006c7f1a  897208               mov dword ptr [edx + 8], esi
// 006c7f1d  8b471c               mov eax, dword ptr [edi + 0x1c]
// 006c7f20  2b4708               sub eax, dword ptr [edi + 8]
// 006c7f23  be10000000           mov esi, 0x10
// 006c7f28  3bc6                 cmp eax, esi
// 006c7f2a  7f0b                 jg 0x6c7f37
// 006c7f2c  6a01                 push 1
// 006c7f2e  57                   push edi
// 006c7f2f  e88caeffff           call 0x6c2dc0
// 006c7f34  83c408               add esp, 8
// 006c7f37  017708               add dword ptr [edi + 8], esi
// 006c7f3a  5e                   pop esi
// 006c7f3b  59                   pop ecx
// 006c7f3c  c3                   ret 
// library lua-5.1.4/ldebug.c (function _collectvalidlines)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
