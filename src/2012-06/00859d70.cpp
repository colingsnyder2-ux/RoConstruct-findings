// roc 2012-06 00859d70  unit: UString_sink::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00859d70
//
// 00859d70  6aff                 push -1
// 00859d72  6858e1ac00           push 0xace158
// 00859d77  64a100000000         mov eax, dword ptr fs:[0]
// 00859d7d  50                   push eax
// 00859d7e  64892500000000       mov dword ptr fs:[0], esp
// 00859d85  51                   push ecx
// 00859d86  56                   push esi
// 00859d87  8bf1                 mov esi, ecx
// 00859d89  89742404             mov dword ptr [esp + 4], esi
// 00859d8d  e80e361200           call 0x97d3a0
// 00859d92  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00859d9a  85f6                 test esi, esi
// 00859d9c  7405                 je 0x859da3
// 00859d9e  8d4614               lea eax, [esi + 0x14]
// 00859da1  eb02                 jmp 0x859da5
// 00859da3  33c0                 xor eax, eax
// 00859da5  50                   push eax
// 00859da6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00859daa  6a00                 push 0
// 00859dac  6a00                 push 0
// 00859dae  6a00                 push 0
// 00859db0  50                   push eax
// 00859db1  8bce                 mov ecx, esi
// 00859db3  e838381200           call 0x97d5f0
// 00859db8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00859dbc  8bc6                 mov eax, esi
// 00859dbe  5e                   pop esi
// 00859dbf  64890d00000000       mov dword ptr fs:[0], ecx
// 00859dc6  83c410               add esp, 0x10
// 00859dc9  c20400               ret 4
// copied from an identical function in another client (function ??0?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@QAE@ABUzlib_params@23@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp