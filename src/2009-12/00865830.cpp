// roc 2009-12 00865830  unit: CXTPPropertyGridItem  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00865830
//
// 00865830  56                   push esi
// 00865831  8bf1                 mov esi, ecx
// 00865833  83bebc00000000       cmp dword ptr [esi + 0xbc], 0
// 0086583a  743d                 je 0x865879
// 0086583c  e8cff0ffff           call 0x864910
// 00865841  85c0                 test eax, eax
// 00865843  7515                 jne 0x86585a
// 00865845  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 0086584b  8b88b0000000         mov ecx, dword ptr [eax + 0xb0]
// 00865851  83b96801000000       cmp dword ptr [ecx + 0x168], 0
// 00865858  741f                 je 0x865879
// 0086585a  8b16                 mov edx, dword ptr [esi]
// 0086585c  8b4258               mov eax, dword ptr [edx + 0x58]
// 0086585f  8bce                 mov ecx, esi
// 00865861  ffd0                 call eax
// 00865863  85c0                 test eax, eax
// 00865865  7512                 jne 0x865879
// 00865867  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 0086586d  394128               cmp dword ptr [ecx + 0x28], eax
// 00865870  7e07                 jle 0x865879
// 00865872  b801000000           mov eax, 1
// 00865877  5e                   pop esi
// 00865878  c3                   ret 
// 00865879  33c0                 xor eax, eax
// 0086587b  5e                   pop esi
// 0086587c  c3                   ret 
// copied from an identical function in another client (function ?IsInplaceButtonsVisible@CXTPPropertyGridItem@@UBEHXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp