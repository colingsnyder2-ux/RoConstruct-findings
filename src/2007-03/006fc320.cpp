// roc 2007-03 006fc320  unit: seg_006f0000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006fc320
//
// 006fc320  8b542408             mov edx, dword ptr [esp + 8]
// 006fc324  33c0                 xor eax, eax
// 006fc326  3944240c             cmp dword ptr [esp + 0xc], eax
// 006fc32a  7446                 je 0x6fc372
// 006fc32c  f7c200010000         test edx, 0x100
// 006fc332  7407                 je 0x6fc33b
// 006fc334  b802000000           mov eax, 2
// 006fc339  eb0d                 jmp 0x6fc348
// 006fc33b  f7c200000200         test edx, 0x20000
// 006fc341  7405                 je 0x6fc348
// 006fc343  b801000000           mov eax, 1
// 006fc348  56                   push esi
// 006fc349  8b742408             mov esi, dword ptr [esp + 8]
// 006fc34d  f7c60000c000         test esi, 0xc00000
// 006fc353  7505                 jne 0x6fc35a
// 006fc355  f6c201               test dl, 1
// 006fc358  7403                 je 0x6fc35d
// 006fc35a  83c001               add eax, 1
// 006fc35d  f7c600000400         test esi, 0x40000
// 006fc363  5e                   pop esi
// 006fc364  740c                 je 0x6fc372
// 006fc366  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 006fc369  8b4938               mov ecx, dword ptr [ecx + 0x38]
// 006fc36c  038130010000         add eax, dword ptr [ecx + 0x130]
// 006fc372  837c241000           cmp dword ptr [esp + 0x10], 0
// 006fc377  740b                 je 0x6fc384
// 006fc379  f7c200020000         test edx, 0x200
// 006fc37f  7403                 je 0x6fc384
// 006fc381  83c002               add eax, 2
// 006fc384  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinManagerSchema.cpp (function ?GetWindowBorders@CXTPSkinManagerSchemaDefault@@AAEHJKHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinManagerSchema.cpp
