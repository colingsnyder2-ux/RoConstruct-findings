// roc 2009-06 007ecc40  unit: VCEdit::?$CXTMaskEditT  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ecc40
//
// 007ecc40  53                   push ebx
// 007ecc41  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007ecc45  56                   push esi
// 007ecc46  8bf1                 mov esi, ecx
// 007ecc48  57                   push edi
// 007ecc49  8dbe84000000         lea edi, [esi + 0x84]
// 007ecc4f  85db                 test ebx, ebx
// 007ecc51  7c25                 jl 0x7ecc78
// 007ecc53  8bcf                 mov ecx, edi
// 007ecc55  ff1554fb8900         call dword ptr [0x89fb54]
// 007ecc5b  3bd8                 cmp ebx, eax
// 007ecc5d  7d19                 jge 0x7ecc78
// 007ecc5f  53                   push ebx
// 007ecc60  8bcf                 mov ecx, edi
// 007ecc62  ff15e0f98900         call dword ptr [0x89f9e0]
// 007ecc68  3a466c               cmp al, byte ptr [esi + 0x6c]
// 007ecc6b  750b                 jne 0x7ecc78
// 007ecc6d  5f                   pop edi
// 007ecc6e  5e                   pop esi
// 007ecc6f  b801000000           mov eax, 1
// 007ecc74  5b                   pop ebx
// 007ecc75  c20400               ret 4
// 007ecc78  5f                   pop edi
// 007ecc79  5e                   pop esi
// 007ecc7a  33c0                 xor eax, eax
// 007ecc7c  5b                   pop ebx
// 007ecc7d  c20400               ret 4
// copied from an identical function in another client (function ?IsPromptPos@?$CXTMaskEditT@VCEdit@@@@IBEHH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp