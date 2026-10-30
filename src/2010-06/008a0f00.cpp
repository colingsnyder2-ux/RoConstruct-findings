// roc 2010-06 008a0f00  unit: CXTPRibbonGroup  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a0f00
//
// 008a0f00  57                   push edi
// 008a0f01  8bf9                 mov edi, ecx
// 008a0f03  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 008a0f09  85c0                 test eax, eax
// 008a0f0b  7475                 je 0x8a0f82
// 008a0f0d  56                   push esi
// 008a0f0e  33f6                 xor esi, esi
// 008a0f10  397004               cmp dword ptr [eax + 4], esi
// 008a0f13  7e30                 jle 0x8a0f45
// 008a0f15  85f6                 test esi, esi
// 008a0f17  7509                 jne 0x8a0f22
// 008a0f19  8b00                 mov eax, dword ptr [eax]
// 008a0f1b  c7402c01000000       mov dword ptr [eax + 0x2c], 1
// 008a0f22  8b9780000000         mov edx, dword ptr [edi + 0x80]
// 008a0f28  8b02                 mov eax, dword ptr [edx]
// 008a0f2a  8bce                 mov ecx, esi
// 008a0f2c  c1e104               shl ecx, 4
// 008a0f2f  03ce                 add ecx, esi
// 008a0f31  8d0c88               lea ecx, [eax + ecx*4]
// 008a0f34  e827feffff           call 0x8a0d60
// 008a0f39  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 008a0f3f  46                   inc esi
// 008a0f40  3b7004               cmp esi, dword ptr [eax + 4]
// 008a0f43  7cd0                 jl 0x8a0f15
// 008a0f45  8b8f80000000         mov ecx, dword ptr [edi + 0x80]
// 008a0f4b  83791000             cmp dword ptr [ecx + 0x10], 0
// 008a0f4f  5e                   pop esi
// 008a0f50  7413                 je 0x8a0f65
// 008a0f52  837f7000             cmp dword ptr [edi + 0x70], 0
// 008a0f56  750d                 jne 0x8a0f65
// 008a0f58  8b575c               mov edx, dword ptr [edi + 0x5c]
// 008a0f5b  c7825802000001000000 mov dword ptr [edx + 0x258], 1
// 008a0f65  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 008a0f6b  8b08                 mov ecx, dword ptr [eax]
// 008a0f6d  51                   push ecx
// 008a0f6e  e8d36cf0ff           call 0x7a7c46
// 008a0f73  8b9780000000         mov edx, dword ptr [edi + 0x80]
// 008a0f79  52                   push edx
// 008a0f7a  e81b6af0ff           call 0x7a799a
// 008a0f7f  83c408               add esp, 8
// 008a0f82  5f                   pop edi
// 008a0f83  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?OnAfterCalcSize@CXTPRibbonGroup@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
