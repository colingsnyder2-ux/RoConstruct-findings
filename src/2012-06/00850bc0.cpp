// roc 2012-06 00850bc0  unit: RBX::Reflection::PAUTuple::?$sp_counted_impl_pd  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00850bc0
//
// 00850bc0  a900010000           test eax, 0x100
// 00850bc5  7419                 je 0x850be0
// 00850bc7  8b5108               mov edx, dword ptr [ecx + 8]
// 00850bca  25fffeffff           and eax, 0xfffffeff
// 00850bcf  c1e004               shl eax, 4
// 00850bd2  03c2                 add eax, edx
// 00850bd4  83780804             cmp dword ptr [eax + 8], 4
// 00850bd8  7506                 jne 0x850be0
// 00850bda  8b00                 mov eax, dword ptr [eax]
// 00850bdc  83c010               add eax, 0x10
// 00850bdf  c3                   ret 
// 00850be0  b82870b700           mov eax, 0xb77028
// 00850be5  c3                   ret 
// library lua-5.1.4/ldebug.c (function _kname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
