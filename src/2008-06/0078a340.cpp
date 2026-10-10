// roc 2008-06 0078a340  unit: CXTColorBase  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078a340
//
// 0078a340  56                   push esi
// 0078a341  8bf1                 mov esi, ecx
// 0078a343  e82069f1ff           call 0x6a0c68
// 0078a348  8b4620               mov eax, dword ptr [esi + 0x20]
// 0078a34b  50                   push eax
// 0078a34c  ff15a82d8000         call dword ptr [0x802da8]
// 0078a352  50                   push eax
// 0078a353  e88668f1ff           call 0x6a0bde
// 0078a358  8b442410             mov eax, dword ptr [esp + 0x10]
// 0078a35c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0078a360  8b16                 mov edx, dword ptr [esi]
// 0078a362  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 0078a368  50                   push eax
// 0078a369  51                   push ecx
// 0078a36a  8bce                 mov ecx, esi
// 0078a36c  ffd2                 call edx
// 0078a36e  ff15102e8000         call dword ptr [0x802e10]
// 0078a374  50                   push eax
// 0078a375  e86468f1ff           call 0x6a0bde
// 0078a37a  3bc6                 cmp eax, esi
// 0078a37c  7407                 je 0x78a385
// 0078a37e  8bce                 mov ecx, esi
// 0078a380  e8a366f1ff           call 0x6a0a28
// 0078a385  5e                   pop esi
// 0078a386  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\Controls\XTColorPageCustom.cpp (function ?OnLButtonDown@CXTColorBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTColorPageCustom.cpp
