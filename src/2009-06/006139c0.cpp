// roc 2009-06 006139c0  unit: boost::iostreams::Uoutput::V?$chain::?$chain_client  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006139c0
//
// 006139c0  6aff                 push -1
// 006139c2  6878ef8600           push 0x86ef78
// 006139c7  64a100000000         mov eax, dword ptr fs:[0]
// 006139cd  50                   push eax
// 006139ce  64892500000000       mov dword ptr fs:[0], esp
// 006139d5  51                   push ecx
// 006139d6  56                   push esi
// 006139d7  8bf1                 mov esi, ecx
// 006139d9  89742404             mov dword ptr [esp + 4], esi
// 006139dd  e87ecb0f00           call 0x710560
// 006139e2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006139ea  85f6                 test esi, esi
// 006139ec  7405                 je 0x6139f3
// 006139ee  8d4614               lea eax, [esi + 0x14]
// 006139f1  eb02                 jmp 0x6139f5
// 006139f3  33c0                 xor eax, eax
// 006139f5  50                   push eax
// 006139f6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006139fa  6a00                 push 0
// 006139fc  6a00                 push 0
// 006139fe  6a01                 push 1
// 00613a00  50                   push eax
// 00613a01  8bce                 mov ecx, esi
// 00613a03  e8a8cc0f00           call 0x7106b0
// 00613a08  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00613a0c  8bc6                 mov eax, esi
// 00613a0e  5e                   pop esi
// 00613a0f  64890d00000000       mov dword ptr fs:[0], ecx
// 00613a16  83c410               add esp, 0x10
// 00613a19  c20400               ret 4
// copied from an identical function in another client (function ??0?$zlib_compressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@QAE@ABUzlib_params@23@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp