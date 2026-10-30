// roc 2009-12 008645f0  unit: CXTPPropertyGridItem  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008645f0
//
// 008645f0  8b442404             mov eax, dword ptr [esp + 4]
// 008645f4  56                   push esi
// 008645f5  8bf1                 mov esi, ecx
// 008645f7  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 008645fd  6a64                 push 0x64
// 008645ff  89868c000000         mov dword ptr [esi + 0x8c], eax
// 00864605  e836230600           call 0x8c6940
// 0086460a  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00864610  6a65                 push 0x65
// 00864612  e829230600           call 0x8c6940
// 00864617  f6868c00000002       test byte ptr [esi + 0x8c], 2
// 0086461e  740b                 je 0x86462b
// 00864620  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00864626  e8e5210600           call 0x8c6810
// 0086462b  f6868c00000004       test byte ptr [esi + 0x8c], 4
// 00864632  740b                 je 0x86463f
// 00864634  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 0086463a  e851210600           call 0x8c6790
// 0086463f  5e                   pop esi
// 00864640  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?SetFlags@CXTPPropertyGridItem@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
