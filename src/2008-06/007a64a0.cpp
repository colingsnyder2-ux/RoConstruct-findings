// roc 2008-06 007a64a0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a64a0
//
// 007a64a0  56                   push esi
// 007a64a1  8bf0                 mov esi, eax
// 007a64a3  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007a64a6  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007a64a9  57                   push edi
// 007a64aa  8b7814               mov edi, dword ptr [eax + 0x14]
// 007a64ad  3bf9                 cmp edi, ecx
// 007a64af  7602                 jbe 0x7a64b3
// 007a64b1  8bf9                 mov edi, ecx
// 007a64b3  85ff                 test edi, edi
// 007a64b5  7435                 je 0x7a64ec
// 007a64b7  8b4010               mov eax, dword ptr [eax + 0x10]
// 007a64ba  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007a64bd  57                   push edi
// 007a64be  50                   push eax
// 007a64bf  51                   push ecx
// 007a64c0  e81bb3efff           call 0x6a17e0
// 007a64c5  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007a64c8  017e0c               add dword ptr [esi + 0xc], edi
// 007a64cb  017810               add dword ptr [eax + 0x10], edi
// 007a64ce  017e14               add dword ptr [esi + 0x14], edi
// 007a64d1  297e10               sub dword ptr [esi + 0x10], edi
// 007a64d4  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007a64d7  297814               sub dword ptr [eax + 0x14], edi
// 007a64da  8b761c               mov esi, dword ptr [esi + 0x1c]
// 007a64dd  83c40c               add esp, 0xc
// 007a64e0  837e1400             cmp dword ptr [esi + 0x14], 0
// 007a64e4  7506                 jne 0x7a64ec
// 007a64e6  8b5608               mov edx, dword ptr [esi + 8]
// 007a64e9  895610               mov dword ptr [esi + 0x10], edx
// 007a64ec  5f                   pop edi
// 007a64ed  5e                   pop esi
// 007a64ee  c3                   ret 
// library zlib-1.2.3/deflate.c (function _flush_pending)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
