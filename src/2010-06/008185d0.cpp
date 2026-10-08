// roc 2010-06 008185d0  unit: CXTPPropertyGridItem  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008185d0
//
// 008185d0  8b442404             mov eax, dword ptr [esp + 4]
// 008185d4  56                   push esi
// 008185d5  8bf1                 mov esi, ecx
// 008185d7  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 008185dd  6a64                 push 0x64
// 008185df  89868c000000         mov dword ptr [esi + 0x8c], eax
// 008185e5  e8f6240600           call 0x87aae0
// 008185ea  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 008185f0  6a65                 push 0x65
// 008185f2  e8e9240600           call 0x87aae0
// 008185f7  f6868c00000002       test byte ptr [esi + 0x8c], 2
// 008185fe  740b                 je 0x81860b
// 00818600  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00818606  e8a5230600           call 0x87a9b0
// 0081860b  f6868c00000004       test byte ptr [esi + 0x8c], 4
// 00818612  740b                 je 0x81861f
// 00818614  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 0081861a  e811230600           call 0x87a930
// 0081861f  5e                   pop esi
// 00818620  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?SetFlags@CXTPPropertyGridItem@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
