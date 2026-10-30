// roc 2007-08 0054e090  unit: std::D::V?$allocator::U?$basic_zlib_decompressor::?$stream_buffer  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054e090
//
// 0054e090  6aff                 push -1
// 0054e092  6861277500           push 0x752761
// 0054e097  64a100000000         mov eax, dword ptr fs:[0]
// 0054e09d  50                   push eax
// 0054e09e  64892500000000       mov dword ptr fs:[0], esp
// 0054e0a5  83ec20               sub esp, 0x20
// 0054e0a8  56                   push esi
// 0054e0a9  8bf1                 mov esi, ecx
// 0054e0ab  68fc7a7a00           push 0x7a7afc
// 0054e0b0  8d4c240c             lea ecx, [esp + 0xc]
// 0054e0b4  89742408             mov dword ptr [esp + 8], esi
// 0054e0b8  ff1598e67700         call dword ptr [0x77e698]
// 0054e0be  8d442408             lea eax, [esp + 8]
// 0054e0c2  50                   push eax
// 0054e0c3  8bce                 mov ecx, esi
// 0054e0c5  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0054e0cd  e8ee4cecff           call 0x412dc0
// 0054e0d2  c7063c787a00         mov dword ptr [esi], 0x7a783c
// 0054e0d8  8d4c2408             lea ecx, [esp + 8]
// 0054e0dc  c644242c02           mov byte ptr [esp + 0x2c], 2
// 0054e0e1  ff15ace67700         call dword ptr [0x77e6ac]
// 0054e0e7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0054e0eb  894e28               mov dword ptr [esi + 0x28], ecx
// 0054e0ee  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054e0f2  c706f47a7a00         mov dword ptr [esi], 0x7a7af4
// 0054e0f8  8b1580a57b00         mov edx, dword ptr [0x7ba580]
// 0054e0fe  89562c               mov dword ptr [esi + 0x2c], edx
// 0054e101  8bc6                 mov eax, esi
// 0054e103  5e                   pop esi
// 0054e104  64890d00000000       mov dword ptr fs:[0], ecx
// 0054e10b  83c42c               add esp, 0x2c
// 0054e10e  c20400               ret 4
// copied from an identical function in another client (function ??0gzip_error@iostreams@boost@@QAE@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp