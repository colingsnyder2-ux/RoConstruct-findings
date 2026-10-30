// roc 2010-06 006a0c30  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a0c30
//
// 006a0c30  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006a0c33  8b4110               mov eax, dword ptr [ecx + 0x10]
// 006a0c36  8b12                 mov edx, dword ptr [edx]
// 006a0c38  83ec28               sub esp, 0x28
// 006a0c3b  3b10                 cmp edx, dword ptr [eax]
// 006a0c3d  7428                 je 0x6a0c67
// 006a0c3f  8b4130               mov eax, dword ptr [ecx + 0x30]
// 006a0c42  ff00                 inc dword ptr [eax]
// 006a0c44  8b4120               mov eax, dword ptr [ecx + 0x20]
// 006a0c47  ff08                 dec dword ptr [eax]
// 006a0c49  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006a0c4d  83f8ff               cmp eax, -1
// 006a0c50  740d                 je 0x6a0c5f
// 006a0c52  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 006a0c55  8b11                 mov edx, dword ptr [ecx]
// 006a0c57  8802                 mov byte ptr [edx], al
// 006a0c59  83c428               add esp, 0x28
// 006a0c5c  c20400               ret 4
// 006a0c5f  33c0                 xor eax, eax
// 006a0c61  83c428               add esp, 0x28
// 006a0c64  c20400               ret 4
// 006a0c67  8d0424               lea eax, [esp]
// 006a0c6a  50                   push eax
// 006a0c6b  e8d0fbffff           call 0x6a0840
// 006a0c70  83c404               add esp, 4
// 006a0c73  68f463b300           push 0xb363f4
// 006a0c78  8d4c2404             lea ecx, [esp + 4]
// 006a0c7c  51                   push ecx
// 006a0c7d  e8307d1000           call 0x7a89b2
// copied from an identical function in another client (function ?pbackfail@?$indirect_streambuf@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp