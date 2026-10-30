// roc 2009-12 00836be0  unit: CXTPToolBar::PAVCToolBarInfo::?$CArray  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00836be0
//
// 00836be0  56                   push esi
// 00836be1  57                   push edi
// 00836be2  8bf9                 mov edi, ecx
// 00836be4  33f6                 xor esi, esi
// 00836be6  39770c               cmp dword ptr [edi + 0xc], esi
// 00836be9  7e27                 jle 0x836c12
// 00836beb  eb03                 jmp 0x836bf0
// 00836bed  8d4900               lea ecx, [ecx]
// 00836bf0  85f6                 test esi, esi
// 00836bf2  7c2d                 jl 0x836c21
// 00836bf4  3b770c               cmp esi, dword ptr [edi + 0xc]
// 00836bf7  7d28                 jge 0x836c21
// 00836bf9  8b4708               mov eax, dword ptr [edi + 8]
// 00836bfc  8b04b0               mov eax, dword ptr [eax + esi*4]
// 00836bff  85c0                 test eax, eax
// 00836c01  7409                 je 0x836c0c
// 00836c03  50                   push eax
// 00836c04  e851ccfbff           call 0x7f385a
// 00836c09  83c404               add esp, 4
// 00836c0c  46                   inc esi
// 00836c0d  3b770c               cmp esi, dword ptr [edi + 0xc]
// 00836c10  7cde                 jl 0x836bf0
// 00836c12  6aff                 push -1
// 00836c14  6a00                 push 0
// 00836c16  8d4f04               lea ecx, [edi + 4]
// 00836c19  e882e70100           call 0x8553a0
// 00836c1e  5f                   pop edi
// 00836c1f  5e                   pop esi
// 00836c20  c3                   ret 
// 00836c21  e8e6cefbff           call 0x7f3b0c
// copied from an identical function in another client (function ?Clear@CXTPDockState@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPDockState.cpp