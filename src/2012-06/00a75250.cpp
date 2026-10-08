// roc 2012-06 00a75250  unit: CXTPRibbonControls  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a75250
//
// 00a75250  56                   push esi
// 00a75251  8b742408             mov esi, dword ptr [esp + 8]
// 00a75255  83beac00000000       cmp dword ptr [esi + 0xac], 0
// 00a7525c  7406                 je 0xa75264
// 00a7525e  33c0                 xor eax, eax
// 00a75260  5e                   pop esi
// 00a75261  c20400               ret 4
// 00a75264  83be5801000000       cmp dword ptr [esi + 0x158], 0
// 00a7526b  75f1                 jne 0xa7525e
// 00a7526d  57                   push edi
// 00a7526e  8bbe00010000         mov edi, dword ptr [esi + 0x100]
// 00a75274  3bb774020000         cmp esi, dword ptr [edi + 0x274]
// 00a7527a  7414                 je 0xa75290
// 00a7527c  56                   push esi
// 00a7527d  8bcf                 mov ecx, edi
// 00a7527f  e83ca6faff           call 0xa1f8c0
// 00a75284  85c0                 test eax, eax
// 00a75286  7508                 jne 0xa75290
// 00a75288  3bb768020000         cmp esi, dword ptr [edi + 0x268]
// 00a7528e  7507                 jne 0xa75297
// 00a75290  5f                   pop edi
// 00a75291  33c0                 xor eax, eax
// 00a75293  5e                   pop esi
// 00a75294  c20400               ret 4
// 00a75297  33c0                 xor eax, eax
// 00a75299  3bb7d0010000         cmp esi, dword ptr [edi + 0x1d0]
// 00a7529f  7409                 je 0xa752aa
// 00a752a1  3bb7d4010000         cmp esi, dword ptr [edi + 0x1d4]
// 00a752a7  0f95c0               setne al
// 00a752aa  5f                   pop edi
// 00a752ab  5e                   pop esi
// 00a752ac  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonQuickAccessControls.cpp (function ?ShouldSerializeControl@CXTPRibbonControls@@MAEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonQuickAccessControls.cpp
