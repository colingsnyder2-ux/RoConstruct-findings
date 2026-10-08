// from server: 100% by auto
// roc 2007-08 00628a90  unit: RBX::AssemblyStage  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00628a90
//
// 00628a90  8b542408             mov edx, dword ptr [esp + 8]
// 00628a94  8b02                 mov eax, dword ptr [edx]
// 00628a96  83f80d               cmp eax, 0xd
// 00628a99  7525                 jne 0x628ac0
// 00628a9b  8b4208               mov eax, dword ptr [edx + 8]
// 00628a9e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00628aa2  8b11                 mov edx, dword ptr [ecx]
// 00628aa4  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 00628aa7  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00628aab  83c201               add edx, 1
// 00628aae  c1e20e               shl edx, 0xe
// 00628ab1  331481               xor edx, dword ptr [ecx + eax*4]
// 00628ab4  8d0481               lea eax, [ecx + eax*4]
// 00628ab7  81e200c07f00         and edx, 0x7fc000
// 00628abd  3110                 xor dword ptr [eax], edx
// 00628abf  c3                   ret 
// 00628ac0  83f80e               cmp eax, 0xe
// 00628ac3  754f                 jne 0x628b14
// 00628ac5  8b4a08               mov ecx, dword ptr [edx + 8]
// 00628ac8  8b442404             mov eax, dword ptr [esp + 4]
// 00628acc  56                   push esi
// 00628acd  8b30                 mov esi, dword ptr [eax]
// 00628acf  8b760c               mov esi, dword ptr [esi + 0xc]
// 00628ad2  8d0c8e               lea ecx, [esi + ecx*4]
// 00628ad5  8b742410             mov esi, dword ptr [esp + 0x10]
// 00628ad9  57                   push edi
// 00628ada  8b39                 mov edi, dword ptr [ecx]
// 00628adc  83c601               add esi, 1
// 00628adf  c1e617               shl esi, 0x17
// 00628ae2  81e7ffff7f00         and edi, 0x7fffff
// 00628ae8  33f7                 xor esi, edi
// 00628aea  8931                 mov dword ptr [ecx], esi
// 00628aec  8b5208               mov edx, dword ptr [edx + 8]
// 00628aef  8b08                 mov ecx, dword ptr [eax]
// 00628af1  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00628af4  8d0c91               lea ecx, [ecx + edx*4]
// 00628af7  8b5024               mov edx, dword ptr [eax + 0x24]
// 00628afa  c1e206               shl edx, 6
// 00628afd  3311                 xor edx, dword ptr [ecx]
// 00628aff  6a01                 push 1
// 00628b01  81e2c03f0000         and edx, 0x3fc0
// 00628b07  3111                 xor dword ptr [ecx], edx
// 00628b09  50                   push eax
// 00628b0a  e8a1fdffff           call 0x6288b0
// 00628b0f  83c408               add esp, 8
// 00628b12  5f                   pop edi
// 00628b13  5e                   pop esi
// 00628b14  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_setreturns)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
