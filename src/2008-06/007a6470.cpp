// roc 2008-06 007a6470  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a6470
//
// 007a6470  56                   push esi
// 007a6471  8b7008               mov esi, dword ptr [eax + 8]
// 007a6474  57                   push edi
// 007a6475  8b7814               mov edi, dword ptr [eax + 0x14]
// 007a6478  8bd1                 mov edx, ecx
// 007a647a  c1ea08               shr edx, 8
// 007a647d  88143e               mov byte ptr [esi + edi], dl
// 007a6480  8b7808               mov edi, dword ptr [eax + 8]
// 007a6483  be01000000           mov esi, 1
// 007a6488  017014               add dword ptr [eax + 0x14], esi
// 007a648b  8b5014               mov edx, dword ptr [eax + 0x14]
// 007a648e  880c3a               mov byte ptr [edx + edi], cl
// 007a6491  017014               add dword ptr [eax + 0x14], esi
// 007a6494  5f                   pop edi
// 007a6495  5e                   pop esi
// 007a6496  c3                   ret 
// library zlib-1.2.3/deflate.c (function _putShortMSB)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
