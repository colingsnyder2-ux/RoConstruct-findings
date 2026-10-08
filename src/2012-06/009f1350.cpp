// roc 2012-06 009f1350  unit: CXTPPropertyGridItem  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f1350
//
// 009f1350  8b442404             mov eax, dword ptr [esp + 4]
// 009f1354  56                   push esi
// 009f1355  8bf1                 mov esi, ecx
// 009f1357  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 009f135d  6a64                 push 0x64
// 009f135f  89868c000000         mov dword ptr [esi + 0x8c], eax
// 009f1365  e846570600           call 0xa56ab0
// 009f136a  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 009f1370  6a65                 push 0x65
// 009f1372  e839570600           call 0xa56ab0
// 009f1377  f6868c00000002       test byte ptr [esi + 0x8c], 2
// 009f137e  740b                 je 0x9f138b
// 009f1380  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 009f1386  e8f5550600           call 0xa56980
// 009f138b  f6868c00000004       test byte ptr [esi + 0x8c], 4
// 009f1392  740b                 je 0x9f139f
// 009f1394  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 009f139a  e861550600           call 0xa56900
// 009f139f  5e                   pop esi
// 009f13a0  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?SetFlags@CXTPPropertyGridItem@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
