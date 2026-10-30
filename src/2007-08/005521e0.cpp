// roc 2007-08 005521e0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005521e0
//
// 005521e0  53                   push ebx
// 005521e1  56                   push esi
// 005521e2  8bf1                 mov esi, ecx
// 005521e4  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 005521ea  c1e803               shr eax, 3
// 005521ed  a801                 test al, 1
// 005521ef  7411                 je 0x552202
// 005521f1  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 005521f4  833900               cmp dword ptr [ecx], 0
// 005521f7  7509                 jne 0x552202
// 005521f9  8b16                 mov edx, dword ptr [esi]
// 005521fb  8b4258               mov eax, dword ptr [edx + 0x58]
// 005521fe  8bce                 mov ecx, esi
// 00552200  ffd0                 call eax
// 00552202  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00552206  83fbff               cmp ebx, -1
// 00552209  747d                 je 0x552288
// 0055220b  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 00552211  c1e903               shr ecx, 3
// 00552214  f6c101               test cl, 1
// 00552217  7449                 je 0x552262
// 00552219  8b5624               mov edx, dword ptr [esi + 0x24]
// 0055221c  8b02                 mov eax, dword ptr [edx]
// 0055221e  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00552221  8b11                 mov edx, dword ptr [ecx]
// 00552223  03d0                 add edx, eax
// 00552225  3bc2                 cmp eax, edx
// 00552227  751f                 jne 0x552248
// 00552229  8bce                 mov ecx, esi
// 0055222b  e860feffff           call 0x552090
// 00552230  8b4624               mov eax, dword ptr [esi + 0x24]
// 00552233  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00552236  8b00                 mov eax, dword ptr [eax]
// 00552238  8b11                 mov edx, dword ptr [ecx]
// 0055223a  03d0                 add edx, eax
// 0055223c  3bc2                 cmp eax, edx
// 0055223e  7508                 jne 0x552248
// 00552240  5e                   pop esi
// 00552241  83c8ff               or eax, 0xffffffff
// 00552244  5b                   pop ebx
// 00552245  c20400               ret 4
// 00552248  8b4624               mov eax, dword ptr [esi + 0x24]
// 0055224b  8b08                 mov ecx, dword ptr [eax]
// 0055224d  8819                 mov byte ptr [ecx], bl
// 0055224f  8b4634               mov eax, dword ptr [esi + 0x34]
// 00552252  8300ff               add dword ptr [eax], -1
// 00552255  8b7624               mov esi, dword ptr [esi + 0x24]
// 00552258  830601               add dword ptr [esi], 1
// 0055225b  5e                   pop esi
// 0055225c  8bc3                 mov eax, ebx
// 0055225e  5b                   pop ebx
// 0055225f  c20400               ret 4
// 00552262  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 00552268  6a01                 push 1
// 0055226a  8d542410             lea edx, [esp + 0x10]
// 0055226e  52                   push edx
// 0055226f  50                   push eax
// 00552270  8d4e40               lea ecx, [esi + 0x40]
// 00552273  885c2418             mov byte ptr [esp + 0x18], bl
// 00552277  e8b4d6ffff           call 0x54f930
// 0055227c  83f801               cmp eax, 1
// 0055227f  75bf                 jne 0x552240
// 00552281  5e                   pop esi
// 00552282  8bc3                 mov eax, ebx
// 00552284  5b                   pop ebx
// 00552285  c20400               ret 4
// 00552288  5e                   pop esi
// 00552289  33c0                 xor eax, eax
// 0055228b  5b                   pop ebx
// 0055228c  c20400               ret 4
// copied from an identical function in another client (function ?overflow@?$indirect_streambuf@V?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAEHH@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_916365a4f87a380b.cpp