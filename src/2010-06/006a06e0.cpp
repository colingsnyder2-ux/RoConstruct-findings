// roc 2010-06 006a06e0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a06e0
//
// 006a06e0  6aff                 push -1
// 006a06e2  6858a29900           push 0x99a258
// 006a06e7  64a100000000         mov eax, dword ptr fs:[0]
// 006a06ed  50                   push eax
// 006a06ee  64892500000000       mov dword ptr fs:[0], esp
// 006a06f5  51                   push ecx
// 006a06f6  56                   push esi
// 006a06f7  8bf1                 mov esi, ecx
// 006a06f9  89742404             mov dword ptr [esp + 4], esi
// 006a06fd  e88e190f00           call 0x792090
// 006a0702  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006a070a  85f6                 test esi, esi
// 006a070c  7405                 je 0x6a0713
// 006a070e  8d4614               lea eax, [esi + 0x14]
// 006a0711  eb02                 jmp 0x6a0715
// 006a0713  33c0                 xor eax, eax
// 006a0715  50                   push eax
// 006a0716  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006a071a  6a00                 push 0
// 006a071c  6a00                 push 0
// 006a071e  6a01                 push 1
// 006a0720  50                   push eax
// 006a0721  8bce                 mov ecx, esi
// 006a0723  e8b81a0f00           call 0x7921e0
// 006a0728  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a072c  8bc6                 mov eax, esi
// 006a072e  5e                   pop esi
// 006a072f  64890d00000000       mov dword ptr fs:[0], ecx
// 006a0736  83c410               add esp, 0x10
// 006a0739  c20400               ret 4
// copied from an identical function in another client (function ??0?$zlib_compressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@QAE@ABUzlib_params@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp