// roc 2008-06 0077aa90  unit: CXTPPropertyGridInplaceList  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077aa90
//
// 0077aa90  8b442404             mov eax, dword ptr [esp + 4]
// 0077aa94  83f828               cmp eax, 0x28
// 0077aa97  740d                 je 0x77aaa6
// 0077aa99  83f826               cmp eax, 0x26
// 0077aa9c  7408                 je 0x77aaa6
// 0077aa9e  e8c561f2ff           call 0x6a0c68
// 0077aaa3  c20c00               ret 0xc
// 0077aaa6  8b01                 mov eax, dword ptr [ecx]
// 0077aaa8  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 0077aaae  ffd2                 call edx
// 0077aab0  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridInplaceList.cpp (function ?OnSysKeyDown@CXTPPropertyGridInplaceList@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridInplaceList.cpp
