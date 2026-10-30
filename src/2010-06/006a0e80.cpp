// roc 2010-06 006a0e80  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a0e80
//
// 006a0e80  6aff                 push -1
// 006a0e82  6823279a00           push 0x9a2723
// 006a0e87  64a100000000         mov eax, dword ptr fs:[0]
// 006a0e8d  50                   push eax
// 006a0e8e  64892500000000       mov dword ptr fs:[0], esp
// 006a0e95  83ec08               sub esp, 8
// 006a0e98  56                   push esi
// 006a0e99  8bf1                 mov esi, ecx
// 006a0e9b  89742408             mov dword ptr [esp + 8], esi
// 006a0e9f  8b4648               mov eax, dword ptr [esi + 0x48]
// 006a0ea2  c744241401000000     mov dword ptr [esp + 0x14], 1
// 006a0eaa  85c0                 test eax, eax
// 006a0eac  740f                 je 0x6a0ebd
// 006a0eae  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 006a0eb1  51                   push ecx
// 006a0eb2  50                   push eax
// 006a0eb3  8d4c240f             lea ecx, [esp + 0xf]
// 006a0eb7  ff150ca59e00         call dword ptr [0x9ea50c]
// 006a0ebd  807e4100             cmp byte ptr [esi + 0x41], 0
// 006a0ec1  7404                 je 0x6a0ec7
// 006a0ec3  c6464100             mov byte ptr [esi + 0x41], 0
// 006a0ec7  8bce                 mov ecx, esi
// 006a0ec9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006a0ed1  ff1528a69e00         call dword ptr [0x9ea628]
// 006a0ed7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a0edb  5e                   pop esi
// 006a0edc  64890d00000000       mov dword ptr fs:[0], ecx
// 006a0ee3  83c414               add esp, 0x14
// 006a0ee6  c3                   ret 
// copied from an identical function in another client (function ??1?$indirect_streambuf@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp