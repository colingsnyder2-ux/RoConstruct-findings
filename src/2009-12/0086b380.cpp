// roc 2009-12 0086b380  unit: CXTPPropertyGridItemBool  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086b380
//
// 0086b380  83ec10               sub esp, 0x10
// 0086b383  56                   push esi
// 0086b384  8bf1                 mov esi, ecx
// 0086b386  83be1c01000000       cmp dword ptr [esi + 0x11c], 0
// 0086b38d  745c                 je 0x86b3eb
// 0086b38f  8b06                 mov eax, dword ptr [esi]
// 0086b391  8b5058               mov edx, dword ptr [eax + 0x58]
// 0086b394  ffd2                 call edx
// 0086b396  85c0                 test eax, eax
// 0086b398  7551                 jne 0x86b3eb
// 0086b39a  837c241820           cmp dword ptr [esp + 0x18], 0x20
// 0086b39f  754a                 jne 0x86b3eb
// 0086b3a1  8b06                 mov eax, dword ptr [esi]
// 0086b3a3  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0086b3a6  8d4c2404             lea ecx, [esp + 4]
// 0086b3aa  51                   push ecx
// 0086b3ab  8bce                 mov ecx, esi
// 0086b3ad  ffd2                 call edx
// 0086b3af  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086b3b3  8b442404             mov eax, dword ptr [esp + 4]
// 0086b3b7  03c1                 add eax, ecx
// 0086b3b9  99                   cdq 
// 0086b3ba  2bc2                 sub eax, edx
// 0086b3bc  8b542408             mov edx, dword ptr [esp + 8]
// 0086b3c0  8bc8                 mov ecx, eax
// 0086b3c2  8b442410             mov eax, dword ptr [esp + 0x10]
// 0086b3c6  03c2                 add eax, edx
// 0086b3c8  99                   cdq 
// 0086b3c9  2bc2                 sub eax, edx
// 0086b3cb  8b16                 mov edx, dword ptr [esi]
// 0086b3cd  d1f8                 sar eax, 1
// 0086b3cf  50                   push eax
// 0086b3d0  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0086b3d6  d1f9                 sar ecx, 1
// 0086b3d8  51                   push ecx
// 0086b3d9  6a00                 push 0
// 0086b3db  8bce                 mov ecx, esi
// 0086b3dd  ffd0                 call eax
// 0086b3df  b801000000           mov eax, 1
// 0086b3e4  5e                   pop esi
// 0086b3e5  83c410               add esp, 0x10
// 0086b3e8  c20400               ret 4
// 0086b3eb  33c0                 xor eax, eax
// 0086b3ed  5e                   pop esi
// 0086b3ee  83c410               add esp, 0x10
// 0086b3f1  c20400               ret 4
// copied from an identical function in another client (function ?OnKeyDown@CXTPPropertyGridItemBool@@MAEHI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItemBool.cpp