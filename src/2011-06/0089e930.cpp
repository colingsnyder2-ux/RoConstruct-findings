// roc 2011-06 0089e930  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089e930
//
// 0089e930  55                   push ebp
// 0089e931  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0089e935  57                   push edi
// 0089e936  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0089e93a  85ff                 test edi, edi
// 0089e93c  7409                 je 0x89e947
// 0089e93e  85ed                 test ebp, ebp
// 0089e940  7505                 jne 0x89e947
// 0089e942  e8c3b9f6ff           call 0x80a30a
// 0089e947  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0089e94b  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0089e94e  f7d1                 not ecx
// 0089e950  53                   push ebx
// 0089e951  56                   push esi
// 0089e952  f6c101               test cl, 1
// 0089e955  7437                 je 0x89e98e
// 0089e957  85ff                 test edi, edi
// 0089e959  762c                 jbe 0x89e987
// 0089e95b  eb03                 jmp 0x89e960
// 0089e95d  8d4900               lea ecx, [ecx]
// 0089e960  8bdf                 mov ebx, edi
// 0089e962  81ffffffff07         cmp edi, 0x7ffffff
// 0089e968  7205                 jb 0x89e96f
// 0089e96a  bbffffff07           mov ebx, 0x7ffffff
// 0089e96f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089e973  8bf3                 mov esi, ebx
// 0089e975  c1e604               shl esi, 4
// 0089e978  56                   push esi
// 0089e979  55                   push ebp
// 0089e97a  e861c2f6ff           call 0x80abe0
// 0089e97f  2bfb                 sub edi, ebx
// 0089e981  03ee                 add ebp, esi
// 0089e983  85ff                 test edi, edi
// 0089e985  77d9                 ja 0x89e960
// 0089e987  5e                   pop esi
// 0089e988  5b                   pop ebx
// 0089e989  5f                   pop edi
// 0089e98a  5d                   pop ebp
// 0089e98b  c20c00               ret 0xc
// 0089e98e  85ff                 test edi, edi
// 0089e990  76f5                 jbe 0x89e987
// 0089e992  8bdf                 mov ebx, edi
// 0089e994  81ffffffff07         cmp edi, 0x7ffffff
// 0089e99a  7205                 jb 0x89e9a1
// 0089e99c  bbffffff07           mov ebx, 0x7ffffff
// 0089e9a1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089e9a5  8bf3                 mov esi, ebx
// 0089e9a7  c1e604               shl esi, 4
// 0089e9aa  56                   push esi
// 0089e9ab  55                   push ebp
// 0089e9ac  e829c2f6ff           call 0x80abda
// 0089e9b1  3bc6                 cmp eax, esi
// 0089e9b3  750f                 jne 0x89e9c4
// 0089e9b5  2bfb                 sub edi, ebx
// 0089e9b7  03ee                 add ebp, esi
// 0089e9b9  85ff                 test edi, edi
// 0089e9bb  77d5                 ja 0x89e992
// 0089e9bd  5e                   pop esi
// 0089e9be  5b                   pop ebx
// 0089e9bf  5f                   pop edi
// 0089e9c0  5d                   pop ebp
// 0089e9c1  c20c00               ret 0xc
// 0089e9c4  6a00                 push 0
// 0089e9c6  6a03                 push 3
// 0089e9c8  e807c2f6ff           call 0x80abd4
// copied from an identical function in another client (function ??$SerializeElements@UXTPDayInfo@CXTPDayInfoCache@CXTPCalendarController@@@@YGXAAVCArchive@@PAUXTPDayInfo@CXTPDayInfoCache@CXTPCalendarController@@H@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarController.cpp