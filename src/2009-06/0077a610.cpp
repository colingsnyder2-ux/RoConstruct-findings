// roc 2009-06 0077a610  unit: PAUHWND__::?$CArray  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077a610
//
// 0077a610  55                   push ebp
// 0077a611  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0077a615  57                   push edi
// 0077a616  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0077a61a  85ff                 test edi, edi
// 0077a61c  7409                 je 0x77a627
// 0077a61e  85ed                 test ebp, ebp
// 0077a620  7505                 jne 0x77a627
// 0077a622  e8bde6f9ff           call 0x718ce4
// 0077a627  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0077a62b  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0077a62e  f7d1                 not ecx
// 0077a630  53                   push ebx
// 0077a631  56                   push esi
// 0077a632  f6c101               test cl, 1
// 0077a635  7437                 je 0x77a66e
// 0077a637  85ff                 test edi, edi
// 0077a639  762c                 jbe 0x77a667
// 0077a63b  eb03                 jmp 0x77a640
// 0077a63d  8d4900               lea ecx, [ecx]
// 0077a640  8bdf                 mov ebx, edi
// 0077a642  81ffffffff07         cmp edi, 0x7ffffff
// 0077a648  7205                 jb 0x77a64f
// 0077a64a  bbffffff07           mov ebx, 0x7ffffff
// 0077a64f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0077a653  8bf3                 mov esi, ebx
// 0077a655  c1e604               shl esi, 4
// 0077a658  56                   push esi
// 0077a659  55                   push ebp
// 0077a65a  e84feff9ff           call 0x7195ae
// 0077a65f  2bfb                 sub edi, ebx
// 0077a661  03ee                 add ebp, esi
// 0077a663  85ff                 test edi, edi
// 0077a665  77d9                 ja 0x77a640
// 0077a667  5e                   pop esi
// 0077a668  5b                   pop ebx
// 0077a669  5f                   pop edi
// 0077a66a  5d                   pop ebp
// 0077a66b  c20c00               ret 0xc
// 0077a66e  85ff                 test edi, edi
// 0077a670  76f5                 jbe 0x77a667
// 0077a672  8bdf                 mov ebx, edi
// 0077a674  81ffffffff07         cmp edi, 0x7ffffff
// 0077a67a  7205                 jb 0x77a681
// 0077a67c  bbffffff07           mov ebx, 0x7ffffff
// 0077a681  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0077a685  8bf3                 mov esi, ebx
// 0077a687  c1e604               shl esi, 4
// 0077a68a  56                   push esi
// 0077a68b  55                   push ebp
// 0077a68c  e817eff9ff           call 0x7195a8
// 0077a691  3bc6                 cmp eax, esi
// 0077a693  750f                 jne 0x77a6a4
// 0077a695  2bfb                 sub edi, ebx
// 0077a697  03ee                 add ebp, esi
// 0077a699  85ff                 test edi, edi
// 0077a69b  77d5                 ja 0x77a672
// 0077a69d  5e                   pop esi
// 0077a69e  5b                   pop ebx
// 0077a69f  5f                   pop edi
// 0077a6a0  5d                   pop ebp
// 0077a6a1  c20c00               ret 0xc
// 0077a6a4  6a00                 push 0
// 0077a6a6  6a03                 push 3
// 0077a6a8  e8f5eef9ff           call 0x7195a2
// copied from an identical function in another client (function ??$SerializeElements@UXTPDayInfo@CXTPDayInfoCache@CXTPCalendarController@@@@YGXAAVCArchive@@PAUXTPDayInfo@CXTPDayInfoCache@CXTPCalendarController@@H@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarController.cpp