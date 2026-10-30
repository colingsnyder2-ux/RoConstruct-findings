// roc 2009-12 007260e0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007260e0
//
// 007260e0  6aff                 push -1
// 007260e2  6801759200           push 0x927501
// 007260e7  64a100000000         mov eax, dword ptr fs:[0]
// 007260ed  50                   push eax
// 007260ee  64892500000000       mov dword ptr fs:[0], esp
// 007260f5  83ec20               sub esp, 0x20
// 007260f8  56                   push esi
// 007260f9  8bf1                 mov esi, ecx
// 007260fb  68dcff9d00           push 0x9dffdc
// 00726100  8d4c240c             lea ecx, [esp + 0xc]
// 00726104  89742408             mov dword ptr [esp + 8], esi
// 00726108  ff15f4b69800         call dword ptr [0x98b6f4]
// 0072610e  8d442408             lea eax, [esp + 8]
// 00726112  50                   push eax
// 00726113  8bce                 mov ecx, esi
// 00726115  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0072611d  e86e32ceff           call 0x409390
// 00726122  c7061cfd9d00         mov dword ptr [esi], 0x9dfd1c
// 00726128  8d4c2408             lea ecx, [esp + 8]
// 0072612c  c644242c02           mov byte ptr [esp + 0x2c], 2
// 00726131  ff15e4b69800         call dword ptr [0x98b6e4]
// 00726137  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0072613b  c706d4ff9d00         mov dword ptr [esi], 0x9dffd4
// 00726141  c7462801000000       mov dword ptr [esi + 0x28], 1
// 00726148  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0072614b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0072614f  89562c               mov dword ptr [esi + 0x2c], edx
// 00726152  8bc6                 mov eax, esi
// 00726154  5e                   pop esi
// 00726155  64890d00000000       mov dword ptr fs:[0], ecx
// 0072615c  83c42c               add esp, 0x2c
// 0072615f  c20400               ret 4
// copied from an identical function in another client (function ??0gzip_error@iostreams@boost@@QAE@ABVzlib_error@12@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp