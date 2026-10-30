// roc 2011-06 008df640  unit: VCEdit::?$CXTMaskEditT  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008df640
//
// 008df640  53                   push ebx
// 008df641  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008df645  56                   push esi
// 008df646  8bf1                 mov esi, ecx
// 008df648  57                   push edi
// 008df649  8dbe84000000         lea edi, [esi + 0x84]
// 008df64f  85db                 test ebx, ebx
// 008df651  7c25                 jl 0x8df678
// 008df653  8bcf                 mov ecx, edi
// 008df655  ff15a826a400         call dword ptr [0xa426a8]
// 008df65b  3bd8                 cmp ebx, eax
// 008df65d  7d19                 jge 0x8df678
// 008df65f  53                   push ebx
// 008df660  8bcf                 mov ecx, edi
// 008df662  ff153c25a400         call dword ptr [0xa4253c]
// 008df668  3a466c               cmp al, byte ptr [esi + 0x6c]
// 008df66b  750b                 jne 0x8df678
// 008df66d  5f                   pop edi
// 008df66e  5e                   pop esi
// 008df66f  b801000000           mov eax, 1
// 008df674  5b                   pop ebx
// 008df675  c20400               ret 4
// 008df678  5f                   pop edi
// 008df679  5e                   pop esi
// 008df67a  33c0                 xor eax, eax
// 008df67c  5b                   pop ebx
// 008df67d  c20400               ret 4
// copied from an identical function in another client (function ?IsPromptPos@?$CXTMaskEditT@VCEdit@@@@IBEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp