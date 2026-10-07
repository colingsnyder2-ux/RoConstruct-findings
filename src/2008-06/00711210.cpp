// roc 2008-06 00711210  unit: CXTPPropertyGridItem  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00711210
//
// 00711210  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 00711216  56                   push esi
// 00711217  e8242f0000           call 0x714140
// 0071121c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00711220  8b30                 mov esi, dword ptr [eax]
// 00711222  51                   push ecx
// 00711223  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00711227  83ec10               sub esp, 0x10
// 0071122a  8bd4                 mov edx, esp
// 0071122c  890a                 mov dword ptr [edx], ecx
// 0071122e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00711232  894a04               mov dword ptr [edx + 4], ecx
// 00711235  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00711239  894a08               mov dword ptr [edx + 8], ecx
// 0071123c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00711240  894a0c               mov dword ptr [edx + 0xc], ecx
// 00711243  8b542420             mov edx, dword ptr [esp + 0x20]
// 00711247  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0071124b  52                   push edx
// 0071124c  8b5620               mov edx, dword ptr [esi + 0x20]
// 0071124f  51                   push ecx
// 00711250  8bc8                 mov ecx, eax
// 00711252  ffd2                 call edx
// 00711254  5e                   pop esi
// 00711255  c21c00               ret 0x1c
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?OnDrawItemConstraint@CXTPPropertyGridItem@@UAEXPAVCDC@@PAVCXTPPropertyGridItemConstraint@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
