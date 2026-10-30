// roc 2009-12 0082d980  unit: CXTPReportSelectedRows::USELECTED_BLOCK::?$CArray  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082d980
//
// 0082d980  55                   push ebp
// 0082d981  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0082d985  57                   push edi
// 0082d986  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0082d98a  85ff                 test edi, edi
// 0082d98c  7409                 je 0x82d997
// 0082d98e  85ed                 test ebp, ebp
// 0082d990  7505                 jne 0x82d997
// 0082d992  e87561fcff           call 0x7f3b0c
// 0082d997  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0082d99b  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0082d99e  f7d1                 not ecx
// 0082d9a0  53                   push ebx
// 0082d9a1  56                   push esi
// 0082d9a2  f6c101               test cl, 1
// 0082d9a5  7439                 je 0x82d9e0
// 0082d9a7  85ff                 test edi, edi
// 0082d9a9  762e                 jbe 0x82d9d9
// 0082d9ab  eb03                 jmp 0x82d9b0
// 0082d9ad  8d4900               lea ecx, [ecx]
// 0082d9b0  8bdf                 mov ebx, edi
// 0082d9b2  81ffffffff0f         cmp edi, 0xfffffff
// 0082d9b8  7205                 jb 0x82d9bf
// 0082d9ba  bbffffff0f           mov ebx, 0xfffffff
// 0082d9bf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0082d9c3  8d34dd00000000       lea esi, [ebx*8]
// 0082d9ca  56                   push esi
// 0082d9cb  55                   push ebp
// 0082d9cc  e80b6afcff           call 0x7f43dc
// 0082d9d1  2bfb                 sub edi, ebx
// 0082d9d3  03ee                 add ebp, esi
// 0082d9d5  85ff                 test edi, edi
// 0082d9d7  77d7                 ja 0x82d9b0
// 0082d9d9  5e                   pop esi
// 0082d9da  5b                   pop ebx
// 0082d9db  5f                   pop edi
// 0082d9dc  5d                   pop ebp
// 0082d9dd  c20c00               ret 0xc
// 0082d9e0  85ff                 test edi, edi
// 0082d9e2  76f5                 jbe 0x82d9d9
// 0082d9e4  8bdf                 mov ebx, edi
// 0082d9e6  81ffffffff0f         cmp edi, 0xfffffff
// 0082d9ec  7205                 jb 0x82d9f3
// 0082d9ee  bbffffff0f           mov ebx, 0xfffffff
// 0082d9f3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0082d9f7  8d34dd00000000       lea esi, [ebx*8]
// 0082d9fe  56                   push esi
// 0082d9ff  55                   push ebp
// 0082da00  e8d169fcff           call 0x7f43d6
// 0082da05  3bc6                 cmp eax, esi
// 0082da07  750f                 jne 0x82da18
// 0082da09  2bfb                 sub edi, ebx
// 0082da0b  03ee                 add ebp, esi
// 0082da0d  85ff                 test edi, edi
// 0082da0f  77d3                 ja 0x82d9e4
// 0082da11  5e                   pop esi
// 0082da12  5b                   pop ebx
// 0082da13  5f                   pop edi
// 0082da14  5d                   pop ebp
// 0082da15  c20c00               ret 0xc
// 0082da18  6a00                 push 0
// 0082da1a  6a03                 push 3
// 0082da1c  e8af69fcff           call 0x7f43d0
// copied from an identical function in another client (function ??$SerializeElements@V?$CXTPSmartPtrInternalT@VCXTPCalendarEventLabel@@@@@@YGXAAVCArchive@@PAV?$CXTPSmartPtrInternalT@VCXTPCalendarEventLabel@@@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Calendar/XTPCalendarEventLabel.cpp