// roc 2008-06 0077aa50  unit: CXTPPropertyGridInplaceList  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077aa50
//
// 0077aa50  8b442404             mov eax, dword ptr [esp + 4]
// 0077aa54  83f81b               cmp eax, 0x1b
// 0077aa57  750d                 jne 0x77aa66
// 0077aa59  8b01                 mov eax, dword ptr [ecx]
// 0077aa5b  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 0077aa61  ffd2                 call edx
// 0077aa63  c20c00               ret 0xc
// 0077aa66  83f80d               cmp eax, 0xd
// 0077aa69  740d                 je 0x77aa78
// 0077aa6b  83f873               cmp eax, 0x73
// 0077aa6e  7408                 je 0x77aa78
// 0077aa70  e8f361f2ff           call 0x6a0c68
// 0077aa75  c20c00               ret 0xc
// 0077aa78  8b01                 mov eax, dword ptr [ecx]
// 0077aa7a  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 0077aa80  ffd2                 call edx
// 0077aa82  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridInplaceList.cpp (function ?OnKeyDown@CXTPPropertyGridInplaceList@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridInplaceList.cpp
