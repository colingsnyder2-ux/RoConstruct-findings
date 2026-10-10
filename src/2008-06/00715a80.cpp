// roc 2008-06 00715a80  unit: CXTPPropertyGridView  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00715a80
//
// 00715a80  8b442404             mov eax, dword ptr [esp + 4]
// 00715a84  56                   push esi
// 00715a85  8bf1                 mov esi, ecx
// 00715a87  83f828               cmp eax, 0x28
// 00715a8a  7405                 je 0x715a91
// 00715a8c  83f826               cmp eax, 0x26
// 00715a8f  752d                 jne 0x715abe
// 00715a91  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00715a97  85c9                 test ecx, ecx
// 00715a99  7423                 je 0x715abe
// 00715a9b  6a65                 push 0x65
// 00715a9d  e8ce58f9ff           call 0x6ab370
// 00715aa2  8bc8                 mov ecx, eax
// 00715aa4  e8a7d70500           call 0x773250
// 00715aa9  85c0                 test eax, eax
// 00715aab  7411                 je 0x715abe
// 00715aad  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00715ab3  8b11                 mov edx, dword ptr [ecx]
// 00715ab5  50                   push eax
// 00715ab6  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 00715abc  ffd0                 call eax
// 00715abe  8bce                 mov ecx, esi
// 00715ac0  e8a3b1f8ff           call 0x6a0c68
// 00715ac5  5e                   pop esi
// 00715ac6  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnSysKeyDown@CXTPPropertyGridView@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridView.cpp
