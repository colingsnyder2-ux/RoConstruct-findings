// roc 2011-06 008f9a80  unit: CXTPRibbonGroup  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f9a80
//
// 008f9a80  57                   push edi
// 008f9a81  8bf9                 mov edi, ecx
// 008f9a83  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 008f9a89  85c0                 test eax, eax
// 008f9a8b  7475                 je 0x8f9b02
// 008f9a8d  56                   push esi
// 008f9a8e  33f6                 xor esi, esi
// 008f9a90  397004               cmp dword ptr [eax + 4], esi
// 008f9a93  7e30                 jle 0x8f9ac5
// 008f9a95  85f6                 test esi, esi
// 008f9a97  7509                 jne 0x8f9aa2
// 008f9a99  8b00                 mov eax, dword ptr [eax]
// 008f9a9b  c7402c01000000       mov dword ptr [eax + 0x2c], 1
// 008f9aa2  8b9780000000         mov edx, dword ptr [edi + 0x80]
// 008f9aa8  8b02                 mov eax, dword ptr [edx]
// 008f9aaa  8bce                 mov ecx, esi
// 008f9aac  c1e104               shl ecx, 4
// 008f9aaf  03ce                 add ecx, esi
// 008f9ab1  8d0c88               lea ecx, [eax + ecx*4]
// 008f9ab4  e827feffff           call 0x8f98e0
// 008f9ab9  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 008f9abf  46                   inc esi
// 008f9ac0  3b7004               cmp esi, dword ptr [eax + 4]
// 008f9ac3  7cd0                 jl 0x8f9a95
// 008f9ac5  8b8f80000000         mov ecx, dword ptr [edi + 0x80]
// 008f9acb  83791000             cmp dword ptr [ecx + 0x10], 0
// 008f9acf  5e                   pop esi
// 008f9ad0  7413                 je 0x8f9ae5
// 008f9ad2  837f7000             cmp dword ptr [edi + 0x70], 0
// 008f9ad6  750d                 jne 0x8f9ae5
// 008f9ad8  8b575c               mov edx, dword ptr [edi + 0x5c]
// 008f9adb  c7825802000001000000 mov dword ptr [edx + 0x258], 1
// 008f9ae5  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 008f9aeb  8b08                 mov ecx, dword ptr [eax]
// 008f9aed  51                   push ecx
// 008f9aee  e81108f1ff           call 0x80a304
// 008f9af3  8b9780000000         mov edx, dword ptr [edi + 0x80]
// 008f9af9  52                   push edx
// 008f9afa  e85905f1ff           call 0x80a058
// 008f9aff  83c408               add esp, 8
// 008f9b02  5f                   pop edi
// 008f9b03  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?OnAfterCalcSize@CXTPRibbonGroup@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
