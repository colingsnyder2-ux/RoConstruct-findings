// roc 2007-03 006b40d0  unit: seg_006b0000  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006b40d0
//
// 006b40d0  55                   push ebp
// 006b40d1  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006b40d5  57                   push edi
// 006b40d6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006b40da  85ff                 test edi, edi
// 006b40dc  7409                 je 0x6b40e7
// 006b40de  85ed                 test ebp, ebp
// 006b40e0  7505                 jne 0x6b40e7
// 006b40e2  e8c7a2f6ff           call 0x61e3ae
// 006b40e7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006b40eb  8b4818               mov ecx, dword ptr [eax + 0x18]
// 006b40ee  f7d1                 not ecx
// 006b40f0  f6c101               test cl, 1
// 006b40f3  53                   push ebx
// 006b40f4  56                   push esi
// 006b40f5  7437                 je 0x6b412e
// 006b40f7  85ff                 test edi, edi
// 006b40f9  762c                 jbe 0x6b4127
// 006b40fb  eb03                 jmp 0x6b4100
// 006b40fd  8d4900               lea ecx, [ecx]
// 006b4100  81ffffffff07         cmp edi, 0x7ffffff
// 006b4106  8bdf                 mov ebx, edi
// 006b4108  7205                 jb 0x6b410f
// 006b410a  bbffffff07           mov ebx, 0x7ffffff
// 006b410f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006b4113  8bf3                 mov esi, ebx
// 006b4115  c1e604               shl esi, 4
// 006b4118  56                   push esi
// 006b4119  55                   push ebp
// 006b411a  e8afacf6ff           call 0x61edce
// 006b411f  2bfb                 sub edi, ebx
// 006b4121  03ee                 add ebp, esi
// 006b4123  85ff                 test edi, edi
// 006b4125  77d9                 ja 0x6b4100
// 006b4127  5e                   pop esi
// 006b4128  5b                   pop ebx
// 006b4129  5f                   pop edi
// 006b412a  5d                   pop ebp
// 006b412b  c20c00               ret 0xc
// 006b412e  85ff                 test edi, edi
// 006b4130  76f5                 jbe 0x6b4127
// 006b4132  81ffffffff07         cmp edi, 0x7ffffff
// 006b4138  8bdf                 mov ebx, edi
// 006b413a  7205                 jb 0x6b4141
// 006b413c  bbffffff07           mov ebx, 0x7ffffff
// 006b4141  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006b4145  8bf3                 mov esi, ebx
// 006b4147  c1e604               shl esi, 4
// 006b414a  56                   push esi
// 006b414b  55                   push ebp
// 006b414c  e877acf6ff           call 0x61edc8
// 006b4151  3bc6                 cmp eax, esi
// 006b4153  750f                 jne 0x6b4164
// 006b4155  2bfb                 sub edi, ebx
// 006b4157  03ee                 add ebp, esi
// 006b4159  85ff                 test edi, edi
// 006b415b  77d5                 ja 0x6b4132
// 006b415d  5e                   pop esi
// 006b415e  5b                   pop ebx
// 006b415f  5f                   pop edi
// 006b4160  5d                   pop ebp
// 006b4161  c20c00               ret 0xc
// 006b4164  6a00                 push 0
// 006b4166  6a03                 push 3
// 006b4168  e855acf6ff           call 0x61edc2
// copied from an identical function in another client (function ??$SerializeElements@UXTPDayInfo@CXTPDayInfoCache@CXTPCalendarController@@@@YGXAAVCArchive@@PAUXTPDayInfo@CXTPDayInfoCache@CXTPCalendarController@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarController.cpp