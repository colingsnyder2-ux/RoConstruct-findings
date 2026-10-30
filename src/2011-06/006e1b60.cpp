// roc 2011-06 006e1b60  unit: UString_sink::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e1b60
//
// 006e1b60  6aff                 push -1
// 006e1b62  68583d9f00           push 0x9f3d58
// 006e1b67  64a100000000         mov eax, dword ptr fs:[0]
// 006e1b6d  50                   push eax
// 006e1b6e  64892500000000       mov dword ptr fs:[0], esp
// 006e1b75  51                   push ecx
// 006e1b76  56                   push esi
// 006e1b77  8bf1                 mov esi, ecx
// 006e1b79  89742404             mov dword ptr [esp + 4], esi
// 006e1b7d  e8fe041200           call 0x802080
// 006e1b82  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006e1b8a  85f6                 test esi, esi
// 006e1b8c  7405                 je 0x6e1b93
// 006e1b8e  8d4614               lea eax, [esi + 0x14]
// 006e1b91  eb02                 jmp 0x6e1b95
// 006e1b93  33c0                 xor eax, eax
// 006e1b95  50                   push eax
// 006e1b96  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006e1b9a  6a00                 push 0
// 006e1b9c  6a00                 push 0
// 006e1b9e  6a00                 push 0
// 006e1ba0  50                   push eax
// 006e1ba1  8bce                 mov ecx, esi
// 006e1ba3  e828071200           call 0x8022d0
// 006e1ba8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006e1bac  8bc6                 mov eax, esi
// 006e1bae  5e                   pop esi
// 006e1baf  64890d00000000       mov dword ptr fs:[0], ecx
// 006e1bb6  83c410               add esp, 0x10
// 006e1bb9  c20400               ret 4
// copied from an identical function in another client (function ??0?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@QAE@ABUzlib_params@23@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp