// roc 2010-06 006a0a90  unit: UString_sink::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a0a90
//
// 006a0a90  6aff                 push -1
// 006a0a92  6858a29900           push 0x99a258
// 006a0a97  64a100000000         mov eax, dword ptr fs:[0]
// 006a0a9d  50                   push eax
// 006a0a9e  64892500000000       mov dword ptr fs:[0], esp
// 006a0aa5  51                   push ecx
// 006a0aa6  56                   push esi
// 006a0aa7  8bf1                 mov esi, ecx
// 006a0aa9  89742404             mov dword ptr [esp + 4], esi
// 006a0aad  e8de150f00           call 0x792090
// 006a0ab2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006a0aba  85f6                 test esi, esi
// 006a0abc  7405                 je 0x6a0ac3
// 006a0abe  8d4614               lea eax, [esi + 0x14]
// 006a0ac1  eb02                 jmp 0x6a0ac5
// 006a0ac3  33c0                 xor eax, eax
// 006a0ac5  50                   push eax
// 006a0ac6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006a0aca  6a00                 push 0
// 006a0acc  6a00                 push 0
// 006a0ace  6a00                 push 0
// 006a0ad0  50                   push eax
// 006a0ad1  8bce                 mov ecx, esi
// 006a0ad3  e808170f00           call 0x7921e0
// 006a0ad8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a0adc  8bc6                 mov eax, esi
// 006a0ade  5e                   pop esi
// 006a0adf  64890d00000000       mov dword ptr fs:[0], ecx
// 006a0ae6  83c410               add esp, 0x10
// 006a0ae9  c20400               ret 4
// copied from an identical function in another client (function ??0?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@QAE@ABUzlib_params@23@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp