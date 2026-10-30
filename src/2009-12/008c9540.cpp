// roc 2009-12 008c9540  unit: CXTPPropertyGridInplaceEdit  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c9540
//
// 008c9540  56                   push esi
// 008c9541  57                   push edi
// 008c9542  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008c9546  817f0400010000       cmp dword ptr [edi + 4], 0x100
// 008c954d  8bf1                 mov esi, ecx
// 008c954f  7514                 jne 0x8c9565
// 008c9551  57                   push edi
// 008c9552  e803cf0500           call 0x92645a
// 008c9557  85c0                 test eax, eax
// 008c9559  740a                 je 0x8c9565
// 008c955b  5f                   pop edi
// 008c955c  b801000000           mov eax, 1
// 008c9561  5e                   pop esi
// 008c9562  c20400               ret 4
// 008c9565  57                   push edi
// 008c9566  8bce                 mov ecx, esi
// 008c9568  e833f9ffff           call 0x8c8ea0
// 008c956d  5f                   pop edi
// 008c956e  5e                   pop esi
// 008c956f  c20400               ret 4
// copied from an identical function in another client (function ?PreTranslateMessage@CXTPPropertyGridInplaceEdit@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\PropertyGrid\XTPPropertyGridInplaceEdit.cpp