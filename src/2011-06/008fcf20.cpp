// roc 2011-06 008fcf20  unit: CXTPRibbonControls  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fcf20
//
// 008fcf20  56                   push esi
// 008fcf21  8b742408             mov esi, dword ptr [esp + 8]
// 008fcf25  83beac00000000       cmp dword ptr [esi + 0xac], 0
// 008fcf2c  7406                 je 0x8fcf34
// 008fcf2e  33c0                 xor eax, eax
// 008fcf30  5e                   pop esi
// 008fcf31  c20400               ret 4
// 008fcf34  83be5801000000       cmp dword ptr [esi + 0x158], 0
// 008fcf3b  75f1                 jne 0x8fcf2e
// 008fcf3d  57                   push edi
// 008fcf3e  8bbe00010000         mov edi, dword ptr [esi + 0x100]
// 008fcf44  3bb774020000         cmp esi, dword ptr [edi + 0x274]
// 008fcf4a  7414                 je 0x8fcf60
// 008fcf4c  56                   push esi
// 008fcf4d  8bcf                 mov ecx, edi
// 008fcf4f  e8bca4faff           call 0x8a7410
// 008fcf54  85c0                 test eax, eax
// 008fcf56  7508                 jne 0x8fcf60
// 008fcf58  3bb768020000         cmp esi, dword ptr [edi + 0x268]
// 008fcf5e  7507                 jne 0x8fcf67
// 008fcf60  5f                   pop edi
// 008fcf61  33c0                 xor eax, eax
// 008fcf63  5e                   pop esi
// 008fcf64  c20400               ret 4
// 008fcf67  33c0                 xor eax, eax
// 008fcf69  3bb7d0010000         cmp esi, dword ptr [edi + 0x1d0]
// 008fcf6f  7409                 je 0x8fcf7a
// 008fcf71  3bb7d4010000         cmp esi, dword ptr [edi + 0x1d4]
// 008fcf77  0f95c0               setne al
// 008fcf7a  5f                   pop edi
// 008fcf7b  5e                   pop esi
// 008fcf7c  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonQuickAccessControls.cpp (function ?ShouldSerializeControl@CXTPRibbonControls@@MAEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonQuickAccessControls.cpp
