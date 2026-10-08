// from server: 100% by auto
// roc 2007-08 0069bca0  unit: CXTPPropertyGridView  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069bca0
//
// 0069bca0  51                   push ecx
// 0069bca1  8b542408             mov edx, dword ptr [esp + 8]
// 0069bca5  56                   push esi
// 0069bca6  8bf1                 mov esi, ecx
// 0069bca8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0069bcac  8d442404             lea eax, [esp + 4]
// 0069bcb0  50                   push eax
// 0069bcb1  51                   push ecx
// 0069bcb2  52                   push edx
// 0069bcb3  8bce                 mov ecx, esi
// 0069bcb5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0069bcbd  e8ccc60900           call 0x73838e
// 0069bcc2  83f8ff               cmp eax, -1
// 0069bcc5  7414                 je 0x69bcdb
// 0069bcc7  837c240400           cmp dword ptr [esp + 4], 0
// 0069bccc  750d                 jne 0x69bcdb
// 0069bcce  50                   push eax
// 0069bccf  8bce                 mov ecx, esi
// 0069bcd1  e84affffff           call 0x69bc20
// 0069bcd6  5e                   pop esi
// 0069bcd7  59                   pop ecx
// 0069bcd8  c20800               ret 8
// 0069bcdb  33c0                 xor eax, eax
// 0069bcdd  5e                   pop esi
// 0069bcde  59                   pop ecx
// 0069bcdf  c20800               ret 8
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?ItemFromPoint@CXTPPropertyGridView@@QBEPAVCXTPPropertyGridItem@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
