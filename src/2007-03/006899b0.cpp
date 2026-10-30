// roc 2007-03 006899b0  unit: seg_00680000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006899b0
//
// 006899b0  56                   push esi
// 006899b1  8bf1                 mov esi, ecx
// 006899b3  e838e4ffff           call 0x687df0
// 006899b8  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 006899be  6a01                 push 1
// 006899c0  6a01                 push 1
// 006899c2  50                   push eax
// 006899c3  8bce                 mov ecx, esi
// 006899c5  e826fcffff           call 0x6895f0
// 006899ca  8bb6b0000000         mov esi, dword ptr [esi + 0xb0]
// 006899d0  85f6                 test esi, esi
// 006899d2  7414                 je 0x6899e8
// 006899d4  837e2000             cmp dword ptr [esi + 0x20], 0
// 006899d8  740e                 je 0x6899e8
// 006899da  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006899dd  6a00                 push 0
// 006899df  6a00                 push 0
// 006899e1  51                   push ecx
// 006899e2  ff1554ee7700         call dword ptr [0x77ee54]
// 006899e8  5e                   pop esi
// 006899e9  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?Refresh@CXTPPropertyGridView@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
