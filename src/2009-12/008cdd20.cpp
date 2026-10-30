// roc 2009-12 008cdd20  unit: CXTPPropertyGridInplaceList  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cdd20
//
// 008cdd20  8b442404             mov eax, dword ptr [esp + 4]
// 008cdd24  83f81b               cmp eax, 0x1b
// 008cdd27  750d                 jne 0x8cdd36
// 008cdd29  8b01                 mov eax, dword ptr [ecx]
// 008cdd2b  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 008cdd31  ffd2                 call edx
// 008cdd33  c20c00               ret 0xc
// 008cdd36  83f80d               cmp eax, 0xd
// 008cdd39  740d                 je 0x8cdd48
// 008cdd3b  83f873               cmp eax, 0x73
// 008cdd3e  7408                 je 0x8cdd48
// 008cdd40  e8eb60f2ff           call 0x7f3e30
// 008cdd45  c20c00               ret 0xc
// 008cdd48  8b01                 mov eax, dword ptr [ecx]
// 008cdd4a  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 008cdd50  ffd2                 call edx
// 008cdd52  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnKeyDown@CXTPPropertyGridInplaceList@@IAEXIII@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/PropertyGrid/XTPPropertyGridInplaceList.cpp