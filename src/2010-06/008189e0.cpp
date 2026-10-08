// roc 2010-06 008189e0  unit: CXTPPropertyGridItem  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008189e0
//
// 008189e0  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 008189e6  56                   push esi
// 008189e7  e8142f0000           call 0x81b900
// 008189ec  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008189f0  8b30                 mov esi, dword ptr [eax]
// 008189f2  51                   push ecx
// 008189f3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008189f7  83ec10               sub esp, 0x10
// 008189fa  8bd4                 mov edx, esp
// 008189fc  890a                 mov dword ptr [edx], ecx
// 008189fe  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00818a02  894a04               mov dword ptr [edx + 4], ecx
// 00818a05  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00818a09  894a08               mov dword ptr [edx + 8], ecx
// 00818a0c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00818a10  894a0c               mov dword ptr [edx + 0xc], ecx
// 00818a13  8b542420             mov edx, dword ptr [esp + 0x20]
// 00818a17  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00818a1b  52                   push edx
// 00818a1c  8b5620               mov edx, dword ptr [esi + 0x20]
// 00818a1f  51                   push ecx
// 00818a20  8bc8                 mov ecx, eax
// 00818a22  ffd2                 call edx
// 00818a24  5e                   pop esi
// 00818a25  c21c00               ret 0x1c
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?OnDrawItemConstraint@CXTPPropertyGridItem@@UAEXPAVCDC@@PAVCXTPPropertyGridItemConstraint@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
