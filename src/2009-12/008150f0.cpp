// roc 2009-12 008150f0  unit: CXTPCommandBarsContextMenus  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008150f0
//
// 008150f0  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 008150f3  56                   push esi
// 008150f4  8b742408             mov esi, dword ptr [esp + 8]
// 008150f8  83c124               add ecx, 0x24
// 008150fb  56                   push esi
// 008150fc  50                   push eax
// 008150fd  e86e5b0500           call 0x86ac70
// 00815102  c7861402000001000000 mov dword ptr [esi + 0x214], 1
// 0081510c  8bc6                 mov eax, esi
// 0081510e  5e                   pop esi
// 0081510f  c20400               ret 4
// copied from an identical function in another client (function ?Add@CXTPCommandBarsContextMenus@@UAEPAVCXTPCommandBar@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp