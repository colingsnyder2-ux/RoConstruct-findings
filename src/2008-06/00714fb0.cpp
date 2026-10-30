// from server: 100% by auto
// roc 2008-06 00714fb0  unit: CXTPPropertyGridView  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00714fb0
//
// 00714fb0  83ec14               sub esp, 0x14
// 00714fb3  56                   push esi
// 00714fb4  8bf1                 mov esi, ecx
// 00714fb6  83bed000000000       cmp dword ptr [esi + 0xd0], 0
// 00714fbd  7426                 je 0x714fe5
// 00714fbf  56                   push esi
// 00714fc0  8d4c240c             lea ecx, [esp + 0xc]
// 00714fc4  e8072bfeff           call 0x6f7ad0
// 00714fc9  8b4808               mov ecx, dword ptr [eax + 8]
// 00714fcc  2b08                 sub ecx, dword ptr [eax]
// 00714fce  894c2404             mov dword ptr [esp + 4], ecx
// 00714fd2  db442404             fild dword ptr [esp + 4]
// 00714fd6  dc8ec8000000         fmul qword ptr [esi + 0xc8]
// 00714fdc  5e                   pop esi
// 00714fdd  83c414               add esp, 0x14
// 00714fe0  e90bc8f8ff           jmp 0x6a17f0
// 00714fe5  c744240401000000     mov dword ptr [esp + 4], 1
// 00714fed  db442404             fild dword ptr [esp + 4]
// 00714ff1  dc8ec8000000         fmul qword ptr [esi + 0xc8]
// 00714ff7  5e                   pop esi
// 00714ff8  83c414               add esp, 0x14
// 00714ffb  e9f0c7f8ff           jmp 0x6a17f0
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetDividerPos@CXTPPropertyGridView@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
