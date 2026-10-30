// roc 2012-06 008599d0  unit: boost::iostreams::Uinput::V?$chain::?$chain_client  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008599d0
//
// 008599d0  6aff                 push -1
// 008599d2  6858e1ac00           push 0xace158
// 008599d7  64a100000000         mov eax, dword ptr fs:[0]
// 008599dd  50                   push eax
// 008599de  64892500000000       mov dword ptr fs:[0], esp
// 008599e5  51                   push ecx
// 008599e6  56                   push esi
// 008599e7  8bf1                 mov esi, ecx
// 008599e9  89742404             mov dword ptr [esp + 4], esi
// 008599ed  e8ae391200           call 0x97d3a0
// 008599f2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008599fa  85f6                 test esi, esi
// 008599fc  7405                 je 0x859a03
// 008599fe  8d4614               lea eax, [esi + 0x14]
// 00859a01  eb02                 jmp 0x859a05
// 00859a03  33c0                 xor eax, eax
// 00859a05  50                   push eax
// 00859a06  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00859a0a  6a00                 push 0
// 00859a0c  6a00                 push 0
// 00859a0e  6a01                 push 1
// 00859a10  50                   push eax
// 00859a11  8bce                 mov ecx, esi
// 00859a13  e8d83b1200           call 0x97d5f0
// 00859a18  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00859a1c  8bc6                 mov eax, esi
// 00859a1e  5e                   pop esi
// 00859a1f  64890d00000000       mov dword ptr fs:[0], ecx
// 00859a26  83c410               add esp, 0x10
// 00859a29  c20400               ret 4
// copied from an identical function in another client (function ??0?$zlib_compressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@QAE@ABUzlib_params@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp