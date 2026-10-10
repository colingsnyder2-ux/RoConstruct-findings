// roc 2012-06 00a5dee0  unit: CXTPPropertyGridInplaceList  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5dee0
//
// 00a5dee0  8b442404             mov eax, dword ptr [esp + 4]
// 00a5dee4  83f81b               cmp eax, 0x1b
// 00a5dee7  750d                 jne 0xa5def6
// 00a5dee9  8b01                 mov eax, dword ptr [ecx]
// 00a5deeb  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 00a5def1  ffd2                 call edx
// 00a5def3  c20c00               ret 0xc
// 00a5def6  83f80d               cmp eax, 0xd
// 00a5def9  740d                 je 0xa5df08
// 00a5defb  83f873               cmp eax, 0x73
// 00a5defe  7408                 je 0xa5df08
// 00a5df00  e8d947f2ff           call 0x9826de
// 00a5df05  c20c00               ret 0xc
// 00a5df08  8b01                 mov eax, dword ptr [ecx]
// 00a5df0a  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 00a5df10  ffd2                 call edx
// 00a5df12  c20c00               ret 0xc
// library xtp-15.2.1-shared-mfc/Source\PropertyGrid\XTPPropertyGridInplaceList.cpp (function ?OnKeyDown@CXTPPropertyGridInplaceList@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/PropertyGrid/XTPPropertyGridInplaceList.cpp
