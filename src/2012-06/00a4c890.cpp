// roc 2012-06 00a4c890  unit: CXTPTabManagerItem  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4c890
//
// 00a4c890  53                   push ebx
// 00a4c891  56                   push esi
// 00a4c892  57                   push edi
// 00a4c893  8bf1                 mov esi, ecx
// 00a4c895  33ff                 xor edi, edi
// 00a4c897  397e5c               cmp dword ptr [esi + 0x5c], edi
// 00a4c89a  7e29                 jle 0xa4c8c5
// 00a4c89c  8d642400             lea esp, [esp]
// 00a4c8a0  85ff                 test edi, edi
// 00a4c8a2  7c4e                 jl 0xa4c8f2
// 00a4c8a4  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 00a4c8a7  7d49                 jge 0xa4c8f2
// 00a4c8a9  8b4658               mov eax, dword ptr [esi + 0x58]
// 00a4c8ac  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 00a4c8af  8b13                 mov edx, dword ptr [ebx]
// 00a4c8b1  8b425c               mov eax, dword ptr [edx + 0x5c]
// 00a4c8b4  8bcb                 mov ecx, ebx
// 00a4c8b6  ffd0                 call eax
// 00a4c8b8  8bcb                 mov ecx, ebx
// 00a4c8ba  e8cb5df3ff           call 0x98268a
// 00a4c8bf  47                   inc edi
// 00a4c8c0  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 00a4c8c3  7cdb                 jl 0xa4c8a0
// 00a4c8c5  6aff                 push -1
// 00a4c8c7  6a00                 push 0
// 00a4c8c9  8d4e54               lea ecx, [esi + 0x54]
// 00a4c8cc  e88fb9f4ff           call 0x998260
// 00a4c8d1  8b16                 mov edx, dword ptr [esi]
// 00a4c8d3  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00a4c8d6  5f                   pop edi
// 00a4c8d7  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00a4c8de  c7460400000000       mov dword ptr [esi + 4], 0
// 00a4c8e5  c7460800000000       mov dword ptr [esi + 8], 0
// 00a4c8ec  8bce                 mov ecx, esi
// 00a4c8ee  5e                   pop esi
// 00a4c8ef  5b                   pop ebx
// 00a4c8f0  ffe0                 jmp eax
// 00a4c8f2  e8c95af3ff           call 0x9823c0
// copied from an identical function in another client (function ?DeleteAllItems@CXTPTabManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp