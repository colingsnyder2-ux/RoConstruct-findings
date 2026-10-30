// roc 2009-12 008cdd60  unit: CXTPPropertyGridInplaceList  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cdd60
//
// 008cdd60  8b442404             mov eax, dword ptr [esp + 4]
// 008cdd64  83f828               cmp eax, 0x28
// 008cdd67  740d                 je 0x8cdd76
// 008cdd69  83f826               cmp eax, 0x26
// 008cdd6c  7408                 je 0x8cdd76
// 008cdd6e  e8bd60f2ff           call 0x7f3e30
// 008cdd73  c20c00               ret 0xc
// 008cdd76  8b01                 mov eax, dword ptr [ecx]
// 008cdd78  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 008cdd7e  ffd2                 call edx
// 008cdd80  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSysKeyDown@CXTPPropertyGridInplaceList@@IAEXIII@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/PropertyGrid/XTPPropertyGridInplaceList.cpp