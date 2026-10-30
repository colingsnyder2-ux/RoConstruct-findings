// roc 2009-12 00722950  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00722950
//
// 00722950  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00722953  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00722956  8b12                 mov edx, dword ptr [edx]
// 00722958  83ec28               sub esp, 0x28
// 0072295b  3b10                 cmp edx, dword ptr [eax]
// 0072295d  7428                 je 0x722987
// 0072295f  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00722962  ff00                 inc dword ptr [eax]
// 00722964  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00722967  ff08                 dec dword ptr [eax]
// 00722969  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0072296d  83f8ff               cmp eax, -1
// 00722970  740d                 je 0x72297f
// 00722972  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00722975  8b11                 mov edx, dword ptr [ecx]
// 00722977  8802                 mov byte ptr [edx], al
// 00722979  83c428               add esp, 0x28
// 0072297c  c20400               ret 4
// 0072297f  33c0                 xor eax, eax
// 00722981  83c428               add esp, 0x28
// 00722984  c20400               ret 4
// 00722987  8d0424               lea eax, [esp]
// 0072298a  50                   push eax
// 0072298b  e8e0fbffff           call 0x722570
// 00722990  83c404               add esp, 4
// 00722993  68e87cac00           push 0xac7ce8
// 00722998  8d4c2404             lea ecx, [esp + 4]
// 0072299c  51                   push ecx
// 0072299d  e8d61e0d00           call 0x7f4878
// copied from an identical function in another client (function ?pbackfail@?$indirect_streambuf@V?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@MAEHH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp