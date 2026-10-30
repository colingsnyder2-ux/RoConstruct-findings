// roc 2009-12 00722240  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00722240
//
// 00722240  56                   push esi
// 00722241  57                   push edi
// 00722242  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00722246  8bf1                 mov esi, ecx
// 00722248  83ffff               cmp edi, -1
// 0072224b  7507                 jne 0x722254
// 0072224d  bf00100000           mov edi, 0x1000
// 00722252  eb04                 jmp 0x722258
// 00722254  85ff                 test edi, edi
// 00722256  7409                 je 0x722261
// 00722258  57                   push edi
// 00722259  8d4e48               lea ecx, [esi + 0x48]
// 0072225c  e84fffffff           call 0x7221b0
// 00722261  8b06                 mov eax, dword ptr [esi]
// 00722263  8b5058               mov edx, dword ptr [eax + 0x58]
// 00722266  8bce                 mov ecx, esi
// 00722268  ffd2                 call edx
// 0072226a  807e4100             cmp byte ptr [esi + 0x41], 0
// 0072226e  7404                 je 0x722274
// 00722270  c6464100             mov byte ptr [esi + 0x41], 0
// 00722274  8a442410             mov al, byte ptr [esp + 0x10]
// 00722278  b901000000           mov ecx, 1
// 0072227d  884640               mov byte ptr [esi + 0x40], al
// 00722280  884e41               mov byte ptr [esi + 0x41], cl
// 00722283  094e54               or dword ptr [esi + 0x54], ecx
// 00722286  3bf9                 cmp edi, ecx
// 00722288  8b4654               mov eax, dword ptr [esi + 0x54]
// 0072228b  7e06                 jle 0x722293
// 0072228d  83c802               or eax, 2
// 00722290  894654               mov dword ptr [esi + 0x54], eax
// 00722293  83663cfe             and dword ptr [esi + 0x3c], 0xfffffffe
// 00722297  5f                   pop edi
// 00722298  5e                   pop esi
// 00722299  c20c00               ret 0xc
// copied from an identical function in another client (function ?open@?$indirect_streambuf@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@QAEXABV?$basic_null_device@DUoutput@iostreams@boost@@@34@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_40_0 client-rtti-20d7263f39baa3c2210d.cpp