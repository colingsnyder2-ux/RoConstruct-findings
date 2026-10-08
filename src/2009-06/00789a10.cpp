// roc 2009-06 00789a10  unit: CXTPPropertyGridItem  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00789a10
//
// 00789a10  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 00789a16  56                   push esi
// 00789a17  e8342f0000           call 0x78c950
// 00789a1c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00789a20  8b30                 mov esi, dword ptr [eax]
// 00789a22  51                   push ecx
// 00789a23  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00789a27  83ec10               sub esp, 0x10
// 00789a2a  8bd4                 mov edx, esp
// 00789a2c  890a                 mov dword ptr [edx], ecx
// 00789a2e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00789a32  894a04               mov dword ptr [edx + 4], ecx
// 00789a35  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00789a39  894a08               mov dword ptr [edx + 8], ecx
// 00789a3c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00789a40  894a0c               mov dword ptr [edx + 0xc], ecx
// 00789a43  8b542420             mov edx, dword ptr [esp + 0x20]
// 00789a47  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00789a4b  52                   push edx
// 00789a4c  8b5620               mov edx, dword ptr [esi + 0x20]
// 00789a4f  51                   push ecx
// 00789a50  8bc8                 mov ecx, eax
// 00789a52  ffd2                 call edx
// 00789a54  5e                   pop esi
// 00789a55  c21c00               ret 0x1c
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?OnDrawItemConstraint@CXTPPropertyGridItem@@UAEXPAVCDC@@PAVCXTPPropertyGridItemConstraint@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
