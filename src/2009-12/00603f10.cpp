// roc 2009-12 00603f10  unit: seg_00600000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00603f10
//
// 00603f10  56                   push esi
// 00603f11  8b742408             mov esi, dword ptr [esp + 8]
// 00603f15  8b4614               mov eax, dword ptr [esi + 0x14]
// 00603f18  3dcd000000           cmp eax, 0xcd
// 00603f1d  7407                 je 0x603f26
// 00603f1f  3dce000000           cmp eax, 0xce
// 00603f24  7536                 jne 0x603f5c
// 00603f26  807e4000             cmp byte ptr [esi + 0x40], 0
// 00603f2a  7530                 jne 0x603f5c
// 00603f2c  8b4678               mov eax, dword ptr [esi + 0x78]
// 00603f2f  3b4660               cmp eax, dword ptr [esi + 0x60]
// 00603f32  7313                 jae 0x603f47
// 00603f34  8b0e                 mov ecx, dword ptr [esi]
// 00603f36  c7411443000000       mov dword ptr [ecx + 0x14], 0x43
// 00603f3d  8b16                 mov edx, dword ptr [esi]
// 00603f3f  8b02                 mov eax, dword ptr [edx]
// 00603f41  56                   push esi
// 00603f42  ffd0                 call eax
// 00603f44  83c404               add esp, 4
// 00603f47  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 00603f4d  8b5104               mov edx, dword ptr [ecx + 4]
// 00603f50  56                   push esi
// 00603f51  ffd2                 call edx
// 00603f53  c74614d2000000       mov dword ptr [esi + 0x14], 0xd2
// 00603f5a  eb2f                 jmp 0x603f8b
// 00603f5c  3dcf000000           cmp eax, 0xcf
// 00603f61  7509                 jne 0x603f6c
// 00603f63  c74614d2000000       mov dword ptr [esi + 0x14], 0xd2
// 00603f6a  eb22                 jmp 0x603f8e
// 00603f6c  3dd2000000           cmp eax, 0xd2
// 00603f71  741b                 je 0x603f8e
// 00603f73  8b06                 mov eax, dword ptr [esi]
// 00603f75  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00603f7c  8b0e                 mov ecx, dword ptr [esi]
// 00603f7e  8b5614               mov edx, dword ptr [esi + 0x14]
// 00603f81  895118               mov dword ptr [ecx + 0x18], edx
// 00603f84  8b06                 mov eax, dword ptr [esi]
// 00603f86  8b08                 mov ecx, dword ptr [eax]
// 00603f88  56                   push esi
// 00603f89  ffd1                 call ecx
// 00603f8b  83c404               add esp, 4
// 00603f8e  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 00603f94  807a1100             cmp byte ptr [edx + 0x11], 0
// 00603f98  7524                 jne 0x603fbe
// 00603f9a  8d9b00000000         lea ebx, [ebx]
// 00603fa0  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 00603fa6  8b08                 mov ecx, dword ptr [eax]
// 00603fa8  56                   push esi
// 00603fa9  ffd1                 call ecx
// 00603fab  83c404               add esp, 4
// 00603fae  85c0                 test eax, eax
// 00603fb0  7422                 je 0x603fd4
// 00603fb2  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 00603fb8  807a1100             cmp byte ptr [edx + 0x11], 0
// 00603fbc  74e2                 je 0x603fa0
// 00603fbe  8b4618               mov eax, dword ptr [esi + 0x18]
// 00603fc1  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00603fc4  56                   push esi
// 00603fc5  ffd1                 call ecx
// 00603fc7  56                   push esi
// 00603fc8  e823ceffff           call 0x600df0
// 00603fcd  83c408               add esp, 8
// 00603fd0  b001                 mov al, 1
// 00603fd2  5e                   pop esi
// 00603fd3  c3                   ret 
// 00603fd4  32c0                 xor al, al
// 00603fd6  5e                   pop esi
// 00603fd7  c3                   ret 
// library jpeg-6b/jdapimin.c (function _jpeg_finish_decompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
