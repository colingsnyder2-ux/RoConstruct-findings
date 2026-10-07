// roc 2008-06 00710dd0  unit: CXTPPropertyGridItem  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00710dd0
//
// 00710dd0  8b442404             mov eax, dword ptr [esp + 4]
// 00710dd4  56                   push esi
// 00710dd5  8bf1                 mov esi, ecx
// 00710dd7  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00710ddd  6a64                 push 0x64
// 00710ddf  89868c000000         mov dword ptr [esi + 0x8c], eax
// 00710de5  e886280600           call 0x773670
// 00710dea  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00710df0  6a65                 push 0x65
// 00710df2  e879280600           call 0x773670
// 00710df7  f6868c00000002       test byte ptr [esi + 0x8c], 2
// 00710dfe  740b                 je 0x710e0b
// 00710e00  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00710e06  e835270600           call 0x773540
// 00710e0b  f6868c00000004       test byte ptr [esi + 0x8c], 4
// 00710e12  740b                 je 0x710e1f
// 00710e14  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00710e1a  e8a1260600           call 0x7734c0
// 00710e1f  5e                   pop esi
// 00710e20  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?SetFlags@CXTPPropertyGridItem@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
