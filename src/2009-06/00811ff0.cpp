// roc 2009-06 00811ff0  unit: CXTPRibbonGroup  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00811ff0
//
// 00811ff0  53                   push ebx
// 00811ff1  55                   push ebp
// 00811ff2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00811ff6  57                   push edi
// 00811ff7  8bd9                 mov ebx, ecx
// 00811ff9  85ed                 test ebp, ebp
// 00811ffb  0f8c93000000         jl 0x812094
// 00812001  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00812005  85ff                 test edi, edi
// 00812007  0f8e87000000         jle 0x812094
// 0081200d  3b6b08               cmp ebp, dword ptr [ebx + 8]
// 00812010  7c0d                 jl 0x81201f
// 00812012  6aff                 push -1
// 00812014  8d042f               lea eax, [edi + ebp]
// 00812017  50                   push eax
// 00812018  e8f304f4ff           call 0x752510
// 0081201d  eb53                 jmp 0x812072
// 0081201f  56                   push esi
// 00812020  8b7308               mov esi, dword ptr [ebx + 8]
// 00812023  6aff                 push -1
// 00812025  8d0c3e               lea ecx, [esi + edi]
// 00812028  51                   push ecx
// 00812029  8bcb                 mov ecx, ebx
// 0081202b  e8e004f4ff           call 0x752510
// 00812030  8b4304               mov eax, dword ptr [ebx + 4]
// 00812033  2bf5                 sub esi, ebp
// 00812035  03f6                 add esi, esi
// 00812037  03f6                 add esi, esi
// 00812039  8d0ca8               lea ecx, [eax + ebp*4]
// 0081203c  56                   push esi
// 0081203d  51                   push ecx
// 0081203e  8d142f               lea edx, [edi + ebp]
// 00812041  8d0490               lea eax, [eax + edx*4]
// 00812044  56                   push esi
// 00812045  50                   push eax
// 00812046  ff155ce98900         call dword ptr [0x89e95c]
// 0081204c  50                   push eax
// 0081204d  e8ce0cbfff           call 0x402d20
// 00812052  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00812055  8d04bd00000000       lea eax, [edi*4]
// 0081205c  50                   push eax
// 0081205d  8d04ad00000000       lea eax, [ebp*4]
// 00812064  03c8                 add ecx, eax
// 00812066  6a00                 push 0
// 00812068  51                   push ecx
// 00812069  e8067cf0ff           call 0x719c74
// 0081206e  83c420               add esp, 0x20
// 00812071  5e                   pop esi
// 00812072  8b442414             mov eax, dword ptr [esp + 0x14]
// 00812076  03ed                 add ebp, ebp
// 00812078  03ed                 add ebp, ebp
// 0081207a  8d9b00000000         lea ebx, [ebx]
// 00812080  8b5304               mov edx, dword ptr [ebx + 4]
// 00812083  4f                   dec edi
// 00812084  89042a               mov dword ptr [edx + ebp], eax
// 00812087  83c504               add ebp, 4
// 0081208a  85ff                 test edi, edi
// 0081208c  75f2                 jne 0x812080
// 0081208e  5f                   pop edi
// 0081208f  5d                   pop ebp
// 00812090  5b                   pop ebx
// 00812091  c20c00               ret 0xc
// 00812094  e84b6cf0ff           call 0x718ce4
// copied from an identical function in another client (function ?InsertAt@?$CArray@PAVCXTPPropertyGridItem@@PAV1@@@QAEXHPAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp