// roc 2009-06 0072ae20  unit: CXTPCommandBar  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072ae20
//
// 0072ae20  57                   push edi
// 0072ae21  8bf9                 mov edi, ecx
// 0072ae23  8b4734               mov eax, dword ptr [edi + 0x34]
// 0072ae26  85c0                 test eax, eax
// 0072ae28  745d                 je 0x72ae87
// 0072ae2a  56                   push esi
// 0072ae2b  33f6                 xor esi, esi
// 0072ae2d  85c0                 test eax, eax
// 0072ae2f  7e34                 jle 0x72ae65
// 0072ae31  85f6                 test esi, esi
// 0072ae33  7c54                 jl 0x72ae89
// 0072ae35  3b7734               cmp esi, dword ptr [edi + 0x34]
// 0072ae38  7d4f                 jge 0x72ae89
// 0072ae3a  8b4730               mov eax, dword ptr [edi + 0x30]
// 0072ae3d  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0072ae40  8b11                 mov edx, dword ptr [ecx]
// 0072ae42  8b4268               mov eax, dword ptr [edx + 0x68]
// 0072ae45  ffd0                 call eax
// 0072ae47  3b7734               cmp esi, dword ptr [edi + 0x34]
// 0072ae4a  7d3d                 jge 0x72ae89
// 0072ae4c  8b4f30               mov ecx, dword ptr [edi + 0x30]
// 0072ae4f  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0072ae52  85c9                 test ecx, ecx
// 0072ae54  7409                 je 0x72ae5f
// 0072ae56  8b11                 mov edx, dword ptr [ecx]
// 0072ae58  8b4204               mov eax, dword ptr [edx + 4]
// 0072ae5b  6a01                 push 1
// 0072ae5d  ffd0                 call eax
// 0072ae5f  46                   inc esi
// 0072ae60  3b7734               cmp esi, dword ptr [edi + 0x34]
// 0072ae63  7ccc                 jl 0x72ae31
// 0072ae65  6aff                 push -1
// 0072ae67  6a00                 push 0
// 0072ae69  8d4f2c               lea ecx, [edi + 0x2c]
// 0072ae6c  e89f760200           call 0x752510
// 0072ae71  c7474000000000       mov dword ptr [edi + 0x40], 0
// 0072ae78  c7474400000000       mov dword ptr [edi + 0x44], 0
// 0072ae7f  c7474800000000       mov dword ptr [edi + 0x48], 0
// 0072ae86  5e                   pop esi
// 0072ae87  5f                   pop edi
// 0072ae88  c3                   ret 
// 0072ae89  e856defeff           call 0x718ce4
// copied from an identical function in another client (function ?HideKeyboardTips@CXTPCommandBars@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp