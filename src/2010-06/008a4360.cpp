// roc 2010-06 008a4360  unit: CXTPRibbonControls  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a4360
//
// 008a4360  56                   push esi
// 008a4361  8b742408             mov esi, dword ptr [esp + 8]
// 008a4365  83beac00000000       cmp dword ptr [esi + 0xac], 0
// 008a436c  7406                 je 0x8a4374
// 008a436e  33c0                 xor eax, eax
// 008a4370  5e                   pop esi
// 008a4371  c20400               ret 4
// 008a4374  83be5801000000       cmp dword ptr [esi + 0x158], 0
// 008a437b  75f1                 jne 0x8a436e
// 008a437d  57                   push edi
// 008a437e  8bbe00010000         mov edi, dword ptr [esi + 0x100]
// 008a4384  3bb774020000         cmp esi, dword ptr [edi + 0x274]
// 008a438a  7414                 je 0x8a43a0
// 008a438c  56                   push esi
// 008a438d  8bcf                 mov ecx, edi
// 008a438f  e83c5ffaff           call 0x84a2d0
// 008a4394  85c0                 test eax, eax
// 008a4396  7508                 jne 0x8a43a0
// 008a4398  3bb768020000         cmp esi, dword ptr [edi + 0x268]
// 008a439e  7507                 jne 0x8a43a7
// 008a43a0  5f                   pop edi
// 008a43a1  33c0                 xor eax, eax
// 008a43a3  5e                   pop esi
// 008a43a4  c20400               ret 4
// 008a43a7  33c0                 xor eax, eax
// 008a43a9  3bb7d0010000         cmp esi, dword ptr [edi + 0x1d0]
// 008a43af  7409                 je 0x8a43ba
// 008a43b1  3bb7d4010000         cmp esi, dword ptr [edi + 0x1d4]
// 008a43b7  0f95c0               setne al
// 008a43ba  5f                   pop edi
// 008a43bb  5e                   pop esi
// 008a43bc  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonQuickAccessControls.cpp (function ?ShouldSerializeControl@CXTPRibbonControls@@MAEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonQuickAccessControls.cpp
