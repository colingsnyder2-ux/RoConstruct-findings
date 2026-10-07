// roc 2010-06 0078f400  unit: RBX::GroupDragTool  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078f400
//
// 0078f400  56                   push esi
// 0078f401  57                   push edi
// 0078f402  83faff               cmp edx, -1
// 0078f405  7449                 je 0x78f450
// 0078f407  8b08                 mov ecx, dword ptr [eax]
// 0078f409  8b790c               mov edi, dword ptr [ecx + 0xc]
// 0078f40c  8d642400             lea esp, [esp]
// 0078f410  83fa01               cmp edx, 1
// 0078f413  8d0497               lea eax, [edi + edx*4]
// 0078f416  7c14                 jl 0x78f42c
// 0078f418  8b70fc               mov esi, dword ptr [eax - 4]
// 0078f41b  8d48fc               lea ecx, [eax - 4]
// 0078f41e  83e63f               and esi, 0x3f
// 0078f421  f686e434a50080       test byte ptr [esi + 0xa534e4], 0x80
// 0078f428  8bf1                 mov esi, ecx
// 0078f42a  7502                 jne 0x78f42e
// 0078f42c  8bf0                 mov esi, eax
// 0078f42e  8b0e                 mov ecx, dword ptr [esi]
// 0078f430  83e13f               and ecx, 0x3f
// 0078f433  80f91b               cmp cl, 0x1b
// 0078f436  751d                 jne 0x78f455
// 0078f438  8b00                 mov eax, dword ptr [eax]
// 0078f43a  c1e80e               shr eax, 0xe
// 0078f43d  2dffff0100           sub eax, 0x1ffff
// 0078f442  83f8ff               cmp eax, -1
// 0078f445  7409                 je 0x78f450
// 0078f447  8d540201             lea edx, [edx + eax + 1]
// 0078f44b  83faff               cmp edx, -1
// 0078f44e  75c0                 jne 0x78f410
// 0078f450  5f                   pop edi
// 0078f451  33c0                 xor eax, eax
// 0078f453  5e                   pop esi
// 0078f454  c3                   ret 
// 0078f455  5f                   pop edi
// 0078f456  b801000000           mov eax, 1
// 0078f45b  5e                   pop esi
// 0078f45c  c3                   ret 
// library lua-5.1.4/lcode.c (function _need_value)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
