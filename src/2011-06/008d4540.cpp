// roc 2011-06 008d4540  unit: CXTPTabManagerItem  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d4540
//
// 008d4540  53                   push ebx
// 008d4541  56                   push esi
// 008d4542  57                   push edi
// 008d4543  8bf1                 mov esi, ecx
// 008d4545  33ff                 xor edi, edi
// 008d4547  397e5c               cmp dword ptr [esi + 0x5c], edi
// 008d454a  7e29                 jle 0x8d4575
// 008d454c  8d642400             lea esp, [esp]
// 008d4550  85ff                 test edi, edi
// 008d4552  7c4e                 jl 0x8d45a2
// 008d4554  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 008d4557  7d49                 jge 0x8d45a2
// 008d4559  8b4658               mov eax, dword ptr [esi + 0x58]
// 008d455c  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 008d455f  8b13                 mov edx, dword ptr [ebx]
// 008d4561  8b425c               mov eax, dword ptr [edx + 0x5c]
// 008d4564  8bcb                 mov ecx, ebx
// 008d4566  ffd0                 call eax
// 008d4568  8bcb                 mov ecx, ebx
// 008d456a  e86b60f3ff           call 0x80a5da
// 008d456f  47                   inc edi
// 008d4570  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 008d4573  7cdb                 jl 0x8d4550
// 008d4575  6aff                 push -1
// 008d4577  6a00                 push 0
// 008d4579  8d4e54               lea ecx, [esi + 0x54]
// 008d457c  e8bfa5f6ff           call 0x83eb40
// 008d4581  8b16                 mov edx, dword ptr [esi]
// 008d4583  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008d4586  5f                   pop edi
// 008d4587  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 008d458e  c7460400000000       mov dword ptr [esi + 4], 0
// 008d4595  c7460800000000       mov dword ptr [esi + 8], 0
// 008d459c  8bce                 mov ecx, esi
// 008d459e  5e                   pop esi
// 008d459f  5b                   pop ebx
// 008d45a0  ffe0                 jmp eax
// 008d45a2  e8635df3ff           call 0x80a30a
// copied from an identical function in another client (function ?DeleteAllItems@CXTPTabManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp