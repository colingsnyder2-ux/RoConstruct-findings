// roc 2009-12 00864a30  unit: CXTPPropertyGridItem  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864a30
//
// 00864a30  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 00864a36  56                   push esi
// 00864a37  e8142f0000           call 0x867950
// 00864a3c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00864a40  8b30                 mov esi, dword ptr [eax]
// 00864a42  51                   push ecx
// 00864a43  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00864a47  83ec10               sub esp, 0x10
// 00864a4a  8bd4                 mov edx, esp
// 00864a4c  890a                 mov dword ptr [edx], ecx
// 00864a4e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00864a52  894a04               mov dword ptr [edx + 4], ecx
// 00864a55  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00864a59  894a08               mov dword ptr [edx + 8], ecx
// 00864a5c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00864a60  894a0c               mov dword ptr [edx + 0xc], ecx
// 00864a63  8b542420             mov edx, dword ptr [esp + 0x20]
// 00864a67  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00864a6b  52                   push edx
// 00864a6c  8b5620               mov edx, dword ptr [esi + 0x20]
// 00864a6f  51                   push ecx
// 00864a70  8bc8                 mov ecx, eax
// 00864a72  ffd2                 call edx
// 00864a74  5e                   pop esi
// 00864a75  c21c00               ret 0x1c
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?OnDrawItemConstraint@CXTPPropertyGridItem@@UAEXPAVCDC@@PAVCXTPPropertyGridItemConstraint@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
