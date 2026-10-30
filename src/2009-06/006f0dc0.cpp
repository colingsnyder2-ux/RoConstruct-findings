// from server: 100% by auto
// roc 2009-06 006f0dc0  unit: seg_006f0000  size: 506 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f0dc0
//
// 006f0dc0  56                   push esi
// 006f0dc1  8b742408             mov esi, dword ptr [esp + 8]
// 006f0dc5  8b06                 mov eax, dword ptr [esi]
// 006f0dc7  66ff4034             inc word ptr [eax + 0x34]
// 006f0dcb  8b06                 mov eax, dword ptr [esi]
// 006f0dcd  b9c8000000           mov ecx, 0xc8
// 006f0dd2  57                   push edi
// 006f0dd3  66394834             cmp word ptr [eax + 0x34], cx
// 006f0dd7  7621                 jbe 0x6f0dfa
// 006f0dd9  8b560c               mov edx, dword ptr [esi + 0xc]
// 006f0ddc  6878e08e00           push 0x8ee078
// 006f0de1  52                   push edx
// 006f0de2  6824e08e00           push 0x8ee024
// 006f0de7  50                   push eax
// 006f0de8  e8b382fdff           call 0x6c90a0
// 006f0ded  8b06                 mov eax, dword ptr [esi]
// 006f0def  6a03                 push 3
// 006f0df1  50                   push eax
// 006f0df2  e8e924fdff           call 0x6c32e0
// 006f0df7  83c418               add esp, 0x18
// 006f0dfa  8b0e                 mov ecx, dword ptr [esi]
// 006f0dfc  51                   push ecx
// 006f0dfd  e8eec0ffff           call 0x6ecef0
// 006f0e02  8b16                 mov edx, dword ptr [esi]
// 006f0e04  8bf8                 mov edi, eax
// 006f0e06  8b4208               mov eax, dword ptr [edx + 8]
// 006f0e09  8938                 mov dword ptr [eax], edi
// 006f0e0b  c7400809000000       mov dword ptr [eax + 8], 9
// 006f0e12  8b06                 mov eax, dword ptr [esi]
// 006f0e14  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 006f0e17  2b4808               sub ecx, dword ptr [eax + 8]
// 006f0e1a  83c404               add esp, 4
// 006f0e1d  83f910               cmp ecx, 0x10
// 006f0e20  7f0b                 jg 0x6f0e2d
// 006f0e22  6a01                 push 1
// 006f0e24  50                   push eax
// 006f0e25  e8961ffdff           call 0x6c2dc0
// 006f0e2a  83c408               add esp, 8
// 006f0e2d  8b06                 mov eax, dword ptr [esi]
// 006f0e2f  83400810             add dword ptr [eax + 8], 0x10
// 006f0e33  e8f8f8ffff           call 0x6f0730
// 006f0e38  894720               mov dword ptr [edi + 0x20], eax
// 006f0e3b  85c0                 test eax, eax
// 006f0e3d  7507                 jne 0x6f0e46
// 006f0e3f  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f0e43  895720               mov dword ptr [edi + 0x20], edx
// 006f0e46  e875f8ffff           call 0x6f06c0
// 006f0e4b  89473c               mov dword ptr [edi + 0x3c], eax
// 006f0e4e  e86df8ffff           call 0x6f06c0
// 006f0e53  894740               mov dword ptr [edi + 0x40], eax
// 006f0e56  8b4e04               mov ecx, dword ptr [esi + 4]
// 006f0e59  6a01                 push 1
// 006f0e5b  8d442410             lea eax, [esp + 0x10]
// 006f0e5f  50                   push eax
// 006f0e60  51                   push ecx
// 006f0e61  e8eac2ffff           call 0x6ed150
// 006f0e66  83c40c               add esp, 0xc
// 006f0e69  85c0                 test eax, eax
// 006f0e6b  7423                 je 0x6f0e90
// 006f0e6d  8b560c               mov edx, dword ptr [esi + 0xc]
// 006f0e70  8b06                 mov eax, dword ptr [esi]
// 006f0e72  6840e08e00           push 0x8ee040
// 006f0e77  52                   push edx
// 006f0e78  6824e08e00           push 0x8ee024
// 006f0e7d  50                   push eax
// 006f0e7e  e81d82fdff           call 0x6c90a0
// 006f0e83  8b0e                 mov ecx, dword ptr [esi]
// 006f0e85  6a03                 push 3
// 006f0e87  51                   push ecx
// 006f0e88  e85324fdff           call 0x6c32e0
// 006f0e8d  83c418               add esp, 0x18
// 006f0e90  8a54240c             mov dl, byte ptr [esp + 0xc]
// 006f0e94  6a01                 push 1
// 006f0e96  8d442410             lea eax, [esp + 0x10]
// 006f0e9a  885748               mov byte ptr [edi + 0x48], dl
// 006f0e9d  8b4e04               mov ecx, dword ptr [esi + 4]
// 006f0ea0  50                   push eax
// 006f0ea1  51                   push ecx
// 006f0ea2  e8a9c2ffff           call 0x6ed150
// 006f0ea7  83c40c               add esp, 0xc
// 006f0eaa  85c0                 test eax, eax
// 006f0eac  7423                 je 0x6f0ed1
// 006f0eae  8b560c               mov edx, dword ptr [esi + 0xc]
// 006f0eb1  8b06                 mov eax, dword ptr [esi]
// 006f0eb3  6840e08e00           push 0x8ee040
// 006f0eb8  52                   push edx
// 006f0eb9  6824e08e00           push 0x8ee024
// 006f0ebe  50                   push eax
// 006f0ebf  e8dc81fdff           call 0x6c90a0
// 006f0ec4  8b0e                 mov ecx, dword ptr [esi]
// 006f0ec6  6a03                 push 3
// 006f0ec8  51                   push ecx
// 006f0ec9  e81224fdff           call 0x6c32e0
// 006f0ece  83c418               add esp, 0x18
// 006f0ed1  8a54240c             mov dl, byte ptr [esp + 0xc]
// 006f0ed5  6a01                 push 1
// 006f0ed7  8d442410             lea eax, [esp + 0x10]
// 006f0edb  885749               mov byte ptr [edi + 0x49], dl
// 006f0ede  8b4e04               mov ecx, dword ptr [esi + 4]
// 006f0ee1  50                   push eax
// 006f0ee2  51                   push ecx
// 006f0ee3  e868c2ffff           call 0x6ed150
// 006f0ee8  83c40c               add esp, 0xc
// 006f0eeb  85c0                 test eax, eax
// 006f0eed  7423                 je 0x6f0f12
// 006f0eef  8b560c               mov edx, dword ptr [esi + 0xc]
// 006f0ef2  8b06                 mov eax, dword ptr [esi]
// 006f0ef4  6840e08e00           push 0x8ee040
// 006f0ef9  52                   push edx
// 006f0efa  6824e08e00           push 0x8ee024
// 006f0eff  50                   push eax
// 006f0f00  e89b81fdff           call 0x6c90a0
// 006f0f05  8b0e                 mov ecx, dword ptr [esi]
// 006f0f07  6a03                 push 3
// 006f0f09  51                   push ecx
// 006f0f0a  e8d123fdff           call 0x6c32e0
// 006f0f0f  83c418               add esp, 0x18
// 006f0f12  8a54240c             mov dl, byte ptr [esp + 0xc]
// 006f0f16  6a01                 push 1
// 006f0f18  8d442410             lea eax, [esp + 0x10]
// 006f0f1c  88574a               mov byte ptr [edi + 0x4a], dl
// 006f0f1f  8b4e04               mov ecx, dword ptr [esi + 4]
// 006f0f22  50                   push eax
// 006f0f23  51                   push ecx
// 006f0f24  e827c2ffff           call 0x6ed150
// 006f0f29  83c40c               add esp, 0xc
// 006f0f2c  85c0                 test eax, eax
// 006f0f2e  7423                 je 0x6f0f53
// 006f0f30  8b560c               mov edx, dword ptr [esi + 0xc]
// 006f0f33  8b06                 mov eax, dword ptr [esi]
// 006f0f35  6840e08e00           push 0x8ee040
// 006f0f3a  52                   push edx
// 006f0f3b  6824e08e00           push 0x8ee024
// 006f0f40  50                   push eax
// 006f0f41  e85a81fdff           call 0x6c90a0
// 006f0f46  8b0e                 mov ecx, dword ptr [esi]
// 006f0f48  6a03                 push 3
// 006f0f4a  51                   push ecx
// 006f0f4b  e89023fdff           call 0x6c32e0
// 006f0f50  83c418               add esp, 0x18
// 006f0f53  8a54240c             mov dl, byte ptr [esp + 0xc]
// 006f0f57  53                   push ebx
// 006f0f58  8bdf                 mov ebx, edi
// 006f0f5a  8bc6                 mov eax, esi
// 006f0f5c  88574b               mov byte ptr [edi + 0x4b], dl
// 006f0f5f  e87cf8ffff           call 0x6f07e0
// 006f0f64  57                   push edi
// 006f0f65  8bc6                 mov eax, esi
// 006f0f67  e8f4f8ffff           call 0x6f0860
// 006f0f6c  8bc6                 mov eax, esi
// 006f0f6e  e88dfbffff           call 0x6f0b00
// 006f0f73  57                   push edi
// 006f0f74  e85775fdff           call 0x6c84d0
// 006f0f79  83c408               add esp, 8
// 006f0f7c  5b                   pop ebx
// 006f0f7d  85c0                 test eax, eax
// 006f0f7f  7523                 jne 0x6f0fa4
// 006f0f81  8b460c               mov eax, dword ptr [esi + 0xc]
// 006f0f84  8b0e                 mov ecx, dword ptr [esi]
// 006f0f86  686ce08e00           push 0x8ee06c
// 006f0f8b  50                   push eax
// 006f0f8c  6824e08e00           push 0x8ee024
// 006f0f91  51                   push ecx
// 006f0f92  e80981fdff           call 0x6c90a0
// 006f0f97  8b16                 mov edx, dword ptr [esi]
// 006f0f99  6a03                 push 3
// 006f0f9b  52                   push edx
// 006f0f9c  e83f23fdff           call 0x6c32e0
// 006f0fa1  83c418               add esp, 0x18
// 006f0fa4  8b06                 mov eax, dword ptr [esi]
// 006f0fa6  834008f0             add dword ptr [eax + 8], -0x10
// 006f0faa  8b36                 mov esi, dword ptr [esi]
// 006f0fac  b8ffff0000           mov eax, 0xffff
// 006f0fb1  66014634             add word ptr [esi + 0x34], ax
// 006f0fb5  8bc7                 mov eax, edi
// 006f0fb7  5f                   pop edi
// 006f0fb8  5e                   pop esi
// 006f0fb9  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadFunction)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
