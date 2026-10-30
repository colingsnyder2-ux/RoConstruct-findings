// roc 2009-12 00878330  unit: CXTPControlGallery  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00878330
//
// 00878330  56                   push esi
// 00878331  8bf1                 mov esi, ecx
// 00878333  83be0002000000       cmp dword ptr [esi + 0x200], 0
// 0087833a  7522                 jne 0x87835e
// 0087833c  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00878342  83b80001000005       cmp dword ptr [eax + 0x100], 5
// 00878349  7534                 jne 0x87837f
// 0087834b  83befc01000000       cmp dword ptr [esi + 0x1fc], 0
// 00878352  752b                 jne 0x87837f
// 00878354  e897f0ffff           call 0x8773f0
// 00878359  83f8ff               cmp eax, -1
// 0087835c  7421                 je 0x87837f
// 0087835e  6a01                 push 1
// 00878360  6a00                 push 0
// 00878362  8bce                 mov ecx, esi
// 00878364  c7860002000000000000 mov dword ptr [esi + 0x200], 0
// 0087836e  e8adfeffff           call 0x878220
// 00878373  8b16                 mov edx, dword ptr [esi]
// 00878375  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 0087837b  8bce                 mov ecx, esi
// 0087837d  ffd0                 call eax
// 0087837f  5e                   pop esi
// 00878380  c20800               ret 8
// copied from an identical function in another client (function ?PerformMouseUp@CXTPControlGallery@@IAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp