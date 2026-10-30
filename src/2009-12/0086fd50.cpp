// roc 2009-12 0086fd50  unit: CXTPNewToolbarDlg  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086fd50
//
// 0086fd50  8b442404             mov eax, dword ptr [esp + 4]
// 0086fd54  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0086fd57  83c120               add ecx, 0x20
// 0086fd5a  50                   push eax
// 0086fd5b  52                   push edx
// 0086fd5c  e80fafffff           call 0x86ac70
// 0086fd61  c20400               ret 4
// copied from an identical function in another client (function ?AddTail@CXTPPropertyGridItems@@IAEXPAVCXTPPropertyGridItem@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp