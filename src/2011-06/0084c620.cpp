// roc 2011-06 0084c620  unit: CXTPToolBar::PAVCToolBarInfo::?$CArray  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084c620
//
// 0084c620  56                   push esi
// 0084c621  57                   push edi
// 0084c622  8bf9                 mov edi, ecx
// 0084c624  33f6                 xor esi, esi
// 0084c626  39770c               cmp dword ptr [edi + 0xc], esi
// 0084c629  7e27                 jle 0x84c652
// 0084c62b  eb03                 jmp 0x84c630
// 0084c62d  8d4900               lea ecx, [ecx]
// 0084c630  85f6                 test esi, esi
// 0084c632  7c2d                 jl 0x84c661
// 0084c634  3b770c               cmp esi, dword ptr [edi + 0xc]
// 0084c637  7d28                 jge 0x84c661
// 0084c639  8b4708               mov eax, dword ptr [edi + 8]
// 0084c63c  8b04b0               mov eax, dword ptr [eax + esi*4]
// 0084c63f  85c0                 test eax, eax
// 0084c641  7409                 je 0x84c64c
// 0084c643  50                   push eax
// 0084c644  e80fdafbff           call 0x80a058
// 0084c649  83c404               add esp, 4
// 0084c64c  46                   inc esi
// 0084c64d  3b770c               cmp esi, dword ptr [edi + 0xc]
// 0084c650  7cde                 jl 0x84c630
// 0084c652  6aff                 push -1
// 0084c654  6a00                 push 0
// 0084c656  8d4f04               lea ecx, [edi + 4]
// 0084c659  e8e224ffff           call 0x83eb40
// 0084c65e  5f                   pop edi
// 0084c65f  5e                   pop esi
// 0084c660  c3                   ret 
// 0084c661  e8a4dcfbff           call 0x80a30a
// copied from an identical function in another client (function ?Clear@CXTPDockState@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPDockState.cpp