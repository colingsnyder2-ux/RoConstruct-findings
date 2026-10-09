// roc 2009-12 008f0170  unit: CXTPRibbonControls  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f0170
//
// 008f0170  56                   push esi
// 008f0171  8b742408             mov esi, dword ptr [esp + 8]
// 008f0175  83beac00000000       cmp dword ptr [esi + 0xac], 0
// 008f017c  7406                 je 0x8f0184
// 008f017e  33c0                 xor eax, eax
// 008f0180  5e                   pop esi
// 008f0181  c20400               ret 4
// 008f0184  83be5801000000       cmp dword ptr [esi + 0x158], 0
// 008f018b  75f1                 jne 0x8f017e
// 008f018d  57                   push edi
// 008f018e  8bbe00010000         mov edi, dword ptr [esi + 0x100]
// 008f0194  3bb774020000         cmp esi, dword ptr [edi + 0x274]
// 008f019a  7414                 je 0x8f01b0
// 008f019c  56                   push esi
// 008f019d  8bcf                 mov ecx, edi
// 008f019f  e89c5ffaff           call 0x896140
// 008f01a4  85c0                 test eax, eax
// 008f01a6  7508                 jne 0x8f01b0
// 008f01a8  3bb768020000         cmp esi, dword ptr [edi + 0x268]
// 008f01ae  7507                 jne 0x8f01b7
// 008f01b0  5f                   pop edi
// 008f01b1  33c0                 xor eax, eax
// 008f01b3  5e                   pop esi
// 008f01b4  c20400               ret 4
// 008f01b7  33c0                 xor eax, eax
// 008f01b9  3bb7d0010000         cmp esi, dword ptr [edi + 0x1d0]
// 008f01bf  7409                 je 0x8f01ca
// 008f01c1  3bb7d4010000         cmp esi, dword ptr [edi + 0x1d4]
// 008f01c7  0f95c0               setne al
// 008f01ca  5f                   pop edi
// 008f01cb  5e                   pop esi
// 008f01cc  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonQuickAccessControls.cpp (function ?ShouldSerializeControl@CXTPRibbonControls@@MAEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonQuickAccessControls.cpp
