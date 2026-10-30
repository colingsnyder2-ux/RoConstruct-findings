// roc 2009-12 0080d470  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080d470
//
// 0080d470  8b542404             mov edx, dword ptr [esp + 4]
// 0080d474  8d442404             lea eax, [esp + 4]
// 0080d478  50                   push eax
// 0080d479  52                   push edx
// 0080d47a  83c128               add ecx, 0x28
// 0080d47d  e8fef4ffff           call 0x80c980
// 0080d482  f7d8                 neg eax
// 0080d484  1bc0                 sbb eax, eax
// 0080d486  23442404             and eax, dword ptr [esp + 4]
// 0080d48a  c20400               ret 4
// copied from an identical function in another client (function ?GetIconSet@CXTPImageManager@@QBEPAVCXTPImageManagerIconSet@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp