// roc 2010-06 00881930  unit: CXTPPropertyGridInplaceList  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00881930
//
// 00881930  83ec10               sub esp, 0x10
// 00881933  53                   push ebx
// 00881934  56                   push esi
// 00881935  57                   push edi
// 00881936  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0088193a  8b4718               mov eax, dword ptr [edi + 0x18]
// 0088193d  50                   push eax
// 0088193e  8bf1                 mov esi, ecx
// 00881940  e827b40f00           call 0x97cd6c
// 00881945  8d4f1c               lea ecx, [edi + 0x1c]
// 00881948  51                   push ecx
// 00881949  8d542410             lea edx, [esp + 0x10]
// 0088194d  52                   push edx
// 0088194e  8bd8                 mov ebx, eax
// 00881950  ff1548bc9e00         call dword ptr [0x9ebc48]
// 00881956  8b4708               mov eax, dword ptr [edi + 8]
// 00881959  6a00                 push 0
// 0088195b  50                   push eax
// 0088195c  8b4620               mov eax, dword ptr [esi + 0x20]
// 0088195f  6899010000           push 0x199
// 00881964  50                   push eax
// 00881965  ff1554ba9e00         call dword ptr [0x9eba54]
// 0088196b  837e5400             cmp dword ptr [esi + 0x54], 0
// 0088196f  7433                 je 0x8819a4
// 00881971  8b5710               mov edx, dword ptr [edi + 0x10]
// 00881974  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00881978  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0088197b  8b31                 mov esi, dword ptr [ecx]
// 0088197d  83e201               and edx, 1
// 00881980  52                   push edx
// 00881981  83ec10               sub esp, 0x10
// 00881984  8bd4                 mov edx, esp
// 00881986  893a                 mov dword ptr [edx], edi
// 00881988  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0088198c  897a04               mov dword ptr [edx + 4], edi
// 0088198f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00881993  897a08               mov dword ptr [edx + 8], edi
// 00881996  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0088199a  50                   push eax
// 0088199b  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0088199e  53                   push ebx
// 0088199f  897a0c               mov dword ptr [edx + 0xc], edi
// 008819a2  ffd0                 call eax
// 008819a4  5f                   pop edi
// 008819a5  5e                   pop esi
// 008819a6  5b                   pop ebx
// 008819a7  83c410               add esp, 0x10
// 008819aa  c20400               ret 4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridInplaceList.cpp (function ?DrawItem@CXTPPropertyGridInplaceList@@MAEXPAUtagDRAWITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridInplaceList.cpp
