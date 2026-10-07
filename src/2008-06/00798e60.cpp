// roc 2008-06 00798e60  unit: CXTPRibbonControls  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00798e60
//
// 00798e60  56                   push esi
// 00798e61  8b742408             mov esi, dword ptr [esp + 8]
// 00798e65  83beac00000000       cmp dword ptr [esi + 0xac], 0
// 00798e6c  7406                 je 0x798e74
// 00798e6e  33c0                 xor eax, eax
// 00798e70  5e                   pop esi
// 00798e71  c20400               ret 4
// 00798e74  83be5801000000       cmp dword ptr [esi + 0x158], 0
// 00798e7b  75f1                 jne 0x798e6e
// 00798e7d  57                   push edi
// 00798e7e  8bbe00010000         mov edi, dword ptr [esi + 0x100]
// 00798e84  3bb774020000         cmp esi, dword ptr [edi + 0x274]
// 00798e8a  7414                 je 0x798ea0
// 00798e8c  56                   push esi
// 00798e8d  8bcf                 mov ecx, edi
// 00798e8f  e8fca6f8ff           call 0x723590
// 00798e94  85c0                 test eax, eax
// 00798e96  7508                 jne 0x798ea0
// 00798e98  3bb768020000         cmp esi, dword ptr [edi + 0x268]
// 00798e9e  7507                 jne 0x798ea7
// 00798ea0  5f                   pop edi
// 00798ea1  33c0                 xor eax, eax
// 00798ea3  5e                   pop esi
// 00798ea4  c20400               ret 4
// 00798ea7  33c0                 xor eax, eax
// 00798ea9  3bb7d0010000         cmp esi, dword ptr [edi + 0x1d0]
// 00798eaf  7409                 je 0x798eba
// 00798eb1  3bb7d4010000         cmp esi, dword ptr [edi + 0x1d4]
// 00798eb7  0f95c0               setne al
// 00798eba  5f                   pop edi
// 00798ebb  5e                   pop esi
// 00798ebc  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonQuickAccessControls.cpp (function ?ShouldSerializeControl@CXTPRibbonControls@@MAEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonQuickAccessControls.cpp
