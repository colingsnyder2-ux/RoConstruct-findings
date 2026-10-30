// roc 2010-06 0081c770  unit: CXTPPropertyGridView  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081c770
//
// 0081c770  83ec14               sub esp, 0x14
// 0081c773  56                   push esi
// 0081c774  8bf1                 mov esi, ecx
// 0081c776  83bed000000000       cmp dword ptr [esi + 0xd0], 0
// 0081c77d  7426                 je 0x81c7a5
// 0081c77f  56                   push esi
// 0081c780  8d4c240c             lea ecx, [esp + 0xc]
// 0081c784  e8272bfeff           call 0x7ff2b0
// 0081c789  8b4808               mov ecx, dword ptr [eax + 8]
// 0081c78c  2b08                 sub ecx, dword ptr [eax]
// 0081c78e  894c2404             mov dword ptr [esp + 4], ecx
// 0081c792  db442404             fild dword ptr [esp + 4]
// 0081c796  dc8ec8000000         fmul qword ptr [esi + 0xc8]
// 0081c79c  5e                   pop esi
// 0081c79d  83c414               add esp, 0x14
// 0081c7a0  e98bc6f8ff           jmp 0x7a8e30
// 0081c7a5  c744240401000000     mov dword ptr [esp + 4], 1
// 0081c7ad  db442404             fild dword ptr [esp + 4]
// 0081c7b1  dc8ec8000000         fmul qword ptr [esi + 0xc8]
// 0081c7b7  5e                   pop esi
// 0081c7b8  83c414               add esp, 0x14
// 0081c7bb  e970c6f8ff           jmp 0x7a8e30
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetDividerPos@CXTPPropertyGridView@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
