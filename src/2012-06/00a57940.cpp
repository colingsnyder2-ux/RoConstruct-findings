// roc 2012-06 00a57940  unit: VCEdit::?$CXTMaskEditT  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a57940
//
// 00a57940  53                   push ebx
// 00a57941  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00a57945  56                   push esi
// 00a57946  8bf1                 mov esi, ecx
// 00a57948  57                   push edi
// 00a57949  8dbe84000000         lea edi, [esi + 0x84]
// 00a5794f  85db                 test ebx, ebx
// 00a57951  7c25                 jl 0xa57978
// 00a57953  8bcf                 mov ecx, edi
// 00a57955  ff155846b200         call dword ptr [0xb24658]
// 00a5795b  3bd8                 cmp ebx, eax
// 00a5795d  7d19                 jge 0xa57978
// 00a5795f  53                   push ebx
// 00a57960  8bcf                 mov ecx, edi
// 00a57962  ff15e844b200         call dword ptr [0xb244e8]
// 00a57968  3a466c               cmp al, byte ptr [esi + 0x6c]
// 00a5796b  750b                 jne 0xa57978
// 00a5796d  5f                   pop edi
// 00a5796e  5e                   pop esi
// 00a5796f  b801000000           mov eax, 1
// 00a57974  5b                   pop ebx
// 00a57975  c20400               ret 4
// 00a57978  5f                   pop edi
// 00a57979  5e                   pop esi
// 00a5797a  33c0                 xor eax, eax
// 00a5797c  5b                   pop ebx
// 00a5797d  c20400               ret 4
// copied from an identical function in another client (function ?IsPromptPos@?$CXTMaskEditT@VCEdit@@@@IBEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp