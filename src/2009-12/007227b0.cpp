// roc 2009-12 007227b0  unit: UString_sink::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007227b0
//
// 007227b0  6aff                 push -1
// 007227b2  68d8c59300           push 0x93c5d8
// 007227b7  64a100000000         mov eax, dword ptr fs:[0]
// 007227bd  50                   push eax
// 007227be  64892500000000       mov dword ptr fs:[0], esp
// 007227c5  51                   push ecx
// 007227c6  56                   push esi
// 007227c7  8bf1                 mov esi, ecx
// 007227c9  89742404             mov dword ptr [esp + 4], esi
// 007227cd  e8fec20b00           call 0x7dead0
// 007227d2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007227da  85f6                 test esi, esi
// 007227dc  7405                 je 0x7227e3
// 007227de  8d4614               lea eax, [esi + 0x14]
// 007227e1  eb02                 jmp 0x7227e5
// 007227e3  33c0                 xor eax, eax
// 007227e5  50                   push eax
// 007227e6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007227ea  6a00                 push 0
// 007227ec  6a00                 push 0
// 007227ee  6a00                 push 0
// 007227f0  50                   push eax
// 007227f1  8bce                 mov ecx, esi
// 007227f3  e828c40b00           call 0x7dec20
// 007227f8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007227fc  8bc6                 mov eax, esi
// 007227fe  5e                   pop esi
// 007227ff  64890d00000000       mov dword ptr fs:[0], ecx
// 00722806  83c410               add esp, 0x10
// 00722809  c20400               ret 4
// copied from an identical function in another client (function ??0?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@QAE@ABUzlib_params@23@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp