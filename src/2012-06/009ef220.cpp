// roc 2012-06 009ef220  unit: CXTPPropertyGridView  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ef220
//
// 009ef220  83ec14               sub esp, 0x14
// 009ef223  56                   push esi
// 009ef224  8bf1                 mov esi, ecx
// 009ef226  83bed000000000       cmp dword ptr [esi + 0xd0], 0
// 009ef22d  7426                 je 0x9ef255
// 009ef22f  56                   push esi
// 009ef230  8d4c240c             lea ecx, [esp + 0xc]
// 009ef234  e8075ffeff           call 0x9d5140
// 009ef239  8b4808               mov ecx, dword ptr [eax + 8]
// 009ef23c  2b08                 sub ecx, dword ptr [eax]
// 009ef23e  894c2404             mov dword ptr [esp + 4], ecx
// 009ef242  db442404             fild dword ptr [esp + 4]
// 009ef246  dc8ec8000000         fmul qword ptr [esi + 0xc8]
// 009ef24c  5e                   pop esi
// 009ef24d  83c414               add esp, 0x14
// 009ef250  e95b43f9ff           jmp 0x9835b0
// 009ef255  c744240401000000     mov dword ptr [esp + 4], 1
// 009ef25d  db442404             fild dword ptr [esp + 4]
// 009ef261  dc8ec8000000         fmul qword ptr [esi + 0xc8]
// 009ef267  5e                   pop esi
// 009ef268  83c414               add esp, 0x14
// 009ef26b  e94043f9ff           jmp 0x9835b0
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetDividerPos@CXTPPropertyGridView@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
