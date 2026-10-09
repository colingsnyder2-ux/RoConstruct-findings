// roc 2007-03 00687c60  unit: seg_00680000  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00687c60
//
// 00687c60  83ec14               sub esp, 0x14
// 00687c63  56                   push esi
// 00687c64  8bf1                 mov esi, ecx
// 00687c66  83bed000000000       cmp dword ptr [esi + 0xd0], 0
// 00687c6d  7426                 je 0x687c95
// 00687c6f  56                   push esi
// 00687c70  8d4c240c             lea ecx, [esp + 0xc]
// 00687c74  e8573bfeff           call 0x66b7d0
// 00687c79  8b4808               mov ecx, dword ptr [eax + 8]
// 00687c7c  2b08                 sub ecx, dword ptr [eax]
// 00687c7e  894c2404             mov dword ptr [esp + 4], ecx
// 00687c82  db442404             fild dword ptr [esp + 4]
// 00687c86  dc8ec8000000         fmul qword ptr [esi + 0xc8]
// 00687c8c  5e                   pop esi
// 00687c8d  83c414               add esp, 0x14
// 00687c90  e96b75f9ff           jmp 0x61f200
// 00687c95  c744240401000000     mov dword ptr [esp + 4], 1
// 00687c9d  db442404             fild dword ptr [esp + 4]
// 00687ca1  dc8ec8000000         fmul qword ptr [esi + 0xc8]
// 00687ca7  5e                   pop esi
// 00687ca8  83c414               add esp, 0x14
// 00687cab  e95075f9ff           jmp 0x61f200
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetDividerPos@CXTPPropertyGridView@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
