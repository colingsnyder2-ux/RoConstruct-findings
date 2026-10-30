// from server: 100% by auto
// roc 2009-06 006f9a80  unit: RBX::GroupDragTool  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f9a80
//
// 006f9a80  56                   push esi
// 006f9a81  57                   push edi
// 006f9a82  83faff               cmp edx, -1
// 006f9a85  7449                 je 0x6f9ad0
// 006f9a87  8b08                 mov ecx, dword ptr [eax]
// 006f9a89  8b790c               mov edi, dword ptr [ecx + 0xc]
// 006f9a8c  8d642400             lea esp, [esp]
// 006f9a90  83fa01               cmp edx, 1
// 006f9a93  8d0497               lea eax, [edi + edx*4]
// 006f9a96  7c14                 jl 0x6f9aac
// 006f9a98  8b70fc               mov esi, dword ptr [eax - 4]
// 006f9a9b  8d48fc               lea ecx, [eax - 4]
// 006f9a9e  83e63f               and esi, 0x3f
// 006f9aa1  f68674e48e0080       test byte ptr [esi + 0x8ee474], 0x80
// 006f9aa8  8bf1                 mov esi, ecx
// 006f9aaa  7502                 jne 0x6f9aae
// 006f9aac  8bf0                 mov esi, eax
// 006f9aae  8b0e                 mov ecx, dword ptr [esi]
// 006f9ab0  83e13f               and ecx, 0x3f
// 006f9ab3  80f91b               cmp cl, 0x1b
// 006f9ab6  751d                 jne 0x6f9ad5
// 006f9ab8  8b00                 mov eax, dword ptr [eax]
// 006f9aba  c1e80e               shr eax, 0xe
// 006f9abd  2dffff0100           sub eax, 0x1ffff
// 006f9ac2  83f8ff               cmp eax, -1
// 006f9ac5  7409                 je 0x6f9ad0
// 006f9ac7  8d540201             lea edx, [edx + eax + 1]
// 006f9acb  83faff               cmp edx, -1
// 006f9ace  75c0                 jne 0x6f9a90
// 006f9ad0  5f                   pop edi
// 006f9ad1  33c0                 xor eax, eax
// 006f9ad3  5e                   pop esi
// 006f9ad4  c3                   ret 
// 006f9ad5  5f                   pop edi
// 006f9ad6  b801000000           mov eax, 1
// 006f9adb  5e                   pop esi
// 006f9adc  c3                   ret 
// library lua-5.1.4/lcode.c (function _need_value)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
