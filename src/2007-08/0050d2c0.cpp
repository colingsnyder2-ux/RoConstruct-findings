// roc 2007-08 0050d2c0  unit: G3D::BinaryInput  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050d2c0
//
// 0050d2c0  83ec0c               sub esp, 0xc
// 0050d2c3  53                   push ebx
// 0050d2c4  56                   push esi
// 0050d2c5  8bf1                 mov esi, ecx
// 0050d2c7  8b06                 mov eax, dword ptr [esi]
// 0050d2c9  57                   push edi
// 0050d2ca  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0050d2ce  3bf8                 cmp edi, eax
// 0050d2d0  7623                 jbe 0x50d2f5
// 0050d2d2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0050d2d6  51                   push ecx
// 0050d2d7  2bf8                 sub edi, eax
// 0050d2d9  57                   push edi
// 0050d2da  83ec0c               sub esp, 0xc
// 0050d2dd  54                   push esp
// 0050d2de  8bce                 mov ecx, esi
// 0050d2e0  e87bf3ffff           call 0x50c660
// 0050d2e5  8bce                 mov ecx, esi
// 0050d2e7  e804ffffff           call 0x50d1f0
// 0050d2ec  5f                   pop edi
// 0050d2ed  5e                   pop esi
// 0050d2ee  5b                   pop ebx
// 0050d2ef  83c40c               add esp, 0xc
// 0050d2f2  c20800               ret 8
// 0050d2f5  7345                 jae 0x50d33c
// 0050d2f7  8b5e08               mov ebx, dword ptr [esi + 8]
// 0050d2fa  3b5e0c               cmp ebx, dword ptr [esi + 0xc]
// 0050d2fd  7606                 jbe 0x50d305
// 0050d2ff  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050d305  83ec0c               sub esp, 0xc
// 0050d308  54                   push esp
// 0050d309  8bce                 mov ecx, esi
// 0050d30b  895c2420             mov dword ptr [esp + 0x20], ebx
// 0050d30f  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0050d317  8974241c             mov dword ptr [esp + 0x1c], esi
// 0050d31b  e840f3ffff           call 0x50c660
// 0050d320  83ec0c               sub esp, 0xc
// 0050d323  8bd4                 mov edx, esp
// 0050d325  57                   push edi
// 0050d326  52                   push edx
// 0050d327  8d4c242c             lea ecx, [esp + 0x2c]
// 0050d32b  e880f3ffff           call 0x50c6b0
// 0050d330  8d442424             lea eax, [esp + 0x24]
// 0050d334  50                   push eax
// 0050d335  8bce                 mov ecx, esi
// 0050d337  e8b4fcffff           call 0x50cff0
// 0050d33c  5f                   pop edi
// 0050d33d  5e                   pop esi
// 0050d33e  5b                   pop ebx
// 0050d33f  83c40c               add esp, 0xc
// 0050d342  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$vector@_NV?$allocator@_N@std@@@std@@QAEXI_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
