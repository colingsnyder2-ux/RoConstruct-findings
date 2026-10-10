// roc 2008-06 006fb330  unit: CXTPPropertyGrid  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fb330
//
// 006fb330  56                   push esi
// 006fb331  8bf1                 mov esi, ecx
// 006fb333  83be48010000ff       cmp dword ptr [esi + 0x148], -1
// 006fb33a  57                   push edi
// 006fb33b  743f                 je 0x6fb37c
// 006fb33d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006fb341  8b06                 mov eax, dword ptr [esi]
// 006fb343  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fb347  8b805c010000         mov eax, dword ptr [eax + 0x15c]
// 006fb34d  8bbe48010000         mov edi, dword ptr [esi + 0x148]
// 006fb353  51                   push ecx
// 006fb354  52                   push edx
// 006fb355  8bce                 mov ecx, esi
// 006fb357  ffd0                 call eax
// 006fb359  83e803               sub eax, 3
// 006fb35c  3bf8                 cmp edi, eax
// 006fb35e  751c                 jne 0x6fb37c
// 006fb360  8b442414             mov eax, dword ptr [esp + 0x14]
// 006fb364  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006fb368  8b16                 mov edx, dword ptr [esi]
// 006fb36a  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 006fb370  50                   push eax
// 006fb371  51                   push ecx
// 006fb372  57                   push edi
// 006fb373  8bce                 mov ecx, esi
// 006fb375  ffd2                 call edx
// 006fb377  5f                   pop edi
// 006fb378  5e                   pop esi
// 006fb379  c20c00               ret 0xc
// 006fb37c  8bce                 mov ecx, esi
// 006fb37e  e8e558faff           call 0x6a0c68
// 006fb383  5f                   pop edi
// 006fb384  5e                   pop esi
// 006fb385  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnLButtonUp@CXTPPropertyGrid@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp
