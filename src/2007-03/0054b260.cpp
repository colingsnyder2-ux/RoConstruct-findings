// roc 2007-03 0054b260  unit: seg_00540000  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054b260
//
// 0054b260  53                   push ebx
// 0054b261  56                   push esi
// 0054b262  8bf1                 mov esi, ecx
// 0054b264  8b4654               mov eax, dword ptr [esi + 0x54]
// 0054b267  c1e803               shr eax, 3
// 0054b26a  a801                 test al, 1
// 0054b26c  7411                 je 0x54b27f
// 0054b26e  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0054b271  833900               cmp dword ptr [ecx], 0
// 0054b274  7509                 jne 0x54b27f
// 0054b276  8b16                 mov edx, dword ptr [esi]
// 0054b278  8b4258               mov eax, dword ptr [edx + 0x58]
// 0054b27b  8bce                 mov ecx, esi
// 0054b27d  ffd0                 call eax
// 0054b27f  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0054b283  83fbff               cmp ebx, -1
// 0054b286  747d                 je 0x54b305
// 0054b288  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0054b28b  c1e903               shr ecx, 3
// 0054b28e  f6c101               test cl, 1
// 0054b291  745e                 je 0x54b2f1
// 0054b293  8b5634               mov edx, dword ptr [esi + 0x34]
// 0054b296  8b4624               mov eax, dword ptr [esi + 0x24]
// 0054b299  8b00                 mov eax, dword ptr [eax]
// 0054b29b  8b12                 mov edx, dword ptr [edx]
// 0054b29d  8d0c10               lea ecx, [eax + edx]
// 0054b2a0  3bc1                 cmp eax, ecx
// 0054b2a2  7533                 jne 0x54b2d7
// 0054b2a4  8b4614               mov eax, dword ptr [esi + 0x14]
// 0054b2a7  8b08                 mov ecx, dword ptr [eax]
// 0054b2a9  8b4624               mov eax, dword ptr [esi + 0x24]
// 0054b2ac  8b00                 mov eax, dword ptr [eax]
// 0054b2ae  2bc1                 sub eax, ecx
// 0054b2b0  85c0                 test eax, eax
// 0054b2b2  7e0f                 jle 0x54b2c3
// 0054b2b4  50                   push eax
// 0054b2b5  51                   push ecx
// 0054b2b6  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0054b2b9  51                   push ecx
// 0054b2ba  83c640               add esi, 0x40
// 0054b2bd  56                   push esi
// 0054b2be  e80df8ffff           call 0x54aad0
// 0054b2c3  8b4624               mov eax, dword ptr [esi + 0x24]
// 0054b2c6  8b00                 mov eax, dword ptr [eax]
// 0054b2c8  8d0c10               lea ecx, [eax + edx]
// 0054b2cb  3bc1                 cmp eax, ecx
// 0054b2cd  7508                 jne 0x54b2d7
// 0054b2cf  5e                   pop esi
// 0054b2d0  83c8ff               or eax, 0xffffffff
// 0054b2d3  5b                   pop ebx
// 0054b2d4  c20400               ret 4
// 0054b2d7  8b5624               mov edx, dword ptr [esi + 0x24]
// 0054b2da  8b02                 mov eax, dword ptr [edx]
// 0054b2dc  8818                 mov byte ptr [eax], bl
// 0054b2de  8b4634               mov eax, dword ptr [esi + 0x34]
// 0054b2e1  8300ff               add dword ptr [eax], -1
// 0054b2e4  8b7624               mov esi, dword ptr [esi + 0x24]
// 0054b2e7  830601               add dword ptr [esi], 1
// 0054b2ea  5e                   pop esi
// 0054b2eb  8bc3                 mov eax, ebx
// 0054b2ed  5b                   pop ebx
// 0054b2ee  c20400               ret 4
// 0054b2f1  8b5644               mov edx, dword ptr [esi + 0x44]
// 0054b2f4  6a01                 push 1
// 0054b2f6  8d4c2410             lea ecx, [esp + 0x10]
// 0054b2fa  51                   push ecx
// 0054b2fb  52                   push edx
// 0054b2fc  83c640               add esi, 0x40
// 0054b2ff  56                   push esi
// 0054b300  e8cbf7ffff           call 0x54aad0
// 0054b305  5e                   pop esi
// 0054b306  33c0                 xor eax, eax
// 0054b308  5b                   pop ebx
// 0054b309  c20400               ret 4
// copied from an identical function in another client (function ?overflow@?$indirect_streambuf@U?$basic_null_source@D@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_e8ec57138b7c1e28.cpp