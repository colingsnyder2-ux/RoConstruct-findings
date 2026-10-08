// from server: 100% by auto
// roc 2008-06 00711780  unit: CXTPPropertyGridItem  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00711780
//
// 00711780  56                   push esi
// 00711781  8bf1                 mov esi, ecx
// 00711783  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 0071178a  744b                 je 0x7117d7
// 0071178c  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00711792  83b94801000000       cmp dword ptr [ecx + 0x148], 0
// 00711799  7524                 jne 0x7117bf
// 0071179b  85c9                 test ecx, ecx
// 0071179d  7420                 je 0x7117bf
// 0071179f  83792000             cmp dword ptr [ecx + 0x20], 0
// 007117a3  741a                 je 0x7117bf
// 007117a5  83be9400000000       cmp dword ptr [esi + 0x94], 0
// 007117ac  7411                 je 0x7117bf
// 007117ae  56                   push esi
// 007117af  e8fc390000           call 0x7151b0
// 007117b4  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 007117ba  e811430000           call 0x715ad0
// 007117bf  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 007117c5  56                   push esi
// 007117c6  6a07                 push 7
// 007117c8  c786a000000000000000 mov dword ptr [esi + 0xa0], 0
// 007117d2  e829290000           call 0x714100
// 007117d7  5e                   pop esi
// 007117d8  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?Collapse@CXTPPropertyGridItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
