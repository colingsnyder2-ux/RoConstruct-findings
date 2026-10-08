// roc 2009-06 007895f0  unit: CXTPPropertyGridItem  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007895f0
//
// 007895f0  8b442404             mov eax, dword ptr [esp + 4]
// 007895f4  56                   push esi
// 007895f5  8bf1                 mov esi, ecx
// 007895f7  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 007895fd  6a64                 push 0x64
// 007895ff  89868c000000         mov dword ptr [esi + 0x8c], eax
// 00789605  e896270600           call 0x7ebda0
// 0078960a  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00789610  6a65                 push 0x65
// 00789612  e889270600           call 0x7ebda0
// 00789617  f6868c00000002       test byte ptr [esi + 0x8c], 2
// 0078961e  740b                 je 0x78962b
// 00789620  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00789626  e845260600           call 0x7ebc70
// 0078962b  f6868c00000004       test byte ptr [esi + 0x8c], 4
// 00789632  740b                 je 0x78963f
// 00789634  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 0078963a  e8b1250600           call 0x7ebbf0
// 0078963f  5e                   pop esi
// 00789640  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?SetFlags@CXTPPropertyGridItem@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
