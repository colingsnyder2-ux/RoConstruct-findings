// roc 2012-06 00a5de60  unit: CXTPPropertyGridInplaceList  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5de60
//
// 00a5de60  56                   push esi
// 00a5de61  8bf1                 mov esi, ecx
// 00a5de63  e87648f2ff           call 0x9826de
// 00a5de68  6a00                 push 0
// 00a5de6a  e82198f7ff           call 0x9d7690
// 00a5de6f  8b06                 mov eax, dword ptr [esi]
// 00a5de71  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 00a5de77  83c404               add esp, 4
// 00a5de7a  8bce                 mov ecx, esi
// 00a5de7c  ffd2                 call edx
// 00a5de7e  8b06                 mov eax, dword ptr [esi]
// 00a5de80  8b5068               mov edx, dword ptr [eax + 0x68]
// 00a5de83  8bce                 mov ecx, esi
// 00a5de85  ffd2                 call edx
// 00a5de87  5e                   pop esi
// 00a5de88  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\PropertyGrid\XTPPropertyGridInplaceList.cpp (function ?OnKillFocus@CXTPPropertyGridInplaceList@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/PropertyGrid/XTPPropertyGridInplaceList.cpp
