// roc 2009-12 00722410  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00722410
//
// 00722410  6aff                 push -1
// 00722412  68d8c59300           push 0x93c5d8
// 00722417  64a100000000         mov eax, dword ptr fs:[0]
// 0072241d  50                   push eax
// 0072241e  64892500000000       mov dword ptr fs:[0], esp
// 00722425  51                   push ecx
// 00722426  56                   push esi
// 00722427  8bf1                 mov esi, ecx
// 00722429  89742404             mov dword ptr [esp + 4], esi
// 0072242d  e89ec60b00           call 0x7dead0
// 00722432  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0072243a  85f6                 test esi, esi
// 0072243c  7405                 je 0x722443
// 0072243e  8d4614               lea eax, [esi + 0x14]
// 00722441  eb02                 jmp 0x722445
// 00722443  33c0                 xor eax, eax
// 00722445  50                   push eax
// 00722446  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0072244a  6a00                 push 0
// 0072244c  6a00                 push 0
// 0072244e  6a01                 push 1
// 00722450  50                   push eax
// 00722451  8bce                 mov ecx, esi
// 00722453  e8c8c70b00           call 0x7dec20
// 00722458  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0072245c  8bc6                 mov eax, esi
// 0072245e  5e                   pop esi
// 0072245f  64890d00000000       mov dword ptr fs:[0], ecx
// 00722466  83c410               add esp, 0x10
// 00722469  c20400               ret 4
// copied from an identical function in another client (function ??0?$zlib_compressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@QAE@ABUzlib_params@23@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp