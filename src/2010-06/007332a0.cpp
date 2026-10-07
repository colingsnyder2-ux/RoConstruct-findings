// roc 2010-06 007332a0  unit: lua_exception  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007332a0
//
// 007332a0  8a504b               mov dl, byte ptr [eax + 0x4b]
// 007332a3  80fafa               cmp dl, 0xfa
// 007332a6  7753                 ja 0x7332fb
// 007332a8  8a484a               mov cl, byte ptr [eax + 0x4a]
// 007332ab  56                   push esi
// 007332ac  57                   push edi
// 007332ad  0fb67849             movzx edi, byte ptr [eax + 0x49]
// 007332b1  0fb6f1               movzx esi, cl
// 007332b4  83e601               and esi, 1
// 007332b7  03f7                 add esi, edi
// 007332b9  0fb6d2               movzx edx, dl
// 007332bc  5f                   pop edi
// 007332bd  3bf2                 cmp esi, edx
// 007332bf  5e                   pop esi
// 007332c0  7f39                 jg 0x7332fb
// 007332c2  f6c104               test cl, 4
// 007332c5  7405                 je 0x7332cc
// 007332c7  f6c101               test cl, 1
// 007332ca  742f                 je 0x7332fb
// 007332cc  0fb64848             movzx ecx, byte ptr [eax + 0x48]
// 007332d0  394824               cmp dword ptr [eax + 0x24], ecx
// 007332d3  7f26                 jg 0x7332fb
// 007332d5  8b5030               mov edx, dword ptr [eax + 0x30]
// 007332d8  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 007332db  3bd1                 cmp edx, ecx
// 007332dd  7404                 je 0x7332e3
// 007332df  85d2                 test edx, edx
// 007332e1  7518                 jne 0x7332fb
// 007332e3  85c9                 test ecx, ecx
// 007332e5  7e14                 jle 0x7332fb
// 007332e7  8b500c               mov edx, dword ptr [eax + 0xc]
// 007332ea  8b448afc             mov eax, dword ptr [edx + ecx*4 - 4]
// 007332ee  83e03f               and eax, 0x3f
// 007332f1  3c1e                 cmp al, 0x1e
// 007332f3  7506                 jne 0x7332fb
// 007332f5  b801000000           mov eax, 1
// 007332fa  c3                   ret 
// 007332fb  33c0                 xor eax, eax
// 007332fd  c3                   ret 
// library lua-5.1.4/ldebug.c (function _precheck)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
