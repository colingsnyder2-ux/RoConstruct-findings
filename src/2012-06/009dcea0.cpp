// roc 2012-06 009dcea0  unit: PAUHWND__::?$CArray  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dcea0
//
// 009dcea0  55                   push ebp
// 009dcea1  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 009dcea5  57                   push edi
// 009dcea6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 009dceaa  85ff                 test edi, edi
// 009dceac  7409                 je 0x9dceb7
// 009dceae  85ed                 test ebp, ebp
// 009dceb0  7505                 jne 0x9dceb7
// 009dceb2  e80955faff           call 0x9823c0
// 009dceb7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009dcebb  8b4818               mov ecx, dword ptr [eax + 0x18]
// 009dcebe  f7d1                 not ecx
// 009dcec0  53                   push ebx
// 009dcec1  56                   push esi
// 009dcec2  f6c101               test cl, 1
// 009dcec5  7437                 je 0x9dcefe
// 009dcec7  85ff                 test edi, edi
// 009dcec9  762c                 jbe 0x9dcef7
// 009dcecb  eb03                 jmp 0x9dced0
// 009dcecd  8d4900               lea ecx, [ecx]
// 009dced0  8bdf                 mov ebx, edi
// 009dced2  81ffffffff07         cmp edi, 0x7ffffff
// 009dced8  7205                 jb 0x9dcedf
// 009dceda  bbffffff07           mov ebx, 0x7ffffff
// 009dcedf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009dcee3  8bf3                 mov esi, ebx
// 009dcee5  c1e604               shl esi, 4
// 009dcee8  56                   push esi
// 009dcee9  55                   push ebp
// 009dceea  e8775dfaff           call 0x982c66
// 009dceef  2bfb                 sub edi, ebx
// 009dcef1  03ee                 add ebp, esi
// 009dcef3  85ff                 test edi, edi
// 009dcef5  77d9                 ja 0x9dced0
// 009dcef7  5e                   pop esi
// 009dcef8  5b                   pop ebx
// 009dcef9  5f                   pop edi
// 009dcefa  5d                   pop ebp
// 009dcefb  c20c00               ret 0xc
// 009dcefe  85ff                 test edi, edi
// 009dcf00  76f5                 jbe 0x9dcef7
// 009dcf02  8bdf                 mov ebx, edi
// 009dcf04  81ffffffff07         cmp edi, 0x7ffffff
// 009dcf0a  7205                 jb 0x9dcf11
// 009dcf0c  bbffffff07           mov ebx, 0x7ffffff
// 009dcf11  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009dcf15  8bf3                 mov esi, ebx
// 009dcf17  c1e604               shl esi, 4
// 009dcf1a  56                   push esi
// 009dcf1b  55                   push ebp
// 009dcf1c  e83f5dfaff           call 0x982c60
// 009dcf21  3bc6                 cmp eax, esi
// 009dcf23  750f                 jne 0x9dcf34
// 009dcf25  2bfb                 sub edi, ebx
// 009dcf27  03ee                 add ebp, esi
// 009dcf29  85ff                 test edi, edi
// 009dcf2b  77d5                 ja 0x9dcf02
// 009dcf2d  5e                   pop esi
// 009dcf2e  5b                   pop ebx
// 009dcf2f  5f                   pop edi
// 009dcf30  5d                   pop ebp
// 009dcf31  c20c00               ret 0xc
// 009dcf34  6a00                 push 0
// 009dcf36  6a03                 push 3
// 009dcf38  e81d5dfaff           call 0x982c5a
// copied from an identical function in another client (function ??$SerializeElements@UXTPDayInfo@CXTPDayInfoCache@CXTPCalendarController@@@@YGXAAVCArchive@@PAUXTPDayInfo@CXTPDayInfoCache@CXTPCalendarController@@H@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarController.cpp