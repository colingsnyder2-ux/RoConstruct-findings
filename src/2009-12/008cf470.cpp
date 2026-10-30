// roc 2009-12 008cf470  unit: CXTPTabManagerItem  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cf470
//
// 008cf470  53                   push ebx
// 008cf471  56                   push esi
// 008cf472  57                   push edi
// 008cf473  8bf1                 mov esi, ecx
// 008cf475  33ff                 xor edi, edi
// 008cf477  397e5c               cmp dword ptr [esi + 0x5c], edi
// 008cf47a  7e29                 jle 0x8cf4a5
// 008cf47c  8d642400             lea esp, [esp]
// 008cf480  85ff                 test edi, edi
// 008cf482  7c4e                 jl 0x8cf4d2
// 008cf484  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 008cf487  7d49                 jge 0x8cf4d2
// 008cf489  8b4658               mov eax, dword ptr [esi + 0x58]
// 008cf48c  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 008cf48f  8b13                 mov edx, dword ptr [ebx]
// 008cf491  8b425c               mov eax, dword ptr [edx + 0x5c]
// 008cf494  8bcb                 mov ecx, ebx
// 008cf496  ffd0                 call eax
// 008cf498  8bcb                 mov ecx, ebx
// 008cf49a  e83d49f2ff           call 0x7f3ddc
// 008cf49f  47                   inc edi
// 008cf4a0  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 008cf4a3  7cdb                 jl 0x8cf480
// 008cf4a5  6aff                 push -1
// 008cf4a7  6a00                 push 0
// 008cf4a9  8d4e54               lea ecx, [esi + 0x54]
// 008cf4ac  e8ef5ef8ff           call 0x8553a0
// 008cf4b1  8b16                 mov edx, dword ptr [esi]
// 008cf4b3  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008cf4b6  5f                   pop edi
// 008cf4b7  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 008cf4be  c7460400000000       mov dword ptr [esi + 4], 0
// 008cf4c5  c7460800000000       mov dword ptr [esi + 8], 0
// 008cf4cc  8bce                 mov ecx, esi
// 008cf4ce  5e                   pop esi
// 008cf4cf  5b                   pop ebx
// 008cf4d0  ffe0                 jmp eax
// 008cf4d2  e83546f2ff           call 0x7f3b0c
// copied from an identical function in another client (function ?DeleteAllItems@CXTPTabManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp