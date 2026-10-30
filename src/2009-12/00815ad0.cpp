// roc 2009-12 00815ad0  unit: CXTPCommandBar  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00815ad0
//
// 00815ad0  57                   push edi
// 00815ad1  8bf9                 mov edi, ecx
// 00815ad3  8b4734               mov eax, dword ptr [edi + 0x34]
// 00815ad6  85c0                 test eax, eax
// 00815ad8  745d                 je 0x815b37
// 00815ada  56                   push esi
// 00815adb  33f6                 xor esi, esi
// 00815add  85c0                 test eax, eax
// 00815adf  7e34                 jle 0x815b15
// 00815ae1  85f6                 test esi, esi
// 00815ae3  7c54                 jl 0x815b39
// 00815ae5  3b7734               cmp esi, dword ptr [edi + 0x34]
// 00815ae8  7d4f                 jge 0x815b39
// 00815aea  8b4730               mov eax, dword ptr [edi + 0x30]
// 00815aed  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00815af0  8b11                 mov edx, dword ptr [ecx]
// 00815af2  8b4268               mov eax, dword ptr [edx + 0x68]
// 00815af5  ffd0                 call eax
// 00815af7  3b7734               cmp esi, dword ptr [edi + 0x34]
// 00815afa  7d3d                 jge 0x815b39
// 00815afc  8b4f30               mov ecx, dword ptr [edi + 0x30]
// 00815aff  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00815b02  85c9                 test ecx, ecx
// 00815b04  7409                 je 0x815b0f
// 00815b06  8b11                 mov edx, dword ptr [ecx]
// 00815b08  8b4204               mov eax, dword ptr [edx + 4]
// 00815b0b  6a01                 push 1
// 00815b0d  ffd0                 call eax
// 00815b0f  46                   inc esi
// 00815b10  3b7734               cmp esi, dword ptr [edi + 0x34]
// 00815b13  7ccc                 jl 0x815ae1
// 00815b15  6aff                 push -1
// 00815b17  6a00                 push 0
// 00815b19  8d4f2c               lea ecx, [edi + 0x2c]
// 00815b1c  e87ff80300           call 0x8553a0
// 00815b21  c7474000000000       mov dword ptr [edi + 0x40], 0
// 00815b28  c7474400000000       mov dword ptr [edi + 0x44], 0
// 00815b2f  c7474800000000       mov dword ptr [edi + 0x48], 0
// 00815b36  5e                   pop esi
// 00815b37  5f                   pop edi
// 00815b38  c3                   ret 
// 00815b39  e8cedffdff           call 0x7f3b0c
// copied from an identical function in another client (function ?HideKeyboardTips@CXTPCommandBars@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp