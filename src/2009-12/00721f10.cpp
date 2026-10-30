// roc 2009-12 00721f10  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00721f10
//
// 00721f10  6aff                 push -1
// 00721f12  68d8c59300           push 0x93c5d8
// 00721f17  64a100000000         mov eax, dword ptr fs:[0]
// 00721f1d  50                   push eax
// 00721f1e  64892500000000       mov dword ptr fs:[0], esp
// 00721f25  51                   push ecx
// 00721f26  56                   push esi
// 00721f27  8bf1                 mov esi, ecx
// 00721f29  89742404             mov dword ptr [esp + 4], esi
// 00721f2d  6a00                 push 0
// 00721f2f  6a01                 push 1
// 00721f31  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00721f39  e892cc0b00           call 0x7debd0
// 00721f3e  8bce                 mov ecx, esi
// 00721f40  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00721f48  e8635bf4ff           call 0x667ab0
// 00721f4d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00721f51  5e                   pop esi
// 00721f52  64890d00000000       mov dword ptr fs:[0], ecx
// 00721f59  83c410               add esp, 0x10
// 00721f5c  c3                   ret 
// copied from an identical function in another client (function ??1?$zlib_compressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp