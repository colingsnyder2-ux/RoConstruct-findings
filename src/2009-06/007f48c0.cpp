// roc 2009-06 007f48c0  unit: CXTPTabManagerItem  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f48c0
//
// 007f48c0  53                   push ebx
// 007f48c1  56                   push esi
// 007f48c2  57                   push edi
// 007f48c3  8bf1                 mov esi, ecx
// 007f48c5  33ff                 xor edi, edi
// 007f48c7  397e5c               cmp dword ptr [esi + 0x5c], edi
// 007f48ca  7e29                 jle 0x7f48f5
// 007f48cc  8d642400             lea esp, [esp]
// 007f48d0  85ff                 test edi, edi
// 007f48d2  7c4e                 jl 0x7f4922
// 007f48d4  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 007f48d7  7d49                 jge 0x7f4922
// 007f48d9  8b4658               mov eax, dword ptr [esi + 0x58]
// 007f48dc  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 007f48df  8b13                 mov edx, dword ptr [ebx]
// 007f48e1  8b425c               mov eax, dword ptr [edx + 0x5c]
// 007f48e4  8bcb                 mov ecx, ebx
// 007f48e6  ffd0                 call eax
// 007f48e8  8bcb                 mov ecx, ebx
// 007f48ea  e8b946f2ff           call 0x718fa8
// 007f48ef  47                   inc edi
// 007f48f0  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 007f48f3  7cdb                 jl 0x7f48d0
// 007f48f5  6aff                 push -1
// 007f48f7  6a00                 push 0
// 007f48f9  8d4e54               lea ecx, [esi + 0x54]
// 007f48fc  e80fdcf5ff           call 0x752510
// 007f4901  8b16                 mov edx, dword ptr [esi]
// 007f4903  8b421c               mov eax, dword ptr [edx + 0x1c]
// 007f4906  5f                   pop edi
// 007f4907  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 007f490e  c7460400000000       mov dword ptr [esi + 4], 0
// 007f4915  c7460800000000       mov dword ptr [esi + 8], 0
// 007f491c  8bce                 mov ecx, esi
// 007f491e  5e                   pop esi
// 007f491f  5b                   pop ebx
// 007f4920  ffe0                 jmp eax
// 007f4922  e8bd43f2ff           call 0x718ce4
// copied from an identical function in another client (function ?DeleteAllItems@CXTPTabManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp