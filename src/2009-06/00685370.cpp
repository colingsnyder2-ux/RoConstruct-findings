// roc 2009-06 00685370  unit: boost::iostreams::Uinput::V?$chain::?$chain_client  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00685370
//
// 00685370  6aff                 push -1
// 00685372  6878ef8600           push 0x86ef78
// 00685377  64a100000000         mov eax, dword ptr fs:[0]
// 0068537d  50                   push eax
// 0068537e  64892500000000       mov dword ptr fs:[0], esp
// 00685385  51                   push ecx
// 00685386  56                   push esi
// 00685387  8bf1                 mov esi, ecx
// 00685389  89742404             mov dword ptr [esp + 4], esi
// 0068538d  e8ceb10800           call 0x710560
// 00685392  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0068539a  85f6                 test esi, esi
// 0068539c  7405                 je 0x6853a3
// 0068539e  8d4614               lea eax, [esi + 0x14]
// 006853a1  eb02                 jmp 0x6853a5
// 006853a3  33c0                 xor eax, eax
// 006853a5  50                   push eax
// 006853a6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006853aa  6a00                 push 0
// 006853ac  6a00                 push 0
// 006853ae  6a00                 push 0
// 006853b0  50                   push eax
// 006853b1  8bce                 mov ecx, esi
// 006853b3  e8f8b20800           call 0x7106b0
// 006853b8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006853bc  8bc6                 mov eax, esi
// 006853be  5e                   pop esi
// 006853bf  64890d00000000       mov dword ptr fs:[0], ecx
// 006853c6  83c410               add esp, 0x10
// 006853c9  c20400               ret 4
// copied from an identical function in another client (function ??0?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@QAE@ABUzlib_params@23@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp