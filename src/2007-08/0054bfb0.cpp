// roc 2007-08 0054bfb0  unit: boost::iostreams::DUinput::V?$basic_null_device::?$stream_buffer  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054bfb0
//
// 0054bfb0  53                   push ebx
// 0054bfb1  56                   push esi
// 0054bfb2  8bf1                 mov esi, ecx
// 0054bfb4  8b4654               mov eax, dword ptr [esi + 0x54]
// 0054bfb7  c1e803               shr eax, 3
// 0054bfba  a801                 test al, 1
// 0054bfbc  7411                 je 0x54bfcf
// 0054bfbe  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0054bfc1  833900               cmp dword ptr [ecx], 0
// 0054bfc4  7509                 jne 0x54bfcf
// 0054bfc6  8b16                 mov edx, dword ptr [esi]
// 0054bfc8  8b4258               mov eax, dword ptr [edx + 0x58]
// 0054bfcb  8bce                 mov ecx, esi
// 0054bfcd  ffd0                 call eax
// 0054bfcf  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0054bfd3  83fbff               cmp ebx, -1
// 0054bfd6  747d                 je 0x54c055
// 0054bfd8  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0054bfdb  c1e903               shr ecx, 3
// 0054bfde  f6c101               test cl, 1
// 0054bfe1  745e                 je 0x54c041
// 0054bfe3  8b5634               mov edx, dword ptr [esi + 0x34]
// 0054bfe6  8b4624               mov eax, dword ptr [esi + 0x24]
// 0054bfe9  8b00                 mov eax, dword ptr [eax]
// 0054bfeb  8b12                 mov edx, dword ptr [edx]
// 0054bfed  8d0c10               lea ecx, [eax + edx]
// 0054bff0  3bc1                 cmp eax, ecx
// 0054bff2  7533                 jne 0x54c027
// 0054bff4  8b4614               mov eax, dword ptr [esi + 0x14]
// 0054bff7  8b08                 mov ecx, dword ptr [eax]
// 0054bff9  8b4624               mov eax, dword ptr [esi + 0x24]
// 0054bffc  8b00                 mov eax, dword ptr [eax]
// 0054bffe  2bc1                 sub eax, ecx
// 0054c000  85c0                 test eax, eax
// 0054c002  7e0f                 jle 0x54c013
// 0054c004  50                   push eax
// 0054c005  51                   push ecx
// 0054c006  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0054c009  51                   push ecx
// 0054c00a  83c640               add esi, 0x40
// 0054c00d  56                   push esi
// 0054c00e  e82df7ffff           call 0x54b740
// 0054c013  8b4624               mov eax, dword ptr [esi + 0x24]
// 0054c016  8b00                 mov eax, dword ptr [eax]
// 0054c018  8d0c10               lea ecx, [eax + edx]
// 0054c01b  3bc1                 cmp eax, ecx
// 0054c01d  7508                 jne 0x54c027
// 0054c01f  5e                   pop esi
// 0054c020  83c8ff               or eax, 0xffffffff
// 0054c023  5b                   pop ebx
// 0054c024  c20400               ret 4
// 0054c027  8b5624               mov edx, dword ptr [esi + 0x24]
// 0054c02a  8b02                 mov eax, dword ptr [edx]
// 0054c02c  8818                 mov byte ptr [eax], bl
// 0054c02e  8b4634               mov eax, dword ptr [esi + 0x34]
// 0054c031  8300ff               add dword ptr [eax], -1
// 0054c034  8b7624               mov esi, dword ptr [esi + 0x24]
// 0054c037  830601               add dword ptr [esi], 1
// 0054c03a  5e                   pop esi
// 0054c03b  8bc3                 mov eax, ebx
// 0054c03d  5b                   pop ebx
// 0054c03e  c20400               ret 4
// 0054c041  8b5644               mov edx, dword ptr [esi + 0x44]
// 0054c044  6a01                 push 1
// 0054c046  8d4c2410             lea ecx, [esp + 0x10]
// 0054c04a  51                   push ecx
// 0054c04b  52                   push edx
// 0054c04c  83c640               add esi, 0x40
// 0054c04f  56                   push esi
// 0054c050  e8ebf6ffff           call 0x54b740
// 0054c055  5e                   pop esi
// 0054c056  33c0                 xor eax, eax
// 0054c058  5b                   pop ebx
// 0054c059  c20400               ret 4
// copied from an identical function in another client (function ?overflow@?$indirect_streambuf@U?$basic_null_source@D@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_e8ec57138b7c1e28.cpp