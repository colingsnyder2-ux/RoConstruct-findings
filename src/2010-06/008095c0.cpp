// roc 2010-06 008095c0  unit: PAUHWND__::?$CArray  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008095c0
//
// 008095c0  55                   push ebp
// 008095c1  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 008095c5  57                   push edi
// 008095c6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008095ca  85ff                 test edi, edi
// 008095cc  7409                 je 0x8095d7
// 008095ce  85ed                 test ebp, ebp
// 008095d0  7505                 jne 0x8095d7
// 008095d2  e875e6f9ff           call 0x7a7c4c
// 008095d7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008095db  8b4818               mov ecx, dword ptr [eax + 0x18]
// 008095de  f7d1                 not ecx
// 008095e0  53                   push ebx
// 008095e1  56                   push esi
// 008095e2  f6c101               test cl, 1
// 008095e5  7437                 je 0x80961e
// 008095e7  85ff                 test edi, edi
// 008095e9  762c                 jbe 0x809617
// 008095eb  eb03                 jmp 0x8095f0
// 008095ed  8d4900               lea ecx, [ecx]
// 008095f0  8bdf                 mov ebx, edi
// 008095f2  81ffffffff07         cmp edi, 0x7ffffff
// 008095f8  7205                 jb 0x8095ff
// 008095fa  bbffffff07           mov ebx, 0x7ffffff
// 008095ff  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00809603  8bf3                 mov esi, ebx
// 00809605  c1e604               shl esi, 4
// 00809608  56                   push esi
// 00809609  55                   push ebp
// 0080960a  e80deff9ff           call 0x7a851c
// 0080960f  2bfb                 sub edi, ebx
// 00809611  03ee                 add ebp, esi
// 00809613  85ff                 test edi, edi
// 00809615  77d9                 ja 0x8095f0
// 00809617  5e                   pop esi
// 00809618  5b                   pop ebx
// 00809619  5f                   pop edi
// 0080961a  5d                   pop ebp
// 0080961b  c20c00               ret 0xc
// 0080961e  85ff                 test edi, edi
// 00809620  76f5                 jbe 0x809617
// 00809622  8bdf                 mov ebx, edi
// 00809624  81ffffffff07         cmp edi, 0x7ffffff
// 0080962a  7205                 jb 0x809631
// 0080962c  bbffffff07           mov ebx, 0x7ffffff
// 00809631  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00809635  8bf3                 mov esi, ebx
// 00809637  c1e604               shl esi, 4
// 0080963a  56                   push esi
// 0080963b  55                   push ebp
// 0080963c  e8d5eef9ff           call 0x7a8516
// 00809641  3bc6                 cmp eax, esi
// 00809643  750f                 jne 0x809654
// 00809645  2bfb                 sub edi, ebx
// 00809647  03ee                 add ebp, esi
// 00809649  85ff                 test edi, edi
// 0080964b  77d5                 ja 0x809622
// 0080964d  5e                   pop esi
// 0080964e  5b                   pop ebx
// 0080964f  5f                   pop edi
// 00809650  5d                   pop ebp
// 00809651  c20c00               ret 0xc
// 00809654  6a00                 push 0
// 00809656  6a03                 push 3
// 00809658  e8b3eef9ff           call 0x7a8510
// copied from an identical function in another client (function ??$SerializeElements@UXTPDayInfo@CXTPDayInfoCache@CXTPCalendarController@@@@YGXAAVCArchive@@PAUXTPDayInfo@CXTPDayInfoCache@CXTPCalendarController@@H@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarController.cpp