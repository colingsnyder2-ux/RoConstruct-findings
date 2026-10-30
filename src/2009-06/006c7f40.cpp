// from server: 100% by auto
// roc 2009-06 006c7f40  unit: seg_006c0000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7f40
//
// 006c7f40  8a504b               mov dl, byte ptr [eax + 0x4b]
// 006c7f43  80fafa               cmp dl, 0xfa
// 006c7f46  7753                 ja 0x6c7f9b
// 006c7f48  8a484a               mov cl, byte ptr [eax + 0x4a]
// 006c7f4b  56                   push esi
// 006c7f4c  57                   push edi
// 006c7f4d  0fb67849             movzx edi, byte ptr [eax + 0x49]
// 006c7f51  0fb6f1               movzx esi, cl
// 006c7f54  83e601               and esi, 1
// 006c7f57  03f7                 add esi, edi
// 006c7f59  0fb6d2               movzx edx, dl
// 006c7f5c  5f                   pop edi
// 006c7f5d  3bf2                 cmp esi, edx
// 006c7f5f  5e                   pop esi
// 006c7f60  7f39                 jg 0x6c7f9b
// 006c7f62  f6c104               test cl, 4
// 006c7f65  7405                 je 0x6c7f6c
// 006c7f67  f6c101               test cl, 1
// 006c7f6a  742f                 je 0x6c7f9b
// 006c7f6c  0fb64848             movzx ecx, byte ptr [eax + 0x48]
// 006c7f70  394824               cmp dword ptr [eax + 0x24], ecx
// 006c7f73  7f26                 jg 0x6c7f9b
// 006c7f75  8b5030               mov edx, dword ptr [eax + 0x30]
// 006c7f78  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 006c7f7b  3bd1                 cmp edx, ecx
// 006c7f7d  7404                 je 0x6c7f83
// 006c7f7f  85d2                 test edx, edx
// 006c7f81  7518                 jne 0x6c7f9b
// 006c7f83  85c9                 test ecx, ecx
// 006c7f85  7e14                 jle 0x6c7f9b
// 006c7f87  8b500c               mov edx, dword ptr [eax + 0xc]
// 006c7f8a  8b448afc             mov eax, dword ptr [edx + ecx*4 - 4]
// 006c7f8e  83e03f               and eax, 0x3f
// 006c7f91  3c1e                 cmp al, 0x1e
// 006c7f93  7506                 jne 0x6c7f9b
// 006c7f95  b801000000           mov eax, 1
// 006c7f9a  c3                   ret 
// 006c7f9b  33c0                 xor eax, eax
// 006c7f9d  c3                   ret 
// library lua-5.1.4/ldebug.c (function _precheck)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
