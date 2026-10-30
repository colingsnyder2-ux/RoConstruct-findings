// roc 2009-12 00721f60  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00721f60
//
// 00721f60  6aff                 push -1
// 00721f62  68d8c59300           push 0x93c5d8
// 00721f67  64a100000000         mov eax, dword ptr fs:[0]
// 00721f6d  50                   push eax
// 00721f6e  64892500000000       mov dword ptr fs:[0], esp
// 00721f75  51                   push ecx
// 00721f76  56                   push esi
// 00721f77  8bf1                 mov esi, ecx
// 00721f79  89742404             mov dword ptr [esp + 4], esi
// 00721f7d  6a00                 push 0
// 00721f7f  6a00                 push 0
// 00721f81  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00721f89  e842cc0b00           call 0x7debd0
// 00721f8e  8bce                 mov ecx, esi
// 00721f90  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00721f98  e8135bf4ff           call 0x667ab0
// 00721f9d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00721fa1  5e                   pop esi
// 00721fa2  64890d00000000       mov dword ptr fs:[0], ecx
// 00721fa9  83c410               add esp, 0x10
// 00721fac  c3                   ret 
// copied from an identical function in another client (function ??1?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp