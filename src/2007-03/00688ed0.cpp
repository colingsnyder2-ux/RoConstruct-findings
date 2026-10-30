// roc 2007-03 00688ed0  unit: seg_00680000  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00688ed0
//
// 00688ed0  83ec1c               sub esp, 0x1c
// 00688ed3  57                   push edi
// 00688ed4  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00688ed8  85ff                 test edi, edi
// 00688eda  894c2404             mov dword ptr [esp + 4], ecx
// 00688ede  750c                 jne 0x688eec
// 00688ee0  b857000780           mov eax, 0x80070057
// 00688ee5  5f                   pop edi
// 00688ee6  83c41c               add esp, 0x1c
// 00688ee9  c20c00               ret 0xc
// 00688eec  56                   push esi
// 00688eed  8d71ac               lea esi, [ecx - 0x54]
// 00688ef0  85f6                 test esi, esi
// 00688ef2  66c7070000           mov word ptr [edi], 0
// 00688ef7  7406                 je 0x688eff
// 00688ef9  837e2000             cmp dword ptr [esi + 0x20], 0
// 00688efd  750d                 jne 0x688f0c
// 00688eff  5e                   pop esi
// 00688f00  b801000000           mov eax, 1
// 00688f05  5f                   pop edi
// 00688f06  83c41c               add esp, 0x1c
// 00688f09  c20c00               ret 0xc
// 00688f0c  53                   push ebx
// 00688f0d  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00688f11  55                   push ebp
// 00688f12  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00688f16  56                   push esi
// 00688f17  8d4c2420             lea ecx, [esp + 0x20]
// 00688f1b  e8b028feff           call 0x66b7d0
// 00688f20  55                   push ebp
// 00688f21  53                   push ebx
// 00688f22  50                   push eax
// 00688f23  ff1598ed7700         call dword ptr [0x77ed98]
// 00688f29  85c0                 test eax, eax
// 00688f2b  750f                 jne 0x688f3c
// 00688f2d  5d                   pop ebp
// 00688f2e  5b                   pop ebx
// 00688f2f  5e                   pop esi
// 00688f30  b801000000           mov eax, 1
// 00688f35  5f                   pop edi
// 00688f36  83c41c               add esp, 0x1c
// 00688f39  c20c00               ret 0xc
// 00688f3c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00688f40  8d442414             lea eax, [esp + 0x14]
// 00688f44  66c7070300           mov word ptr [edi], 3
// 00688f49  c7470800000000       mov dword ptr [edi + 8], 0
// 00688f50  8b51cc               mov edx, dword ptr [ecx - 0x34]
// 00688f53  50                   push eax
// 00688f54  52                   push edx
// 00688f55  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00688f59  896c2420             mov dword ptr [esp + 0x20], ebp
// 00688f5d  ff1520ed7700         call dword ptr [0x77ed20]
// 00688f63  8b442418             mov eax, dword ptr [esp + 0x18]
// 00688f67  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00688f6b  50                   push eax
// 00688f6c  51                   push ecx
// 00688f6d  8bce                 mov ecx, esi
// 00688f6f  e80cf0ffff           call 0x687f80
// 00688f74  85c0                 test eax, eax
// 00688f76  7411                 je 0x688f89
// 00688f78  6a01                 push 1
// 00688f7a  8bc8                 mov ecx, eax
// 00688f7c  66c7070900           mov word ptr [edi], 9
// 00688f81  e80e1c0b00           call 0x73ab94
// 00688f86  894708               mov dword ptr [edi + 8], eax
// 00688f89  5d                   pop ebp
// 00688f8a  5b                   pop ebx
// 00688f8b  5e                   pop esi
// 00688f8c  33c0                 xor eax, eax
// 00688f8e  5f                   pop edi
// 00688f8f  83c41c               add esp, 0x1c
// 00688f92  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?AccessibleHitTest@CXTPPropertyGridView@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
