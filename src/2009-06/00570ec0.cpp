// roc 2009-06 00570ec0  unit: G3D::Log  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00570ec0
//
// 00570ec0  8b442404             mov eax, dword ptr [esp + 4]
// 00570ec4  53                   push ebx
// 00570ec5  55                   push ebp
// 00570ec6  56                   push esi
// 00570ec7  8bf1                 mov esi, ecx
// 00570ec9  8b5e04               mov ebx, dword ptr [esi + 4]
// 00570ecc  894604               mov dword ptr [esi + 4], eax
// 00570ecf  f605f029a40001       test byte ptr [0xa429f0], 1
// 00570ed6  57                   push edi
// 00570ed7  7514                 jne 0x570eed
// 00570ed9  830df029a40001       or dword ptr [0xa429f0], 1
// 00570ee0  bd0a000000           mov ebp, 0xa
// 00570ee5  892dec29a400         mov dword ptr [0xa429ec], ebp
// 00570eeb  eb06                 jmp 0x570ef3
// 00570eed  8b2dec29a400         mov ebp, dword ptr [0xa429ec]
// 00570ef3  8b7e04               mov edi, dword ptr [esi + 4]
// 00570ef6  8b4e08               mov ecx, dword ptr [esi + 8]
// 00570ef9  3bf9                 cmp edi, ecx
// 00570efb  7e69                 jle 0x570f66
// 00570efd  85c9                 test ecx, ecx
// 00570eff  7509                 jne 0x570f0a
// 00570f01  894608               mov dword ptr [esi + 8], eax
// 00570f04  53                   push ebx
// 00570f05  e980000000           jmp 0x570f8a
// 00570f0a  3bfd                 cmp edi, ebp
// 00570f0c  7d06                 jge 0x570f14
// 00570f0e  896e08               mov dword ptr [esi + 8], ebp
// 00570f11  53                   push ebx
// 00570f12  eb76                 jmp 0x570f8a
// 00570f14  d90548e88b00         fld dword ptr [0x8be848]
// 00570f1a  8bc1                 mov eax, ecx
// 00570f1c  03c0                 add eax, eax
// 00570f1e  03c0                 add eax, eax
// 00570f20  3d801a0600           cmp eax, 0x61a80
// 00570f25  760a                 jbe 0x570f31
// 00570f27  ddd8                 fstp st(0)
// 00570f29  d905a0ef8b00         fld dword ptr [0x8befa0]
// 00570f2f  eb0f                 jmp 0x570f40
// 00570f31  3d00fa0000           cmp eax, 0xfa00
// 00570f36  7608                 jbe 0x570f40
// 00570f38  ddd8                 fstp st(0)
// 00570f3a  d90544d08b00         fld dword ptr [0x8bd044]
// 00570f40  8be9                 mov ebp, ecx
// 00570f42  896c2418             mov dword ptr [esp + 0x18], ebp
// 00570f46  da4c2418             fimul dword ptr [esp + 0x18]
// 00570f4a  e8718f1a00           call 0x719ec0
// 00570f4f  2bc5                 sub eax, ebp
// 00570f51  03c7                 add eax, edi
// 00570f53  894608               mov dword ptr [esi + 8], eax
// 00570f56  8b0dec29a400         mov ecx, dword ptr [0xa429ec]
// 00570f5c  3bc1                 cmp eax, ecx
// 00570f5e  7d03                 jge 0x570f63
// 00570f60  894e08               mov dword ptr [esi + 8], ecx
// 00570f63  53                   push ebx
// 00570f64  eb24                 jmp 0x570f8a
// 00570f66  b856555555           mov eax, 0x55555556
// 00570f6b  f7e9                 imul ecx
// 00570f6d  8bc2                 mov eax, edx
// 00570f6f  c1e81f               shr eax, 0x1f
// 00570f72  03c2                 add eax, edx
// 00570f74  3bf8                 cmp edi, eax
// 00570f76  7f19                 jg 0x570f91
// 00570f78  807c241800           cmp byte ptr [esp + 0x18], 0
// 00570f7d  7412                 je 0x570f91
// 00570f7f  3bfd                 cmp edi, ebp
// 00570f81  7e0e                 jle 0x570f91
// 00570f83  3bfb                 cmp edi, ebx
// 00570f85  7c02                 jl 0x570f89
// 00570f87  8bfb                 mov edi, ebx
// 00570f89  57                   push edi
// 00570f8a  8bce                 mov ecx, esi
// 00570f8c  e80f4e1000           call 0x675da0
// 00570f91  3b5e04               cmp ebx, dword ptr [esi + 4]
// 00570f94  8bcb                 mov ecx, ebx
// 00570f96  7d1e                 jge 0x570fb6
// 00570f98  8b16                 mov edx, dword ptr [esi]
// 00570f9a  8d048a               lea eax, [edx + ecx*4]
// 00570f9d  85c0                 test eax, eax
// 00570f9f  740f                 je 0x570fb0
// 00570fa1  c60000               mov byte ptr [eax], 0
// 00570fa4  c6400100             mov byte ptr [eax + 1], 0
// 00570fa8  c6400200             mov byte ptr [eax + 2], 0
// 00570fac  c6400300             mov byte ptr [eax + 3], 0
// 00570fb0  41                   inc ecx
// 00570fb1  3b4e04               cmp ecx, dword ptr [esi + 4]
// 00570fb4  7ce2                 jl 0x570f98
// 00570fb6  5f                   pop edi
// 00570fb7  5e                   pop esi
// 00570fb8  5d                   pop ebp
// 00570fb9  5b                   pop ebx
// 00570fba  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\GImage_bmp.cpp (function ?resize@?$Array@VColor4uint8@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage_bmp.cpp
