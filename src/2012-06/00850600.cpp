// roc 2012-06 00850600  unit: RBX::Reflection::PAUTuple::?$sp_counted_impl_pd  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00850600
//
// 00850600  8a504b               mov dl, byte ptr [eax + 0x4b]
// 00850603  80fafa               cmp dl, 0xfa
// 00850606  7753                 ja 0x85065b
// 00850608  8a484a               mov cl, byte ptr [eax + 0x4a]
// 0085060b  56                   push esi
// 0085060c  57                   push edi
// 0085060d  0fb67849             movzx edi, byte ptr [eax + 0x49]
// 00850611  0fb6f1               movzx esi, cl
// 00850614  83e601               and esi, 1
// 00850617  03f7                 add esi, edi
// 00850619  0fb6d2               movzx edx, dl
// 0085061c  5f                   pop edi
// 0085061d  3bf2                 cmp esi, edx
// 0085061f  5e                   pop esi
// 00850620  7f39                 jg 0x85065b
// 00850622  f6c104               test cl, 4
// 00850625  7405                 je 0x85062c
// 00850627  f6c101               test cl, 1
// 0085062a  742f                 je 0x85065b
// 0085062c  0fb64848             movzx ecx, byte ptr [eax + 0x48]
// 00850630  394824               cmp dword ptr [eax + 0x24], ecx
// 00850633  7f26                 jg 0x85065b
// 00850635  8b5030               mov edx, dword ptr [eax + 0x30]
// 00850638  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0085063b  3bd1                 cmp edx, ecx
// 0085063d  7404                 je 0x850643
// 0085063f  85d2                 test edx, edx
// 00850641  7518                 jne 0x85065b
// 00850643  85c9                 test ecx, ecx
// 00850645  7e14                 jle 0x85065b
// 00850647  8b500c               mov edx, dword ptr [eax + 0xc]
// 0085064a  8b448afc             mov eax, dword ptr [edx + ecx*4 - 4]
// 0085064e  83e03f               and eax, 0x3f
// 00850651  3c1e                 cmp al, 0x1e
// 00850653  7506                 jne 0x85065b
// 00850655  b801000000           mov eax, 1
// 0085065a  c3                   ret 
// 0085065b  33c0                 xor eax, eax
// 0085065d  c3                   ret 
// library lua-5.1.4/ldebug.c (function _precheck)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
