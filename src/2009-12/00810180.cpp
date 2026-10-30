// roc 2009-12 00810180  unit: CXTPImageManager  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00810180
//
// 00810180  8bd1                 mov edx, ecx
// 00810182  56                   push esi
// 00810183  8d7278               lea esi, [edx + 0x78]
// 00810186  8bce                 mov ecx, esi
// 00810188  e813a7ffff           call 0x80a8a0
// 0081018d  85c0                 test eax, eax
// 0081018f  7407                 je 0x810198
// 00810191  8bca                 mov ecx, edx
// 00810193  e8b8e0ffff           call 0x80e250
// 00810198  8bc6                 mov eax, esi
// 0081019a  5e                   pop esi
// 0081019b  c3                   ret 
// copied from an identical function in another client (function ?GetShadowIcon@CXTPImageManagerIcon@@QAEAAVCXTPImageManagerIconHandle@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp