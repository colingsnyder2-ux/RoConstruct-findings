// roc 2007-03 00481e60  unit: seg_00480000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00481e60
//
// 00481e60  53                   push ebx
// 00481e61  55                   push ebp
// 00481e62  8bd9                 mov ebx, ecx
// 00481e64  33ed                 xor ebp, ebp
// 00481e66  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 00481e69  7e39                 jle 0x481ea4
// 00481e6b  56                   push esi
// 00481e6c  57                   push edi
// 00481e6d  8d4900               lea ecx, [ecx]
// 00481e70  8b4308               mov eax, dword ptr [ebx + 8]
// 00481e73  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 00481e76  85f6                 test esi, esi
// 00481e78  7420                 je 0x481e9a
// 00481e7a  8d9b00000000         lea ebx, [ebx]
// 00481e80  8b7e68               mov edi, dword ptr [esi + 0x68]
// 00481e83  8d4e04               lea ecx, [esi + 4]
// 00481e86  e835f2ffff           call 0x4810c0
// 00481e8b  56                   push esi
// 00481e8c  e8cf140700           call 0x4f3360
// 00481e91  83c404               add esp, 4
// 00481e94  85ff                 test edi, edi
// 00481e96  8bf7                 mov esi, edi
// 00481e98  75e6                 jne 0x481e80
// 00481e9a  83c501               add ebp, 1
// 00481e9d  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 00481ea0  7cce                 jl 0x481e70
// 00481ea2  5f                   pop edi
// 00481ea3  5e                   pop esi
// 00481ea4  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00481ea7  51                   push ecx
// 00481ea8  e8d3140700           call 0x4f3380
// 00481ead  83c404               add esp, 4
// 00481eb0  33c0                 xor eax, eax
// 00481eb2  5d                   pop ebp
// 00481eb3  894308               mov dword ptr [ebx + 8], eax
// 00481eb6  89430c               mov dword ptr [ebx + 0xc], eax
// 00481eb9  894304               mov dword ptr [ebx + 4], eax
// 00481ebc  5b                   pop ebx
// 00481ebd  c3                   ret 
// library rbxgs-render/DepthBlur.cpp (function ?freeMemory@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@VertexAndPixelShader@G3D@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
