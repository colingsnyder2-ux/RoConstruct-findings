// roc 2012-06 00850360  unit: RBX::Reflection::PAUTuple::?$sp_counted_impl_pd  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00850360
//
// 00850360  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00850364  8b542404             mov edx, dword ptr [esp + 4]
// 00850368  8b4214               mov eax, dword ptr [edx + 0x14]
// 0085036b  85c9                 test ecx, ecx
// 0085036d  7e23                 jle 0x850392
// 0085036f  56                   push esi
// 00850370  8b7228               mov esi, dword ptr [edx + 0x28]
// 00850373  57                   push edi
// 00850374  3bc6                 cmp eax, esi
// 00850376  7616                 jbe 0x85038e
// 00850378  8b7804               mov edi, dword ptr [eax + 4]
// 0085037b  8b3f                 mov edi, dword ptr [edi]
// 0085037d  49                   dec ecx
// 0085037e  807f0600             cmp byte ptr [edi + 6], 0
// 00850382  7503                 jne 0x850387
// 00850384  2b4814               sub ecx, dword ptr [eax + 0x14]
// 00850387  83e818               sub eax, 0x18
// 0085038a  85c9                 test ecx, ecx
// 0085038c  7fe6                 jg 0x850374
// 0085038e  5f                   pop edi
// 0085038f  5e                   pop esi
// 00850390  85c9                 test ecx, ecx
// 00850392  752b                 jne 0x8503bf
// 00850394  8b5228               mov edx, dword ptr [edx + 0x28]
// 00850397  3bc2                 cmp eax, edx
// 00850399  7639                 jbe 0x8503d4
// 0085039b  2bc2                 sub eax, edx
// 0085039d  8bd0                 mov edx, eax
// 0085039f  b8abaaaa2a           mov eax, 0x2aaaaaab
// 008503a4  f7ea                 imul edx
// 008503a6  c1fa02               sar edx, 2
// 008503a9  8bc2                 mov eax, edx
// 008503ab  c1e81f               shr eax, 0x1f
// 008503ae  03c2                 add eax, edx
// 008503b0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008503b4  b901000000           mov ecx, 1
// 008503b9  894260               mov dword ptr [edx + 0x60], eax
// 008503bc  8bc1                 mov eax, ecx
// 008503be  c3                   ret 
// 008503bf  85c9                 test ecx, ecx
// 008503c1  7d11                 jge 0x8503d4
// 008503c3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008503c7  b801000000           mov eax, 1
// 008503cc  c7416000000000       mov dword ptr [ecx + 0x60], 0
// 008503d3  c3                   ret 
// 008503d4  33c0                 xor eax, eax
// 008503d6  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_getstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
