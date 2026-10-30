// roc 2012-06 0085a400  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085a400
//
// 0085a400  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0085a403  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0085a406  8b12                 mov edx, dword ptr [edx]
// 0085a408  83ec28               sub esp, 0x28
// 0085a40b  3b10                 cmp edx, dword ptr [eax]
// 0085a40d  7428                 je 0x85a437
// 0085a40f  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0085a412  ff00                 inc dword ptr [eax]
// 0085a414  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0085a417  ff08                 dec dword ptr [eax]
// 0085a419  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0085a41d  83f8ff               cmp eax, -1
// 0085a420  740d                 je 0x85a42f
// 0085a422  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0085a425  8b11                 mov edx, dword ptr [ecx]
// 0085a427  8802                 mov byte ptr [edx], al
// 0085a429  83c428               add esp, 0x28
// 0085a42c  c20400               ret 4
// 0085a42f  33c0                 xor eax, eax
// 0085a431  83c428               add esp, 0x28
// 0085a434  c20400               ret 4
// 0085a437  8d0424               lea eax, [esp]
// 0085a43a  50                   push eax
// 0085a43b  e8f0f6ffff           call 0x859b30
// 0085a440  83c404               add esp, 4
// 0085a443  68e01dd200           push 0xd21de0
// 0085a448  8d4c2404             lea ecx, [esp + 4]
// 0085a44c  51                   push ecx
// 0085a44d  e8f28c1200           call 0x983144
// copied from an identical function in another client (function ?pbackfail@?$indirect_streambuf@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp