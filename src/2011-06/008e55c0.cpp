// roc 2011-06 008e55c0  unit: CXTPPropertyGridInplaceList  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e55c0
//
// 008e55c0  83ec10               sub esp, 0x10
// 008e55c3  53                   push ebx
// 008e55c4  56                   push esi
// 008e55c5  57                   push edi
// 008e55c6  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008e55ca  8b4718               mov eax, dword ptr [edi + 0x18]
// 008e55cd  50                   push eax
// 008e55ce  8bf1                 mov esi, ecx
// 008e55d0  e8e36f0e00           call 0x9cc5b8
// 008e55d5  8d4f1c               lea ecx, [edi + 0x1c]
// 008e55d8  51                   push ecx
// 008e55d9  8d542410             lea edx, [esp + 0x10]
// 008e55dd  52                   push edx
// 008e55de  8bd8                 mov ebx, eax
// 008e55e0  ff15681ca400         call dword ptr [0xa41c68]
// 008e55e6  8b4708               mov eax, dword ptr [edi + 8]
// 008e55e9  6a00                 push 0
// 008e55eb  50                   push eax
// 008e55ec  8b4620               mov eax, dword ptr [esi + 0x20]
// 008e55ef  6899010000           push 0x199
// 008e55f4  50                   push eax
// 008e55f5  ff15c019a400         call dword ptr [0xa419c0]
// 008e55fb  837e5400             cmp dword ptr [esi + 0x54], 0
// 008e55ff  7433                 je 0x8e5634
// 008e5601  8b5710               mov edx, dword ptr [edi + 0x10]
// 008e5604  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008e5608  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008e560b  8b31                 mov esi, dword ptr [ecx]
// 008e560d  83e201               and edx, 1
// 008e5610  52                   push edx
// 008e5611  83ec10               sub esp, 0x10
// 008e5614  8bd4                 mov edx, esp
// 008e5616  893a                 mov dword ptr [edx], edi
// 008e5618  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008e561c  897a04               mov dword ptr [edx + 4], edi
// 008e561f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008e5623  897a08               mov dword ptr [edx + 8], edi
// 008e5626  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008e562a  50                   push eax
// 008e562b  8b466c               mov eax, dword ptr [esi + 0x6c]
// 008e562e  53                   push ebx
// 008e562f  897a0c               mov dword ptr [edx + 0xc], edi
// 008e5632  ffd0                 call eax
// 008e5634  5f                   pop edi
// 008e5635  5e                   pop esi
// 008e5636  5b                   pop ebx
// 008e5637  83c410               add esp, 0x10
// 008e563a  c20400               ret 4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridInplaceList.cpp (function ?DrawItem@CXTPPropertyGridInplaceList@@MAEXPAUtagDRAWITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridInplaceList.cpp
