// from server: 100% by auto
// roc 2008-06 0066aae0  unit: RBX::GroupDragTool  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066aae0
//
// 0066aae0  56                   push esi
// 0066aae1  57                   push edi
// 0066aae2  83faff               cmp edx, -1
// 0066aae5  7449                 je 0x66ab30
// 0066aae7  8b08                 mov ecx, dword ptr [eax]
// 0066aae9  8b790c               mov edi, dword ptr [ecx + 0xc]
// 0066aaec  8d642400             lea esp, [esp]
// 0066aaf0  83fa01               cmp edx, 1
// 0066aaf3  8d0497               lea eax, [edi + edx*4]
// 0066aaf6  7c14                 jl 0x66ab0c
// 0066aaf8  8b70fc               mov esi, dword ptr [eax - 4]
// 0066aafb  8d48fc               lea ecx, [eax - 4]
// 0066aafe  83e63f               and esi, 0x3f
// 0066ab01  f68644c9840080       test byte ptr [esi + 0x84c944], 0x80
// 0066ab08  8bf1                 mov esi, ecx
// 0066ab0a  7502                 jne 0x66ab0e
// 0066ab0c  8bf0                 mov esi, eax
// 0066ab0e  8b0e                 mov ecx, dword ptr [esi]
// 0066ab10  83e13f               and ecx, 0x3f
// 0066ab13  80f91b               cmp cl, 0x1b
// 0066ab16  751d                 jne 0x66ab35
// 0066ab18  8b00                 mov eax, dword ptr [eax]
// 0066ab1a  c1e80e               shr eax, 0xe
// 0066ab1d  2dffff0100           sub eax, 0x1ffff
// 0066ab22  83f8ff               cmp eax, -1
// 0066ab25  7409                 je 0x66ab30
// 0066ab27  8d540201             lea edx, [edx + eax + 1]
// 0066ab2b  83faff               cmp edx, -1
// 0066ab2e  75c0                 jne 0x66aaf0
// 0066ab30  5f                   pop edi
// 0066ab31  33c0                 xor eax, eax
// 0066ab33  5e                   pop esi
// 0066ab34  c3                   ret 
// 0066ab35  5f                   pop edi
// 0066ab36  b801000000           mov eax, 1
// 0066ab3b  5e                   pop esi
// 0066ab3c  c3                   ret 
// library lua-5.1.4/lcode.c (function _need_value)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
