// roc 2007-08 0072b760  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0072b760
//
// 0072b760  56                   push esi
// 0072b761  8b7008               mov esi, dword ptr [eax + 8]
// 0072b764  57                   push edi
// 0072b765  8b7814               mov edi, dword ptr [eax + 0x14]
// 0072b768  8bd1                 mov edx, ecx
// 0072b76a  c1ea08               shr edx, 8
// 0072b76d  88143e               mov byte ptr [esi + edi], dl
// 0072b770  8b7808               mov edi, dword ptr [eax + 8]
// 0072b773  be01000000           mov esi, 1
// 0072b778  017014               add dword ptr [eax + 0x14], esi
// 0072b77b  8b5014               mov edx, dword ptr [eax + 0x14]
// 0072b77e  880c3a               mov byte ptr [edx + edi], cl
// 0072b781  017014               add dword ptr [eax + 0x14], esi
// 0072b784  5f                   pop edi
// 0072b785  5e                   pop esi
// 0072b786  c3                   ret 
// library zlib-1.2.3/deflate.c (function _putShortMSB)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
