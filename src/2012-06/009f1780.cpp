// roc 2012-06 009f1780  unit: CXTPPropertyGridItem  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f1780
//
// 009f1780  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 009f1786  56                   push esi
// 009f1787  e824ccffff           call 0x9ee3b0
// 009f178c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009f1790  8b30                 mov esi, dword ptr [eax]
// 009f1792  51                   push ecx
// 009f1793  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009f1797  83ec10               sub esp, 0x10
// 009f179a  8bd4                 mov edx, esp
// 009f179c  890a                 mov dword ptr [edx], ecx
// 009f179e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009f17a2  894a04               mov dword ptr [edx + 4], ecx
// 009f17a5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009f17a9  894a08               mov dword ptr [edx + 8], ecx
// 009f17ac  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 009f17b0  894a0c               mov dword ptr [edx + 0xc], ecx
// 009f17b3  8b542420             mov edx, dword ptr [esp + 0x20]
// 009f17b7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009f17bb  52                   push edx
// 009f17bc  8b5620               mov edx, dword ptr [esi + 0x20]
// 009f17bf  51                   push ecx
// 009f17c0  8bc8                 mov ecx, eax
// 009f17c2  ffd2                 call edx
// 009f17c4  5e                   pop esi
// 009f17c5  c21c00               ret 0x1c
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?OnDrawItemConstraint@CXTPPropertyGridItem@@UAEXPAVCDC@@PAVCXTPPropertyGridItemConstraint@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
