// roc 2009-12 00811090  unit: CXTPImageManager  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00811090
//
// 00811090  8b442414             mov eax, dword ptr [esp + 0x14]
// 00811094  8b542410             mov edx, dword ptr [esp + 0x10]
// 00811098  50                   push eax
// 00811099  52                   push edx
// 0081109a  e8a180ffff           call 0x809140
// 0081109f  8b542410             mov edx, dword ptr [esp + 0x10]
// 008110a3  50                   push eax
// 008110a4  8b442418             mov eax, dword ptr [esp + 0x18]
// 008110a8  50                   push eax
// 008110a9  8b442414             mov eax, dword ptr [esp + 0x14]
// 008110ad  52                   push edx
// 008110ae  50                   push eax
// 008110af  e8fcfdffff           call 0x810eb0
// 008110b4  c21400               ret 0x14
// copied from an identical function in another client (function ?Draw@CXTPImageManagerIcon@@QAEXPAVCDC@@VCPoint@@VCSize@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp