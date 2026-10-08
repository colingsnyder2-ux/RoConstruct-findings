// roc 2009-12 0079aa40  unit: lua_exception  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079aa40
//
// 0079aa40  8a504b               mov dl, byte ptr [eax + 0x4b]
// 0079aa43  80fafa               cmp dl, 0xfa
// 0079aa46  7753                 ja 0x79aa9b
// 0079aa48  8a484a               mov cl, byte ptr [eax + 0x4a]
// 0079aa4b  56                   push esi
// 0079aa4c  57                   push edi
// 0079aa4d  0fb67849             movzx edi, byte ptr [eax + 0x49]
// 0079aa51  0fb6f1               movzx esi, cl
// 0079aa54  83e601               and esi, 1
// 0079aa57  03f7                 add esi, edi
// 0079aa59  0fb6d2               movzx edx, dl
// 0079aa5c  5f                   pop edi
// 0079aa5d  3bf2                 cmp esi, edx
// 0079aa5f  5e                   pop esi
// 0079aa60  7f39                 jg 0x79aa9b
// 0079aa62  f6c104               test cl, 4
// 0079aa65  7405                 je 0x79aa6c
// 0079aa67  f6c101               test cl, 1
// 0079aa6a  742f                 je 0x79aa9b
// 0079aa6c  0fb64848             movzx ecx, byte ptr [eax + 0x48]
// 0079aa70  394824               cmp dword ptr [eax + 0x24], ecx
// 0079aa73  7f26                 jg 0x79aa9b
// 0079aa75  8b5030               mov edx, dword ptr [eax + 0x30]
// 0079aa78  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0079aa7b  3bd1                 cmp edx, ecx
// 0079aa7d  7404                 je 0x79aa83
// 0079aa7f  85d2                 test edx, edx
// 0079aa81  7518                 jne 0x79aa9b
// 0079aa83  85c9                 test ecx, ecx
// 0079aa85  7e14                 jle 0x79aa9b
// 0079aa87  8b500c               mov edx, dword ptr [eax + 0xc]
// 0079aa8a  8b448afc             mov eax, dword ptr [edx + ecx*4 - 4]
// 0079aa8e  83e03f               and eax, 0x3f
// 0079aa91  3c1e                 cmp al, 0x1e
// 0079aa93  7506                 jne 0x79aa9b
// 0079aa95  b801000000           mov eax, 1
// 0079aa9a  c3                   ret 
// 0079aa9b  33c0                 xor eax, eax
// 0079aa9d  c3                   ret 
// library lua-5.1.4/ldebug.c (function _precheck)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
