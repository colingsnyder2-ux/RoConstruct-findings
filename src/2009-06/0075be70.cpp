// roc 2009-06 0075be70  unit: CXTPToolBar::PAVCToolBarInfo::?$CArray  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075be70
//
// 0075be70  56                   push esi
// 0075be71  57                   push edi
// 0075be72  8bf9                 mov edi, ecx
// 0075be74  33f6                 xor esi, esi
// 0075be76  39770c               cmp dword ptr [edi + 0xc], esi
// 0075be79  7e27                 jle 0x75bea2
// 0075be7b  eb03                 jmp 0x75be80
// 0075be7d  8d4900               lea ecx, [ecx]
// 0075be80  85f6                 test esi, esi
// 0075be82  7c2d                 jl 0x75beb1
// 0075be84  3b770c               cmp esi, dword ptr [edi + 0xc]
// 0075be87  7d28                 jge 0x75beb1
// 0075be89  8b4708               mov eax, dword ptr [edi + 8]
// 0075be8c  8b04b0               mov eax, dword ptr [eax + esi*4]
// 0075be8f  85c0                 test eax, eax
// 0075be91  7409                 je 0x75be9c
// 0075be93  50                   push eax
// 0075be94  e899cbfbff           call 0x718a32
// 0075be99  83c404               add esp, 4
// 0075be9c  46                   inc esi
// 0075be9d  3b770c               cmp esi, dword ptr [edi + 0xc]
// 0075bea0  7cde                 jl 0x75be80
// 0075bea2  6aff                 push -1
// 0075bea4  6a00                 push 0
// 0075bea6  8d4f04               lea ecx, [edi + 4]
// 0075bea9  e86266ffff           call 0x752510
// 0075beae  5f                   pop edi
// 0075beaf  5e                   pop esi
// 0075beb0  c3                   ret 
// 0075beb1  e82ecefbff           call 0x718ce4
// copied from an identical function in another client (function ?Clear@CXTPDockState@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPDockState.cpp