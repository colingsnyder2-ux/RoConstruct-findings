// roc 2007-08 0050d120  unit: G3D::BinaryInput  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050d120
//
// 0050d120  83ec0c               sub esp, 0xc
// 0050d123  53                   push ebx
// 0050d124  55                   push ebp
// 0050d125  56                   push esi
// 0050d126  8bf1                 mov esi, ecx
// 0050d128  8b5e08               mov ebx, dword ptr [esi + 8]
// 0050d12b  3b5e0c               cmp ebx, dword ptr [esi + 0xc]
// 0050d12e  8d6e04               lea ebp, [esi + 4]
// 0050d131  57                   push edi
// 0050d132  8b3dd8e67700         mov edi, dword ptr [0x77e6d8]
// 0050d138  7602                 jbe 0x50d13c
// 0050d13a  ffd7                 call edi
// 0050d13c  85f6                 test esi, esi
// 0050d13e  7502                 jne 0x50d142
// 0050d140  ffd7                 call edi
// 0050d142  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0050d146  2bfb                 sub edi, ebx
// 0050d148  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0050d14c  c1ff02               sar edi, 2
// 0050d14f  c1e705               shl edi, 5
// 0050d152  037c2428             add edi, dword ptr [esp + 0x28]
// 0050d156  85db                 test ebx, ebx
// 0050d158  0f8485000000         je 0x50d1e3
// 0050d15e  8b06                 mov eax, dword ptr [esi]
// 0050d160  83c9ff               or ecx, 0xffffffff
// 0050d163  2bc8                 sub ecx, eax
// 0050d165  3bcb                 cmp ecx, ebx
// 0050d167  7307                 jae 0x50d170
// 0050d169  8bce                 mov ecx, esi
// 0050d16b  e8f0edffff           call 0x50bf60
// 0050d170  8d54181f             lea edx, [eax + ebx + 0x1f]
// 0050d174  6a00                 push 0
// 0050d176  c1ea05               shr edx, 5
// 0050d179  52                   push edx
// 0050d17a  8bcd                 mov ecx, ebp
// 0050d17c  e8cf8cf3ff           call 0x445e50
// 0050d181  833e00               cmp dword ptr [esi], 0
// 0050d184  750e                 jne 0x50d194
// 0050d186  891e                 mov dword ptr [esi], ebx
// 0050d188  8bc7                 mov eax, edi
// 0050d18a  5f                   pop edi
// 0050d18b  5e                   pop esi
// 0050d18c  5d                   pop ebp
// 0050d18d  5b                   pop ebx
// 0050d18e  83c40c               add esp, 0xc
// 0050d191  c21000               ret 0x10
// 0050d194  8d442420             lea eax, [esp + 0x20]
// 0050d198  50                   push eax
// 0050d199  8bce                 mov ecx, esi
// 0050d19b  e8c0f4ffff           call 0x50c660
// 0050d1a0  011e                 add dword ptr [esi], ebx
// 0050d1a2  83ec0c               sub esp, 0xc
// 0050d1a5  54                   push esp
// 0050d1a6  8bce                 mov ecx, esi
// 0050d1a8  e8b3f4ffff           call 0x50c660
// 0050d1ad  83ec0c               sub esp, 0xc
// 0050d1b0  8d542438             lea edx, [esp + 0x38]
// 0050d1b4  8bcc                 mov ecx, esp
// 0050d1b6  52                   push edx
// 0050d1b7  e8e4f1ffff           call 0x50c3a0
// 0050d1bc  83ec0c               sub esp, 0xc
// 0050d1bf  8bc4                 mov eax, esp
// 0050d1c1  57                   push edi
// 0050d1c2  50                   push eax
// 0050d1c3  8d4c243c             lea ecx, [esp + 0x3c]
// 0050d1c7  51                   push ecx
// 0050d1c8  8bce                 mov ecx, esi
// 0050d1ca  e801f2ffff           call 0x50c3d0
// 0050d1cf  8bc8                 mov ecx, eax
// 0050d1d1  e8daf4ffff           call 0x50c6b0
// 0050d1d6  8d542444             lea edx, [esp + 0x44]
// 0050d1da  52                   push edx
// 0050d1db  e870fdffff           call 0x50cf50
// 0050d1e0  83c428               add esp, 0x28
// 0050d1e3  8bc7                 mov eax, edi
// 0050d1e5  5f                   pop edi
// 0050d1e6  5e                   pop esi
// 0050d1e7  5d                   pop ebp
// 0050d1e8  5b                   pop ebx
// 0050d1e9  83c40c               add esp, 0xc
// 0050d1ec  c21000               ret 0x10
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?_Insert_x@?$vector@_NV?$allocator@_N@std@@@std@@IAEIV?$_Vb_iterator@V?$vector@_NV?$allocator@_N@std@@@std@@@2@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
