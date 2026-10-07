// roc 2007-08 0069b980  unit: CXTPPropertyGridView  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069b980
//
// 0069b980  83ec14               sub esp, 0x14
// 0069b983  56                   push esi
// 0069b984  8bf1                 mov esi, ecx
// 0069b986  83bed000000000       cmp dword ptr [esi + 0xd0], 0
// 0069b98d  7426                 je 0x69b9b5
// 0069b98f  56                   push esi
// 0069b990  8d4c240c             lea ecx, [esp + 0xc]
// 0069b994  e80746feff           call 0x67ffa0
// 0069b999  8b4808               mov ecx, dword ptr [eax + 8]
// 0069b99c  2b08                 sub ecx, dword ptr [eax]
// 0069b99e  894c2404             mov dword ptr [esp + 4], ecx
// 0069b9a2  db442404             fild dword ptr [esp + 4]
// 0069b9a6  dc8ec8000000         fmul qword ptr [esi + 0xc8]
// 0069b9ac  5e                   pop esi
// 0069b9ad  83c414               add esp, 0x14
// 0069b9b0  e9ab53f9ff           jmp 0x630d60
// 0069b9b5  c744240401000000     mov dword ptr [esp + 4], 1
// 0069b9bd  db442404             fild dword ptr [esp + 4]
// 0069b9c1  dc8ec8000000         fmul qword ptr [esi + 0xc8]
// 0069b9c7  5e                   pop esi
// 0069b9c8  83c414               add esp, 0x14
// 0069b9cb  e99053f9ff           jmp 0x630d60
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetDividerPos@CXTPPropertyGridView@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
