// from server: 100% by auto
// roc 2007-08 006285f0  unit: RBX::AssemblyStage  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006285f0
//
// 006285f0  83faff               cmp edx, -1
// 006285f3  56                   push esi
// 006285f4  57                   push edi
// 006285f5  7449                 je 0x628640
// 006285f7  8b08                 mov ecx, dword ptr [eax]
// 006285f9  8b790c               mov edi, dword ptr [ecx + 0xc]
// 006285fc  8d642400             lea esp, [esp]
// 00628600  83fa01               cmp edx, 1
// 00628603  8d0497               lea eax, [edi + edx*4]
// 00628606  7c14                 jl 0x62861c
// 00628608  8b70fc               mov esi, dword ptr [eax - 4]
// 0062860b  8d48fc               lea ecx, [eax - 4]
// 0062860e  83e63f               and esi, 0x3f
// 00628611  f686f4377c0080       test byte ptr [esi + 0x7c37f4], 0x80
// 00628618  8bf1                 mov esi, ecx
// 0062861a  7502                 jne 0x62861e
// 0062861c  8bf0                 mov esi, eax
// 0062861e  8b0e                 mov ecx, dword ptr [esi]
// 00628620  83e13f               and ecx, 0x3f
// 00628623  80f91b               cmp cl, 0x1b
// 00628626  751d                 jne 0x628645
// 00628628  8b00                 mov eax, dword ptr [eax]
// 0062862a  c1e80e               shr eax, 0xe
// 0062862d  2dffff0100           sub eax, 0x1ffff
// 00628632  83f8ff               cmp eax, -1
// 00628635  7409                 je 0x628640
// 00628637  8d540201             lea edx, [edx + eax + 1]
// 0062863b  83faff               cmp edx, -1
// 0062863e  75c0                 jne 0x628600
// 00628640  5f                   pop edi
// 00628641  33c0                 xor eax, eax
// 00628643  5e                   pop esi
// 00628644  c3                   ret 
// 00628645  5f                   pop edi
// 00628646  b801000000           mov eax, 1
// 0062864b  5e                   pop esi
// 0062864c  c3                   ret 
// library lua-5.1.4/lcode.c (function _need_value)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
