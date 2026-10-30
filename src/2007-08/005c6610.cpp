// from server: 100% by auto
// roc 2007-08 005c6610  unit: lua_exception  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c6610
//
// 005c6610  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c6614  85c9                 test ecx, ecx
// 005c6616  8b542404             mov edx, dword ptr [esp + 4]
// 005c661a  8b4214               mov eax, dword ptr [edx + 0x14]
// 005c661d  7e25                 jle 0x5c6644
// 005c661f  56                   push esi
// 005c6620  8b7228               mov esi, dword ptr [edx + 0x28]
// 005c6623  57                   push edi
// 005c6624  3bc6                 cmp eax, esi
// 005c6626  7618                 jbe 0x5c6640
// 005c6628  8b7804               mov edi, dword ptr [eax + 4]
// 005c662b  8b3f                 mov edi, dword ptr [edi]
// 005c662d  83e901               sub ecx, 1
// 005c6630  807f0600             cmp byte ptr [edi + 6], 0
// 005c6634  7503                 jne 0x5c6639
// 005c6636  2b4814               sub ecx, dword ptr [eax + 0x14]
// 005c6639  83e818               sub eax, 0x18
// 005c663c  85c9                 test ecx, ecx
// 005c663e  7fe4                 jg 0x5c6624
// 005c6640  5f                   pop edi
// 005c6641  5e                   pop esi
// 005c6642  85c9                 test ecx, ecx
// 005c6644  752b                 jne 0x5c6671
// 005c6646  8b5228               mov edx, dword ptr [edx + 0x28]
// 005c6649  3bc2                 cmp eax, edx
// 005c664b  7639                 jbe 0x5c6686
// 005c664d  2bc2                 sub eax, edx
// 005c664f  8bd0                 mov edx, eax
// 005c6651  b8abaaaa2a           mov eax, 0x2aaaaaab
// 005c6656  f7ea                 imul edx
// 005c6658  c1fa02               sar edx, 2
// 005c665b  8bc2                 mov eax, edx
// 005c665d  c1e81f               shr eax, 0x1f
// 005c6660  03c2                 add eax, edx
// 005c6662  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005c6666  b901000000           mov ecx, 1
// 005c666b  894260               mov dword ptr [edx + 0x60], eax
// 005c666e  8bc1                 mov eax, ecx
// 005c6670  c3                   ret 
// 005c6671  85c9                 test ecx, ecx
// 005c6673  7d11                 jge 0x5c6686
// 005c6675  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c6679  b801000000           mov eax, 1
// 005c667e  c7416000000000       mov dword ptr [ecx + 0x60], 0
// 005c6685  c3                   ret 
// 005c6686  33c0                 xor eax, eax
// 005c6688  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_getstack)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
