// roc 2012-06 00966fc0  unit: RBX::CellContact  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00966fc0
//
// 00966fc0  56                   push esi
// 00966fc1  57                   push edi
// 00966fc2  83faff               cmp edx, -1
// 00966fc5  7449                 je 0x967010
// 00966fc7  8b08                 mov ecx, dword ptr [eax]
// 00966fc9  8b790c               mov edi, dword ptr [ecx + 0xc]
// 00966fcc  8d642400             lea esp, [esp]
// 00966fd0  83fa01               cmp edx, 1
// 00966fd3  8d0497               lea eax, [edi + edx*4]
// 00966fd6  7c14                 jl 0x966fec
// 00966fd8  8b70fc               mov esi, dword ptr [eax - 4]
// 00966fdb  8d48fc               lea ecx, [eax - 4]
// 00966fde  83e63f               and esi, 0x3f
// 00966fe1  f686c4f8bf0080       test byte ptr [esi + 0xbff8c4], 0x80
// 00966fe8  8bf1                 mov esi, ecx
// 00966fea  7502                 jne 0x966fee
// 00966fec  8bf0                 mov esi, eax
// 00966fee  8b0e                 mov ecx, dword ptr [esi]
// 00966ff0  83e13f               and ecx, 0x3f
// 00966ff3  80f91b               cmp cl, 0x1b
// 00966ff6  751d                 jne 0x967015
// 00966ff8  8b00                 mov eax, dword ptr [eax]
// 00966ffa  c1e80e               shr eax, 0xe
// 00966ffd  2dffff0100           sub eax, 0x1ffff
// 00967002  83f8ff               cmp eax, -1
// 00967005  7409                 je 0x967010
// 00967007  8d540201             lea edx, [edx + eax + 1]
// 0096700b  83faff               cmp edx, -1
// 0096700e  75c0                 jne 0x966fd0
// 00967010  5f                   pop edi
// 00967011  33c0                 xor eax, eax
// 00967013  5e                   pop esi
// 00967014  c3                   ret 
// 00967015  5f                   pop edi
// 00967016  b801000000           mov eax, 1
// 0096701b  5e                   pop esi
// 0096701c  c3                   ret 
// library lua-5.1.4/lcode.c (function _need_value)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
