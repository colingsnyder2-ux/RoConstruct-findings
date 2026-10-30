// roc 2009-12 0084aab0  unit: CXTPControlSelector  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084aab0
//
// 0084aab0  56                   push esi
// 0084aab1  57                   push edi
// 0084aab2  ff15cccb9800         call dword ptr [0x98cbcc]
// 0084aab8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0084aabc  56                   push esi
// 0084aabd  8bf8                 mov edi, eax
// 0084aabf  e894be0d00           call 0x926958
// 0084aac4  85c0                 test eax, eax
// 0084aac6  740c                 je 0x84aad4
// 0084aac8  50                   push eax
// 0084aac9  8bf0                 mov esi, eax
// 0084aacb  e888be0d00           call 0x926958
// 0084aad0  85c0                 test eax, eax
// 0084aad2  75f4                 jne 0x84aac8
// 0084aad4  56                   push esi
// 0084aad5  ff1518cb9800         call dword ptr [0x98cb18]
// 0084aadb  33c9                 xor ecx, ecx
// 0084aadd  3bf8                 cmp edi, eax
// 0084aadf  0f94c1               sete cl
// 0084aae2  5f                   pop edi
// 0084aae3  5e                   pop esi
// 0084aae4  8bc1                 mov eax, ecx
// 0084aae6  c3                   ret 
// copied from an identical function in another client (function ?IsTopParentActive@CXTPDrawHelpers@@SAHPAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\Common\XTPDrawHelpers.cpp