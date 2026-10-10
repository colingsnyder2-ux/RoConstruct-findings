// roc 2012-06 00a5df20  unit: CXTPPropertyGridInplaceList  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5df20
//
// 00a5df20  8b442404             mov eax, dword ptr [esp + 4]
// 00a5df24  83f828               cmp eax, 0x28
// 00a5df27  740d                 je 0xa5df36
// 00a5df29  83f826               cmp eax, 0x26
// 00a5df2c  7408                 je 0xa5df36
// 00a5df2e  e8ab47f2ff           call 0x9826de
// 00a5df33  c20c00               ret 0xc
// 00a5df36  8b01                 mov eax, dword ptr [ecx]
// 00a5df38  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 00a5df3e  ffd2                 call edx
// 00a5df40  c20c00               ret 0xc
// library xtp-15.2.1-shared-mfc/Source\PropertyGrid\XTPPropertyGridInplaceList.cpp (function ?OnSysKeyDown@CXTPPropertyGridInplaceList@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/PropertyGrid/XTPPropertyGridInplaceList.cpp
