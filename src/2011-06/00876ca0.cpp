// roc 2011-06 00876ca0  unit: CXTPPropertyGridView  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00876ca0
//
// 00876ca0  83ec14               sub esp, 0x14
// 00876ca3  56                   push esi
// 00876ca4  8bf1                 mov esi, ecx
// 00876ca6  83bed000000000       cmp dword ptr [esi + 0xd0], 0
// 00876cad  7426                 je 0x876cd5
// 00876caf  56                   push esi
// 00876cb0  8d4c240c             lea ecx, [esp + 0xc]
// 00876cb4  e87760feff           call 0x85cd30
// 00876cb9  8b4808               mov ecx, dword ptr [eax + 8]
// 00876cbc  2b08                 sub ecx, dword ptr [eax]
// 00876cbe  894c2404             mov dword ptr [esp + 4], ecx
// 00876cc2  db442404             fild dword ptr [esp + 4]
// 00876cc6  dc8ec8000000         fmul qword ptr [esi + 0xc8]
// 00876ccc  5e                   pop esi
// 00876ccd  83c414               add esp, 0x14
// 00876cd0  e95b48f9ff           jmp 0x80b530
// 00876cd5  c744240401000000     mov dword ptr [esp + 4], 1
// 00876cdd  db442404             fild dword ptr [esp + 4]
// 00876ce1  dc8ec8000000         fmul qword ptr [esi + 0xc8]
// 00876ce7  5e                   pop esi
// 00876ce8  83c414               add esp, 0x14
// 00876ceb  e94048f9ff           jmp 0x80b530
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetDividerPos@CXTPPropertyGridView@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
