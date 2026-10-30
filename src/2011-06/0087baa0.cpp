// roc 2011-06 0087baa0  unit: CPropertyGridItemBrickColor  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087baa0
//
// 0087baa0  6aff                 push -1
// 0087baa2  68c084a000           push 0xa084c0
// 0087baa7  64a100000000         mov eax, dword ptr fs:[0]
// 0087baad  50                   push eax
// 0087baae  83ec48               sub esp, 0x48
// 0087bab1  53                   push ebx
// 0087bab2  55                   push ebp
// 0087bab3  56                   push esi
// 0087bab4  57                   push edi
// 0087bab5  a12058c900           mov eax, dword ptr [0xc95820]
// 0087baba  33c4                 xor eax, esp
// 0087babc  50                   push eax
// 0087babd  8d44245c             lea eax, [esp + 0x5c]
// 0087bac1  64a300000000         mov dword ptr fs:[0], eax
// 0087bac7  8bf9                 mov edi, ecx
// 0087bac9  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0087bacd  8b4608               mov eax, dword ptr [esi + 8]
// 0087bad0  50                   push eax
// 0087bad1  ff151c01a400         call dword ptr [0xa4011c]
// 0087bad7  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0087badb  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 0087badf  8d69fe               lea ebp, [ecx - 2]
// 0087bae2  83c112               add ecx, 0x12
// 0087bae5  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0087bae9  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0087baed  49                   dec ecx
// 0087baee  894c2430             mov dword ptr [esp + 0x30], ecx
// 0087baf2  8b4e04               mov ecx, dword ptr [esi + 4]
// 0087baf5  50                   push eax
// 0087baf6  51                   push ecx
// 0087baf7  8d4c2450             lea ecx, [esp + 0x50]
// 0087bafb  43                   inc ebx
// 0087bafc  e8bf16feff           call 0x85d1c0
// 0087bb01  8b970c010000         mov edx, dword ptr [edi + 0x10c]
// 0087bb07  8b4604               mov eax, dword ptr [esi + 4]
// 0087bb0a  52                   push edx
// 0087bb0b  50                   push eax
// 0087bb0c  8d4c243c             lea ecx, [esp + 0x3c]
// 0087bb10  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 0087bb18  e86317feff           call 0x85d280
// 0087bb1d  8b442430             mov eax, dword ptr [esp + 0x30]
// 0087bb21  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0087bb25  8b5604               mov edx, dword ptr [esi + 4]
// 0087bb28  50                   push eax
// 0087bb29  51                   push ecx
// 0087bb2a  53                   push ebx
// 0087bb2b  55                   push ebp
// 0087bb2c  52                   push edx
// 0087bb2d  c644247801           mov byte ptr [esp + 0x78], 1
// 0087bb32  ff15c000a400         call dword ptr [0xa400c0]
// 0087bb38  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0087bb3c  8b542478             mov edx, dword ptr [esp + 0x78]
// 0087bb40  8b442470             mov eax, dword ptr [esp + 0x70]
// 0087bb44  8b1e                 mov ebx, dword ptr [esi]
// 0087bb46  894c2418             mov dword ptr [esp + 0x18], ecx
// 0087bb4a  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0087bb4e  89442414             mov dword ptr [esp + 0x14], eax
// 0087bb52  8954241c             mov dword ptr [esp + 0x1c], edx
// 0087bb56  6a24                 push 0x24
// 0087bb58  8d542418             lea edx, [esp + 0x18]
// 0087bb5c  894c2424             mov dword ptr [esp + 0x24], ecx
// 0087bb60  83c019               add eax, 0x19
// 0087bb63  81c7a4000000         add edi, 0xa4
// 0087bb69  52                   push edx
// 0087bb6a  8bcf                 mov ecx, edi
// 0087bb6c  8944241c             mov dword ptr [esp + 0x1c], eax
// 0087bb70  ff15a826a400         call dword ptr [0xa426a8]
// 0087bb76  50                   push eax
// 0087bb77  8bcf                 mov ecx, edi
// 0087bb79  ff15c82da400         call dword ptr [0xa42dc8]
// 0087bb7f  50                   push eax
// 0087bb80  8b4370               mov eax, dword ptr [ebx + 0x70]
// 0087bb83  8bce                 mov ecx, esi
// 0087bb85  ffd0                 call eax
// 0087bb87  8d4c2434             lea ecx, [esp + 0x34]
// 0087bb8b  c644246400           mov byte ptr [esp + 0x64], 0
// 0087bb90  e87b17feff           call 0x85d310
// 0087bb95  8d4c2448             lea ecx, [esp + 0x48]
// 0087bb99  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 0087bba1  e8aa16feff           call 0x85d250
// 0087bba6  b801000000           mov eax, 1
// 0087bbab  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0087bbaf  64890d00000000       mov dword ptr fs:[0], ecx
// 0087bbb6  59                   pop ecx
// 0087bbb7  5f                   pop edi
// 0087bbb8  5e                   pop esi
// 0087bbb9  5d                   pop ebp
// 0087bbba  5b                   pop ebx
// 0087bbbb  83c454               add esp, 0x54
// 0087bbbe  c21400               ret 0x14
// copied from an identical function in another client (function ?OnDrawItemValue@CXTPPropertyGridItemColor@@MAEHAAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItemColor.cpp