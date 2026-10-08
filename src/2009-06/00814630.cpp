// roc 2009-06 00814630  unit: CXTPRibbonControls  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00814630
//
// 00814630  56                   push esi
// 00814631  8b742408             mov esi, dword ptr [esp + 8]
// 00814635  83beac00000000       cmp dword ptr [esi + 0xac], 0
// 0081463c  7406                 je 0x814644
// 0081463e  33c0                 xor eax, eax
// 00814640  5e                   pop esi
// 00814641  c20400               ret 4
// 00814644  83be5801000000       cmp dword ptr [esi + 0x158], 0
// 0081464b  75f1                 jne 0x81463e
// 0081464d  57                   push edi
// 0081464e  8bbe00010000         mov edi, dword ptr [esi + 0x100]
// 00814654  3bb774020000         cmp esi, dword ptr [edi + 0x274]
// 0081465a  7414                 je 0x814670
// 0081465c  56                   push esi
// 0081465d  8bcf                 mov ecx, edi
// 0081465f  e8bc48faff           call 0x7b8f20
// 00814664  85c0                 test eax, eax
// 00814666  7508                 jne 0x814670
// 00814668  3bb768020000         cmp esi, dword ptr [edi + 0x268]
// 0081466e  7507                 jne 0x814677
// 00814670  5f                   pop edi
// 00814671  33c0                 xor eax, eax
// 00814673  5e                   pop esi
// 00814674  c20400               ret 4
// 00814677  33c0                 xor eax, eax
// 00814679  3bb7d0010000         cmp esi, dword ptr [edi + 0x1d0]
// 0081467f  7409                 je 0x81468a
// 00814681  3bb7d4010000         cmp esi, dword ptr [edi + 0x1d4]
// 00814687  0f95c0               setne al
// 0081468a  5f                   pop edi
// 0081468b  5e                   pop esi
// 0081468c  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonQuickAccessControls.cpp (function ?ShouldSerializeControl@CXTPRibbonControls@@MAEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonQuickAccessControls.cpp
