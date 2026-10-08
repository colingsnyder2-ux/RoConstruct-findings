// from server: 100% by auto
// roc 2011-06 0077d2e0  unit: seg_00770000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077d2e0
//
// 0077d2e0  8a504b               mov dl, byte ptr [eax + 0x4b]
// 0077d2e3  80fafa               cmp dl, 0xfa
// 0077d2e6  7753                 ja 0x77d33b
// 0077d2e8  8a484a               mov cl, byte ptr [eax + 0x4a]
// 0077d2eb  56                   push esi
// 0077d2ec  57                   push edi
// 0077d2ed  0fb67849             movzx edi, byte ptr [eax + 0x49]
// 0077d2f1  0fb6f1               movzx esi, cl
// 0077d2f4  83e601               and esi, 1
// 0077d2f7  03f7                 add esi, edi
// 0077d2f9  0fb6d2               movzx edx, dl
// 0077d2fc  5f                   pop edi
// 0077d2fd  3bf2                 cmp esi, edx
// 0077d2ff  5e                   pop esi
// 0077d300  7f39                 jg 0x77d33b
// 0077d302  f6c104               test cl, 4
// 0077d305  7405                 je 0x77d30c
// 0077d307  f6c101               test cl, 1
// 0077d30a  742f                 je 0x77d33b
// 0077d30c  0fb64848             movzx ecx, byte ptr [eax + 0x48]
// 0077d310  394824               cmp dword ptr [eax + 0x24], ecx
// 0077d313  7f26                 jg 0x77d33b
// 0077d315  8b5030               mov edx, dword ptr [eax + 0x30]
// 0077d318  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0077d31b  3bd1                 cmp edx, ecx
// 0077d31d  7404                 je 0x77d323
// 0077d31f  85d2                 test edx, edx
// 0077d321  7518                 jne 0x77d33b
// 0077d323  85c9                 test ecx, ecx
// 0077d325  7e14                 jle 0x77d33b
// 0077d327  8b500c               mov edx, dword ptr [eax + 0xc]
// 0077d32a  8b448afc             mov eax, dword ptr [edx + ecx*4 - 4]
// 0077d32e  83e03f               and eax, 0x3f
// 0077d331  3c1e                 cmp al, 0x1e
// 0077d333  7506                 jne 0x77d33b
// 0077d335  b801000000           mov eax, 1
// 0077d33a  c3                   ret 
// 0077d33b  33c0                 xor eax, eax
// 0077d33d  c3                   ret 
// library lua-5.1.4/ldebug.c (function _precheck)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
