// roc 2011-06 006e2570  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e2570
//
// 006e2570  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006e2573  8b4110               mov eax, dword ptr [ecx + 0x10]
// 006e2576  8b12                 mov edx, dword ptr [edx]
// 006e2578  83ec28               sub esp, 0x28
// 006e257b  3b10                 cmp edx, dword ptr [eax]
// 006e257d  7428                 je 0x6e25a7
// 006e257f  8b4130               mov eax, dword ptr [ecx + 0x30]
// 006e2582  ff00                 inc dword ptr [eax]
// 006e2584  8b4120               mov eax, dword ptr [ecx + 0x20]
// 006e2587  ff08                 dec dword ptr [eax]
// 006e2589  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006e258d  83f8ff               cmp eax, -1
// 006e2590  740d                 je 0x6e259f
// 006e2592  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 006e2595  8b11                 mov edx, dword ptr [ecx]
// 006e2597  8802                 mov byte ptr [edx], al
// 006e2599  83c428               add esp, 0x28
// 006e259c  c20400               ret 4
// 006e259f  33c0                 xor eax, eax
// 006e25a1  83c428               add esp, 0x28
// 006e25a4  c20400               ret 4
// 006e25a7  8d0424               lea eax, [esp]
// 006e25aa  50                   push eax
// 006e25ab  e8b0f3ffff           call 0x6e1960
// 006e25b0  83c404               add esp, 4
// 006e25b3  68f8fbbb00           push 0xbbfbf8
// 006e25b8  8d4c2404             lea ecx, [esp + 4]
// 006e25bc  51                   push ecx
// 006e25bd  e8ea8a1200           call 0x80b0ac
// copied from an identical function in another client (function ?pbackfail@?$indirect_streambuf@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp