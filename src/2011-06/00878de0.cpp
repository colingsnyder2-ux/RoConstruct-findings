// roc 2011-06 00878de0  unit: CXTPPropertyGridItem  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00878de0
//
// 00878de0  8b442404             mov eax, dword ptr [esp + 4]
// 00878de4  56                   push esi
// 00878de5  8bf1                 mov esi, ecx
// 00878de7  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00878ded  6a64                 push 0x64
// 00878def  89868c000000         mov dword ptr [esi + 0x8c], eax
// 00878df5  e8a6590600           call 0x8de7a0
// 00878dfa  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00878e00  6a65                 push 0x65
// 00878e02  e899590600           call 0x8de7a0
// 00878e07  f6868c00000002       test byte ptr [esi + 0x8c], 2
// 00878e0e  740b                 je 0x878e1b
// 00878e10  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00878e16  e855580600           call 0x8de670
// 00878e1b  f6868c00000004       test byte ptr [esi + 0x8c], 4
// 00878e22  740b                 je 0x878e2f
// 00878e24  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00878e2a  e8c1570600           call 0x8de5f0
// 00878e2f  5e                   pop esi
// 00878e30  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?SetFlags@CXTPPropertyGridItem@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
