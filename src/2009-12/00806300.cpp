// roc 2009-12 00806300  unit: CXTPCommandBarList  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00806300
//
// 00806300  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00806303  56                   push esi
// 00806304  8b742408             mov esi, dword ptr [esp + 8]
// 00806308  83c124               add ecx, 0x24
// 0080630b  56                   push esi
// 0080630c  50                   push eax
// 0080630d  e85e490600           call 0x86ac70
// 00806312  8bc6                 mov eax, esi
// 00806314  5e                   pop esi
// 00806315  c20400               ret 4
// copied from an identical function in another client (function ?Add@CXTPCommandBarList@@UAEPAVCXTPCommandBar@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp