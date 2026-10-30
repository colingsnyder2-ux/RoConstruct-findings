// roc 2007-08 0054e350  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054e350
//
// 0054e350  53                   push ebx
// 0054e351  56                   push esi
// 0054e352  8bf1                 mov esi, ecx
// 0054e354  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 0054e35a  c1e803               shr eax, 3
// 0054e35d  a801                 test al, 1
// 0054e35f  7411                 je 0x54e372
// 0054e361  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0054e364  833900               cmp dword ptr [ecx], 0
// 0054e367  7509                 jne 0x54e372
// 0054e369  8b16                 mov edx, dword ptr [esi]
// 0054e36b  8b4258               mov eax, dword ptr [edx + 0x58]
// 0054e36e  8bce                 mov ecx, esi
// 0054e370  ffd0                 call eax
// 0054e372  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0054e376  83fbff               cmp ebx, -1
// 0054e379  0f8486000000         je 0x54e405
// 0054e37f  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 0054e385  c1e903               shr ecx, 3
// 0054e388  f6c101               test cl, 1
// 0054e38b  7461                 je 0x54e3ee
// 0054e38d  8b5634               mov edx, dword ptr [esi + 0x34]
// 0054e390  8b4624               mov eax, dword ptr [esi + 0x24]
// 0054e393  8b00                 mov eax, dword ptr [eax]
// 0054e395  8b12                 mov edx, dword ptr [edx]
// 0054e397  8d0c10               lea ecx, [eax + edx]
// 0054e39a  3bc1                 cmp eax, ecx
// 0054e39c  7536                 jne 0x54e3d4
// 0054e39e  8b4614               mov eax, dword ptr [esi + 0x14]
// 0054e3a1  8b08                 mov ecx, dword ptr [eax]
// 0054e3a3  8b4624               mov eax, dword ptr [esi + 0x24]
// 0054e3a6  8b00                 mov eax, dword ptr [eax]
// 0054e3a8  2bc1                 sub eax, ecx
// 0054e3aa  85c0                 test eax, eax
// 0054e3ac  7e12                 jle 0x54e3c0
// 0054e3ae  50                   push eax
// 0054e3af  51                   push ecx
// 0054e3b0  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 0054e3b6  51                   push ecx
// 0054e3b7  83c640               add esi, 0x40
// 0054e3ba  56                   push esi
// 0054e3bb  e880d3ffff           call 0x54b740
// 0054e3c0  8b4624               mov eax, dword ptr [esi + 0x24]
// 0054e3c3  8b00                 mov eax, dword ptr [eax]
// 0054e3c5  8d0c10               lea ecx, [eax + edx]
// 0054e3c8  3bc1                 cmp eax, ecx
// 0054e3ca  7508                 jne 0x54e3d4
// 0054e3cc  5e                   pop esi
// 0054e3cd  83c8ff               or eax, 0xffffffff
// 0054e3d0  5b                   pop ebx
// 0054e3d1  c20400               ret 4
// 0054e3d4  8b5624               mov edx, dword ptr [esi + 0x24]
// 0054e3d7  8b02                 mov eax, dword ptr [edx]
// 0054e3d9  8818                 mov byte ptr [eax], bl
// 0054e3db  8b4634               mov eax, dword ptr [esi + 0x34]
// 0054e3de  8300ff               add dword ptr [eax], -1
// 0054e3e1  8b7624               mov esi, dword ptr [esi + 0x24]
// 0054e3e4  830601               add dword ptr [esi], 1
// 0054e3e7  5e                   pop esi
// 0054e3e8  8bc3                 mov eax, ebx
// 0054e3ea  5b                   pop ebx
// 0054e3eb  c20400               ret 4
// 0054e3ee  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 0054e3f4  6a01                 push 1
// 0054e3f6  8d4c2410             lea ecx, [esp + 0x10]
// 0054e3fa  51                   push ecx
// 0054e3fb  52                   push edx
// 0054e3fc  83c640               add esi, 0x40
// 0054e3ff  56                   push esi
// 0054e400  e83bd3ffff           call 0x54b740
// 0054e405  5e                   pop esi
// 0054e406  33c0                 xor eax, eax
// 0054e408  5b                   pop ebx
// 0054e409  c20400               ret 4
// copied from an identical function in another client (function ?overflow@?$indirect_streambuf@V?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_e8ec57138b7c1e28.cpp