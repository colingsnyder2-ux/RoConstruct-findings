// roc 2010-06 0087b960  unit: VCEdit::?$CXTMaskEditT  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087b960
//
// 0087b960  53                   push ebx
// 0087b961  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0087b965  56                   push esi
// 0087b966  8bf1                 mov esi, ecx
// 0087b968  57                   push edi
// 0087b969  8dbe84000000         lea edi, [esi + 0x84]
// 0087b96f  85db                 test ebx, ebx
// 0087b971  7c25                 jl 0x87b998
// 0087b973  8bcf                 mov ecx, edi
// 0087b975  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087b97b  3bd8                 cmp ebx, eax
// 0087b97d  7d19                 jge 0x87b998
// 0087b97f  53                   push ebx
// 0087b980  8bcf                 mov ecx, edi
// 0087b982  ff1558c59e00         call dword ptr [0x9ec558]
// 0087b988  3a466c               cmp al, byte ptr [esi + 0x6c]
// 0087b98b  750b                 jne 0x87b998
// 0087b98d  5f                   pop edi
// 0087b98e  5e                   pop esi
// 0087b98f  b801000000           mov eax, 1
// 0087b994  5b                   pop ebx
// 0087b995  c20400               ret 4
// 0087b998  5f                   pop edi
// 0087b999  5e                   pop esi
// 0087b99a  33c0                 xor eax, eax
// 0087b99c  5b                   pop ebx
// 0087b99d  c20400               ret 4
// copied from an identical function in another client (function ?IsPromptPos@?$CXTMaskEditT@VCEdit@@@@IBEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp